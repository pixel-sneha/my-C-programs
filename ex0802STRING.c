#include <stdio.h>
#include <string.h>

int main() {
    int n,i;
    scanf("%d", &n);
    
    char word1[100], word2[100];
    char combined[200];
    char longest_combined[200] = "";
    
    for(i=1;i<=n;i++)
    {
        scanf("%s",word1);
        scanf("%s",word2);
        printf("Word 1: %s (Length: %d)\n",word1,strlen(word1));
        printf("Word 2: %s (Length: %d)\n",word2,strlen(word2));
        if(strcmp(word1,word2)==0)
        {
            printf("Comparison: identical\n");
        }
        else
        {
            printf("Comparison: different\n");
        }
        strcpy(combined,word1); //copying word1 INTO combined
        strcat(combined," "); //adding blank space at the end of combined string words
        strcat(combined,word2); //adding word 2 at the end of combined
        printf("Combined: %s\n",combined);
        if(strlen(combined)>strlen(longest_combined)) //have to find largest LENGTH so comparing their lengths
        {
            strcpy(longest_combined,combined); //as we can not use = here, we have to use strcpy to copy string data
        }
    }
 printf("Longest combined string: %s\n",longest_combined);
    return 0;
}