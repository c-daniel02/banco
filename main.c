#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(){
    char usuarioPredeterminado[15] = "daniel";
    char contraseñaPredeterminada[15] = "PAN";
    char usuarioIngresado[20];
    char contraseñaIngresada[20];

    int intentos = 0, intentosRestantes = 0;

    int verificacionCorrecta = 0;
    int opcionMenu = 0;

    float saldoUsuario = 500;
    float saldoDepositar = 0;
    float saldoRetirar = 0;
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
    printf("\n-----  Menu Operaciones  -----\n");
    while (opcionMenu != 4){
        printf("Selecciona una operación para realizar:\n");
        printf("1. Consultar saldo\n");
        printf("2. Retirar\n");
        printf("3. Depositar\n");
        printf("4. Salir\n");
        scanf(" %d", &opcionMenu);

        switch (opcionMenu){
            case 1: //Consulta
                printf("--  CONSULTAR  --\n");
                printf("----- El saldo de su cuenta es: %.2f -----\n\n\n", saldoUsuario);
                break;
            case 2: //Retirar
                printf("--  RETIRAR  --\n");
                printf("¿Qué cantidad quieres retirar?\n");
                printf("Solo se dan múltiplos de 100\n");
                scanf(" %f", &saldoRetirar);
                saldoUsuario = saldoUsuario - saldoRetirar;
                printf("Espere, su dinero se está procesando\n");
                sleep(1);
                printf("...\n");
                sleep(1);
                printf("...\n");
                sleep(1);
                printf("Por favor, tome su dinero\n");
                printf("----- Su saldo ahora es: %.2f -----\n\n\n", saldoUsuario);

                sleep(3);
                break;
            case 3: //Depositar
                printf("--  DEPOSITAR  --\n");
                printf("¿Qué cantidad quieres depositar?\n");
                scanf(" %f", &saldoDepositar);
                printf("se está ingresando su dinero\n");
                saldoUsuario = saldoUsuario + saldoDepositar;
                sleep(1);
                printf("----- Su saldo ahora es: %.2f -----\n\n\n", saldoUsuario);
                sleep(2);
                break;
            case 4: //Salir
                printf("--  Seleccionaste salir  --\n\n\n");
                break;
            default:
                printf("Opción no válida.\n");
        }
    }



    }
    return 0;
}