#include <stdio.h>
#include <stdbool.h>
typedef struct {
    float length;
    float width;
} Rectangle;
bool check(float length, float width){
    return (length>0.0 && length<20.0) && (width>0.0 && width<20.0);
}
float Perimeter(Rectangle rect){
    return 2*(rect.length + rect.width);
}
float Area(Rectangle rect){
    return rect.length*rect.width;
}

int main(){
    Rectangle rect;
    printf("Enter length of the rectangle: ");
    scanf("%f", &rect.length);
    printf("Enter width of the rectangle: ");
    scanf("%f", &rect.width);
    if (!check(rect.length, rect.width)) {
        printf("Invalid dimensions. Length and width must be greater than 0.0 and less than 20.0.\n");
        return 1;
    }
    float perimeter=Perimeter(rect);
    float area=Area(rect);

    printf("Perimeter of the rectangle: %.2f\n", perimeter);
    printf("Area of the rectangle: %.2f\n", area);

    return 0;
}
