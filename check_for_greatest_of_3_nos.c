#include <stdio.h>

int main() {
    int a,b,c;
    printf("enter no 1:");
    scanf("%d", &a);
    
    printf("enter no 2:");
    scanf("%d", &b);
    
    printf("enter no 3:");
    scanf("%d", &c);
    
    if(a>b && a>c){
        printf("%d is the largest", a);
    }
    
    else if(b>c && b>a){
        printf("%d is the largest", b);
    }
    
    else{
        printf("%d is the largest",c);
    }

    return 0;
}
