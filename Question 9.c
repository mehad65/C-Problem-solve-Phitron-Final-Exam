#include<stdio.h>
struct Student
{
    int roll;
    int class;
    int marks;
};
int main()
{
    struct Student stu;
    int n;
    scanf("%d",&n);
    struct Student students[n];
    int result=0;
    for(int i=0;i<n;i++){
        scanf("%d %d %d",&students[i].roll,&students[i].class,&students[i].marks);
        result+=students[i].marks;
    }
    printf("%d",result);
    return 0;
}
