#include <stdio.h>
int main() {
    int a,j;
    scanf("%d",&a);
    for(int i=a;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}