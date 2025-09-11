#include <stdio.h>

int main() {
    char name[5] = {'J','o','h','n','\0'};
    char city[7] = {'B','o','s','t','o','n','\0'};

    printf("Name: %s\n",name);
    printf("City: %s\n",city);
    
    //Testing without using \0 at the end
    char test[4] = {'A','B','C','D'}; 
    printf("Test without null terminator: %s\n",test); //this may create garbage values   
    return 0;
}