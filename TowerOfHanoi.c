#include <stdio.h>

void hanoi(int n, char src, char dest, char aux) {
    if (n == 0) return;
    hanoi(n - 1, src, aux, dest);
    printf("Move disk %d from %c to %c\n", n, src, dest);
    hanoi(n - 1, aux, dest, src);
}

int main(void) {
    int n;
    printf("Enter number of disks: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("Moves for %d disks:\n", n);
    hanoi(n, 'A', 'C', 'B');
    return 0;
}
