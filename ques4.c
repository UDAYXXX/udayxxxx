#include <stdio.h>

int main() {
    int x;
printf("enter a number\n");    
    scanf("%d",&x);
    
    for(int i = 1; i<11;i++){
        
        printf("%d\n",x*i);
    }

    return 0;
}