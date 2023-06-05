#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void opc1(int matriz[23][3]){
    int suma[23];

    for (int i = 0; i < 23; i++){
        for (int j = 0; j < 3; j++){
            suma[i] = matriz[i][j];
        }
        
    }
    
        
}

int menu(int matriz[23][3], int flag){
    int flag;
    int n;

    
    flag = 1;
    while ( flag == 1){
        printf("1. Promedio del semestre de cada estdinte.\n2. Promdio de cada progreso.\n 3.Alumno con mayor promedio.");
        printf("Escoje una opcion: ");
        scanf("%d", &n);

        switch (n){
        case 1:
            opc1(matriz[23][3]);
            break;
        
        default:
            break;
        }
    }
    

    return flag;
}

int main(){
    int matriz[23][3];
    int i,j;

    srand(time(NULL));

    for ( i = 0; i < 23; i++){
        for ( j = 0; j < 3 ; j++){
            matriz[i][j] = rand()%10; 
        }
    }
    for ( i = 0; i < 23; i++){
        printf(" Estudinte: %d", i+1);
        for ( j = 0; j < 3 ; j++){
            printf("%d", matriz[i][j]);
            if (matriz[i][j] < 10){
                printf(" ");
            }
            
        }
        printf("\n");
    }
    

    return 0;
}