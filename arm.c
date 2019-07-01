#include<stdio.h>
void main()
{
    int n1,n2,r,sum,temp,i,num;
    scanf("%d %d",&n1,&n2);
    for(num=n1;num<n2;num++)
    {
        temp=num;
        sum=0;
        while(temp!=0)
        {


            r=temp%10;
            temp=temp/10;
            sum=sum+(r*r*r);

        }

    if(num==sum)
        printf("%d ",num);

}
}
