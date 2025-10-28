#include <stdio.h>
#include <string.h>

// Extracts a word starting from startIndex and stores it in 'word'
int extractWord(char* sentence, int startIndex, char* word) {
    int i = startIndex;
    int j = 0;

    // Skipping leading spaces
    while (sentence[i] == ' ') i++;

    // Extract characters until space or end of string
    while (sentence[i] != ' ' && sentence[i] != '\0') {
        word[j++] = sentence[i++];
    }

    word[j] = '\0'; // Null-terminate the word
    return i;       // Return index after the word
}

// Counts how many times targetWord appears in sentence
int countWordOccurrences(char* sentence, char* targetWord) {
    int i = 0, occurrences = 0;
    char word[50];

    while (sentence[i] != '\0') {
        i = extractWord(sentence, i, word);
        if (strlen(word) > 0 && strcmp(word, targetWord) == 0) {
            occurrences++;
        }
    }

    return occurrences;
}

// Counts total number of words in sentence
int analyzeText(char* sentence) {
    int i = 0, wordCount = 0;
    char word[50];

    while (sentence[i] != '\0') {
        i = extractWord(sentence, i, word);
        if (strlen(word) > 0) {
            wordCount++;
        }
    }

    return wordCount;
}

int main() {
    char inputSentence[200];
    char searchWord[50];

    // Read input sentence
    fgets(inputSentence, sizeof(inputSentence), stdin);
    inputSentence[strcspn(inputSentence, "\n")] = '\0'; // Remove newline

    // Read search word
    scanf("%s", searchWord);

    int totalWords = analyzeText(inputSentence);
    printf("Total words: %d\n", totalWords);

    int occurrences = countWordOccurrences(inputSentence, searchWord);
    printf("Occurrences of '%s': %d\n", searchWord, occurrences);

    float frequency = 0.0;
    if (totalWords > 0)
        frequency = ((float)occurrences / totalWords) * 100;
    printf("Frequency: %.1f%%\n", frequency);

    char category[30];
    if (frequency == 0.0) {
        strcpy(category, "Not Found");
    } else if (frequency < 20.0) {
        strcpy(category, "Rare");
    } else if (frequency <= 50.0) {
        strcpy(category, "Common");
    } else {
        strcpy(category, "Frequent");
    }

    printf("Category: %s\n", category);

    return 0;
}
