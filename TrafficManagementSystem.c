#include <stdio.h>

// TrafficLight enum here
enum TrafficLight{
    RED,
    YELLOW,
    GREEN,
};
int main() {
    // Reading input
    int input;
    scanf("%d", &input);
    
    enum TrafficLight currentLight;
    if(input==0)
    {
        currentLight=RED;
    }
    else if(input==1)
    {
        currentLight =YELLOW;
    }
    else if(input==2)
    {
        currentLight = GREEN;
    }
    
    switch(input)
    {
        case 0:
        printf("Current light: RED\n");
        printf("Numeric value: %d\n",currentLight);
        break;
        case 1:
        printf("Current light: YELLOW\n");
        printf("Numeric value: %d\n",currentLight);
        break;
        case 2:
        printf("Current light: GREEN\n");
        printf("Numeric value: %d\n",currentLight);
        break;
        default :
        printf("enter valid choice\n");
        break;
    }
    // Printing action based on current light
    if(currentLight==RED){
        printf("Action: Stop\n");
    }
    else if(currentLight==YELLOW){
        printf("Action: Caution\n");
    }
    else if(currentLight==GREEN){
        printf("Action: Go\n");
    }
  //to calculate the next light
 enum TrafficLight nextLight;
   if(currentLight==RED){
        nextLight= GREEN;
    }
    else if(currentLight==YELLOW){
        nextLight= RED;
    }
    else if(currentLight==GREEN){
        nextLight= YELLOW;
    }
    switch(input)
    {
        case 0:
        printf("Next light: GREEN\n");
        break;
        case 1:
        printf("Next light: RED\n");
        break;
        case 2:
        printf("Next light: YELLOW\n");
        break;
        default :
        printf("enter valid choice\n");
        break;
    }
    return 0;
}
