//Rafael Giordano Matesco, Davi Baruel Lara, Rafael Sant'Ana de Andrade Osses 1HID
#include <stdio.h>
#include <stdlib.h>

int a, b, c, d;
int DiaSemana;
int x = 4, y = 100, z = 400;

main(){

    printf("digite o dia em que voce nasceu: ");
    scanf("%d", &d);
    printf("digite o ano em que voce nasceu: ");
    scanf("%d", &a);
    printf("digite o mes em que voce nasceu:");
    scanf("%d", &c);

	if((c == 1) || (c == 10)){
                c = 0;
            }else{
                    if((c == 2) || (c == 3) || (c == 11)){
                    c = 3;
                }else{
                        if((c == 4) || (c == 7)){
                        c = 6;
                    }else{
								if((c == 9) || (c == 12)){
                                c = 5;
                            }else{
                                    if(c == 5){
                                    c = 1;
                                }else{
                                        if(c == 6){
                                        c = 4;
                                    }else{
                                            if(c == 8){
                                            c = 2;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }           
    	

    if(a % x == 0){
            if( a % y != 0){
                printf("\n%d e um ano bissexto!\n", a);
            }else{
            printf("\n%d nao e um ano bissexto!\n", a);
        }
    }else{
            printf("\n%d nao e um ano bissexto!\n", a);
        }
    d = d - 1;
    a = a - 1900;
    b = a/4;
    DiaSemana = (a+b+c+d)%7;

    if(DiaSemana == 0){
        printf("voce nasceu em uma segunda feira!\n");
    }else if(DiaSemana == 1){
        printf("voce nasceu em uma terca feira!\n");
    }else if(DiaSemana == 2){
        printf("voce nasceu em uma quarta feira!\n");
    }else if(DiaSemana == 3){
        printf("voce nasceu em uma quinta feira!\n");
    }else if(DiaSemana == 4){
        printf("voce nasceu em uma sexta feira!\n");
    }else if(DiaSemana == 5){
        printf("voce nasceu em um sabado\n");
    }else if(DiaSemana == 6){
        printf("voce nasceu em um domingo!\n");
    }
    system("pause");
    return(0);
}
