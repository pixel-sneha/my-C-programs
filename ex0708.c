#include <stdio.h>
#include <string.h>

int main() {
    int n,i=1;
    scanf("%d", &n);
    
    char source[100];
    char destination[100];
    while(i<=n)
    {
        scanf("%s",source);
        strcpy(destination,source);
        printf("Source: %s\n",source);
        printf("Destination: %s\n",destination);
        i++;
    }
    destination[0] = 'X';
    printf("Modified last destination: %s\n",destination); //to modify first element in copied stuff
    return 0;
}