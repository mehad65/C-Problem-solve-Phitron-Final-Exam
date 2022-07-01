#include<stdio.h>
int main()
{
    char str[1001];
    gets(str);
    int len=strlen(str);
    int result=1;
    int count[10]={0};
    for(int i=0;i<len;i++){
        if(str[i]>47 && str[i]<58){
            int a=str[i]-'0';
            count[a]++;
        }
    }
    for(int i=0;i<10;i++){
        if(count[i]<1){
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}
