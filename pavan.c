#include<stdio.h>
int main()
{
   
    int n,i;
    printf("enter n:");
    scanf("%d",&n);
     int arr[n];

    int *p=arr;
    printf("enter the elemnts");

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("result=%d",*++p);
    printf("result=%d",++*p);
    printf("result=%d",*p++);
    printf("result=%d",*p);
    return 0;
}