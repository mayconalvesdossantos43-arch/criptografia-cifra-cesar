#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main(){
        int escolha;
        char msg[15];
        int i;
        int shift;

        do{
            printf("-------------------------\n");
            printf("*  O que deseja fazer?  *\n");
            printf("* [0] - Sair            *\n");
            printf("* [1] - Criptografar PA *\n");
            printf("* [2] - Criptografar PG *\n");
            printf("-------------------------\n");

            printf("Digite sua escolha: ");
            scanf("%d", &escolha);

            fflush(stdin);

            while(escolha >= 3){
            printf("Digite um numero valido: ");
            scanf("%d", &escolha);
            }

        }while(escolha != 0 && escolha != 1  && escolha != 2);

        if(escolha == 0) return 0;


        switch(escolha){

            case 1:

                printf("\nDigite a mensagem que deseja criptografar: ");
                fflush(stdin);
                scanf("%s", msg);

                do{
                    printf("\nDigite o SHIFT: ");
                    fflush(stdin);
                    scanf("%d", &shift);
                    if(shift > 26){
                    printf("\nDigite um SHIFT abaixo de 25: ");
                    scanf("%d", &shift);
                    }
                }while(shift < 0 || shift > 26);

                for(int i = 0; i < strlen(msg); i++){
                    if(msg[i] >= 'a' && msg[i] <= 'z'){
                        if(msg[i] + shift > 'z'){
                            msg[i] = msg[i] - 26 + shift;
                        }else{
                            msg[i] += shift;
                        }
                    }else if (msg[i] >= 'A' && msg[i] <= 'Z'){
                        if(msg[i] + shift > 'Z'){
                            msg[i] = msg[i] - 26 + shift;
                        } else{
                        msg[i] += shift;
                        }
                    }
                }
                printf("\nMensagem: %s\n", msg);

                break;

            case 2:

                // Aqui iniciará o PG, em processo ainda


    return 0;
    }
}
