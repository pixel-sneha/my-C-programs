#include <stdio.h>
int main()
//FAHREINHEIT TO CELCIUS
{
    float fahreinheit,celcius;
    printf("Enter value in celcius:\n");
    scanf("%f",&celcius);
    fahreinheit=1.8*celcius+32;
    printf("value in fahreinheit is %f \n",fahreinheit);
    return 0;
}