#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// concatenateStrings function here
char* concatenateStrings(char* str1, char* str2){
    int total_length = strlen(str1)+ strlen(str2)+1;
    char* result = malloc(sizeof(char)*total_length);
    if(result==NULL){
        return NULL;
    }
    else{
        strcpy(result,str1);
        strcat(result,str2);
    }
    return result;
}
// processText function here
char* processText(char* word1, char* word2,char* separator){
    char* temp_result = concatenateStrings(word1,separator);
    if(temp_result==NULL){
        return NULL;
    }
   char* final_result = concatenateStrings(temp_result,word2);
    free(temp_result);
    if(final_result==NULL){
        return NULL;
    }
    else return final_result;
}
int main() {
    char firstWord[50];
    char secondWord[50];
    char connector[50];
    
    scanf("%s", firstWord);
    scanf("%s", secondWord);
    scanf("%s", connector);
  
    char* finalWord = processText(firstWord,secondWord,connector);
    if(finalWord==NULL){
        printf("Memory allocation failed\n");
    }
    else{
        printf("Result: %s\n",finalWord);
        printf("Length: %d\n",strlen(finalWord));
    }

    free(finalWord);
    return 0;
}
