#include<stdio.h>
int main()
{
    float dai,circ,area,radi;
    printf("Enter the value of radii");
    scanf("%f",&radi);
    dai=2*radi;
    circ=2*3.14*radi;
    area=3.14*radi*radi;
    printf("The value of dai,circ and area respectively:%f,%f,%f",dai,circ,area);
}
