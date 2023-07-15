#include <stdio.h>

void f1(int x){
    
    if (x%2==0){
        
        printf("%s","not a odd number");
    }
    
    else
    printf("%s","The entered number is odd");
}
    








int main() {
    int x;
    printf("enter a number\n");
    scanf("%d",&x);
    f1(x);
    return 