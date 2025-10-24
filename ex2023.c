#include <stdio.h>


typedef enum ShapeType {
CIRCLE , RECTANGLE , TRIANGLE
} Shape;

float calculateArea(Shape shape, float dimension1, float dimension2){
    float area = 0.0;
    switch(shape){
        case CIRCLE:
        area = area = (3.14159 * dimension1 * dimension1);
        break;
        case RECTANGLE:
        area = dimension1 * dimension2;
        break;
        case TRIANGLE:
        area = (0.5 * dimension1 * dimension2);
        break;
    }
    return area;
}

void printShapeInfo(Shape shape){
    switch(shape){
        case CIRCLE:
        printf("Shape: Circle\n");
        break;
        case RECTANGLE:
        printf("Shape: Rectangle\n");
        break;
        case TRIANGLE:
        printf("Shape: Triangle\n");
        break;
    }
    return;
}
int main() {

    int shapeChoice;
    float dim1, dim2;
    scanf("%d", &shapeChoice);
    scanf("%f", &dim1);
    scanf("%f", &dim2);
    
    Shape selectedShape;
    selectedShape = (Shape) shapeChoice;
    printShapeInfo(selectedShape);
    printf("Dimensions: %.1f %.1f\n",dim1,dim2);
    float total_area = calculateArea(selectedShape, dim1,dim2);
    printf("Area: %.2f\n",total_area);
    if(total_area< 10.0){
        printf("Category: Small\n");
    }
    else if(total_area>=10.0 && total_area<=50.0){
        printf("Category: Medium\n");
    }
    else if(total_area>50.0){
        printf("Category: Large\n");
    }
    return 0;
}
