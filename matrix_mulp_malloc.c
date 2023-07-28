#include<stdio.h>
#include<stdlib.h>

int main(){

    int **a,**b,**cu,r,c;

    //first matrix

    printf("\n\n");

    printf("Enter the number of rows of the first matrix: ");
    scanf("%d",&r);
    a = (int **)malloc(r * sizeof(int *));

    printf("enter the number of columns of the first matrix: ");
    scanf("%d",&c);
    printf("\n");

    for(int i = 0;i<c;i++){
        a[i] = (int *)malloc(c * sizeof(int *));        
    }

    for(int i = 0; i<r;i++){
        for(int j = 0; j<c ; j++){
            printf("enter the %d row's %d column's value: ",i,j);
            scanf("%d",&a[i][j]);
            printf("\n");
        }
    }

    printf("\n");
    printf("The first matrix is ->\n\n");

    for(int i = 0; i<r;i++){
        printf("(");
        for(int j = 0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf(")");
        printf("\n");
    }

    printf("\n");


    //second matrix

    printf("Enter the number of rows of the second matrix: ");
    scanf("%d",&r);

    b = (int **)malloc(r * sizeof(int *));

    printf("enter the number of columns of the second matrix: ");
    scanf("%d",&c);
    printf("\n");

    for(int i = 0;i<c;i++){

        b[i] = (int *)malloc(c * sizeof(int *));
    }


    for(int i = 0; i<r;i++){
        for(int j = 0; j<c ; j++){
            printf("enter the %dth row's %dth value: ",i,j);
            scanf("%d",&b[i][j]);
            printf("\n");
        }
    }

    printf("\n");
    printf("The second matrix is ->\n\n");

    for(int i = 0; i<r;i++){
        printf("(");
        for(int j = 0;j<c;j++){
            printf("%d ",b[i][j]);
        }
        printf(")");
        printf("\n");
    }

    printf("\n");

    //multiplication

    cu = (int **)malloc(r * sizeof(int *));
    for(int i = 0;i<c;i++){
        cu[i] = (int*)malloc(c * sizeof(int *));
    }

    for(int i = 0; i<r;i++){
        for(int k = 0; k<c; k++){

            cu[i][k]=0;

            for(int j = 0;j<c;j++){
                
                cu[i][k] += a[i][j]*b[j][k];

            }

        }
    }

    //result matrix

    printf("The resultant Matrix is: \n\n");

    for(int i=0;i<r;i++){
        printf("(");
        for(int j=0;j<c;j++){
            printf("%d ",cu[i][j]);
        }
        printf(")");
        printf("\n");
    }
    printf("\n");



    return 0;
}
