#include <stdio.h>
void analyzeTemperatures(int temperatures[], int n)
{
    int total=0,highestTemp=temperatures[0],num=0,i;
    double avgTemperature=0;
    if(i==n)
    {
        avgTemperature = temperatures[0];
        highestTemp = temperatures[0];
        num =1;
    }
   for (int i = 0; i < n; i++) 
    {
        total = temperatures[i]+total;
        if(temperatures[i]>highestTemp)
        {
            highestTemp = temperatures[i];
        }
        if(temperatures[i]>25)
        {
            num=num+1;
        }
    }
    avgTemperature= (double)total/n;
    printf("Average temperature: %.1f\n",avgTemperature);
    printf("Highest temperature: %d\n",highestTemp);
    printf("Days above 25 degrees: %d\n",num);
}
int main() {

    int n;
    int total=0,highestTemp,num=0;
    double avgTemperature;
    scanf("%d", &n);
    int temperatures[n];
    
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &temperatures[i]);
    }
    analyzeTemperatures(temperatures,n);
    return 0;
}
