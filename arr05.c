#include<stdio.h>
void myrev(int numArry[],int maxarrSize)
{
    int startIndex=0;
    int endIndex=maxarrSize-1;
    int temp=0;
    int i;
    while(startIndex<=endIndex)
    {
        temp=numArry[startIndex];
        numArry[startIndex]=numArry[endIndex];
        numArry[endIndex]=temp;
        startIndex++;
        endIndex--;
    }
    printf("Reversal Array Elements\n");
    for(i=0;i<maxarrSize;i++)
    {
        printf("%d\t",numArry[i]);
    }

}

