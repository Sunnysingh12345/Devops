#include<stdio.h>
int AcceptAndDisplay(int arr[],int elementsTobeAccepted,int maxSize)
{
    int acceptCount=0;
    int i;
    if(elementsTobeAccepted>maxSize)
    {

        printf("Number is Greater Than Maximum Size\n");
        return acceptCount;
    }
    else
    {
        printf("Enter The Array Elements To Be Added:\n");
        for(i=0;i<elementsTobeAccepted;i++)
        {
            scanf("%d",&arr[i]);
            acceptCount++;
        }
    }
    return acceptCount;
}
