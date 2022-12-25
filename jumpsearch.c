#include<stdio.h>
#include<math.h>
int jumpsearch(int array[],int size,int key)
{
    int start=0;
    int end=sqrt(size);

    while(array[end]<=key&&end<size)
    {
        start=end;
        end=end+sqrt(size);
        if(end>size-1)
            end=size;
    }

for(int i=start;i<end;i++){       //linear search
    if(array[i]==key)
    return i;
}
return -1;

}
void main()
{
    int i,n,search,k,t;
    printf("enter size of array");
    scanf("%d",&n);
    int a[n];
    printf("enter elements of array");
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter element to be sarched");
    scanf("%d",&k);
    t=jumpsearch(a,n,k);

    if(t>0)
        printf("element found at %d",t+1);
    else
        printf("element not found");

}
