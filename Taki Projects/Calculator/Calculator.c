#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int N,i,R1,R2;
    float P,D,T;
    do{
        printf("---- Calculatrice: MENU ---- \n");
        printf("1_ Addition\n");
        printf("2_ Soustraction\n");
        printf("3_ Multiplication\n");
        printf("4_ Division\n");
        printf("5_ reste d'une division entier\n");
        printf("6_ Puissance\n");
        printf("Choisir le nombre de l'opperation que vous voullez : ");
        scanf("%d",&N);
        switch(N){
           case 1: printf("Put the value of the first term ");
                   scanf("%f",&P);
                   printf("Put the value of the second term ");
                   scanf("%f",&D);
                   T=P+D;
                   printf("the sum worth : %4f \n",T);
                   break;

           case 2: printf("Donner la valeur du premier terme ");
                   scanf("%f",&P);
                   printf("Donner la valeur du deuxieme terme ");
                   scanf("%f",&D);
                   T=P-D;
                   printf("La soustraction vaut : %.2f \n",T);
                   break;

           case 3: printf("Donner la valeur du premier terme ");
                   scanf("%f",&P);
                   printf("Donner la valeur du deuxieme terme ");
                   scanf("%f",&D);
                   T=P*D;
                   printf("La multiplication vaut : %.2f \n",T);
                   break;

           case 4: printf("Donner la valeur du numerateur ");
                   scanf("%f",&P);
                   do{
                   printf("Donner la valeur du denominateur non nul ");
                   scanf("%f",&D);
                   }while(D==0);
                   T=P/D;
                   printf("La Division de %f sur %f vaut : %.2f \n",P,D,T);
                   break;

           case 5: printf("Donner la valeur du numerateur ");
                   scanf("%d",&R1);
                   do{
                   printf("Donner la valeur du denominateur non nul ");
                   scanf("%d",&R2);
                   }while(R2==0);
                   T=R1%R2;
                   printf("Le reste de la division de %d sur %d vaut : %.2f \n",R1,R2,T);
                   break;

           case 6: printf("Donner la valeur du nombre ");
                   scanf("%f",&P);
                   printf("Donner la valeur de la puissance ");
                   scanf("%f",&D);
                   if(P==0 && D==0)
                    printf("ERREUR 404 \n");
                   else{
                   T=pow(P,D);
                   printf("%f a la puissance %f vaut : %.2f \n",P,D,T);}
                   break;

           default: printf("Vous n'avez pas choisis un nombre entre 1 et 6 \n");



        }printf("Voullez vous continuer a utiliser la calculatrice ? oui=1 ");
        scanf("%d",&i);
        printf("\n");

    }while(i==1);
    return 0;
}
