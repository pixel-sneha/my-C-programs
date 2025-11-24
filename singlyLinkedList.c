#include <stdio.h>
#include <stdlib.h>

/* Node structure */
typedef struct Node {
    int data;
    struct Node *next;
} Node;

/* Create a new node with given value */
Node* createNode(int value) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory allocation failed. Exiting.\n");
        exit(EXIT_FAILURE);
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

/* Insert at the front */
void insertFront(Node **head, int value) {
    Node *newNode = createNode(value);
    newNode->next = *head;
    *head = newNode;
    printf("Inserted %d at the front.\n", value);
}

/* Insert at the end */
void insertEnd(Node **head, int value) {
    Node *newNode = createNode(value);
    if (*head == NULL) {
        *head = newNode;
    } else {
        Node *temp = *head;
        while (temp->next) temp = temp->next;
        temp->next = newNode;
    }
    printf("Inserted %d at the end.\n", value);
}

/* Insert in ascending order (list remains sorted ascending by data) */
void insertSorted(Node **head, int value) {
    Node *newNode = createNode(value);
    if (*head == NULL || (*head)->data >= value) {
        newNode->next = *head;
        *head = newNode;
        printf("Inserted %d into sorted list.\n", value);
        return;
    }
    Node *current = *head;
    while (current->next && current->next->data < value) {
        current = current->next;
    }
    newNode->next = current->next;
    current->next = newNode;
    printf("Inserted %d into sorted list.\n", value);
}

/* Delete the first node */
void deleteFirst(Node **head) {
    if (*head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }
    Node *temp = *head;
    *head = (*head)->next;
    printf("Deleted first node with value %d.\n", temp->data);
    free(temp);
}

/* Delete first node with given value */
void deleteByValue(Node **head, int value) {
    if (*head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }
    Node *current = *head, *prev = NULL;
    while (current && current->data != value) {
        prev = current;
        current = current->next;
    }
    if (!current) {
        printf("Value %d not found in list.\n", value);
        return;
    }
    if (prev == NULL) { /* first node matches */
        *head = current->next;
    } else {
        prev->next = current->next;
    }
    printf("Deleted node with value %d.\n", current->data);
    free(current);
}

/* Delete node after specified position (position is 1-based) */
void deleteAfterPosition(Node **head, int pos) {
    if (*head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }
    if (pos < 1) {
        printf("Position should be >= 1.\n");
        return;
    }
    Node *current = *head;
    int i;
    for (i = 1; i < pos && current; ++i) {
        current = current->next;
    }
    if (!current) {
        printf("Position %d is beyond list length. No deletion.\n", pos);
        return;
    }
    if (!current->next) {
        printf("No node exists after position %d. No deletion.\n", pos);
        return;
    }
    Node *toDelete = current->next;
    current->next = toDelete->next;
    printf("Deleted node after position %d with value %d.\n", pos, toDelete->data);
    free(toDelete);
}

/* Display the list */
void displayList(Node *head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    printf("List: ");
    Node *temp = head;
    while (temp) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

/* Free entire list before exit */
void freeList(Node **head) {
    Node *current = *head;
    while (current) {
        Node *next = current->next;
        free(current);
        current = next;
    }
    *head = NULL;
}

int main(void) {
    Node *head = NULL;
    int choice, value, pos;

    while (1) {
        printf("\n--- Singly Linked List Menu ---\n");
        printf("1. Insert at front\n");
        printf("2. Insert at end\n");
        printf("3. Insert in ascending order\n");
        printf("4. Delete first node\n");
        printf("5. Delete node by value\n");
        printf("6. Delete node after position\n");
        printf("7. Display list\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Exiting.\n");
            break;
        }

        switch (choice) {
            case 1:
                printf("Enter value to insert at front: ");
                if (scanf("%d", &value) != 1) { printf("Invalid input.\n"); break; }
                insertFront(&head, value);
                break;
            case 2:
                printf("Enter value to insert at end: ");
                if (scanf("%d", &value) != 1) { printf("Invalid input.\n"); break; }
                insertEnd(&head, value);
                break;
            case 3:
                printf("Enter value to insert in sorted order: ");
                if (scanf("%d", &value) != 1) { printf("Invalid input.\n"); break; }
                insertSorted(&head, value);
                break;
            case 4:
                deleteFirst(&head);
                break;
            case 5:
                printf("Enter value to delete: ");
                if (scanf("%d", &value) != 1) { printf("Invalid input.\n"); break; }
                deleteByValue(&head, value);
                break;
            case 6:
                printf("Enter position after which to delete (1-based): ");
                if (scanf("%d", &pos) != 1) { printf("Invalid input.\n"); break; }
                deleteAfterPosition(&head, pos);
                break;
            case 7:
                displayList(head);
                break;
            case 8:
                freeList(&head);
                printf("Exiting. Freed all nodes.\n");
                return 0;
            default:
                printf("Invalid choice. Please choose 1-8.\n");
        }
    }

    freeList(&head);
    return 0;
}