#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    int mul;
    scanf("%d",&mul);
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if((ar[i]*ar[j])==mul){
                printf("YES");
                return 0;
            }
        }
    }
    printf("NO");
    return 0;
}
