#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//FEITO POR Rafael Sant'Ana de Andrade Osses, Rafael Giordano Matesco e Davi Baruel Lara 1 HID
char opcao1[1], opcao2[1], opcao3[1], opcao4[1], opcao5[1], opcao6[1], opcao7[1], opcao8[1], opcao9[1], opcao10[1];
int acertos;
int erros;

main(){
	
	printf("1-O que significa UNICAST?\n");
	printf("A-Meio de transmissao no qual o pacote e enviado diretamente de um destino.\n");
	printf("B-Comunicacao na qual um quadro e enviado para um grupo especifico de dispositivos ou clientes.\n");
	printf("C-Comunicacao na qual um quadro e enviado de um endereco para todos os outros enderecos.\n");
	printf("Escreva a sua resposta aqui com letra maiuscula:\n");
	scanf("%s", opcao1);
	
	if(strcmp(opcao1,"A")==0 ){
		printf("questao certa! + 1 na sua nota!\n");
		acertos = acertos + 1;
	}else{
		printf("Questao errada! -1 na sua nota!\n");
		erros = erros + 1;
	}
	
	printf("2-O que significa MULTICAST?\n");
	printf("A-Meio de transmissao no qual o pacote e enviado diretamente de um destino.\n");
	printf("B-Comunicacao na qual um quadro e enviado para um grupo especifico de dispositivos ou clientes.\n");
	printf("C-Comunicacao na qual um quadro e enviado de um endereco para todos os outros enderecos.\n");
	printf("Escreva a sua resposta aqui com letra maiuscula:\n");
	scanf("%s", opcao1);
	
	if(strcmp(opcao1,"B")==0 ){
		printf("questao certa! + 1 na sua nota!\n");
		acertos = acertos + 1;
	}else{
		printf("Questao errada! -1 na sua nota!\n");
		erros = erros + 1;
	}
	
	printf("3-O que significa BROADCAST?\n");
	printf("A-Meio de transmissao no qual o pacote e enviado diretamente de um destino.\n");
	printf("B-Comunicacao na qual um quadro e enviado para um grupo especifico de dispositivos ou clientes.\n");
	printf("C-Comunicacao na qual um quadro e enviado de um endereco para todos os outros enderecos.\n");
	printf("Escreva a sua resposta aqui com letra maiuscula:\n");
	scanf("%s", opcao1);
	
	if(strcmp(opcao1,"C")==0 ){
		printf("questao certa! + 1 na sua nota!\n");
		acertos = acertos + 1;
	}else{
		printf("Questao errada! -1 na sua nota!\n");
		erros = erros + 1;
	}
	
	printf("4-Qual o primeiro nome dado a internet-?\n");
	printf("A-ARPAnet.\n");
	printf("B-Ethernet.\n");
	printf("C-Internet.\n");
	printf("Escreva a sua resposta aqui com letra maiuscula:\n");
	scanf("%s", opcao1);
	
	if(strcmp(opcao1,"A")==0 ){
		printf("questao certa! + 1 na sua nota!\n");
		acertos = acertos + 1;
	}else{
		printf("Questao errada! -1 na sua nota!\n");
		erros = erros + 1;
	}
	
	printf("5-O que significa HUB?\n");
	printf("A-Concentrador nao gerenciavel.\n");
	printf("B-Concentrador gerenciavel.\n");
	printf("C-recebe cada pacote e encaminha para o IP de destino, de acordo com regras pre-definidas. Isto e chamado de redirecionamento de portas.\n");
	printf("Escreva a sua resposta aqui com letra maiuscula:\n");
	scanf("%s", opcao1);
	
	if(strcmp(opcao1,"A")==0 ){
		printf("questao certa! + 1 na sua nota!\n");
		acertos = acertos + 1;
	}else{
		printf("Questao errada! -1 na sua nota!\n");
		erros = erros + 1;
	}
	
	printf("6-O que significa SWITCH?\n");
	printf("A-Concentrador nao gerenciavel.\n");
	printf("B-Concentrador gerenciavel.\n");
	printf("C-recebe cada pacote e encaminha para o IP de destino, de acordo com regras pre-definidas. Isto e chamado de redirecionamento de portas.\n");
	printf("Escreva a sua resposta aqui com letra maiuscula:\n");
	scanf("%s", opcao1);
	
	if(strcmp(opcao1,"B")==0 ){
		printf("questao certa! + 1 na sua nota!\n");
		acertos = acertos + 1;
	}else{
		printf("Questao errada! -1 na sua nota!\n");
		erros = erros + 1;
	}
	
	printf("7-O que faz o ROTEADOR?\n");
	printf("A-distribuem os pacotes para os computadores neles conectados, possuem normalmente de 4 a 255 portas para conexao de internet.\n");
	printf("B-Concentrador gerenciavel.\n");
	printf("C-recebe cada pacote e encaminha para o IP de destino, de acordo com regras pre-definidas. Isto e chamado de redirecionamento de portas.\n");
	printf("Escreva a sua resposta aqui com letra maiuscula:\n");
	scanf("%s", opcao1);
	
	if(strcmp(opcao1,"C")==0 ){
		printf("questao certa! + 1 na sua nota!\n");
		acertos = acertos + 1;
	}else{
		printf("Questao errada! -1 na sua nota!\n");
		erros = erros + 1;
	}
	
	printf("8-O que faz a economia inteligente?\n");
	printf("A-Mede a capacidade economica da cidade e as empresas instaladas na cidade\n");
	printf("B-Mede o desenvolvimento econômico e social da populacao da cidade \n");
	printf("C-Mede a qualidade e transparencia dos servicos publicos \n");
	printf("Escreva a sua resposta aqui com letra maiuscula:\n");
	scanf("%s", opcao1);
	
	if(strcmp(opcao1,"A")==0 ){
		printf("questao certa! + 1 na sua nota!\n");
		acertos = acertos + 1;
	}else{
		printf("Questao errada! -1 na sua nota!\n");
		erros = erros + 1;
	}
	
	printf("9-O que faz a populacao inteligente?\n");
	printf("A-Mede a capacidade economica da cidade e as empresas instaladas na cidade\n");
	printf("B-Mede o desenvolvimento economico e social da populacao da cidade \n");
	printf("C-Mede a qualidade e transparencia dos servicos publicos \n");
	printf("Escreva a sua resposta aqui com letra maiuscula:\n");
	scanf("%s", opcao1);
	
	if(strcmp(opcao1,"B")==0 ){
		printf("questao certa! + 1 na sua nota!\n");
		acertos = acertos + 1;
	}else{
		printf("Questao errada! -1 na sua nota!\n");
		erros = erros + 1;
	}
	
		printf("10-O que faz a governanca inteligente?\n");
	printf("A-Mede a capacidade economica da cidade e as empresas instaladas na cidade\n");
	printf("B-Mede o desenvolvimento economico e social da população da cidade \n");
	printf("C-Mede a qualidade e transparencia dos servicos publicos \n");
	printf("Escreva a sua resposta aqui com letra maiuscula:\n");
	scanf("%s", opcao1);
	
	if(strcmp(opcao1,"C")==0 ){
		printf("questao certa! + 1 na sua nota!\n");
		acertos = acertos + 1;
	}else{
		printf("Questao errada! -1 na sua nota!\n");
		erros = erros + 1;
	}
	
	printf("\n=======================================");
	printf("\nsua nota foi = %d\n", acertos);
	printf("O total de acertos foi = %d \no total de erros foi = %d \n", acertos, erros);
	system("pause");
}
