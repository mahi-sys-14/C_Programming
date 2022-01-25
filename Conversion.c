#include <stdio.h>
int main()
{
    int d;
    
    printf("enter distance in km \n");
    scanf("%d",&d);
    
    printf("Feet %f\n",(d*3280.84));
    printf("Meters %d\n",(d*1000));
    printf("Inches %f\n",(d*39370.1));
    printf("Centimeters %d\n",(d*100000));
    
    return 0;
}