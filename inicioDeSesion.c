#include <stdio.h>
#include <string.h>

int main(){
    char usuarioPredeterminado[15] = "daniel";
    char contraseñaPredeterminada[15] = "Computadora";
    char usuarioIngresado[20];
    char contraseñaIngresada[20];

    int intentos = 0, intentosRestantes = 0;

    int verificacionCorrecta = 0;
////////////////////////////////////////////////////////////////////////////////////    
    printf("\n----------Inicio de sesión del banco---------\n");

    while (intentos < 3){
        printf("\nPor favor, ingresa tu usuario: \n");
        scanf(" %s", usuarioIngresado);
        printf("Ingresa tu contraseña: \n");
        scanf(" %s", contraseñaIngresada);

        if (strcmp(usuarioPredeterminado, usuarioIngresado) == 0 && strcmp(contraseñaPredeterminada, contraseñaIngresada) == 0){
            printf("\nCredenciales correctas, bienvenido. \n");
            verificacionCorrecta = 1;
            break; 
        }else {
            intentos++;
            intentosRestantes = 3 - intentos;
            printf("\n-----Credenciales incorrectas. ");
            if(intentosRestantes >= 1){
            printf("Intentos restantes: %d-----\n", intentosRestantes);
            }
        }
        if (intentos == 3){
            printf("Superaste el número de intentos-----\n");
        }
    }
/////////////////////////////////////////////////////////////////////////////////////// 

    return 0;
}