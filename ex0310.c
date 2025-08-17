#include <stdio.h>

int main() {
    int age, height;
    int hasAdult;
    scanf("%d %d %d", &age, &height, &hasAdult);

    if(age>=12)
    {
      if(height>150)
      {
        
       if(age<15 && hasAdult==0)
       {
        printf("Sorry, you need an adult with you\n");
       }
       else if(age<15 && hasAdult!=0)
       {
        printf("You can ride with adult supervision!\n");
       }
       else if (age>=15)
       {
        printf("You can ride by yourself!\n");
       }
      }
      else
      {
        printf("Sorry, you are not tall enough\n");
      }
    }
    else {
        printf("Sorry, you are too young\n");
    }
    return 0;
}