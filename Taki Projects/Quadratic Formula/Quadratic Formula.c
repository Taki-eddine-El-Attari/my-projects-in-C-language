#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Solutions(int a, int b, int c){
    int D;
    float x1,x2,x;
    D=pow(-b,2)-(4*a*c);
    if(D<0)
        printf("The equation has no solution. \n");
    else if(D==0){
        x=(-b)/(2*a);
        printf("The equation has only one solution : x= %.2f \n",x);
    }
    else{
        x1=(-b-sqrt(D))/(2*a);
        x2=(-b+sqrt(D))/(2*a);
        printf("The equation has two solutions : x1= %.2f , x2= %.2f \n",x1,x2);
    }
}

int main()
{
    int a,b,c,z;
    printf("---- Quadratic Equation Solving ax^2 + bx + c = 0 : ---- \n\n");
    do{
    printf("Put the value of the number a : ");
    scanf("%d",&a);
    printf("Put the value of the number b : ");
    scanf("%d",&b);
    printf("Put the value of the number c : ");
    scanf("%d",&c);
    Solutions(a,b,c);
    printf("\nDo you want to continue using this program ? yes=1 : ");
    scanf("%d",&z);
    printf("\n");
    }while(z == 1);

    return 0;
}
