#include <stdio.h>

void tryToModify(int number)
{
  number = number+50; //copies original into "number" as given in return argument and modifies the copy
  printf("Inside function: %d\n",number);
}
int main() {
    int original = 25;
    printf("Before function call: %d\n",original);
    tryToModify(original);
    printf("After function call: %d\n",original);
    return 0;
}
