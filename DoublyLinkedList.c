#include <stdio.h>
#include <stdlib.h>

/* Doubly linked list node */
typedef struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
} Node;

/* Create a new node */
Node* createNode(int value) {
    Node *n = (Node*)malloc(sizeof(Node));
    if (!n) {
        printf("Memory allocation failed. Exiting.\n");
        exit(EXIT_FAILURE);
    }
    n->data = value;
    n->prev = n->next = NULL;
    return n;
}

/* Insert at front */
void insertFront(Node **head, int value) {
    Node *newNode = createNode(value);
    newNode->next = *head;
    if (*head != NULL) (*head)->prev = newNode;
    *head = newNode;
    printf("Inserted %d at front.\n", value);
}

/* Insert at end */
void insertEnd(Node **head, int value) {
    Node *newNode = createNode(value);
    if (*head == NULL) {
        *head = newNode;
    } else {
        Node *temp = *head;
        while (temp->next) temp = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
    }
    printf("Inserted %d at end.\n", value);
}

/* Delete last node */
void deleteLast(Node **head) {
    if (*head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }
    Node *temp = *head;
    /* single node */
    if (temp->next == NULL) {
        printf("Deleted last node with value %d.\n", temp->data);
        free(temp);
        *head = NULL;
        return;
    }
    /* move to last node */
    while (temp->next) temp = temp->next;
    printf("Deleted last node with value %d.\n", temp->data);
    temp->prev->next = NULL;
    free(temp);
}

/* Delete node before specified position (position is 1-based)
   Delete the node that is immediately before the node at 'pos'.
   If pos <= 1, or there is no node before pos, no deletion is done.
*/
void deleteBeforePosition(Node **head, int pos) {
    if (*head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }
    if (pos <= 1) {
        printf("Position should be >= 2 to have a node before it.\n");
        return;
    }

    /* Find the node at position pos (1-based). */
    Node *current = *head;
    int idx = 1;
    while (current && idx < pos) {
        current = current->next;
        idx++;
    }

    if (current == NULL) {
        printf("Position %d is beyond list length. No deletion.\n", pos);
        return;
    }

    /* Node before position is current->prev */
    Node *toDelete = current->prev;
    if (toDelete == NULL) {
        printf("No node exists before position %d. No deletion.\n", pos);
        return;
    }

    if (toDelete->prev)
        toDelete->prev->next = current;
    else
        *head = current;

    current->prev = toDelete->prev;
    printf("Deleted node before position %d with value %d.\n", pos, toDelete->data);
    free(toDelete);
}

/* Display list from head to tail */
void displayList(Node *head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    printf("List (head -> tail): ");
    Node *temp = head;
    while (temp) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

/* Free entire list */
void freeList(Node **head) {
    Node *curr = *head;
    while (curr) {
        Node *next = curr->next;
        free(curr);
        curr = next;
    }
    *head = NULL;
}

int main(void) {
    Node *head = NULL;
    int choice, value, pos;

    while (1) {
        printf("\n--- Doubly Linked List Menu ---\n");
        printf("1. Insert at front\n");
        printf("2. Insert at end\n");
        printf("3. Delete last node\n");
        printf("4. Delete node before position\n");
        printf("5. Display list\n");
        printf("6. Exit\n");
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
                deleteLast(&head);
                break;
            case 4:
                printf("Enter position (1-based) to delete node before it: ");
                if (scanf("%d", &pos) != 1) { printf("Invalid input.\n"); break; }
                deleteBeforePosition(&head, pos);
                break;
            case 5:
                displayList(head);
                break;
            case 6:
                freeList(&head);
                printf("Exiting. Freed all nodes.\n");
                return 0;
            default:
                printf("Invalid choice. Please choose 1-6.\n");
        }
    }

    freeList(&head);
    return 0;
}