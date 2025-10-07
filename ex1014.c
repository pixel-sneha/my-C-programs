#include <stdio.h>
#include <string.h>

// TODO: Define the Rectangle struct here
struct Rectangle {
    int width;
    int height;
    char color[15];
};

// TODO: Write the displayRectangle function here
void displayRectangle(struct Rectangle r) {
    printf("Rectangle Details:\n");
    printf("Width: %d\n", r.width);
    printf("Height: %d\n", r.height);
    printf("Color: %s\n", r.color);
    printf("Area: %d\n", r.width * r.height);
}

// TODO: Write the modifyRectangle function here
void modifyRectangle(struct Rectangle r) {
    r.width = r.width * 2;
    r.height = r.height * 2;
    strcpy(r.color, "Modified");
    printf("Inside modifyRectangle function:\n");
    displayRectangle(r);
}

int main() {
    // Read input
    int width, height;
    char color[15];
    
    scanf("%d", &width);
    scanf("%d", &height);
    scanf("%s", color);
    
    // TODO: Create Rectangle variable and assign input values
    struct Rectangle rect;
    rect.width = width;
    rect.height = height;
    strcpy(rect.color, color);
    
    // TODO: Print "Original rectangle:" and call displayRectangle
    printf("Original rectangle:\n");
    displayRectangle(rect);
    
    // TODO: Call modifyRectangle
    modifyRectangle(rect);
    
    // TODO: Print "After modifyRectangle call:" and call displayRectangle again
    printf("After modifyRectangle call:\n");
    displayRectangle(rect);
    
    return 0;
}
