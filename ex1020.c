#include <stdio.h>

// WeatherCondition enum here
enum WeatherCondition{ 
    SUNNY, CLOUDY, RAINY, STORMY, SNOWY
};

void getWeatherAdvice(enum WeatherCondition weather)
{
    switch(weather)
    {
        case SUNNY:
        printf("Perfect day for outdoor activities!\n");
        break;
        case CLOUDY:
        printf("Good day for a walk, no sun protection needed.\n");
        break;
        case RAINY:
        printf("Don't forget your umbrella!\n");
        break;
        case STORMY:
        printf("Stay indoors and avoid travel.\n");
        break;
        case SNOWY:
        printf("Drive carefully and dress warmly.\n");
        break;
    }
    return;
}

void getActivitySuggestion(enum WeatherCondition weather){
    switch(weather)
    {
     case SUNNY:
        printf("Suggested activity: Beach or hiking\n");
        break;
        case CLOUDY:
        printf("Suggested activity: Photography or gardening\n");
        break;
        case RAINY:
        printf("Suggested activity: Reading or indoor games\n");
        break;
        case STORMY:
        printf("Suggested activity: Movie marathon\n");
        break;
        case SNOWY:
        printf("Suggested activity: Skiing or hot cocoa\n");
        break;   
    }
    return;
}

int main() {

    int weatherInput;
    scanf("%d", &weatherInput);
    
    // Declaring currentWeather variable and assigning enum value based on input
    enum WeatherCondition currentWeather;
    currentWeather = (enum WeatherCondition) weatherInput;

    printf("Current weather: %d\n",currentWeather);
    
 getWeatherAdvice(currentWeather);   
   
    getActivitySuggestion(currentWeather);
    return 0;
}
