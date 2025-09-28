#include <stdio.h>
#include <stdlib.h>

int main() {
    int count;
    scanf("%d", &count);
    int *pntr = (int*)malloc(count*sizeof(int));
    if(pntr == NULL)
    {
        printf("Memory allocation failed!\n");
    }
    else
    {
        printf("Memory allocated successfully!\n");
    }
    int i, arr[20];
    int max= arr[0],sum = 0;
    for(i=0;i<=count;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<count;i++)
    {
        sum =sum + arr[i];
        if(arr[i]>=max)
        {
            max = arr[i];
        }
    }
    printf("Sum: %d\n",sum);
    printf("Maximum: %d\n",max);
    free(pntr);
    printf("Memory freed successfully!\n");
    return 0;
}
