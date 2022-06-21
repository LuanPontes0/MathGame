#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX_LENGTH 50
#define NUM_STRINGS 50
#include<conio.h>
#include <windows.h>
void gotoxy(int x, int y)
{
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 int posicionador = 5 ;
	 int posicionadorY = 5 ;
	char nomes2[50][50] = {"nome","nome","nome","nome"};
	int vetor2[4] = {0,0,0,0};
	char playersNome[30][30]  = {""}; 	
	system("color 71");
	char respostaUserS;
	setlocale(LC_ALL, "Portuguese");
	int matrizS1[4][4];
	int matrizS2[4][4];
	int matrizS3[4][4];
	int matrizS4[4][4];
	int pontuacao = 0 ; 
 	int score = 0; 
	int escolhaUser ;	
	char nomeUsuario[30] = "";
	char emailUsuario[30] = "";
	char senhaUsuario[30] = "";
	char codigoUsuario[30] = "";
	char player1 [NUM_STRINGS][MAX_LENGTH] = {"nome","email","senha","codigo"};
	char player2 [NUM_STRINGS][MAX_LENGTH] = {"nome","email","senha","codigo"};
	char player3 [NUM_STRINGS][MAX_LENGTH] = {"nome","email","senha","codigo"};
	char player4 [NUM_STRINGS][MAX_LENGTH] = {"nome","email","senha","codigo"};
	char playerAtual [NUM_STRINGS][MAX_LENGTH] = {"nome","email","senha","codigo"};
	int player1Score = 0 ; 
	int player2Score = 0 ; 
	int player3Score = 0 ; 
	int player4Score = 0 ; 
	int carregarJogo ; 

	
	void textoInicial(){
		int playersRank[4] = {0,0,0,0};
		void textoMenu()
	{
		void textoJogo()
	{
  
 	int coluna;
	int linha;
 	pontuacao = 0 ; 
 	score = 0; 
	int mostrouGameOver = 0 ;
	int winGame = 0 ; 
	int achouZero ;
	int achouN = 0;
	int soma0_0 = 0 ;
	int soma0_1 = 0 ;
	int soma0_2 = 0 ;
	int soma0_3 = 0 ;
	int soma1_0 = 0 ;
	int soma1_1 = 0 ;
	int soma1_2 = 0 ;
	int soma1_3 = 0 ;
	int soma2_0 = 0 ;
	int soma2_1 = 0 ;
	int soma2_2 = 0 ;
	int soma2_3 = 0 ;
	int soma3_0 = 0 ;
	int soma3_1 = 0 ;
	int soma3_2 = 0 ;
	int soma3_3 = 0 ;
	void placar(){
		
		int i, j;
		playersRank[0] = vetor2[0];
		playersRank[1] = vetor2[1];
		playersRank[2] = vetor2[2];
		playersRank[3] = vetor2[3];
		if(strcmp(playerAtual[0],player1[0]) == 0 && score>=playersRank[0]){
				playersRank[0] = score;
		}if(strcmp(playerAtual[0],player2[0]) == 0 && score>=playersRank[1]){
				playersRank[1] = score;
		}if(strcmp(playerAtual[0],player3[0]) == 0 && score>=playersRank[2]){
				playersRank[2] = score;
		}if(strcmp(playerAtual[0],player4[0]) == 0 && score>=playersRank[3]){
				playersRank[3] = score;
		}
		
		strcpy(playersNome[0], player1[0]);
		strcpy(playersNome[1], player2[0]);
		strcpy(playersNome[2], player3[0]);
		strcpy(playersNome[3], player4[0]);
		char nome1teste[50] ;
		char nome2teste[50] ;
		char nome3teste[50] ;
		char nome4teste[50] ;
		strcpy(nome1teste,player1[0]);
		strcpy(nome2teste,player2[0]);
		strcpy(nome3teste,player3[0]);
		strcpy(nome4teste,player4[0]);
	char nomes1[50][50] = {"luan", "pedro", "thiago", "gusta"} , a1[50],b1[50],c1[50],d1[50] ;
	strcpy(nomes1[0], nome1teste);
	strcpy(nomes1[1], nome2teste);
	strcpy(nomes1[2], nome3teste);
	strcpy(nomes1[3], nome4teste);
	int vetor1[4] ={playersRank[0],playersRank[1],playersRank[2],playersRank[3]}, a = -1, b = -1 ,c = -1 ,d = -1;
	vetor2[0] = 0 ;
	vetor2[1] = 0 ;
	vetor2[2] = 0 ;
	vetor2[3] = 0 ;
	strcpy(nomes2[0], a1);
	strcpy(nomes2[1], b1);
	strcpy(nomes2[2], c1);
	strcpy(nomes2[3], d1);
	for(i = 0 ; i<4; i++){

		
		if(vetor1[i] >= d ){
			strcpy(d1, nomes1[i]);
			d = vetor1[i];
		}if(vetor1[i]>c){
			d = 0 ; 
			d = c ; 
			c = vetor1[i];
			strcpy(d1, c1);
			strcpy(c1, nomes1[i]);
		}if(vetor1[i]>b){
			c = 0 ; 
			c = b ; 
			b = vetor1[i];
			strcpy(c1, b1);
			strcpy(b1, nomes1[i]);
		}if(vetor1[i]>a){
			
			if(strcmp(nomes1[i],a1) == 0){
				
			a = vetor1[i];
			strcpy(a1, nomes1[i]);
			
			}else if(strcmp(b1,a1)!=0 &&  strcmp(nomes1[i],a1)!=0){
			b = 0;
			b = a ;
			strcpy(b1, a1);
			a = vetor1[i];
			strcpy(a1, nomes1[i]);
		}else if(strcmp(b1,a1)==0){
			b = 0;
			strcpy(b1, "nome");
		a = vetor1[i];
		strcpy(a1, nomes1[i]);
	}
		}
	}
	vetor2[0] = a ;
	vetor2[1] = b ; 
	vetor2[2] = c ;
	vetor2[3] = d ;
	strcpy(nomes2[0], a1);
	strcpy(nomes2[1], b1);
	strcpy(nomes2[2], c1);
	strcpy(nomes2[3], d1);

	
	
	
}
		
	
		
	
	
	
	int matriz[4][4] = {0} ;
	void carregaJogo(){
		for(linha = 0; linha<4;linha++){
			for(coluna = 0 ; coluna<4; coluna++){
					if(strcmp(playerAtual[0], player1[0]) == 0){
						
					matriz[linha][coluna] = matrizS1[linha][coluna];
					
			}else if(strcmp(playerAtual[0], player2[0]) == 0){
				
					matriz[linha][coluna] = matrizS2[linha][coluna]; 
					
			}else if(strcmp(playerAtual[0], player3[0]) == 0){
				
					matriz[linha][coluna] = matrizS3[linha][coluna]; 
					
			}else if(strcmp(playerAtual[0], player4[0]) == 0){
				
					matriz[linha][coluna] = matrizS4[linha][coluna]; 
			}
			}
		}
	}
		
	
	
		
	if(carregarJogo == 1){
		carregaJogo();
	}
						
	
	int contador;
	int respostaUser;
	void mostraMatriz(){
		
		char corRed[50] = "\x1b[31m";
		char corDefault[50] = "\x1b[1m\x1b[47m\x1b[34m";
		char colorir0_0[50] = "\x1b[1m\x1b[100m\x1b[32m";
		char colorir0_1[50] = "\x1b[1m\x1b[40m\x1b[33m";
		char colorir0_2[50] = "\x1b[1m\x1b[40m\x1b[35m";
		char colorir0_3[50] = "\x1b[1m\x1b[40m\x1b[36m";
		char colorir1_0[50] = "\x1b[1m\x1b[40m\x1b[33m";
		char colorir1_1[50] = "\x1b[1m\x1b[40m\x1b[35m";
		char colorir1_2[50] = "\x1b[1m\x1b[40m\x1b[36m";
		char colorir1_3[50] = "\x1b[1m\x1b[40m\x1b[32m";
		char colorir2_0[50] = "\x1b[1m\x1b[40m\x1b[33m";
		char colorir2_1[50] = "\x1b[1m\x1b[40m\x1b[35m";
		char colorir2_2[50] = "\x1b[1m\x1b[40m\x1b[36m";
		char colorir2_3[50] = "\x1b[1m\x1b[40m\x1b[33m";
		char colorir3_0[50] = "\x1b[1m\x1b[40m\x1b[38m";
		char colorir3_1[50] = "\x1b[1m\x1b[40m\x1b[39m";
		char colorir3_2[50] = "\x1b[1m\x1b[40m\x1b[32m";
		char colorir3_3[50] = "\x1b[1m\x1b[40m\x1b[33m";
		
		if(matriz[0][0] == 0){
			strcpy(colorir0_0,"\x1b[1m\x1b[100m\x1b[32m");
		}else if (matriz[0][0] == 2){
			strcpy(colorir0_0,"\x1b[1m\x1b[40m\x1b[31m");
		}
		
		/*for(linha = 0;linha<4;linha++){
		for(coluna = 0;coluna<4;coluna++){
			printf(" %i ",matriz[linha][coluna]);
		}
		printf("\n");
		
	}
	printf("Pressione: ceta para cima : cima ;ceta para baixo  : baixo ;ceta para direita: Direita; ceta para Esquerda : esquerda\n");
	printf("Pontuação Atual: %d ",pontuacao);*/
	system("cls");
		printf("                                                                                \n");
	printf("\033[%d;%dH--=-==-=--=-==-=-=-=-=-=-=--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-==--=-=-\n",(5), (42));
	printf("\033[%d;%dH*                          _______                            *\n",(1+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*     ||||  ||||    |||    |-------| ||    ||             -   *\n",(2+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*     || |||| ||   || ||      |||    ||____||           +     *\n",(3+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*     ||  ||  ||  || _ ||     |||    ||----||            -    *\n",(4+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*     ||      || ||     ||    |_|    ||    ||           +     *\n",(5+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*                    ||||||     ||             ||||||    -    *\n",(6+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*                    ||        ||||   |||  ||| ||       +     *\n",(7+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*                    || ||||  ||__||  || ||||| ||||||    -    *\n",(8+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH* 2+2=peixe          ||||||| ||    || ||    || ||       _     *\n",(9+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*                                              ||||||    +    *\n",(10+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*                                                        +    *\n",(11+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH--=-==-=--=-==-=-=-=-=-=-=--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n",(17), (42));
	printf("\033[%d;%dH___________________________________________________                                                                   \n",(13+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH||          ||           ||           ||           ||       JOGADOR : %s             \n",(14+posicionador), (40+posicionadorY),playerAtual[0] );
	printf("\033[%d;%dH||          ||           ||           ||           ||       PONTUACAO: %d             \n",(15+posicionador), (40+posicionadorY), score);
	printf("\033[%d;%dH||   %s %d %s          %s %d %s           %s %d %s          %s %d %s                                         \n",(16+posicionador), (40+posicionadorY),colorir0_0,matriz[0][0],corDefault,colorir0_1,matriz[0][1],corDefault,colorir0_2,matriz[0][2],corDefault,colorir0_3,matriz[0][3],corDefault);
	printf("\033[%d;%dH||          ||           ||           ||           ||       movimentos:%d                           \n",(17+posicionador), (40+posicionadorY),pontuacao);
	printf("\033[%d;%dH||__________||___________||___________||___________||       1: começar novamente                            \n",(18+posicionador), (40+posicionadorY));	
	printf("\033[%d;%dH||          ||           ||           ||           ||       ESC: voltar para o menu principal\n",(19+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH||          ||           ||           ||           ||                                   \n",(20+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH||   %s %d %s          %s %d %s          %s %d %s          %s %d %s                                       \n",(21+posicionador), (40+posicionadorY),colorir1_0,matriz[1][0],corDefault,colorir1_1,matriz[1][1],corDefault,colorir1_2,matriz[1][2],corDefault,colorir1_3,matriz[1][3],corDefault);
	printf("\033[%d;%dH||          ||           ||           ||           ||                                  \n",(22+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH||__________||___________||___________||___________||                                   \n",(23+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH||          ||           ||           ||           ||                                 \n",(24+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH||          ||           ||           ||           ||                                   \n",(25+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH||   %s %d %s          %s %d %s           %s %d %s          %s %d %s              \n",(26+posicionador), (40+posicionadorY),colorir2_0,matriz[2][0],corDefault,colorir2_1,matriz[2][1],corDefault,colorir2_2,matriz[2][2],corDefault,colorir2_3,matriz[2][3]),corDefault;
	printf("\033[%d;%dH||          ||           ||           ||           ||      seta pra cima: mover numeros para cima\n",(27+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH||__________||___________||___________||___________||      seta pra baixo: mover numeros para baixo\n",(28+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH||          ||           ||           ||           ||      seta pra direita: mover numeros para direita\n",(29+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH||          ||           ||           ||           ||      seta pra esquerda: mover numeros para esquerda\n",(30+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH||    %s %d %s         %s %d %s           %s %d %s           %s %d %s                                         \n",(31+posicionador), (40+posicionadorY),colorir3_0,matriz[3][0],corDefault,colorir3_1,matriz[3][1],corDefault,colorir3_2,matriz[3][2],corDefault,colorir3_3,matriz[3][3],corDefault);
	printf("\033[%d;%dH||          ||           ||           ||           ||                                  \n",(32+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH||__________||___________||___________||___________||                                   \n",(33+posicionador), (40+posicionadorY));
	respostaUser = getch();
	//respostaUser = rand()%5 ;
	
	}
	void ganhaJogo(){
		int linhaX, colunaX, ganhou ;
		for(linhaX = 0 ; ganhou!=1 && linhaX<4 ; linhaX++){
			for(colunaX = 0 ; ganhou !=1 && colunaX<4  ; colunaX++){
				if (matriz[linhaX][colunaX] > score){
					score = matriz[linhaX][colunaX] ; 
				}
				if(matriz[linhaX][colunaX] == 2048){
					
					winGame = 1 ;
					mostrouGameOver = 1; 
					ganhou = 1 ; 
					break ; 
				} 
				
			}}
	}
	void varreMatriz(){
		int i, j;
		achouN = 0;
		achouZero = 0;
		
		
		for(i = 0 ; achouN !=1 && i<4 ; i++){
			for(j = 0 ; achouN !=1 && j<4  ; j++){
				
				
				
				if(matriz[i][j] == 0){
					
					achouZero = 1 ;
					achouN = 1 ; 
					break;
				}else if(matriz[i][j] == matriz[i][j+1] && j!=3)  {
					
					achouN = 1 ; 
					break;
				}else if(matriz[i][j] == matriz[i+1][j] && i != 3 ){
					
					achouN = 1 ; 
					break;
				} if (i == 3 && j == 3 && achouN == 0 &&  achouZero == 0   ){
					
					mostrouGameOver = 1; 
					
					break;
					
				}	
					
			}
		}
	}	
			
	void randomMatriz(){
		srand(time(NULL));
		
		int x,y,achou;
		while(achouZero == 1 ){
		
		x = rand()%4 ;
		y = rand()%4 ;
		if(matriz[x][y] == 0 ){
			matriz[x][y] = 2 ;
			break;
			
}
	
	}
}
	void salvaJogo(){
		for(linha = 0; linha<4;linha++){
			for(coluna = 0 ; coluna<4; coluna++){
				if(strcmp(playerAtual[0], player1[0]) == 0){
					
					matrizS1[linha][coluna] = matriz[linha][coluna];
					
			}else if(strcmp(playerAtual[0], player2[0]) == 0){
				
					matrizS2[linha][coluna] = matriz[linha][coluna]; 
					
			}else if(strcmp(playerAtual[0], player3[0]) == 0){
				
					matrizS3[linha][coluna] = matriz[linha][coluna]; 
					
			}else if(strcmp(playerAtual[0], player4[0]) == 0){
				
					matrizS4[linha][coluna] = matriz[linha][coluna]; 
			}
			
		}
	}}
	void movCima(){ 
		if(matriz[0][0] == 0  || matriz[0][0] == matriz[1][0]    ){
			if(matriz[0][0] == matriz[1][0] && matriz[0][0] != 0 && matriz[1][0] != 0  && soma0_0 != 1 && soma1_0 !=1 ){
				soma0_0 = 1;
				soma1_0 = 0 ;
				matriz[0][0] += matriz[1][0];
				matriz[1][0] = 0;
			}else if(  matriz[0][0] == 0 && matriz[1][0] != 0  ) {
				
			soma0_0 = soma1_0;
			soma1_0 = 0 ;
			matriz[0][0] += matriz[1][0];
			matriz[1][0] = 0;
		}	
		}
		if(matriz[0][1] == 0 || matriz[0][1] == matriz[1][1] ){
			if(matriz[0][1] == matriz[1][1] && matriz[0][1] != 0 && matriz[1][1] != 0 && soma0_1 != 1 && soma1_1 !=1  ){
				soma0_1 = 1;
				soma1_1 = 0 ;
				matriz[0][1] += matriz[1][1];
				matriz[1][1] = 0;
				
			}else if(  matriz[0][1] == 0 && matriz[1][1] != 0  ) {
				
			soma0_1 = soma1_1;
			soma1_1 = 0 ;
			matriz[0][1] += matriz[1][1];
			matriz[1][1] = 0;
		}	
		}
		if(matriz[0][2] == 0 || matriz[0][2] == matriz[1][2]   ){
			if(matriz[0][2] == matriz[1][2] && matriz[0][2] != 0 && matriz[1][2] != 0 && soma0_2 != 1 && soma1_2 !=1  ){
				soma0_2 = 1;
				soma1_2 = 0 ;
				matriz[0][2] += matriz[1][2];
				matriz[1][2] = 0;

			}else if(  matriz[0][2] == 0 && matriz[1][2] != 0  ) {
				
			soma0_2 = soma1_2;
			soma1_2 = 0 ;
			matriz[0][2] += matriz[1][2];
			matriz[1][2] = 0;
		}	
			
		}
		if(matriz[0][3] == 0 || matriz[0][3] == matriz[1][3]   ){
			if(matriz[0][3] == matriz[1][3] && matriz[0][3] != 0 && matriz[1][3] != 0  && soma0_3 != 1 && soma1_3 !=1  ){
				soma0_3 = 1;
				soma1_3 = 0 ;
				matriz[0][3] += matriz[1][3];
				matriz[1][3] = 0;
				
				
			}else if(  matriz[0][3] == 0 && matriz[1][3] != 0  ) {
				
			soma0_3 = soma1_3;
			soma1_3 = 0 ;
			matriz[0][3] += matriz[1][3];
			matriz[1][3] = 0;
		}	
			
		}
		if(matriz[1][0] == 0 || matriz[1][0] == matriz[2][0]  ){
			if(matriz[1][0] == matriz[2][0] && matriz[1][0] != 0 && matriz[2][0] != 0 && soma1_0 != 1 & soma2_0 != 1 ){
				soma1_0 = 1;
				soma2_0 = 0 ;
				matriz[1][0] += matriz[2][0];
				matriz[2][0] = 0;
				
				
			}else if( matriz[1][0] == 0 && matriz[2][0] != 0  ) { 
			soma1_0 = soma2_0 ;
			soma2_0 = 0 ;  
			matriz[1][0] += matriz[2][0];
			matriz[2][0] = 0;
		}
		}
		if(matriz[1][1] == 0 || matriz[1][1] == matriz[2][1]   ){
			if(matriz[1][1] == matriz[2][1] && matriz[1][1] != 0 && matriz[2][1] != 0 && soma1_1 != 1 & soma2_1 != 1 ){
				soma1_1 = 1;
				soma2_1 = 0 ;
				matriz[1][1] += matriz[2][1];
				matriz[2][1] = 0;
				
				
			}else if( matriz[1][1] == 0 && matriz[2][1] != 0  ) { 
			soma1_1 = soma2_1 ;
			soma2_1 = 0 ;  
			matriz[1][1] += matriz[2][1];
			matriz[2][1] = 0;
			
		}
			
			}
		if(matriz[1][2] == 0 || matriz[1][2] == matriz[2][2]    ){
			if(matriz[1][2] == matriz[2][2] && matriz[1][2] != 0 && matriz[2][2] != 0 && soma1_2 != 1 & soma2_2 != 1 ){
				soma1_2 = 1;
				soma2_2 = 0 ;
				matriz[1][2] += matriz[2][2];
				matriz[2][2] = 0;
				
				
			}else if( matriz[1][2] == 0 && matriz[2][2] != 0  ) { 
			soma1_2 = soma2_2 ;
			soma2_2 = 0 ;  
			matriz[1][2] += matriz[2][2];
			matriz[2][2] = 0;
			
		}
			
			
			}	
		if(matriz[1][3] == 0  || matriz[1][3] == matriz[2][3]   ){
			if(matriz[1][3] == matriz[2][3] && matriz[1][3] != 0 && matriz[2][3] != 0 && soma1_3 != 1 & soma2_3 != 1 ){
				soma1_3 = 1;
				soma2_3 = 0 ;
				matriz[1][3] += matriz[2][3];
				matriz[2][3] = 0;
				
				
			}else if( matriz[1][3] == 0 && matriz[2][3] != 0  ) { 
			soma1_3 = soma2_3 ;
			soma2_3 = 0 ;  
			matriz[1][3] += matriz[2][3];
			matriz[2][3] = 0;
		}
			
			
			}
		if(matriz[2][0] == 0 || matriz[2][0] == matriz[3][0]   ){
			if(matriz[2][0] == matriz[3][0] && matriz[2][0] != 0 && matriz[3][0] != 0  && soma2_0 != 1 && soma3_0 != 1 ){
				soma2_0 = 1 ;
				soma3_0 = 0 ;
				matriz[2][0] += matriz[3][0];
				matriz[3][0] = 0;
				
			}
			else if( matriz[2][0] == 0 && matriz[3][0] != 0   ) {
			soma2_0 = soma3_0 ;
			soma3_0 = 0 ; 
			matriz[2][0] += matriz[3][0];
			matriz[3][0] = 0;
			
		}
		}
		if(matriz[2][1] == 0 || matriz[2][1] == matriz[3][1]    ){
				if(matriz[2][1] == matriz[3][1] && matriz[2][1] != 0 && matriz[3][1] != 0 && soma2_1 != 1 && soma3_1 != 1  ){
				 soma2_1 = 1 ;
				 soma3_1 = 0 ;
				 matriz[2][1] += matriz[3][1];
				 matriz[3][1] = 0;
				 
	
			}else if( matriz[2][1] == 0 && matriz[3][1] != 0   ) {
			soma2_1 = soma3_1 ;
			soma3_1 = 0 ; 
			matriz[2][1] += matriz[3][1];
			matriz[3][1] = 0;
			
		}
			
			
			}
		if(matriz[2][2] == 0 || matriz[2][2] == matriz[3][2]  ){
				if(matriz[2][2] == matriz[3][2] && matriz[2][2] != 0 && matriz[3][2] != 0 && soma2_2 != 1 && soma3_2 != 1 ){
				 soma2_2 = 1 ;
				 soma3_2 = 0 ;
				 matriz[2][2] += matriz[3][2];
				 matriz[3][2] = 0;
				
			}else if( matriz[2][2] == 0 && matriz[3][2] != 0   ) {
				soma2_2 = soma3_2 ;
				soma3_2 = 0 ; 
				matriz[2][2] += matriz[3][2];
				matriz[3][2] = 0;
			
		}
			
			
			}	
		if(matriz[2][3] == 0 || matriz[2][3] == matriz[3][3]   ){
				if(matriz[2][3] == matriz[3][3] && matriz[2][3] != 0 && matriz[3][3] != 0 && soma2_3 != 1 && soma3_3 != 1 ){
					 soma2_3 = 1 ;
					 soma3_3 = 0 ;
					 matriz[2][3] += matriz[3][3];
					 matriz[3][3] = 0;
				
			}else if( matriz[2][3] == 0 && matriz[3][3] != 0   ) {
				soma2_3 = soma3_3 ;
				soma3_3 = 0 ; 
				matriz[2][3] += matriz[3][3];
				matriz[3][3] = 0;
				
			
		}
			
			
	}
			
			
	}
	void movDireita(){
		
		if(matriz[3][3] == 0 || matriz[3][3] == matriz[3][2] ){
			if(matriz[3][3] == matriz[3][2] && matriz[3][3] != 0 && matriz[3][2] != 0 && soma3_3 != 1 && soma3_2 !=1  ){
				soma3_3 = 1;
				soma3_2 = 0 ;
				matriz[3][3] += matriz[3][2];
				matriz[3][2] = 0;
				
				
			}else if(  matriz[3][3] == 0 && matriz[3][2] != 0  ) {
				
			soma3_3 = soma3_2;
			soma3_2 = 0 ;
			matriz[3][3] += matriz[3][2];
			matriz[3][2] = 0;
			
		}	
			
		}
		if(matriz[3][2] == 0 || matriz[3][2] == matriz[3][1]  ){
			if(matriz[3][2] == matriz[3][1] && matriz[3][2] != 0 && matriz[3][1] != 0 && soma3_2 != 1 && soma3_1 !=1 ){
				soma3_2 = 1;
				soma3_1 = 0 ;
				matriz[3][2] += matriz[3][1];
				matriz[3][1] = 0;
				
				
			}else if(  matriz[3][2] == 0 && matriz[3][1] != 0  ) {
				
			soma3_2 = soma3_1;
			soma3_1 = 0 ;
			matriz[3][2] += matriz[3][1];
			matriz[3][1] = 0;
			
		}	
			
		}
		if(matriz[3][1] == 0 || matriz[3][1] == matriz[3][0] ){
			if(matriz[3][1] == matriz[3][0] && matriz[3][1] != 0 && matriz[3][0] != 0 && soma3_1 != 1 && soma3_0 !=1  ){
				soma3_1 = 1;
				soma3_0 = 0 ;
				matriz[3][1] += matriz[3][0];
				matriz[3][0] = 0;
				
				
			}else if(  matriz[3][1] == 0 && matriz[3][0] != 0  ) {
				
			soma3_1 = soma3_0;
			soma3_0 = 0 ;
			matriz[3][1] += matriz[3][0];
			matriz[3][0] = 0;
			
		}	
			
		}
		if(matriz[2][3] == 0 || matriz[2][3] == matriz[2][2]  ){
			if(matriz[2][3] == matriz[2][2] && matriz[2][3] != 0 && matriz[2][2] != 0 && soma2_3 != 1 && soma2_2 !=1 ){
				soma2_3 = 1;
				soma2_2 = 0 ;
				matriz[2][3] += matriz[2][2];
				matriz[2][2] = 0;
				
				
			}else if(  matriz[2][3] == 0 && matriz[2][2] != 0  ) {
				
			soma2_3 = soma2_2;
			soma2_2 = 0 ;
			matriz[2][3] += matriz[2][2];
			matriz[2][2] = 0;
			
		}	
			
		}
		if(matriz[2][2] == 0 || matriz[2][2] == matriz[2][1]  ){
			if(matriz[2][2] == matriz[2][1] && matriz[2][2] != 0 && matriz[2][1] != 0  && soma2_2 != 1 && soma2_1 !=1 ){
				soma2_2 = 1;
				soma2_1 = 0 ;
				matriz[2][2] += matriz[2][1];
				matriz[2][1] = 0;
				
				
			}else if(  matriz[2][2] == 0 && matriz[2][1] != 0  ) {
				
			soma2_2 = soma2_1;
			soma2_1 = 0 ;
			matriz[2][2] += matriz[2][1];
			matriz[2][1] = 0;
			
		}	
			
		}
		if(matriz[2][1] == 0 || matriz[2][1] == matriz[2][0] ){
			if(matriz[2][1] == matriz[2][0] && matriz[2][1] != 0 && matriz[2][0] != 0 && soma2_1 != 1 && soma2_0 !=1   ){
				soma2_1 = 1;
				soma2_0 = 0 ;
				matriz[2][1] += matriz[2][0];
				matriz[2][0] = 0;
				
				
			}else if(  matriz[2][1] == 0 && matriz[2][0] != 0  ) {
				
			soma2_1 = soma2_0;
			soma2_0 = 0 ;
			matriz[2][1] += matriz[2][0];
			matriz[2][0] = 0;
			
		}	
			
		}
		if(matriz[1][3] == 0 || matriz[1][3] == matriz[1][2]  ){
			if(matriz[1][3] == matriz[1][2] && matriz[1][3] != 0 && matriz[1][2] != 0 && soma1_3 != 1 && soma1_2 !=1  ){
				soma1_3 = 1;
				soma1_2 = 0 ;
				matriz[1][3] += matriz[1][2];
				matriz[1][2] = 0;
				
				
			}else if(  matriz[1][3] == 0 && matriz[1][2] != 0  ) {
				
			soma1_3 = soma1_2;
			soma1_2 = 0 ;
			matriz[1][3] += matriz[1][2];
			matriz[1][2] = 0;
			
		}	
			
		}
		if(matriz[1][2] == 0 || matriz[1][2] == matriz[1][1] ){
			if(matriz[1][2] == matriz[1][1] && matriz[1][2] != 0 && matriz[1][1] != 0 && soma1_2 != 1 && soma1_1 !=1 ){
				soma1_2 = 1;
				soma1_1 = 0 ;
				matriz[1][2] += matriz[1][1];
				matriz[1][1] = 0;
				
			}else if(  matriz[1][2] == 0 && matriz[1][1] != 0  ) {
				
			soma1_2 = soma1_1;
			soma1_1 = 0 ;
			matriz[1][2] += matriz[1][1];
			matriz[1][1] = 0;
			
		}	
			
		}
		if(matriz[1][1] == 0 || matriz[1][1] == matriz[1][0] ){
			if(matriz[1][1] == matriz[1][0] && matriz[1][1] != 0 && matriz[1][0] != 0  && soma1_1 != 1 && soma1_0 !=1 ){
				soma1_1 = 1;
				soma1_0 = 0 ;
				matriz[1][1] += matriz[1][0];
				matriz[1][0] = 0;
				
				
			}else if(  matriz[1][1] == 0 && matriz[1][0] != 0  ) {
				
			soma1_1 = soma1_0;
			soma1_0 = 0 ;
			matriz[1][1] += matriz[1][0];
			matriz[1][0] = 0;
			
		}	
			
		}
		if(matriz[0][3] == 0 || matriz[0][3] == matriz[0][2] ){
			if(matriz[0][3] == matriz[0][2] && matriz[0][3] != 0 && matriz[0][2] != 0  && soma0_3 != 1 && soma0_2 !=1 ){
				soma0_3 = 1;
				soma0_2 = 0 ;
				matriz[0][3] += matriz[0][2];
				matriz[0][2] = 0;
				
				
			}else if(  matriz[0][3] == 0 && matriz[0][2] != 0  ) {
				
			soma0_3 = soma0_2;
			soma0_2 = 0 ;
			matriz[0][3] += matriz[0][2];
			matriz[0][2] = 0;
			
		}	
			
		}
		if(matriz[0][2] == 0 || matriz[0][2] == matriz[0][1]     ){
			if(matriz[0][2] == matriz[0][1] && matriz[0][2] != 0 && matriz[0][1] != 0 && soma0_2 != 1 && soma0_1 !=1  ){
				soma0_2 = 1;
				soma0_1 = 0 ;
				matriz[0][2] += matriz[0][1];
				matriz[0][1] = 0;
				
				
			}else if(  matriz[0][2] == 0 && matriz[0][1] != 0  ) {
				
			soma0_2 = soma0_1;
			soma0_1 = 0 ;
			matriz[0][2] += matriz[0][1];
			matriz[0][1] = 0;
			
		}	
			
		}
		if(matriz[0][1] == 0 || matriz[0][1] == matriz[0][0]   ){
			if(matriz[0][1] == matriz[0][0] && matriz[0][1] != 0 && matriz[0][0] != 0 && soma0_1 != 1 && soma0_0 !=1    ){
				soma0_1 = 1;
				soma0_0 = 0 ;
				matriz[0][1] += matriz[0][0];
				matriz[0][0] = 0;
				
			}else if(  matriz[0][1] == 0 && matriz[0][0] != 0  ) {
				
			soma0_1 = soma0_0;
			soma0_0 = 0 ;
			matriz[0][1] += matriz[0][0];
			matriz[0][0] = 0;
			
		}	
			
		}
		
	
	}
	void moveLeft(){
		if(matriz[0][0] == 0 || matriz[0][0] == matriz[0][1] ){
			if(matriz[0][0] == matriz[0][1] && matriz[0][0] != 0 && matriz[0][1] != 0  && soma0_0 != 1 && soma0_1 !=1   ){
				soma0_0 = 1;
				soma0_1 = 0 ;
				matriz[0][0] += matriz[0][1];
				matriz[0][1] = 0;
				
				
			}else if(  matriz[0][0] == 0 && matriz[0][1] != 0  ) {
				
			soma0_0 = soma0_1;
			soma0_1 = 0 ;
			matriz[0][0] += matriz[0][1];
			matriz[0][1] = 0;
			
		}	
		}
		if(matriz[0][1] == 0 || matriz[0][1] == matriz[0][2]  ){
			if(matriz[0][1] == matriz[0][2] && matriz[0][1] != 0 && matriz[0][2] != 0  && soma0_1 != 1 && soma0_2 !=1){
				soma0_1 = 1;
				soma0_2 = 0 ;
				matriz[0][1] += matriz[0][2];
				matriz[0][2] = 0;
				
				
			}else if(  matriz[0][1] == 0 && matriz[0][2] != 0  ) {
				
			soma0_1 = soma0_2;
			soma0_2 = 0 ;
			matriz[0][1] += matriz[0][2];
			matriz[0][2] = 0;
			
		}	
			
		}
		if(matriz[0][2] == 0 || matriz[0][2] == matriz[0][3] ){
			if(matriz[0][2] == matriz[0][3] && matriz[0][2] != 0 && matriz[0][3] != 0  && soma0_2 != 1 && soma0_3 !=1 ){
				soma0_2 = 1;
				soma0_3 = 0 ;
				matriz[0][2] += matriz[0][3];
				matriz[0][3] = 0;
				
			}else if(  matriz[0][2] == 0 && matriz[0][3] != 0  ) {
				
			soma0_2 = soma0_3;
			soma0_3 = 0 ;
			matriz[0][2] += matriz[0][3];
			matriz[0][3] = 0;
			
		}	
			
		}
		if(matriz[1][0] == 0 || matriz[1][0] == matriz[1][1] ){
			if(matriz[1][0] == matriz[1][1] && matriz[1][0] != 0 && matriz[1][1] != 0   && soma1_0 != 1 && soma1_1 !=1 ){
				soma1_0 = 1;
				soma1_1 = 0 ;
				matriz[1][0] += matriz[1][1];
				matriz[1][1] = 0;
				
				
			}else if(  matriz[1][0] == 0 && matriz[1][1] != 0  ) {
				
			soma1_0 = soma1_1;
			soma1_1 = 0 ;
			matriz[1][0] += matriz[1][1];
			matriz[1][1] = 0;
			
		}	
		}
		if(matriz[1][1] == 0 || matriz[1][1] == matriz[1][2] ){
			if(matriz[1][1] == matriz[1][2] && matriz[1][1] != 0 && matriz[1][2] != 0 && soma1_1 != 1 && soma1_2 !=1 ){
				soma1_1 = 1;
				soma1_2 = 0 ;
				matriz[1][1] += matriz[1][2];
				matriz[1][2] = 0;
				
				
			}else if(  matriz[1][1] == 0 && matriz[1][2] != 0  ) {
				
			soma1_1 = soma1_2;
			soma1_2 = 0 ;
			matriz[1][1] += matriz[1][2];
			matriz[1][2] = 0;
			
		}	
		}
		if(matriz[1][2] == 0 || matriz[1][2] == matriz[1][3] ){
			if(matriz[1][2] == matriz[1][3] && matriz[1][2] != 0 && matriz[1][3] != 0 && soma1_2 != 1 && soma1_3 !=1 ){
				soma1_2 = 1;
				soma1_3 = 0 ;
				matriz[1][2] += matriz[1][3];
				matriz[1][3] = 0;
				
				
			}else if(  matriz[1][2] == 0 && matriz[1][3] != 0  ) {
				
			soma1_2 = soma1_3;
			soma1_3 = 0 ;
			matriz[1][2] += matriz[1][3];
			matriz[1][3] = 0;
			
		}	
		}
		if(matriz[2][0] == 0 || matriz[2][0] == matriz[2][1]  ){
			if(matriz[2][0] == matriz[2][1] && matriz[2][0] != 0 && matriz[2][1] != 0 && soma2_0 != 1 && soma2_1 !=1 ){
				soma2_0 = 1;
				soma2_1 = 0 ;
				matriz[2][0] += matriz[2][1];
				matriz[2][1] = 0;
				
				
			}else if(  matriz[2][0] == 0 && matriz[2][1] != 0  ) {
				
			soma2_0 = soma2_1;
			soma2_1 = 0 ;
			matriz[2][0] += matriz[2][1];
			matriz[2][1] = 0;
			
		}	
		}
		if(matriz[2][1] == 0 || matriz[2][1] == matriz[2][2]  ){
			if(matriz[2][1] == matriz[2][2] && matriz[2][1] != 0 && matriz[2][2] != 0 && soma2_1 != 1 && soma2_2 !=1 ){
				soma2_1 = 1;
				soma2_2 = 0 ;
				matriz[2][1] += matriz[2][2];
				matriz[2][2] = 0;
				
				
			}else if(  matriz[2][1] == 0 && matriz[2][2] != 0  ) {
				
			soma2_1 = soma2_2;
			soma2_2 = 0 ;
			matriz[2][1] += matriz[2][2];
			matriz[2][2] = 0;
			
		}	
		}
		if(matriz[2][2] == 0 || matriz[2][2] == matriz[2][3]  ){
			if(matriz[2][2] == matriz[2][3] && matriz[2][2] != 0 && matriz[2][3] != 0 && soma2_2 != 1 && soma2_3 !=1 ){
				soma2_2 = 1;
				soma2_3 = 0 ;
				matriz[2][2] += matriz[2][3];
				matriz[2][3] = 0;
				
				
			}else if(  matriz[2][2] == 0 && matriz[2][3] != 0  ) {
				
			soma2_2 = soma2_3;
			soma2_3 = 0 ;
			matriz[2][2] += matriz[2][3];
			matriz[2][3] = 0;
			
		}
		}
		if(matriz[3][0] == 0 || matriz[3][0] == matriz[3][1]  ){
			if(matriz[3][0] == matriz[3][1] && matriz[3][0] != 0 && matriz[3][1] != 0 && soma3_0 != 1 && soma3_1 !=1 ){
				soma3_0 = 1;
				soma3_1 = 0 ;
				matriz[3][0] += matriz[3][1];
				matriz[3][1] = 0;
				
				
			}else if(  matriz[3][0] == 0 && matriz[3][1] != 0  ) {
				
			soma3_0 = soma3_1;
			soma3_1 = 0 ;
			matriz[3][0] += matriz[3][1];
			matriz[3][1] = 0;
			
		}
		}
		if(matriz[3][1] == 0 || matriz[3][1] == matriz[3][2]  ){
			if(matriz[3][1] == matriz[3][2] && matriz[3][1] != 0 && matriz[3][2] != 0 && soma3_1 != 1 && soma3_2 !=1 ){
				soma3_1 = 1;
				soma3_2 = 0 ;
				matriz[3][1] += matriz[3][2];
				matriz[3][2] = 0;
				
				
			}else if(  matriz[3][1] == 0 && matriz[3][2] != 0  ) {
				
			soma3_1 = soma3_2;
			soma3_2 = 0 ;
			matriz[3][1] += matriz[3][2];
			matriz[3][2] = 0;
			
		}
		}
		if(matriz[3][2] == 0 || matriz[3][2] == matriz[3][3]  ){
			if(matriz[3][2] == matriz[3][3] && matriz[3][2] != 0 && matriz[3][3] != 0 && soma3_2 != 1 && soma3_3 !=1   ){
				soma3_2 = 1;
				soma3_3 = 0 ;
				matriz[3][2] += matriz[3][3];
				matriz[3][3] = 0;
				
				
			}else if(  matriz[3][2] == 0 && matriz[3][3] != 0  ) {
				
			soma3_2 = soma3_3;
			soma3_3 = 0 ;
			matriz[3][2] += matriz[3][3];
			matriz[3][3] = 0;
			
		}
		}
}
	void moveDown(){

		if(matriz[3][0] == 0 || matriz[3][0] == matriz[2][0] ){
			if(matriz[3][0] == matriz[2][0] && matriz[3][0] != 0 && matriz[2][0] != 0 && soma3_0 != 1 && soma2_0 !=1 ){
				soma3_0 = 1;
				soma2_0 = 0 ;
				matriz[3][0] += matriz[2][0];
				matriz[2][0] = 0;
				
				
			}else if(  matriz[3][0] == 0 && matriz[2][0] != 0  ) {
				
			soma3_0 = soma2_0;
			soma2_0 = 0 ;
			matriz[3][0] += matriz[2][0];
			matriz[2][0] = 0;
			
		}
		}
		if(matriz[3][1] == 0 || matriz[3][1] == matriz[2][1] ){
			if(matriz[3][1] == matriz[2][1] && matriz[3][1] != 0 && matriz[2][1] != 0 && soma3_1 != 1 && soma2_1 !=1 ){
				soma3_1 = 1;
				soma2_1 = 0 ;
				matriz[3][1] += matriz[2][1];
				matriz[2][1] = 0;
				
				
			}else if(  matriz[3][1] == 0 && matriz[2][1] != 0  ) {
				
			soma3_1 = soma2_1;
			soma2_1 = 0 ;
			matriz[3][1] += matriz[2][1];
			matriz[2][1] = 0;
			
		}
		}
		if(matriz[3][2] == 0 || matriz[3][2] == matriz[2][2] ){
			if(matriz[3][2] == matriz[2][2] && matriz[3][2] != 0 && matriz[2][2] != 0 && soma3_2 != 1 && soma2_2 !=1 ){
				soma3_2 = 1;
				soma2_2 = 0 ;
				matriz[3][2] += matriz[2][2];
				matriz[2][2] = 0;
				
				
			}else if(  matriz[3][2] == 0 && matriz[2][2] != 0  ) {
				
			soma3_2 = soma2_2;
			soma2_2 = 0 ;
			matriz[3][2] += matriz[2][2];
			matriz[2][2] = 0;
			
		}
		}
		if(matriz[3][3] == 0 || matriz[3][3] == matriz[2][3] ){
			if(matriz[3][3] == matriz[2][3] && matriz[3][3] != 0 && matriz[2][3] != 0 && soma3_3 != 1 && soma2_3 !=1 ){
				soma3_3 = 1;
				soma2_3 = 0 ;
				matriz[3][3] += matriz[2][3];
				matriz[2][3] = 0;
				
				
			}else if(  matriz[3][3] == 0 && matriz[2][3] != 0  ) {
				
			soma3_3 = soma2_3;
			soma2_3 = 0 ;
			matriz[3][3] += matriz[2][3];
			matriz[2][3] = 0;
			
		}
		}
		if(matriz[2][0] == 0 || matriz[2][0] == matriz[1][0] ){
			if(matriz[2][0] == matriz[1][0] && matriz[2][0] != 0 && matriz[1][0] != 0 && soma2_0 != 1 && soma1_0 !=1 ){
				soma2_0 = 1;
				soma1_0 = 0 ;
				matriz[2][0] += matriz[1][0];
				matriz[1][0] = 0;
				
				
			}else if(  matriz[2][0] == 0 && matriz[1][0] != 0  ) {
				
			soma2_0 = soma1_0;
			soma1_0 = 0 ;
			matriz[2][0] += matriz[1][0];
			matriz[1][0] = 0;
			
		}
		}
		if(matriz[2][1] == 0 || matriz[2][1] == matriz[1][1] ){
			if(matriz[2][1] == matriz[1][1] && matriz[2][1] != 0 && matriz[1][1] != 0 && soma2_1 != 1 && soma1_1 !=1 ){
				soma2_1 = 1;
				soma1_1 = 0 ;
				matriz[2][1] += matriz[1][1];
				matriz[1][1] = 0;
				
			}else if(  matriz[2][1] == 0 && matriz[1][1] != 0  ) {
				
			soma2_1 = soma1_1;
			soma1_1 = 0 ;
			matriz[2][1] += matriz[1][1];
			matriz[1][1] = 0;
			
		}
		}
		if(matriz[2][2] == 0 || matriz[2][2] == matriz[1][2] ){
			if(matriz[2][2] == matriz[1][2] && matriz[2][2] != 0 && matriz[1][2] != 0 && soma2_2 != 1 && soma1_2 !=1 ){
				soma2_2 = 1;
				soma1_2 = 0 ;
				matriz[2][2] += matriz[1][2];
				matriz[1][2] = 0;
				
				
			}else if(  matriz[2][2] == 0 && matriz[1][2] != 0  ) {
				
			soma2_2 = soma1_2;
			soma1_2 = 0 ;
			matriz[2][2] += matriz[1][2];
			matriz[1][2] = 0;
			
		}
		}
		if(matriz[2][3] == 0 || matriz[2][3] == matriz[1][3]  ){
			if(matriz[2][3] == matriz[1][3] && matriz[2][3] != 0 && matriz[1][3] != 0 && soma2_3 != 1 && soma1_3 !=1 ){
				soma2_3 = 1;
				soma1_3 = 0 ;
				matriz[2][3] += matriz[1][3];
				matriz[1][3] = 0;
				
				
			}else if(  matriz[2][3] == 0 && matriz[1][3] != 0  ) {
				
			soma2_3 = soma1_3;
			soma1_3 = 0 ;
			matriz[2][3] += matriz[1][3];
			matriz[1][3] = 0;
			
		}
		}
		if(matriz[1][0] == 0 || matriz[1][0] == matriz[0][0] ){
			if(matriz[1][0] == matriz[0][0] && matriz[1][0] != 0 && matriz[0][0] != 0  && soma1_0 != 1 && soma0_0 !=1   ){
				soma1_0 = 1;
				soma0_0 = 0 ;
				matriz[1][0] += matriz[0][0];
				matriz[0][0] = 0;
				
				
			}else if(  matriz[1][0] == 0 && matriz[0][0] != 0  ) {
				
			soma1_0 = soma0_0;
			soma0_0 = 0 ;
			matriz[1][0] += matriz[0][0];
			matriz[0][0] = 0;
			
		}
		}
		if(matriz[1][1] == 0 || matriz[1][1] == matriz[0][1] ){
			if(matriz[1][1] == matriz[0][1] && matriz[1][1] != 0 && matriz[0][1] != 0  && soma1_1 != 1 && soma0_1 !=1 ){
				soma1_1 = 1;
				soma0_1 = 0 ;
				matriz[1][1] += matriz[0][1];
				matriz[0][1] = 0;
				
				
			}else if(  matriz[1][1] == 0 && matriz[0][1] != 0  ) {
				
			soma1_1 = soma0_1;
			soma0_1 = 0 ;
			matriz[1][1] += matriz[0][1];
			matriz[0][1] = 0;
			
		}
		}
		if(matriz[1][2] == 0 || matriz[1][2] == matriz[0][2] ){
			if(matriz[1][2] == matriz[0][2] && matriz[1][2] != 0 && matriz[0][2] != 0 && soma1_2 != 1 && soma0_2 !=1 ){
				soma1_2 = 1;
				soma0_2 = 0 ;
				matriz[1][2] += matriz[0][2];
				matriz[0][2] = 0;
				
				
			}else if(  matriz[1][2] == 0 && matriz[0][2] != 0  ) {
				
			soma1_2 = soma0_2;
			soma0_2 = 0 ;
			matriz[1][2] += matriz[0][2];
			matriz[0][2] = 0;
			
		}
		}
		if(matriz[1][3] == 0 || matriz[1][3] == matriz[0][3] ){
			if(matriz[1][3] == matriz[0][3] && matriz[1][3] != 0 && matriz[0][3] != 0 && soma1_3 != 1 && soma0_3 !=1 ){
				soma1_3 = 1;
				soma0_3 = 0 ;
				matriz[1][3] += matriz[0][3];
				matriz[0][3] = 0;
				
				
			}else if(  matriz[1][3] == 0 && matriz[0][3] != 0  ) {
				
			soma1_3 = soma0_3;
			soma0_3 = 0 ;
			matriz[1][3] += matriz[0][3];
			matriz[0][3] = 0;
			
		}
		}
	}
	while( mostrouGameOver ==0 ){   
	
	
	soma0_0 = 0 ;
	soma0_1 = 0 ;
	soma0_2 = 0 ;
	soma0_3 = 0 ;
	soma1_0 = 0 ;
	soma1_1 = 0 ;
	soma1_2 = 0 ;
	soma1_3 = 0 ;
	soma2_0 = 0 ;
	soma2_1 = 0 ;
	soma2_2 = 0 ;
	soma2_3 = 0 ;
	soma3_0 = 0 ;
	soma3_1 = 0 ;
	soma3_2 = 0 ;
	soma3_3 = 0 ;
	//system("cls");
	varreMatriz();
	ganhaJogo();
	mostraMatriz();
	
	
		if(achouN == 0){
			placar();
			printf("GAME OVER\n ");
			system("pause");
			textoMenu();
			mostrouGameOver = 1 ;
			break ; 
			
		break;
	}	
		if(winGame == 1 ){
			placar();
			printf("Meus Parabéns, você conseguiu atingir o objetivo maximo !\n");
			system("pause");
			textoMenu();
			mostrouGameOver = 1 ;
			break ; 
		}
	

	

	switch(respostaUser) {
		case 72://1
			pontuacao += 1 ;  
			movCima();
			movCima();
			movCima();
			randomMatriz();	
			break;
		case 77: //2
			pontuacao += 1 ;  
			movDireita();
			movDireita();
			movDireita();
			randomMatriz();	
			break;
		case 75://3
			pontuacao += 1 ;  
			moveLeft();
			moveLeft();
			moveLeft();
			randomMatriz();
			break;
		case 80://4 
			pontuacao += 1 ;  
			moveDown();
			moveDown();
			moveDown();
			randomMatriz();
			break;
		case 27:
				placar();
			    salvaJogo();
				system("cls");
				textoMenu();
				mostrouGameOver = 1 ;
				break;
				
		
			
}			
	
	


 

	
}
	}
	int x, y;
	
		system("clear||cls");
		printf("                                                                                           \n");
	printf("\033[%d;%dH--=-==-=--=-==-=-=-=-=-=-=--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-==--=-=-\n",(5), (42));
	printf("\033[%d;%dH*                          _______                            *\n",(1+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*     ||||  ||||    |||    |-------| ||    ||             -   *\n",(2+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*     || |||| ||   || ||      |||    ||____||           +     *\n",(3+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*     ||  ||  ||  || _ ||     |||    ||----||            -    *\n",(4+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*     ||      || ||     ||    |_|    ||    ||           +     *\n",(5+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*                    ||||||     ||             ||||||    -    *\n",(6+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*                    ||        ||||   |||  ||| ||       +     *\n",(7+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*                    || ||||  ||__||  || ||||| ||||||    -    *\n",(8+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH* 2+2=peixe          ||||||| ||    || ||    || ||       _     *\n",(9+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*                                              ||||||    +    *\n",(10+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*                                                        +    *\n",(11+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH--=-==-=--=-==-=-=-=-=-=-=--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n",(17), (42));
	printf("\033[%d;%dHJOGADOR ATUAL: %s\n",(13+posicionador), (40),playerAtual[0]);
	printf("\033[%d;%dH                                                       Melhores jogadores       \n",(14+posicionador), (40));
	printf("\033[%d;%dH                                                      NOME      PONTUACAO       \n",(15+posicionador), (40));
	printf("\033[%d;%dH                                                    ||=====================||\n",(16+posicionador), (40));
	printf("\033[%d;%dH                                                    ||%s        %i         ||",(17+posicionador), (40),nomes2[0],vetor2[0]);
	printf("\033[%d;%dH                                                    ||%s        %i         ||\n",(18+posicionador), (40),nomes2[1],vetor2[1]);
	printf("\033[%d;%dH1 - Nova Partida                                    ||%s        %i         ||\n",(19+posicionador), (40),nomes2[2],vetor2[2]);
	printf("\033[%d;%dH2 - Continuar Partida                               ||%s        %i         ||\n",(20+posicionador), (40),nomes2[3],vetor2[3]);
	printf("\033[%d;%dH3 - Configuracoes                                   ||=====================||\n",(21+posicionador), (40));
	printf("\033[%d;%dH4 - Ajuda                                                                    \n",(22+posicionador), (40));
	printf("\033[%d;%dH5 - trocar de usuario                                                        \n",(23+posicionador), (40));
	printf("\033[%d;%dH                                                                             ",(24+posicionador), (40));
	printf("\033[%d;%dH                                                                             ",(25+posicionador), (40));
	scanf("%c",  & respostaUserS);
	switch(respostaUserS)
	{
		case '1' :
			carregarJogo = 0 ;
			textoJogo(); 
			break;
		case '2' :
			carregarJogo = 1 ; 
			textoJogo();
			break; 	
		case '3' :
			system("clear||cls");	
			printf("--=-==-=--=-==-=-=-=-=-=-=--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=====--\n");
			printf("                          _______                                                         \n");
			printf("     ||||  ||||    |||    |-------| ||    ||                                      \n");
			printf("     || |||| ||   || ||      |||    ||____||                                         \n");
			printf("     ||  ||  ||  || _ ||     |||    ||----||                                          \n");
			printf("     ||      || ||     ||    |_|    ||    ||                                         \n");
			printf("                    ||||||     ||             ||||||                          \n");
			printf("                    ||        ||||   |||  ||| ||                               \n");
			printf("                    || ||||  ||__||  || ||||| ||||||                             \n");
			printf("                    ||||||| ||    || ||    || ||                                \n");
			printf("                                              ||||||                            \n");
			printf("                                                                                \n");
			printf("--=-==-=--=-==-=-=-=-=-=-=--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=====--\n");
			printf("configurações\n");
			printf("Escolha uma das opções abaixo para prosseguir: \n");
			printf("1 - Alterar o idioma do jogo\n");
			printf("2 - Alterar a dificuldade do jogo\n");
			printf("3 - Alterar a cor do tabuleiro\n");
			printf("4 - Voltar para o menu principal\n");
			scanf("%d", & escolhaUser);
			if(escolhaUser == 4){
				textoMenu();
			}
			break;
		case '4' :
			system("clear||cls");
		printf("                                                                                \n");
			printf("--=-==-=--=-==-=-=-=-=-=-=--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=====--\n");
			printf("                          _______                                                         \n");
			printf("     ||||  ||||    |||    |-------| ||    ||                                      \n");
			printf("     || |||| ||   || ||      |||    ||____||                                         \n");
			printf("     ||  ||  ||  || _ ||     |||    ||----||                                          \n");
			printf("     ||      || ||     ||    |_|    ||    ||                                         \n");
			printf("                    ||||||     ||             ||||||                          \n");
			printf("                    ||        ||||   |||  ||| ||                               \n");
			printf("                    || ||||  ||__||  || ||||| ||||||                             \n");
			printf("                    ||||||| ||    || ||    || ||                                \n");
			printf("                                              ||||||                            \n");
			printf("                                                                                \n");
			printf("--=-==-=--=-==-=-=-=-=-=-=--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=====--\n"); 
		    printf("\n|      REGRAS DO JOGO: ENTÃO %s TUDO COMEÇA COM UMA  |", nomeUsuario);
			printf("\n|  FORMA GEOMETRICA E DENTRO DELA TEMOS ALGUNS ESPEÇOS     |");
			printf("\n|  VAZIOS E AO INICIAR O JOGO VOCê GANHA DOIS NUMEROS      |");
			printf("\n|  2, 2 E AI COMEÇA JOGO, A REGRA É SEMPRE VOCÊ JUNTAR     |");
			printf("\n|  SEMPRE DOIS NUMEROS IGUAIS AI OS DOIS SOMAM UM AO OUTRO |");
			printf("\n|  NO CASO 2 +2 = 4, POREM VOCÊ JUNTA OS NUMEROS MOVENDO   |");
			printf("\n|  A TELINHA COMS OS NUMEROS, SÃO QUATRO MOVIMENTOS        |");
			printf("\n|  PARA CIMA, PARA BAIXO, PARA DIREITA E OU PARA ESQUERDA  |");
			printf("\n|                                                          |");
			printf("\n|                          ^                               |");
			printf("\n|                          |                               |");
			printf("\n|                    <____ | ____>                         |");
			printf("\n|                          |                               |");
			printf("\n|                          |                               |");
			printf("\n|                          +                               |");
			printf("\n|  E ASSIM JUNTANDO DE DOIS EM DOIS NUMEROS ATÉ 2048 E     |");
			printf("\n|  ASSIM VOCÊ GANHA O JOGUINHO, LEGAL NÉ, VAMOS TENTAR?    |");
			printf("\n|                                                          |");
			printf("\n|__________________________________________________________|\n");
			system("pause");
			textoMenu();
			
			
			break;
		case '5' :
			system("cls");
			printf("Saindo.....");
			textoInicial();
			break;
		default:
			textoMenu();
			
			break ;	
		}
	}
			void textoLogin()
	{
		system("clear||cls");
		printf("                                                                                \n");
	printf("--=-==-=--=-==-=-=-=-=-=-=--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=====--\n");
	printf("                          _______                                                         \n");
	printf("     ||||  ||||    |||    |-------| ||    ||                                      \n");
	printf("     || |||| ||   || ||      |||    ||____||                                         \n");
	printf("     ||  ||  ||  || _ ||     |||    ||----||                                          \n");
	printf("     ||      || ||     ||    |_|    ||    ||                                         \n");
	printf("                    ||||||     ||             ||||||                          \n");
	printf("                    ||        ||||   |||  ||| ||                               \n");
	printf("                    || ||||  ||__||  || ||||| ||||||                             \n");
	printf("                    ||||||| ||    || ||    || ||                                \n");
	printf("                                              ||||||                            \n");
	printf("                                                                                \n");
	printf("--=-==-=--=-==-=-=-=-=-=-=--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=====--\n");
	printf("Opcao escolhida: Login !                                 \n");
	void fazerLogin(){
		printf("=---=-=-==--=-=-==--=-=-=-=-=-==---=-=-==--=-=-==--=-=-=-=-=-=\n");
		printf("|      Digite o numero do cadastro para selecionar:           |\n");
		printf("=---=-=-==--=-=-==--=-=-=-=-=-==---=-=-==--=-=-==--=-=-=-=-=-=\n");
		printf("|                   Player1:%s                                |\n",player1[0]);
		printf("|                   Player2:%s                                |\n",player2[0]);
		printf("|                   Player3:%s                                |\n",player3[0]);
		printf("|                   Player4:%s                                |\n",player4[0]);
		printf("|                   0 -Sair                                   |\n");
		printf("=---=-=-==--=-=-==--=-=-=-=-=-==---=-=-==--=-=-==--=-=-=-=-=-==\n");
		scanf("%i", & escolhaUser);
		if(escolhaUser == 1){
			system("cls");
			printf("Cadastro selecionado: Player 1: %s\n", player1[0]);
			printf("Digite a senha:");
			scanf("%s",senhaUsuario);
			if(strcmp(senhaUsuario,player1[2])==0){
				strcpy(playerAtual[0],player1[0]);
				sleep(3);
				system("cls");
				printf("Carregando.");
				sleep(1);
				system("cls");
				printf("Carregando..");
				sleep(1);
				system("cls");
				printf("Carregando...");
				sleep(1);
		}else{
				printf("Senha invalida");
				sleep(3);
				system("cls");
				fazerLogin();
		}
		}else if(escolhaUser == 2){
			system("cls");
			printf("Cadastro selecionado: Player 2: %s\n", player2[0]);
			printf("Digite a senha:");
			scanf("%s",senhaUsuario);
			if(strcmp(senhaUsuario,player2[2])==0){
				strcpy(playerAtual[0],player2[0]);
				sleep(3);
				system("cls");
				printf("Carregando.");
				sleep(1);
				system("cls");
				printf("Carregando..");
				sleep(1);
				system("cls");
				printf("Carregando...");
				sleep(1);
		}else{
			printf("Senha invalida");
			sleep(3);
			system("cls");
			fazerLogin();
		}
		}else if(escolhaUser == 3){
			system("cls");
			printf("Cadastro selecionado: Player 3: %s\n", player3[0]);
			printf("Digite a senha:");
			scanf("%s",senhaUsuario);
			if(strcmp(senhaUsuario,player3[2])==0){
				strcpy(playerAtual[0],player3[0]);
				sleep(3);
				system("cls");
				printf("Carregando.");
				sleep(1);
				system("cls");
				printf("Carregando..");
				sleep(1);
				system("cls");
				printf("Carregando...");
				sleep(1);
		}else{
			printf("Senha invalida");
			sleep(3);
			system("cls");
			fazerLogin();
			
		}
		}else if(escolhaUser == 4){
			system("cls");
			printf("Cadastro selecionado: Player 4: %s\n", player4[0]);
			printf("Digite a senha:");
			scanf("%s",senhaUsuario);
			if(strcmp(senhaUsuario,player4[2])==0){
				strcpy(playerAtual[0],player4[0]);
				sleep(3);
				system("cls");
				printf("Carregando.");
				sleep(1);
				system("cls");
				printf("Carregando..");
				sleep(1);
				system("cls");
				printf("Carregando...");
				sleep(1);
		}else{
			printf("Senha invalida");
			sleep(3);
			system("cls");
			fazerLogin();
		}
		}
		else if (escolhaUser == 0 ){
			textoInicial();
		}
	}
	 fazerLogin();
}
	void textoCadastro()
	{
	
		system("clear||cls");
		printf("                                                                                \n");
	printf(" \033[%d;%dH--=-==-=--=-==-=-=-=-=-=-=--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=====--\n", (0), (40));
	printf("\033[%d;%dH                          _______                                                         \n", (1), (40));
	printf("\033[%d;%dH     ||||  ||||    |||    |-------| ||    ||                                      \n", (2), (40));
	printf("\033[%d;%dH     || |||| ||   || ||      |||    ||____||                                         \n", (3), (40));
	printf("\033[%d;%dH     ||  ||  ||  || _ ||     |||    ||----||                                          \n", (4), (40));
	printf("\033[%d;%dH     ||      || ||     ||    |_|    ||    ||                                         \n", (5), (40));
	printf("\033[%d;%dH                   ||||||     ||             ||||||                          \n", (6), (40));
	printf("\033[%d;%dH                   ||        ||||   |||  ||| ||                               \n", (7), (40));
	printf("\033[%d;%dH                   || ||||  ||__||  || ||||| ||||||                             \n", (8), (40));
	printf("\033[%d;%dH                   ||||||| ||    || ||    || ||                                \n", (9), (40));
	printf("\033[%d;%dH                                             ||||||                            \n", (10), (40));
	printf("\033[%d;%dH                                                                              \n", (11), (40));
	printf("\033[%d;%dH--=-==-=--=-==-=-=-=-=-=-=--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=====--\n", (12), (40));
	printf("\033[%d;%dH                       Opcao escolhida: Cadastro!                                 \n", (13), (40));
	printf("\033[%d;%dH--=-==-=--=-==-=-=-=-=-=-=--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=====--\n", (14), (40));
	printf(" \033[%d;%dH                       pressione 0 para voltar                                    \n", (15), (40));
	printf("\033[%d;%dH--=-==-=--=-==-=-=-=-=-=-=--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=====--\n", (16), (40));
	void cadastraUsuario(){
		if(strcmp(player1[0], "nome") != 0 &&   strcmp(player2[0], "nome") != 0 &&  strcmp(player3[0], "nome") != 0 &&  strcmp(player4[0], "nome") != 0  ){
		printf("Todos os cadastros já estão preenchidos \n");
		printf("Selecione um que deseja deletar e insira a senha do mesmo para concluir a ação \n");
		printf("Player 1 : %s\n", player1[0]);
		printf("Player 2 : %s\n", player2[0]);
		printf("Player 3 : %s\n", player3[0]);
		printf("Player 4 : %s\n", player4[0]);
		printf("Sair - 0 : %s\n");
		scanf("%c", & respostaUserS);
		switch(respostaUserS){
			case '1':
				printf("Player 1 selecionado ! ");
				printf("Insira por favor a senha do cadastro! ");
				scanf("%s", & senhaUsuario);
				if(strcmp(senhaUsuario, player1[2]) == 0 ){
					sleep(1);
					system("cls");
					printf("Deletando Cadastro.");
					sleep(1);
					system("cls");
					printf("Deletando Cadastro..");
					sleep(1);
					system("cls");
					printf("Deletando Cadastro...");
					sleep(1);
					system("cls");
					printf("Cadastro deletado com sucesso!");
					strcpy(player1[0],"nome");
					strcpy(player1[1],"email");
					strcpy(player1[2],"senha");
					strcpy(player1[3],"codigo");
					matrizS1[4][4] ;
					playersRank[0] = 0 ;
					system("cls");
					textoCadastro();
					
				}else{
					printf("Senha invalida !");
					sleep(2);
					textoCadastro();
				}
				
				break;
			case '2':	
				printf("Player 2 selecionado ! ");
				printf("Insira por favor a senha do cadastro! ");
				scanf("%s", & senhaUsuario);
				if(strcmp(senhaUsuario, player2[2]) == 0 ){
					sleep(1);
					system("cls");
					printf("Deletando Cadastro.");
					sleep(1);
					system("cls");
					printf("Deletando Cadastro..");
					sleep(1);
					system("cls");
					printf("Deletando Cadastro...");
					sleep(1);
					system("cls");
					printf("Cadastro deletado com sucesso!");
					strcpy(player2[0],"nome");
					strcpy(player2[1],"email");
					strcpy(player2[2],"senha");
					strcpy(player2[3],"codigo");
					matrizS2[4][4] ;
					playersRank[1] = 0 ;
					system("cls");
					textoCadastro();
					
				}else{
					printf("Senha invalida !");
					sleep(2);
					textoCadastro();
				}
				break;
				
			case '3':
				printf("Player 3 selecionado ! ");
				printf("Insira por favor a senha do cadastro! ");
				scanf("%s", & senhaUsuario);
				if(strcmp(senhaUsuario, player3[2]) == 0 ){
					sleep(1);
					system("cls");
					printf("Deletando Cadastro.");
					sleep(1);
					system("cls");
					printf("Deletando Cadastro..");
					sleep(1);
					system("cls");
					printf("Deletando Cadastro...");
					sleep(1);
					system("cls");
					printf("Cadastro deletado com sucesso!");
					strcpy(player3[0],"nome");
					strcpy(player3[1],"email");
					strcpy(player3[2],"senha");
					strcpy(player3[3],"codigo");
					matrizS3[4][4];
					playersRank[2] = 0 ;
					system("cls");
					textoCadastro();
					
				}else{
					printf("Senha invalida !");
					sleep(2);
					textoCadastro();
				}
				break;
			case '4' :
				
				printf("Player 4 selecionado ! ");
				printf("Insira por favor a senha do cadastro! ");
				scanf("%s", & senhaUsuario);
				if(strcmp(senhaUsuario, player4[2]) == 0 ){
					sleep(1);
					system("cls");
					printf("Deletando Cadastro.");
					sleep(1);
					system("cls");
					printf("Deletando Cadastro..");
					sleep(1);
					system("cls");
					printf("Deletando Cadastro...");
					sleep(1);
					system("cls");
					printf("Cadastro deletado com sucesso!");
					strcpy(player4[0],"nome");
					strcpy(player4[1],"email");
					strcpy(player4[2],"senha");
					strcpy(player4[3],"codigo");
					matrizS4[4][4] ;
					playersRank[3] = 0 ;
					system("cls");
					textoCadastro();
					
				}else{
					printf("Senha invalida !");
					sleep(2);
					textoCadastro();
				}
				break;
			case '0':
				textoInicial();
				
				break;
			default:
				textoCadastro();
				break;	
		}
		}else {
		
	char vazio[5] = "nome";
	
	printf("\033[%d;%dH                       Digite o seu nome de usuario: ",(17), (40));
		if(strcmp(player1[0],vazio) == 0 ){
			scanf("%s",&nomeUsuario);
			if(strcmp(nomeUsuario, "0") == 0){
				textoInicial();
			}
			if(strcmp(nomeUsuario, player1[0]) == 0 ||strcmp(nomeUsuario, player2[0]) == 0 || strcmp(nomeUsuario, player3[0]) == 0 || strcmp(nomeUsuario, player4[0]) == 0  ){
				
				printf(" \033[%d;%dH                                  Nome já em Uso !                                                 \n", (20), (40));
				printf(" \033[%d;%dH               para prosseguir informe um nome que não esteja em uso!                         \n", (21), (40) );
				
				sleep(3);
		
				textoCadastro();
				
				
			}
			else {
			
			strcpy(player1[0],nomeUsuario);
			printf("\033[%d;%dH                       Digite o seu email: ",(18), (40));
			scanf("%s", & emailUsuario);
			strcpy(player1[1],emailUsuario);
			printf("\033[%d;%dH                       Digite a sua senha: ",(19), (40));
			scanf("%s", & senhaUsuario);
			printf("\033[%d;%dH                       Digite a sua cor favorita: ",(20), (40));
			scanf("%s", & codigoUsuario);
			strcpy(player1[3],codigoUsuario);
			strcpy(player1[2],senhaUsuario);
			strcpy(playerAtual[0],player1[0]);
		}
		}else if(strcmp(player2[0],vazio) == 0 ){
			scanf("%s",&nomeUsuario);
			if(strcmp(nomeUsuario, "0") == 0){
				textoInicial();
			}if(strcmp(nomeUsuario, player1[0]) == 0 ||strcmp(nomeUsuario, player2[0]) == 0 || strcmp(nomeUsuario, player3[0]) == 0 || strcmp(nomeUsuario, player4[0]) == 0  ){
				
				printf(" \033[%d;%dH                                  Nome já em Uso !                                                 \n", (20), (40));
				printf(" \033[%d;%dH               para prosseguir informe um nome que não esteja em uso!                         \n", (21), (40) );
				
				sleep(3);
		
				textoCadastro();
				
				
			}else {
			
			
			strcpy(player2[0],nomeUsuario);
			printf("\033[%d;%dH                       Digite o seu email: ",(18), (40));
			scanf("%s", & emailUsuario);
			strcpy(player2[1],emailUsuario);
			printf("\033[%d;%dH                       Digite a sua senha: ",(19), (40));
			scanf("%s", & senhaUsuario);
			printf("\033[%d;%dH                       Digite a sua cor favorita: ",(20), (40));
			scanf("%s", & codigoUsuario);
			strcpy(player2[3],codigoUsuario);
			strcpy(player2[2],senhaUsuario);
			strcpy(playerAtual[0],player2[0]);
		}
		}else if(strcmp(player3[0],vazio) == 0 ){
			scanf("%s",&nomeUsuario);
			if(strcmp(nomeUsuario, "0") == 0){
				textoInicial();
			}
			if(strcmp(nomeUsuario, player1[0]) == 0 ||strcmp(nomeUsuario, player2[0]) == 0 || strcmp(nomeUsuario, player3[0]) == 0 || strcmp(nomeUsuario, player4[0]) == 0  ){
				
				printf(" \033[%d;%dH                                  Nome já em Uso !                                                 \n", (20), (40));
				printf(" \033[%d;%dH               para prosseguir informe um nome que não esteja em uso!                         \n", (21), (40) );
				
				sleep(3);
		
				textoCadastro();
				
				
			}else{
			
			strcpy(player3[0],nomeUsuario);
			printf("\033[%d;%dH                       Digite o seu email: ",(18), (40));
			scanf("%s", & emailUsuario);
			strcpy(player3[1],emailUsuario);
			printf("\033[%d;%dH                       Digite a sua senha: ",(19), (40));
			scanf("%s", & senhaUsuario);
			printf(" \033[%d;%dH                       Digite a sua cor favorita: ",(20), (40));
			scanf("%s", & codigoUsuario);
			strcpy(player3[3],codigoUsuario);
			strcpy(player3[2],senhaUsuario);
			strcpy(playerAtual[0],player3[0]);
		}
		}else if(strcmp(player4[0],vazio) == 0 ){
			scanf("%s",&nomeUsuario);
			if(strcmp(nomeUsuario, "0") == 0){
				textoInicial();
			}
			if(strcmp(nomeUsuario, player1[0]) == 0 ||strcmp(nomeUsuario, player2[0]) == 0 || strcmp(nomeUsuario, player3[0]) == 0 || strcmp(nomeUsuario, player4[0]) == 0  ){
				
				printf(" \033[%d;%dH                                  Nome já em Uso !                                                 \n", (20), (40));
				printf(" \033[%d;%dH               para prosseguir informe um nome que não esteja em uso!                         \n", (21), (40) );
				
				sleep(3);
		
				textoCadastro();
				
				
			}else{
			
			strcpy(player4[0],nomeUsuario);
			printf("\033[%d;%dH                       Digite o seu email: ",(18), (40));
			scanf("%s", & emailUsuario);
			strcpy(player4[1],emailUsuario);
			printf("\033[%d;%dH                       Digite a sua senha: ",(19), (40));
			scanf("%s", & senhaUsuario);
			printf(" \033[%d;%dH                       Digite a sua cor favorita: ",(20), (40));
			scanf("%s", & codigoUsuario);
			strcpy(player4[3],codigoUsuario);
			strcpy(player4[2],senhaUsuario);
			strcpy(playerAtual[0],player4[0]);
		}
	}
	}}
	cadastraUsuario();
	}
		system("clear||cls");
		printf(" _______________________________________________________________________________________________________________");
	printf("\n|                                                                                                               |");
	printf("\n|   m         ____________        ___________            _____             __________                           |");
	printf("\n|   a        /____________|      /__________/|          /____/|           /_________/|                          |");
	printf("\n|   t                    ||      |   ___    ||         /    | |           |   __    ||                          |");
	printf("\n|   e         ___________||      |  |   |   ||        / /|  | |___        |  (__)   ||                          |");
	printf("\n|   m        /___________|/      |  |   |   ||       / /_|  |/___/|        >       < |          16 + 16 = 32    |");
	printf("\n|   a        | !                 |  |___|   ||      |___________|/        |   __    ||                          |");
	printf("\n|   t        | !___________      |          ||           |  ||            |  (__)   ||                          |");
	printf("\n|   i        |/___________/      |__________|/           |__|/            |_________|/                          |");
	printf("\n|   c                                                                                                           |");
	printf("\n|   a               soma !!!!                                                                                   |");
	printf("\n|                                                               32 + 32 = 64                                    |");
	printf("\n|   d         __   __    _____     __________                                            2 + 2 = 4              |");
	printf("\n|   i        |  | |  |  |     |        |        |     |                                                         |");
	printf("\n|   v        |  | |  |  |     |        |        |_____|                                                         |");
	printf("\n|   e        |  |_|  |  |_____|        |        |     |                                           4 + 4 = 8     |");
	printf("\n|   r        |       |  |     |        |        |     |                               8 + 8 = 16                |");
	printf("\n|   t        |       |  |     |        |        |     |                                                         |");
	printf("\n|   i                                                                                                           |");
	printf("\n|   d                                   ________    _______    __  __      _____         _                      |");
	printf("\n|   a            64 + 64 = 128         |            |     |   | |  | |    |             | |                     |");
	printf("\n|                                      |    ____    |_____|   | |__| |    |__           | |                     |");
	printf("\n|                                      |       |    |     |   |      |    |             |_|                     |");
	printf("\n|                                      |_______|    |     |   |      |    |_____         ()                     |");
	printf("\n|_______________________________________________________________________________________________________________|");
	printf("-----------------------------------------------------------------------------------------------------------------\n");
	printf("Se voce for novo no jogo, por favor realize o cadastro teclando  1 e pressionando enter \nse voce ja possui uma conta, tecle 2 e pressionando enter                                  \n");
	printf("1 - cadastrar-se                                                                  \n");
	printf("2 - entrar                                                                       \n");
	printf("3 - recuperar senha                                                                                 \n");
	scanf("%c",& respostaUserS );
	
	
	if (respostaUserS == '1' ){
		textoCadastro();
		textoMenu();
	
	}else if (respostaUserS == '2' )
	{	textoLogin();
	
		textoMenu();
		
	}else if(respostaUserS == '3'){
		char emailRecup[50],perguntaRecup[50];
		system("cls");
		printf("--=-==-=--=-==-=-=-=-=-=-=--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=====--\n");
		printf("|                   Opção selecionada: recuperação de senha                    |\n");
		printf("--=-==-=--=-==-=-=-=-=-=-=--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=====--\n");
		printf("|                   para voltar ao menu digite 0\n\n");
		printf("|                   Digite o e-mail cadastrado:");
		scanf("%s", & emailRecup);
		if(strcmp(emailRecup, "0") == 0){
			textoInicial();
		}
		printf("|                   Digite a sua cor favorita :");
		scanf("%s", & perguntaRecup);
		
		
		if(strcmp(player1[3], perguntaRecup) == 0 &&  strcmp(player1[1], emailRecup) == 0  ){
			printf("--=-==-=--=-==-=-=-=-=-=-=--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=====--\n");
			printf("                    Sua senha é :%s\n\n",player1[2]);
				printf("--=-==-=--=-==-=-=-=-=-=-=--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=====--\n");
			system("pause");
			textoInicial();
		}else if(strcmp(player2[3], perguntaRecup) == 0 &&  strcmp(player2[1], emailRecup) == 0  ){
			printf("--=-==-=--=-==-=-=-=-=-=-=--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=====--\n");
			printf("                    Sua senha é :%s\n\n",player2[2]);
			printf("--=-==-=--=-==-=-=-=-=-=-=--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=====--\n");
			system("pause");
			textoInicial();
		}else if(strcmp(player3[3], perguntaRecup) == 0 &&  strcmp(player3[1], emailRecup) == 0  ){
				printf("--=-==-=--=-==-=-=-=-=-=-=--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=====--\n");
			printf("                    Sua senha é :%s\n\n",player3[2]) ;
				printf("--=-==-=--=-==-=-=-=-=-=-=--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=====--\n");
			system("pause");
			textoInicial();
		}else if(strcmp(player4[3], perguntaRecup) == 0 &&  strcmp(player4[1], emailRecup) == 0  ){
			printf("--=-==-=--=-==-=-=-=-=-=-=--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=====--\n");
			printf("                    Sua senha é :%s\n\n",player4[2]);
			printf("--=-==-=--=-==-=-=-=-=-=-=--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=====--\n");
			system("pause");
			textoInicial();
		}else{
			printf("--=-==-=--=-==-=-=-=-=-=-=--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=====--\n");
			printf("|                    Email ou codigo invalidos!|\n\n");
			printf("--=-==-=--=-==-=-=-=-=-=-=--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=====--\n");
			system("pause");
			textoInicial();
		}
		
		
	}
	else{
		textoInicial();
		
	}

	
}
textoInicial();
	
	

}
