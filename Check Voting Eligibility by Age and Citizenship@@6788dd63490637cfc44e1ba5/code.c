#include <stdio.h>
int main() {
    int age,n;
    scanf("%d%d",&age,&n);
    if(age>=18 && n==1)
    printf("Eligible");
    else if(age>=0 && n==0)
    printf("Not Eligible");
    else
    printf("Not Eligible");
    return 0;
}