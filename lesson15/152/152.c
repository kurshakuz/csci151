#include <stdio.h>

typedef struct {
    int x, y;
} Coords;

typedef struct {
    int r, g, b;
} Color;

typedef struct{
    Coords point[5];
    Color color;
} Pentagon;

int main()
{
	FILE *file;
	file = fopen("Lesson15.txt", "r");
	
    Pentagon shape;
    int var1, var2, i, colr[3];
    for (i = 0; i < 3; i++) {
        fscanf(file, "%i", &colr[i]);
    }
    shape.color.r = colr[0];
    shape.color.g = colr[1];
    shape.color.b = colr[2];
    printf("%i %i %i\n", shape.color.r, shape.color.g, shape.color.b);

    for (i = 0; i < 5; i++) {
        fscanf(file, "%i %i", &var1, &var2);
        shape.point[i].x = var1;
        shape.point[i].y = var2;
        
        printf("%i %i\n", shape.point[i].x, shape.point[i].y);
    } 
    return 0;
}