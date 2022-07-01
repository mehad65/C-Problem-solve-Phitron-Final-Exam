#include<stdio.h>
int main(){
    struct Fun
    {
        int sum;
    };
    struct Fun structVariable;
    struct Fun *pointer =&structVariable;
    pointer->sum=56;
    printf("%d",pointer->sum);
    return 0;
}
