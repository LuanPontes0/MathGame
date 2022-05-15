#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX_LENGTH 100
#define NUM_STRINGS 10
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	char posicaoRank1 [NUM_STRINGS][MAX_LENGTH] = {"nome","0"} ;
	char posicaoRank2 [NUM_STRINGS][MAX_LENGTH] = {"nome","0"};
	char posicaoRank3 [NUM_STRINGS][MAX_LENGTH] = {"nome","0"} ;
	char posicaoRank4 [NUM_STRINGS][MAX_LENGTH] = {"nome","0"};
	int pontuacao = 0 ; 
 	int score = 0; 
	int escolhaUser ;	
	char nomeUsuario[30] = "";
	char emailUsuario[30] = "";
	char senhaUsuario[30] = "";
	char player1 [NUM_STRINGS][MAX_LENGTH] = {"luan","luanpontescabral@gmail.com","jujuba"};
	char player2 [NUM_STRINGS][MAX_LENGTH] = {"nome","email","senha"};
	char player3 [NUM_STRINGS][MAX_LENGTH] = {"nome","email","senha"};
	char player4 [NUM_STRINGS][MAX_LENGTH] = {"nome","email","senha"};
	char playerAtual [NUM_STRINGS][MAX_LENGTH] = {"nome","email","senha"};
	int player1Score = 0 ; 
	int player2Score = 0 ; 
	int player3Score = 0 ; 
	int player4Score = 0 ; 

	
	void textoInicial(){
		void textoMenu()
	{
		void textoJogo()
	{
  
 	
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
		
			
		
		if(strcmp(playerAtual[0],player1[0]) == 0 && score > player1Score){
			player1Score = score ;
			
			/*if(player1Score > atoi(posicaoRank1[1]) ){
				strcpy(posicaoRank2[0],posicaoRank1[0] );
				strcpy(posicaoRank2[1],posicaoRank1[1]  );	
				strcpy(posicaoRank1[0], player1[0]);
				itoa(player1Score, posicaoRank1[1], 10);
				
			} else if(player1Score > atoi(posicaoRank2[1]) ){
				
				strcpy(posicaoRank2[0], player1[0]);
				itoa(player1Score, posicaoRank2[1], 10);
			}
			else if(player1Score > atoi(posicaoRank3[1]) ){
				 
				strcpy(posicaoRank3[0], player1[0]);
				itoa(player1Score, posicaoRank3[1], 10);
			}
			else if(player1Score > atoi(posicaoRank4[1]) ){
				strcpy(posicaoRank4[0], player1[0]);
				itoa(player1Score, posicaoRank4[1], 10);
			}*/
		}
		if(strcmp(playerAtual[0],player2[0]) == 0 && score > player2Score){
			player2Score = score ; 
			/*
			if(player2Score > atoi(posicaoRank1[1]) ){
				strcpy(posicaoRank2[0],posicaoRank1[0] );
				strcpy(posicaoRank2[1],posicaoRank1[1]  );	
				strcpy(posicaoRank1[0], player2[0]);
				itoa(player2Score, posicaoRank1[1], 10);
				
				
			} else if(player2Score > atoi(posicaoRank2[1]) ){
				
				strcpy(posicaoRank2[0], player2[0]);
				itoa(player2Score, posicaoRank2[1], 10);
			}
			else if(player2Score > atoi(posicaoRank3[1]) ){
				
				strcpy(posicaoRank3[0], player2[0]);
				itoa(player2Score, posicaoRank3[1], 10);
			}
			else if(player2Score > atoi(posicaoRank4[1]) ){
				
				strcpy(posicaoRank4[0], player2[0]);
				itoa(player2Score, posicaoRank4[1], 10);
			}*/
		}
		if(strcmp(playerAtual[0],player3[0]) == 0 && score > player3Score ){
			
			player3Score = score ; 
			/*
			if(player3Score > atoi(posicaoRank1[1]) ){
				
				strcpy(posicaoRank1[0], player3[0]);
				itoa(player3Score, posicaoRank1[1], 10);
				
			} else if(player3Score > atoi(posicaoRank2[1]) ){
				
				strcpy(posicaoRank2[0], player3[0]);
				itoa(player3Score, posicaoRank2[1], 10);
			}
			else if(player3Score > atoi(posicaoRank3[1]) ){
				 
				strcpy(posicaoRank3[0], player3[0]);
				itoa(player3Score, posicaoRank3[1], 10);
			}
			else if(player3Score > atoi(posicaoRank4[1]) ){
				strcpy(posicaoRank4[0], player3[0]);
				itoa(player3Score, posicaoRank4[1], 10);
			}*/
		}
		if(strcmp(playerAtual[0],player4[0]) == 0 && score > player4Score ){
			player4Score = score ; 
			/*
			if(player4Score > atoi(posicaoRank1[1]) ){
				strcpy(posicaoRank1[0], player4[0]);
				itoa(player4Score, posicaoRank1[1], 10);
				
			} else if(player4Score > atoi(posicaoRank2[1]) ){
				
				strcpy(posicaoRank2[0], player4[0]);
				itoa(player4Score, posicaoRank2[1], 10);
			}
			else if(player4Score > atoi(posicaoRank3[1]) ){
				 
				strcpy(posicaoRank3[0], player4[0]);
				itoa(player4Score, posicaoRank3[1], 10);
			}
			else if(player4Score > atoi(posicaoRank4[1]) ){
				strcpy(posicaoRank4[0], player4[0]);
				itoa(player4Score, posicaoRank4[1], 10);
			}
			
		}*/
		
	}}
	
	
	int matriz[4][4] = {{10,16,17,10},
						{11,15,10,12},
						{13,14,15,11},
						{2,13,13,0}};
	int coluna;
	int linha;
	int contador;
	int respostaUser;
	void mostraMatriz(){
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
	printf(" ___________________________________________________                                                                   \n");
	printf("||          ||           ||           ||           ||       JOGADOR : %s             \n",playerAtual[0] );
	printf("||          ||           ||           ||           ||       PONTUACAO: %d             \n", score);
	printf("||    %d          %d           %d           %d                                        \n",matriz[0][0],matriz[0][1],matriz[0][2],matriz[0][3]);
	printf("||          ||           ||           ||           ||       movimentos:%d                           \n",pontuacao);
	printf("||__________||___________||___________||___________||       1: começar novamente                            \n");	
	printf("||          ||           ||           ||           ||       ESC: voltar para o menu principal\n");
	printf("||          ||           ||           ||           ||                                   \n");
	printf("||    %d           %d           %d           %d                                        \n",matriz[1][0],matriz[1][1],matriz[1][2],matriz[1][3]);
	printf("||          ||           ||           ||           ||                                  \n");
	printf("||__________||___________||___________||___________||                                   \n");
	printf("||          ||           ||           ||           ||                                 \n");
	printf("||          ||           ||           ||           ||                                   \n");
	printf("||    %d          %d           %d           %d              \n",matriz[2][0],matriz[2][1],matriz[2][2],matriz[2][3]);
	printf("||          ||           ||           ||           ||      ceta pra cima: mover numeros para cima\n");
	printf("||__________||___________||___________||___________||      ceta pra baixo: mover numeros para baixo\n");
	printf("||          ||           ||           ||           ||      ceta pra direita: mover numeros para direita\n");
	printf("||          ||           ||           ||           ||      ceta pra esquerda: mover numeros para esquerda\n");
	printf("||    %d          %d           %d           %d                                         \n",matriz[3][0],matriz[3][1],matriz[3][2],matriz[3][3]);
	printf("||          ||           ||           ||           ||                                  \n");
	printf("||__________||___________||___________||___________||                                   \n");
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
	
	void movCima(){ 
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
			
	}
	void movDireita(){
		
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
	placar();
	
		if(achouN == 0){
			
			printf("GAME OVER\n ");
			system("pause");
			textoMenu();
			mostrouGameOver = 1 ;
			break ; 
			
		break;
	}	
		if(winGame == 1 ){
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
			
			
				system("cls");
				textoMenu();
				mostrouGameOver = 1 ;
				break;
				
		
			
}			
	
	


 

	
}
	}
	
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
	printf("JOGADOR ATUAL: %s\n",playerAtual[0]);
	printf("                                                       Melhores jogadores       \n");
	printf("                                                      NOME      PONTUACAO       \n");
	printf("                                                    ||=====================||\n");
	printf("                                                    ||%s        %d           \n",player1[0],player1Score );
	printf("                                                    ||%s        %d           \n",player2[0],player2Score);
	printf("1 - Nova Partida                                    ||%s        %d           \n",player3[0],player3Score);
	printf("2 - Continuar Partida                               ||%s        %d           \n",player4[0],player4Score);
	printf("3 - Configuracoes                                   ||========0============||\n");
	printf("4 - Ajuda                                                                    \n");
	printf("5 - trocar de usuario                                                        \n");
	printf("                                                                             \n");
	printf("                                                                             \n");
	scanf("%d", & escolhaUser);
	switch(escolhaUser)
	{
		case 1 :
			textoJogo(); 
			break;
		case 2 :
			textoJogo();
			break; 	
		case 3 :
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
		case 4 :
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
		case 5 :
			system("cls");
			printf("Saindo.....");
			textoInicial();
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
		
		printf("Digite o numero do cadastro para selecionar:\n");
		printf("=---=-=-==--=-=-==--=-=-=-=-=-=\n");
		printf("Player1:%s\n",player1[0]);
		printf("Player2:%s\n",player2[0]);
		printf("Player3:%s\n",player3[0]);
		printf("Player4:%s\n",player4[0]);
		printf("=---=-=-==--=-=-==--=-=-=-=-=-=\n");
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
	}
	 fazerLogin();
}
	void textoCadastro()
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
	printf("Opcao escolhida: Cadastro!                                 \n");
	void cadastraUsuario(){
	char vazio[5] = "nome";
	printf("Digite o seu nome de usuario: ");
		if(strcmp(player1[0],vazio) == 0 ){
			scanf("%s",&nomeUsuario);
			strcpy(player1[0],nomeUsuario);
			printf("Digite o seu email: ");
			scanf("%s", & emailUsuario);
			strcpy(player1[1],emailUsuario);
			printf("Digite a sua senha: ");
			scanf("%s", & senhaUsuario);
			strcpy(player1[2],senhaUsuario);
			strcpy(playerAtual[0],player1[0]);
		}else if(strcmp(player2[0],vazio) == 0 ){
			scanf("%s",&nomeUsuario);
			strcpy(player2[0],nomeUsuario);
			printf("Digite o seu email: ");
			scanf("%s", & emailUsuario);
			strcpy(player2[1],emailUsuario);
			printf("Digite a sua senha: ");
			scanf("%s", & senhaUsuario);
			strcpy(player2[2],senhaUsuario);
			strcpy(playerAtual[0],player2[0]);
		}else if(strcmp(player3[0],vazio) == 0 ){
			scanf("%s",&nomeUsuario);
			strcpy(player3[0],nomeUsuario);
			printf("Digite o seu email: ");
			scanf("%s", & emailUsuario);
			strcpy(player3[1],emailUsuario);
			printf("Digite a sua senha: ");
			scanf("%s", & senhaUsuario);
			strcpy(player3[2],senhaUsuario);
			strcpy(playerAtual[0],player3[0]);
		}else if(strcmp(player4[0],vazio) == 0 ){
			scanf("%s",&nomeUsuario);
			strcpy(player4[0],nomeUsuario);
			printf("Digite o seu email: ");
			scanf("%s", & emailUsuario);
			strcpy(player4[1],emailUsuario);
			printf("Digite a sua senha: ");
			scanf("%s", & senhaUsuario);
			strcpy(player4[2],senhaUsuario);
			strcpy(playerAtual[0],player4[0]);
		}
		
	}
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
	printf("                                                                                \n");
	scanf("%d",& escolhaUser );
	if (escolhaUser == 1 ){
		textoCadastro();
		textoMenu();
	
	}else if (escolhaUser == 2)
	{	textoLogin();
	
		textoMenu();
		
	}

	
}
textoInicial();
	
	

}
