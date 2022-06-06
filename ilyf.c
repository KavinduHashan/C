#include <stdio.h>
#include <stdlib.h>
int main()
{
    float no[10], max, min, avg=0, rev, sum=0;
    int i;

    for(i=0; i<10; i++)
    {
        printf("Enter the %d Number : ",i+1);
        scanf("%f",&no[i]);

        sum=sum+no[i];
    }

    //find max and min
    max=min=no[0];

    for(i=0; i<10; i++)
    {
        //max
        if (no[i]>max)
        {
            max=no[i];
        }
        //min
        else if (no[i]<min)
        {
            min=no[i];
        }
    }

    //Reverse order of values
    printf("\nArray in reverse of order :\n");
    for (i=10-1; i>=0; i--)
    {
        printf("%d\t, no[i]");
    }

    //average
    avg=sum/10.0;

    printf("\nMaximum number is the %.2f\n", max);
    printf("\nMinimum number is the %.2f\n", min);
    printf("\nAverage is the %.2f\n", avg);
}
