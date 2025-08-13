#include <stdio.h>

int main() {
    // using logical operations
    int isSunny = 1;
    float windSpeed = 5.4;
    int temperature = 23;
    int solarPanelOutput = 9;
    int isCloudy = 0;
    
    
    int isGoodDay = (isSunny==1 && solarPanelOutput<15 && temperature>20) || (isCloudy==0);
    
    
    if (isGoodDay) {
        printf("Good day for solar energy\n");
    } else {
        printf("Not ideal for solar energy\n");
    }
    
    return 0;
}