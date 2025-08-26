#include <stdio.h>

int updateScore(int scores[], int playerNumber, int newScore) 
{
    int i;
    printf("Scores: [");
     scores[playerNumber-1]=newScore;

     for(int i = 0; i < 5; i++) 
     {
       
        printf("%d", scores[i]);
         if(i<4)
        {
            printf(", ");
        }
     }
     printf("]\n");
    return 0; 
}

int main() {
    int scores[5],i;
    
    // Reading the current scores
    for (int i = 0; i < 5; i++) {
        scanf("%d", &scores[i]);
    }
    
    // Reading the player number and new score
    int playerNumber, newScore;
    scanf(" %d %d", &playerNumber, &newScore);
    
    // Calling the updateScore function
    updateScore(scores, playerNumber, newScore);
    
    return 0;
}