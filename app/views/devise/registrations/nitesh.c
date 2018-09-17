#include <stdio.h>
void main()
{
    int a[100],size,i,largest;
    printf("enter the size of array");
    scanf("%d",&size);
    printf("enter the elements");
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);
    largest=a[0];
    for(i=1;i<size;i++)
    {
    if (largest<a[i])
    largest=a[i];
    }
    printf("the largest elementis %d",largest);
    
}