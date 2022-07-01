#include<stdio.h>
void change_values(int ar[],int N,int L, int R)
{
    for(int i=L;i<=R;i++){
        ar[i]=0;
    }
}
int main()
{
    int n;
    printf("Enter the array size:\n");
    scanf("%d",&n);
    int ar[n];
    printf("Enter array elements: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    printf("Enter L-th index:\n");
    int L,R;
    scanf("%d", &L);
    printf("Enter R-th index:\n");
    scanf("%d",&R);
    change_values(ar,n,L,R);
    for(int i=0;i<n;i++){
        printf("%d ",ar[i]);
    }
    return 0;
}
