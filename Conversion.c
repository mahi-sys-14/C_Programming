#include <stdio.h>
int main()
{
    int distance_km;
    
    printf("Enter distance in km \n");
    scanf("%d",&distance_km);
    
    printf("Distance in Feet %f\n",(d*3280.84));
    printf("Distance in Meters %d\n",(d*1000));
    printf("Distance in Inches %f\n",(d*39370.1));
    printf("Distance in Centimeters %d\n",(d*100000));
    
    return 0;
}
