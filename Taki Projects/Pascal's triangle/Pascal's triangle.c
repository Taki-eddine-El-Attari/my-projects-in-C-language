#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;
    do{
    printf("Put the degree of Pascal's triangle : ");
    scanf("%d",&n);
    }while(n<0);

    int T[n][n];

    for(i=0 ; i<=n ; i++){
        T[i][0]=1;

    }
    for(i=0 ; i<=n ; i++){
        T[i][i]=1;
        }
    for(i=2 ; i<=n ; i++){
        for(j=0 ; j<=i ; j++){
            if(j==1){
                T[i][1]= T[i][0] + T[i-1][1];
            }
            if(j>1 && j!=i){
                T[i][j]=T[i-1][j-1]+T[i-1][j];
            }
        }
    }
    for(i=0 ; i<=n ; i++){
        for(j=0 ; j<=i ; j++){
           printf("%d  ",T[i][j]);
        }
        printf("\n");
    }
    return 0;
}
