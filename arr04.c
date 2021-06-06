#include<stdio.h>
int mycount(int arr[],int item,int maxsize)
{
    int i;
    int elementCount=0;
    for(i=0;i<maxsize;i++)
    {
        if(arr[i]==item)
        {
            elementCount++;
        }

    }
    return elementCount;
}
