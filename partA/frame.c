#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    printf("Enter number of frames to be transmitted\n");
    scanf("%d",&n);
    printf("Enter the frames:-\n");
    long int frame[n];
    int i;
    for(i=0;i<n;i++)
        scanf("%ld",&frame[i]);
    int j = 0;
    int k,r;
    int m = 0;
    while(j<n)
    {
        k=frame[j];
        while(k>0)
        {
            k=k/10;
            m++;
        }

        printf("The size of frame = %d\n",m);
        m=0;
        j++;
    }

    printf("Frames received are:\n");

    for(i=0;i<n;i++)
        printf("%ld",frame[i]);
    return 0;
}
