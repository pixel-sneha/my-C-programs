#include <stdio.h>
#include <string.h>

int main() {
    printf("Enter a sentence: \n");
    
    char sentence[200];
    scanf("%s", sentence);
    
    printf("You entered: %s\n", sentence);
    
    int char_count = strlen(sentence);
    printf("Character count: %d\n", char_count);
    
    int length = strlen(sentence);
    printf("Length: %d\n", length);
    
    int vowel_count = 0;
    for (int i = 0; i < strlen(sentence); i++) {
        char c = sentence[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            vowel_count++;
        }
    }
    
    printf("Vowel count: %d\n", vowel_count);
    
    return 0;
}
