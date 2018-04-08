#include <stdio.h>
int main() {
    int a = 1, b = 2, c = 3;
    int ***p1, **p2, *p3, *p4;
 
    p1 = &p2;
    p2 = &p3;
    p3 = &a;
    p4 = &b;
 
    printf("%i %i\n", ***p1, *p4);
 
    **p2 = 10;
 
    printf("%i %i %i\n", ***p1, **p2, *p3);
 
    *p2 = &c;
 
    printf("%i %i %i\n", ***p1, **p2, *p3);
 
    p2 = &p4;
 
    printf("%i %i %i\n", ***p1, **p2, *p3);
    
}