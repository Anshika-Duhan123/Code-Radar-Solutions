#include<stdio.h>
int main()
{
    int age;
    char name[20],hobby[20];
    printf("");
    scanf("%s%d%s",name,&age,hobby);
    printf("Name:%s",name);
    printf("Age:%d",age);
    printf("Hobby:%s",hobby);
    return 0;
}