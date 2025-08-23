#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int sumOfPrimes(int start, int end) {
    int sum = 0;
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) sum += i;
    }
    return sum;
}

int main() {
    int start, end;
    scanf("%d %d", &start, &end);
    
    if (start <= 0 || end <= 0 || start >= end) {
        printf("Invalid input\n");
        return 1;
    }
    
    int result = sumOfPrimes(start, end);
    printf("%d\n", result);
    
    return 0;
}