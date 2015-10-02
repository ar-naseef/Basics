# include <stdio.h>

int binSearchNonRec(int list[], int r,int target)
{
    int m,l;
    l=0;
    m = (l+r)/2;

    while (l<r)
    {
        if(list[m]>=target)
        {
            r =m;
            m = (l+r)/2;
        }
        if(list[m]<target)
        {
            l = m+1;
            m = (l+r)/2;
        }
    }
    if(list[r] == target)
         return l+1;
    else
    return 0;
}

int binSearchRec(int list[],int l,int r,int target)
{
    int c=0,m;
    if(l<=r)
    {
        m = (l+r)/2;
        if(target == list[m])
            c = m;
        else if(target<list[m])
            return binSearchRec(list,l,m-1,target);
        else if(target>list[m])
            return binSearchRec(list,m+1,r,target);
    }
    if(c==0)
        return 0;
    else
        return (c+1);
}

int main()
{
    int a[10],n,tar,result1,result2,i;

    printf("Enter the size of the list : ");
    scanf("%d",&n);

    printf("\nEnter the elements ");
    for (i=0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nEnter the target : ");
    scanf("%d",&tar);

    result1 = binSearchNonRec(a, n-1, tar);
    result2 = binSearchRec(a,0, n-1, tar);

    if(result1 == 0 && result2 == 0)
        printf("\nElement is not found");
    else{
        printf("\nElement is found at location %d ",result2);
        printf("\nElement is found at location %d ",result1);

    }
    return 0;
}
