#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void opc1(int matriz[23][3]){
    float suma[23];
    float promedio[23];
    int i,j;

    for ( i = 0; i < 23; i++){
        for ( j = 0; j < 3; j++){
            suma[i] += matriz[i][j];
            promedio[i] = suma[i]/3;
        }
        printf("Estudiante %d: %f  Promedio: %f\n", i+1, suma[i], promedio[i]);
    }
    
}

void opc2(int matriz[23][3]){
    float suma[23];
    float promedio[23];
    int i,j;

    for ( i = 0; i < 3; i++){
        printf("Progreso %d: ",i+1);
        for ( j = 0; j < 23; j++){
            suma[i] += matriz[i][j];
            promedio[i] = suma[i]/23;
        }
        printf("Suma: %f  Promedio: %f\n", suma[i], promedio[i]);
    }
    
}


int menu(int matriz[23][3], int flag){
    int n;

    
    flag = 1;
    while ( flag == 1){
        printf("\n1. Promedio del semestre de cada estdinte.\n2. Promdio de cada progreso.\n3.Alumno con mayor promedio.");
        printf("\nEscoje una opcion: ");
        scanf("%d", &n);

        switch (n){
        case 1:
            opc1(matriz);
            break;
        case 2:
            opc2(matriz);
        
        default:
            flag=0;
            break;
        }
    }
    

    return flag;
}

int main(){
    int matriz[23][3]={0};
    int i,j;
    int flag=1;

    srand(time(NULL));

    for ( i = 0; i < 23; i++){
        for ( j = 0; j < 3 ; j++){
            matriz[i][j] = rand()%11; 
        }
    }
    for ( i = 0; i < 23; i++){
        printf(" Estudiante %d: ", i+1);
        for ( j = 0; j < 3 ; j++){
            printf("%d ", matriz[i][j]);
            if (matriz[i][j] < 10){
                printf(" ");
            }
            
        }
        printf("\n");
    }
    
    printf("\n******PROGRESO 2******\n");
    while (flag == 1){
        menu(matriz, flag);
    }
    

    return 0;
}