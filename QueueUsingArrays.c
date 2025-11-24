#include <stdio.h>
#include <stdlib.h>

#define MAX 100  

int queue[MAX];
int front = -1;
int rear = -1;

int isFull() {
    return rear == MAX - 1;
}

int isEmpty() {
    return front == -1 || front > rear;
}

void enqueue(int value) {
    if (isFull()) {
        printf("Queue overflow. Cannot insert %d.\n", value);
        return;
    }
    if (front == -1) front = 0;
    queue[++rear] = value;
    printf("Enqueued %d\n", value);
}

void dequeue() {
    if (isEmpty()) {
        printf("Queue underflow. Nothing to dequeue.\n");
        return;
    }
    int val = queue[front++];
    printf("Dequeued %d\n", val);
    if (isEmpty()) { // reset pointers when queue becomes empty
        front = -1;
        rear = -1;
    }
}

void display() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue contents: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main(void) {
    int choice, value;
    while (1) {
        printf("\n--- Queue Menu ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Exiting.\n");
            return 1;
        }

        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                if (scanf("%d", &value) != 1) {
                    printf("Invalid input. Returning to menu.\n");
                    // clear invalid input
                    int c; while ((c = getchar()) != '\n' && c != EOF);
                    break;
                }
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting.\n");
                return 0;
            default:
                printf("Invalid choice. Please choose 1-4.\n");
        }
    }
    return 0;
}