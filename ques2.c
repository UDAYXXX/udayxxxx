#include <stdio.h>

void f1(int n){
    for(int i=2;i<=n;i++){
        
        if(n%i==0 && n/i==1){
            printf("%s\n","The number  is a prime number");
        }
        else
        {
            printf("%s\n","The number  is not a prime number");
        }
    }
}



int main() {
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    f1(n);

    return 0;
}