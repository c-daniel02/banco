#include <stdio.h>
#include <string.h>

int main(){
    char usuarioPredeterminado[15] = "daniel";
    char contraseñaPredeterminada[15] = "PAN";
    char usuarioIngresado[20];
    char contraseñaIngresada[20];

    
    int intentos = 0, intentosRestantes = 0;

    int verificacionCorrecta = 0;
    int opcionMenu = 0;

    float saldoUsuario = 500;
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
    if(verificacionCorrecta == 1){
        printf("Selecciona una opción:\n");
        printf("1. Consultar saldo\n");
        printf("2. Retirar\n");
        printf("3. Depositar\n");
        printf("4. Salir\n");

    while (opcionMenu != 4){
        printf("\n-----  Menu Operaciones  -----\n");
        printf("Selecciona una operación para realizar:\n");
        printf("Selecciona una opción:\n");
        printf("1. Consultar saldo\n");
        printf("2. Retirar\n");
        printf("3. Depositar\n");
        printf("4. Salir\n");
        scanf(" %d", &opcionMenu);

        switch (opcionMenu){
        case 1: //Consulta
            printf("--  Seleccionaste consultar  --\n");
            printf("El saldo de tu cuenta es: %.2f", saldoUsuario);
            break;
        case 2: //Retirar
            printf("--  Seleccionaste retirar  --\n");
            
            break;
        case 3: //Depositar
            printf("--  Seleccionaste depositar  --\n");
            
            break;
        case 4: //Salir
            printf("--  Seleccionaste salir  --\n");
            break;
        default:
            printf("Opción no válida.\n");
        }
    }



    }
    return 0;
}