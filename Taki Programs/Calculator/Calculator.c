#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int N,i,R1,R2;
    float P,D,T;
    do{
        printf("---- Calculator : MENU ---- \n");
        printf("1_ Addition\n");
        printf("2_ Subtraction\n");
        printf("3_ Multiplication\n");
        printf("4_ Division\n");
        printf("5_ Remainder of an integer division\n");
        printf("6_ Power\n");
        printf("Choose the number of the operation you want : ");
        scanf("%d",&N);
        switch(N){
           case 1: printf("Put the value of the first term ");
                   scanf("%f",&P);
                   printf("Put the value of the second term ");
                   scanf("%f",&D);
                   T=P+D;
                   printf("the sum is : %4f \n",T);
                   break;

           case 2: printf("Put the value of the first term ");
                   scanf("%f",&P);
                   printf("Put the value of the second term ");
                   scanf("%f",&D);
                   T=P-D;
                   printf("The subtraction is : %.2f \n",T);
                   break;

           case 3: printf("Put the value of the first term ");
                   scanf("%f",&P);
                   printf("Put the value of the second term ");
                   scanf("%f",&D);
                   T=P*D;
                   printf("The multiplication is : %.2f \n",T);
                   break;

           case 4: printf("Put the value of the numerator ");
                   scanf("%f",&P);
                   do{
                   printf("Put the value of the non-zero denominator ");
                   scanf("%f",&D);
                   }while(D==0);
                   T=P/D;
                   printf("The division of %f by %f equals: %.2f \n",P,D,T);
                   break;

           case 5: printf("Put the value of the numerator ");
                   scanf("%d",&R1);
                   do{
                   printf("Put the value of the non-zero denominator ");
                   scanf("%d",&R2);
                   }while(R2==0);
                   T=R1%R2;
                   printf("The remainder of the division of %d by %d is: %.2f \n",R1,R2,T);
                   break;

           case 6: printf("Put the value of the base ");
                   scanf("%f",&P);
                   printf("Put the value of the exponent ");
                   scanf("%f",&D);
                   if(P==0 && D==0)
                    printf("ERREUR 404 \n");
                   else{
                   T=pow(P,D);
                   printf("%f to the power of %f equals: %.2f \n",P,D,T);}
                   break;

           default: printf("You didn't choose a number between 1 and 6. \n");



        }printf("Do you want to continue using the calculator? yes=1 ");
        scanf("%d",&i);
        printf("\n");

    }while(i==1);
    return 0;
}
