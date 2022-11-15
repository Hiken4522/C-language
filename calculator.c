#include<stdio.h>
int main()
{
    int a,b,d,e,f,g,h;
    char c[]="";
    printf("welcome to the calculator program!\n");
    printf("what would you like to do:\n1.Add\n2.Subtract\n3.Divide\n4.Multiply\n");
    scanf("%s",&c);
    d = strcmp(c,"add");
    e = strcmp(c,"subtract");
    f = strcmp(c,"divide");
    g = strcmp(c,"multiply");
    if(d == 0){
        printf("enter the nos that you want to add:\n");
        scanf("%d %d",&a,&b);
        h = a+b;
        printf("the answer is %d",h);
    }
    else if(e == 0){
        printf("enter the nos that you want to subtract:\n");
        scanf("%d %d",&a,&b);
        h = a-b;
        printf("the answer is %d",h);
    }
    else if(f == 0){
        printf("enter the nos that you want to divide:\n");
        scanf("%d %d",&a,&b);
        h = a/b;
        printf("the answer is %d",h);
    }
    else if(g == 0){
        printf("enter the nos that you want to multiply:\n");
        scanf("%d %d",&a,&b);
        h = a*b;
        printf("the answer is %d",h);
    }
    return 0;
}
