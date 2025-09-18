#include<stdio.h>
int main(void)
{
    int arr[]={1,-5,4,6,-2,9,3,8};
    int n = sizeof(arr)/sizeof(int);
    int max_sub= arr[0];
    for(int i=0;i<n;i++)
    {
        int current=0;
        for(int j=i;j<n;j++)
        {
            current +=arr[j];
            if(max_sub<current)
                max_sub = current;    
        }
    }
    printf("%d",max_sub);
}