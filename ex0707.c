#include <stdio.h>
#include <string.h>

int main() {
    int n,i;
    printf("Enter length for the words:\n");
    scanf("%d", &n);
    
    // Variables to track totals
    int total_characters = 0;
    int max_length = 0;
    char words[50];
    printf("Enter a sentence:\n");
    for(i=0;i<n;i++)
    {
        scanf("%s",words);
        printf("Word: %s - Length: %d\n",words,strlen(words));
        total_characters= total_characters+strlen(words);
        if(strlen(words)>max_length)
        {
        max_length=strlen(words);
        } 
    }
    printf("Total characters: %d\n", total_characters); //this wont print until you havent entered all the words
    printf("Longest word length: %d\n", max_length);
    return 0;
}