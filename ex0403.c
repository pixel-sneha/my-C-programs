#include<stdio.h>
int main()
{    //using continue func
    for (int i = 1; i <= 20; i++) 
    {
        if(i%2!=0)
        {
            continue;
        }
        printf("%d ", i);
    }
    // usimg do while loop
    int sum = 0;
    int number = 1;

    
    do 
    {
        sum=sum+number;
        number=number+2;
        printf("Sum is: %d\n",sum);
        printf("Num is: %d\n",number);
        
    }
    while(number<=50);

    // Print the final sum
    printf("Final Sum: %d\n", sum);
    return 0;
}
