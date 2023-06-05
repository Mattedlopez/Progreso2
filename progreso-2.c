#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void opc1(int matriz[23][3]){
    float suma[23]={0};
    float promedio[23]={0};
    int i,j;

    for ( i = 0; i < 23; i++){
        for ( j = 0; j < 3; j++){
            suma[i] += matriz[i][j];
            promedio[i] = suma[i]/3;
        }
        printf("\nEstudiante %d: %.2f", i+1, promedio[i]);
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
        printf("%.2f\n", promedio[i]);
    }
    
}

void opc3(int matriz[23][3]){
    float suma[23]={0};
    float promedio[23]={0};
    int max;
    int i,j;

    for ( i = 0; i < 23; i++){
        for ( j = 0; j < 3; j++){
            suma[i] += matriz[i][j];
        }
    promedio[i] = suma[i]/3;
        if (promedio[i] > promedio[max]){
            max = i;
        }
        
    }
    printf("Estudiante %d: %.2f  Promedio: %.2f\n", i, suma[i], promedio[max]);
}

int menu(int matriz[23][3], int flag){
    int n;
    flag = 1;
    while ( flag == 1){
        printf("\n\n1. Promedio del semestre de cada estdinte.\n2. Promdio de cada progreso.\n3.Alumno con mayor promedio.");
        printf("\nEscoje una opcion: ");
        scanf("%d", &n);

        switch (n){
        case 1:
            opc1(matriz);
            break;
        case 2:
            opc2(matriz);
            break;
        case 3:
            opc3(matriz);
            break;
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
        if (i+1 < 10){
            printf(" ");
        }
        
        for ( j = 0; j < 3 ; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\n******PROGRESO 2******");
    while (flag == 1){
        menu(matriz, flag);
    }
    

    return 0;
}