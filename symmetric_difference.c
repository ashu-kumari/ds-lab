#include<stdio.h>
void main()
{
    int a[100],b[100],c[100],i,j,m,n,k=0,t,p,s,bl;
    printf("enter no of elements of first set:\n");
    scanf("%d",&n);
    printf("enter elements of first set:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter no of elements of second set:\n");
    scanf("%d",&m);
    printf("enter elements of second set:\n");
    for(i=0;i<m;i++)
        scanf("%d",&b[i]);
    for(i=0;i<n;i++)
    {   bl=0;
        for(j=0;j<m;j++)
        {
            if(a[i]!=b[j])
                bl++;
        }
        if(bl==m)
        {  c[k]=a[i];
            k++;
        }   }


     int e=0,f[100];
    for(i=0;i<m;i++)
    {   bl=0;
        for(j=0;j<n;j++)
        {
            if(b[i]!=a[j])
                bl++;
        }
        if(bl==n)
        {  f[e]=b[i];
            e++;
        }   }


            printf("symmetric difference is\n");
        for(t=0;t<k;t++)
            printf("%d\n",c[t]);

          for(t=0;t<e;t++)
            printf("%d\n",f[t]);


}



