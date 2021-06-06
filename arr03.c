#include<stdio.h>
int FindMaxAndMin(int numArr[],int maxSize)
{
    int i,j;
    int max=0;
    int min=0;
    for(i=0;i<maxSize-1;i++)
    {
        for(j=0;j<maxSize-i-1;j++)
        {
            if(numArr[j]>numArr[j+1])
            {
                    int temp=numArr[j];
                    numArr[j]=numArr[j+1];
                    numArr[j+1]=temp;

            }

        }

    }
    max=numArr[maxSize-1];
    min=numArr[0];
    printf("Maximum Element in Arr is: %d\n",max);
    printf("Minimum Element in Arr is: %d\n",min);
    return max+min;

}
