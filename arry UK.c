#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of arry value:");
    scanf("%d",&n);
    int i,a[n];
    printf("Please enter your array:");
    for( i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n;i>=0;i--)
    {
        printf("  %d",a[i]);

    }
    return 0;
}
