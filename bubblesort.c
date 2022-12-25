#include<stdio.h>
void main()
{
    int n,a[10],i,j,p,s,tmp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
        printf("\n");
     int flag=0;    //optimized bubble sort
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {    flag=1;
                tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }

        }
      if(flag==0)
                break;
    }
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}

