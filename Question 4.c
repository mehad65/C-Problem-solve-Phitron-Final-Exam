#include<stdio.h>
int main(){
     int n;
     printf("Enter the length of numbers array\n");
     scanf("%d",&n);
     printf("keep in mind that number should not be greater than 100\n");
     printf("Enter numbers by space:\n");
     int arr[n];
     for(int i =0; i<n;i++){
        scanf("%d",&arr[i]);
     }
     int count[101]={0};
     for(int i=0;i<n;i++){
         int val=arr[i];
         count[val]++;
     }
    for(int i=0;i<101;i++){
         if(count[i]>0){
             printf("%d number comes %d times\n",i,count[i]);
         }
     }
    return 0;
}
