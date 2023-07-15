#include <stdio.h>

void f1(int n2, int n1){
    
    printf("after swapping n1=\n");
    printf("%d\n",n2);
    printf("after swapping n2=\n");
    printf("%d",n1);
}






int main() {
    int n1,n2;
    printf("before swapping n1=\n");
    scanf("%d",&n1);
    printf("before swapping n2=\n");
    scanf("%d",&n2);
    f1(n2,n1);
    

    return 0;
}