#include <stdio.h>
#include <stdlib.h>

int area(int length, int width)
{
    int rect;
    rect = length * width;
    return rect;
}
int main()
{
    int x,y;
    printf("Enter the value of Length:\n");
    scanf("%d",&x);
    printf("Enter the value of width:\n");
    scanf("%d",&y);

    int rect = area(x,y);
    printf("The value of the area is: %d\n",rect);
    return 0;
}
