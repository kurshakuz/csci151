#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 

typedef struct {
    int r, g, b;
} Color;

typedef struct {
    int x, y;
} Coords;

typedef struct {
    int len;
    Coords start;
    Color outer;
    Color inner;
} Square;

typedef struct {
    int len1, len2;
    Coords start;
    Color outer;
    Color inner;
} Rectangle;

int main() { 
    setvbuf(stdout, NULL, _IONBF, 0); 
    
    Color white = {255, 255, 255};
    Color black = {0, 0, 0};
    Color red = {255, 0, 0};
    
    Square square = {2, {0, 0}, white, red};
    
    Rectangle rectangle = {2, 3, {0, 10}, red, black};
    
    printf("%i \n%i %i", square.len, rectangle.len1, rectangle.len2);
    
    return 0;
}