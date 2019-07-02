#include<stdio.h>
void main()
{

int arr[20],i,n;
int large;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
    large=arr[0];
if(large>arr[i])
    large=arr[i];
}
printf("%d",large);

}
