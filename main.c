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
	char respostaUserAsci;
	char corDefault[50] = "\x1b[37m";
	int p,q; 
	 int posicionador = 5 ;
	 int posicionadorY = 5 ;
	char nomes2[50][50] = {"nome","nome","nome","nome"};
	int vetor2[4] = {0,0,0,0};
	char playersNome[30][30]  = {""}; 	
	
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
			void zeraMatriz(){
			for(p = 0; p<4; p++){
				for(q = 0; q<4;q++){
					matriz[p][q] = 0 ;
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
		
		char colorir0_0[50] = "\x1b[31m";
		char colorir0_1[50] = "";
		char colorir0_2[50] = "\x1b[1m\x1b[30m";
		char colorir0_3[50] = "\x1b[34m";
		char colorir1_0[50] = "\x1b[31m";
		char colorir1_1[50] = "\x1b[31m";
		char colorir1_2[50] = "\x1b[31m";
		char colorir1_3[50] = "\x1b[31m";
		char colorir2_0[50] = "\x1b[31m";
		char colorir2_1[50] = "\x1b[31m";
		char colorir2_2[50] = "\x1b[31m";
		char colorir2_3[50] = "\x1b[31m";
		char colorir3_0[50] = "\x1b[31m";
		char colorir3_1[50] = "\x1b[31m";
		char colorir3_2[50] = "\x1b[31m";
		char colorir3_3[50] = "\x1b[31m";
		
		if(matriz[0][0] == 0){
			strcpy(colorir0_0,"\x1b[37m");
		}else if (matriz[0][0] == 2){
			strcpy(colorir0_0,"\x1b[31m");
		}else if (matriz[0][0] == 4){
			strcpy(colorir0_0,"\x1b[34m");
		}else if (matriz[0][0] == 8){
			strcpy(colorir0_0,"\x1b[32m");
		}else if (matriz[0][0] == 16){
			strcpy(colorir0_0,"\x1b[33m");
		}else if (matriz[0][0] == 32){
			strcpy(colorir0_0,"\x1b[35m");
		}else if (matriz[0][0] == 64){
			strcpy(colorir0_0,"\x1b[92m");
		}else if (matriz[0][0] == 128){
			strcpy(colorir0_0,"\x1b[36m");
		}else if (matriz[0][0] == 256){
			strcpy(colorir0_0,"\x1b[94m");
		}else if (matriz[0][0] == 512){
			strcpy(colorir0_0,"\x1b[95m");
		}else if (matriz[0][0] == 1024){
			strcpy(colorir0_0,"\x1b[96m");
		}else if (matriz[0][0] == 2048){
			strcpy(colorir0_0,"\x1b[91m");
		}
		if(matriz[0][1] == 0){
			strcpy(colorir0_1,"\x1b[37m");
		}else if (matriz[0][1] == 2){
			strcpy(colorir0_1,"\x1b[31m");
		}else if (matriz[0][1] == 4){
			strcpy(colorir0_1,"\x1b[34m");
		}else if (matriz[0][1] == 8){
			strcpy(colorir0_1,"\x1b[32m");
		}else if (matriz[0][1] == 16){
			strcpy(colorir0_1,"\x1b[33m");
		}else if (matriz[0][1] == 32){
			strcpy(colorir0_1,"\x1b[35m");
		}else if (matriz[0][1] == 64){
			strcpy(colorir0_1,"\x1b[92m");
		}else if (matriz[0][1] == 128){
			strcpy(colorir0_1,"\x1b[36m");
		}else if (matriz[0][1] == 256){
			strcpy(colorir0_1,"\x1b[94m");
		}else if (matriz[0][1] == 512){
			strcpy(colorir0_1,"\x1b[95m");
		}else if (matriz[0][1] == 1024){
			strcpy(colorir0_1,"\x1b[96m");
		}else if (matriz[0][1] == 2048){
			strcpy(colorir0_1,"\x1b[91m");
		}
		if(matriz[0][2] == 0){
			strcpy(colorir0_2,"\x1b[37m");
		}else if (matriz[0][2] == 2){
			strcpy(colorir0_2,"\x1b[31m");
		}else if (matriz[0][2] == 4){
			strcpy(colorir0_2,"\x1b[34m");
		}else if (matriz[0][2] == 8){
			strcpy(colorir0_2,"\x1b[32m");
		}else if (matriz[0][2] == 16){
			strcpy(colorir0_2,"\x1b[33m");
		}else if (matriz[0][2] == 32){
			strcpy(colorir0_2,"\x1b[35m");
		}else if (matriz[0][2] == 64){
			strcpy(colorir0_2,"\x1b[92m");
		}else if (matriz[0][2] == 128){
			strcpy(colorir0_2,"\x1b[36m");
		}else if (matriz[0][2] == 256){
			strcpy(colorir0_2,"\x1b[94m");
		}else if (matriz[0][2] == 512){
			strcpy(colorir0_2,"\x1b[95m");
		}else if (matriz[0][2] == 1024){
			strcpy(colorir0_2,"\x1b[96m");
		}else if (matriz[0][2] == 2048){
			strcpy(colorir0_2,"\x1b[91m");
		}
		if(matriz[0][3] == 0){
			strcpy(colorir0_3,"\x1b[37m");
		}else if (matriz[0][3] == 2){
			strcpy(colorir0_3,"\x1b[31m");
		}else if (matriz[0][3] == 4){
			strcpy(colorir0_3,"\x1b[34m");
		}else if (matriz[0][3] == 8){
			strcpy(colorir0_3,"\x1b[32m");
		}else if (matriz[0][3] == 16){
			strcpy(colorir0_3,"\x1b[33m");
		}else if (matriz[0][3] == 32){
			strcpy(colorir0_3,"\x1b[35m");
		}else if (matriz[0][3] == 64){
			strcpy(colorir0_3,"\x1b[92m");
		}else if (matriz[0][3] == 128){
			strcpy(colorir0_3,"\x1b[36m");
		}else if (matriz[0][3] == 256){
			strcpy(colorir0_3,"\x1b[94m");
		}else if (matriz[0][3] == 512){
			strcpy(colorir0_3,"\x1b[95m");
		}else if (matriz[0][3] == 1024){
			strcpy(colorir0_3,"\x1b[96m");
		}else if (matriz[0][3] == 2048){
			strcpy(colorir0_3,"\x1b[91m");
		}
		if(matriz[1][0] == 0){
			strcpy(colorir1_0,"\x1b[37m");
		}else if (matriz[1][0] == 2){
			strcpy(colorir1_0,"\x1b[31m");
		}else if (matriz[1][0] == 4){
			strcpy(colorir1_0,"\x1b[34m");
		}else if (matriz[1][0] == 8){
			strcpy(colorir1_0,"\x1b[32m");
		}else if (matriz[1][0] == 16){
			strcpy(colorir1_0,"\x1b[33m");
		}else if (matriz[1][0] == 32){
			strcpy(colorir1_0,"\x1b[35m");
		}else if (matriz[1][0] == 64){
			strcpy(colorir1_0,"\x1b[92m");
		}else if (matriz[1][0] == 128){
			strcpy(colorir1_0,"\x1b[36m");
		}else if (matriz[1][0] == 256){
			strcpy(colorir1_0,"\x1b[94m");
		}else if (matriz[1][0] == 512){
			strcpy(colorir1_0,"\x1b[95m");
		}else if (matriz[1][0] == 1024){
			strcpy(colorir1_0,"\x1b[96m");
		}else if (matriz[1][0] == 2048){
			strcpy(colorir1_0,"\x1b[91m");
		}
		if(matriz[1][1] == 0){
			strcpy(colorir1_1,"\x1b[37m");
		}else if (matriz[1][1] == 2){
			strcpy(colorir1_1,"\x1b[31m");
		}else if (matriz[1][1] == 4){
			strcpy(colorir1_1,"\x1b[34m");
		}else if (matriz[1][1] == 8){
			strcpy(colorir1_1,"\x1b[32m");
		}else if (matriz[1][1] == 16){
			strcpy(colorir1_1,"\x1b[33m");
		}else if (matriz[1][1] == 32){
			strcpy(colorir1_1,"\x1b[35m");
		}else if (matriz[1][1] == 64){
			strcpy(colorir1_1,"\x1b[92m");
		}else if (matriz[1][1] == 128){
			strcpy(colorir1_1,"\x1b[36m");
		}else if (matriz[1][1] == 256){
			strcpy(colorir1_1,"\x1b[94m");
		}else if (matriz[1][1] == 512){
			strcpy(colorir1_1,"\x1b[95m");
		}else if (matriz[1][1] == 1024){
			strcpy(colorir1_1,"\x1b[96m");
		}else if (matriz[1][1] == 2048){
			strcpy(colorir1_1,"\x1b[91m");
		}
		if(matriz[1][2] == 0){
			strcpy(colorir1_2,"\x1b[37m");
		}else if (matriz[1][2] == 2){
			strcpy(colorir1_2,"\x1b[31m");
		}else if (matriz[1][2] == 4){
			strcpy(colorir1_2,"\x1b[34m");
		}else if (matriz[1][2] == 8){
			strcpy(colorir1_2,"\x1b[32m");
		}else if (matriz[1][2] == 16){
			strcpy(colorir1_2,"\x1b[33m");
		}else if (matriz[1][2] == 32){
			strcpy(colorir1_2,"\x1b[35m");
		}else if (matriz[1][2] == 64){
			strcpy(colorir1_2,"\x1b[92m");
		}else if (matriz[1][2] == 128){
			strcpy(colorir1_2,"\x1b[36m");
		}else if (matriz[1][2] == 256){
			strcpy(colorir1_2,"\x1b[94m");
		}else if (matriz[1][2] == 512){
			strcpy(colorir1_2,"\x1b[95m");
		}else if (matriz[1][2] == 1024){
			strcpy(colorir1_2,"\x1b[96m");
		}else if (matriz[1][2] == 2048){
			strcpy(colorir1_2,"\x1b[91m");
		}
		if(matriz[1][3] == 0){
			strcpy(colorir1_3,"\x1b[37m");
		}else if (matriz[1][3] == 2){
			strcpy(colorir1_3,"\x1b[31m");
		}else if (matriz[1][3] == 4){
			strcpy(colorir1_3,"\x1b[34m");
		}else if (matriz[1][3] == 8){
			strcpy(colorir1_3,"\x1b[32m");
		}else if (matriz[1][3] == 16){
			strcpy(colorir1_3,"\x1b[33m");
		}else if (matriz[1][3] == 32){
			strcpy(colorir1_3,"\x1b[35m");
		}else if (matriz[1][3] == 64){
			strcpy(colorir1_3,"\x1b[92m");
		}else if (matriz[1][3] == 128){
			strcpy(colorir1_3,"\x1b[36m");
		}else if (matriz[1][3] == 256){
			strcpy(colorir1_3,"\x1b[94m");
		}else if (matriz[1][3] == 512){
			strcpy(colorir1_3,"\x1b[95m");
		}else if (matriz[1][3] == 1024){
			strcpy(colorir1_3,"\x1b[96m");
		}else if (matriz[1][3] == 2048){
			strcpy(colorir1_3,"\x1b[91m");
	}
		if(matriz[2][0] == 0){
			strcpy(colorir2_0,"\x1b[37m");
		}else if (matriz[2][0] == 2){
			strcpy(colorir2_0,"\x1b[31m");
		}else if (matriz[2][0] == 4){
			strcpy(colorir2_0,"\x1b[34m");
		}else if (matriz[2][0] == 8){
			strcpy(colorir2_0,"\x1b[32m");
		}else if (matriz[2][0] == 16){
			strcpy(colorir2_0,"\x1b[33m");
		}else if (matriz[2][0] == 32){
			strcpy(colorir2_0,"\x1b[35m");
		}else if (matriz[2][0] == 64){
			strcpy(colorir2_0,"\x1b[92m");
		}else if (matriz[2][0] == 128){
			strcpy(colorir2_0,"\x1b[36m");
		}else if (matriz[2][0] == 256){
			strcpy(colorir2_0,"\x1b[94m");
		}else if (matriz[2][0] == 512){
			strcpy(colorir2_0,"\x1b[95m");
		}else if (matriz[2][0] == 1024){
			strcpy(colorir2_0,"\x1b[96m");
		}else if (matriz[2][0] == 2048){
			strcpy(colorir2_0,"\x1b[91m");
		}
		if(matriz[2][1] == 0){
			strcpy(colorir2_1,"\x1b[37m");
		}else if (matriz[2][1] == 2){
			strcpy(colorir2_1,"\x1b[31m");
		}else if (matriz[2][1] == 4){
			strcpy(colorir2_1,"\x1b[34m");
		}else if (matriz[2][1] == 8){
			strcpy(colorir2_1,"\x1b[32m");
		}else if (matriz[2][1] == 16){
			strcpy(colorir2_1,"\x1b[33m");
		}else if (matriz[2][1] == 32){
			strcpy(colorir2_1,"\x1b[35m");
		}else if (matriz[2][1] == 64){
			strcpy(colorir2_1,"\x1b[92m");
		}else if (matriz[2][1] == 128){
			strcpy(colorir2_1,"\x1b[36m");
		}else if (matriz[2][1] == 256){
			strcpy(colorir2_1,"\x1b[94m");
		}else if (matriz[2][1] == 512){
			strcpy(colorir2_1,"\x1b[95m");
		}else if (matriz[2][1] == 1024){
			strcpy(colorir2_1,"\x1b[96m");
		}else if (matriz[2][1] == 2048){
			strcpy(colorir2_1,"\x1b[91m");
	}
		if(matriz[2][2] == 0){
			strcpy(colorir2_2,"\x1b[37m");
		}else if (matriz[2][2] == 2){
			strcpy(colorir2_2,"\x1b[31m");
		}else if (matriz[2][2] == 4){
			strcpy(colorir2_2,"\x1b[34m");
		}else if (matriz[2][2] == 8){
			strcpy(colorir2_2,"\x1b[32m");
		}else if (matriz[2][2] == 16){
			strcpy(colorir2_2,"\x1b[33m");
		}else if (matriz[2][2] == 32){
			strcpy(colorir2_2,"\x1b[35m");
		}else if (matriz[2][2] == 64){
			strcpy(colorir2_2,"\x1b[92m");
		}else if (matriz[2][2] == 128){
			strcpy(colorir2_2,"\x1b[36m");
		}else if (matriz[2][2] == 256){
			strcpy(colorir2_2,"\x1b[94m");
		}else if (matriz[2][2] == 512){
			strcpy(colorir2_2,"\x1b[95m");
		}else if (matriz[2][2] == 1024){
			strcpy(colorir2_2,"\x1b[96m");
		}else if (matriz[2][2] == 2048){
			strcpy(colorir2_2,"\x1b[91m");
		}
		if(matriz[2][3] == 0){
			strcpy(colorir2_3,"\x1b[37m");
		}else if (matriz[2][3] == 2){
			strcpy(colorir2_3,"\x1b[31m");
		}else if (matriz[2][3] == 4){
			strcpy(colorir2_3,"\x1b[34m");
		}else if (matriz[2][3] == 8){
			strcpy(colorir2_3,"\x1b[32m");
		}else if (matriz[2][3] == 16){
			strcpy(colorir2_3,"\x1b[33m");
		}else if (matriz[2][3] == 32){
			strcpy(colorir2_3,"\x1b[35m");
		}else if (matriz[2][3] == 64){
			strcpy(colorir2_3,"\x1b[92m");
		}else if (matriz[2][3] == 128){
			strcpy(colorir2_3,"\x1b[36m");
		}else if (matriz[2][3] == 256){
			strcpy(colorir2_3,"\x1b[94m");
		}else if (matriz[2][3] == 512){
			strcpy(colorir2_3,"\x1b[95m");
		}else if (matriz[2][3] == 1024){
			strcpy(colorir2_3,"\x1b[96m");
		}else if (matriz[2][3] == 2048){
			strcpy(colorir2_3,"\x1b[91m");
		}if(matriz[3][0] == 0){
			strcpy(colorir3_0,"\x1b[37m");
		}else if (matriz[3][0] == 2){
			strcpy(colorir3_0,"\x1b[31m");
		}else if (matriz[3][0] == 4){
			strcpy(colorir3_0,"\x1b[34m");
		}else if (matriz[3][0] == 8){
			strcpy(colorir3_0,"\x1b[32m");
		}else if (matriz[3][0] == 16){
			strcpy(colorir3_0,"\x1b[33m");
		}else if (matriz[3][0] == 32){
			strcpy(colorir3_0,"\x1b[35m");
		}else if (matriz[3][0] == 64){
			strcpy(colorir3_0,"\x1b[92m");
		}else if (matriz[3][0] == 128){
			strcpy(colorir3_0,"\x1b[36m");
		}else if (matriz[3][0] == 256){
			strcpy(colorir3_0,"\x1b[94m");
		}else if (matriz[3][0] == 512){
			strcpy(colorir3_0,"\x1b[95m");
		}else if (matriz[3][0] == 1024){
			strcpy(colorir3_0,"\x1b[96m");
		}else if (matriz[3][0] == 2048){
			strcpy(colorir3_0,"\x1b[91m");
		}
		if(matriz[3][1] == 0){
			strcpy(colorir3_1,"\x1b[37m");
		}else if (matriz[3][1] == 2){
			strcpy(colorir3_1,"\x1b[31m");
		}else if (matriz[3][1] == 4){
			strcpy(colorir3_1,"\x1b[34m");
		}else if (matriz[3][1] == 8){
			strcpy(colorir3_1,"\x1b[32m");
		}else if (matriz[3][1] == 16){
			strcpy(colorir3_1,"\x1b[33m");
		}else if (matriz[3][1] == 32){
			strcpy(colorir3_1,"\x1b[35m");
		}else if (matriz[3][1] == 64){
			strcpy(colorir3_1,"\x1b[92m");
		}else if (matriz[3][1] == 128){
			strcpy(colorir3_1,"\x1b[36m");
		}else if (matriz[3][1] == 256){
			strcpy(colorir3_1,"\x1b[94m");
		}else if (matriz[3][1] == 512){
			strcpy(colorir3_1,"\x1b[95m");
		}else if (matriz[3][1] == 1024){
			strcpy(colorir3_1,"\x1b[96m");
		}else if (matriz[3][1] == 2048){
			strcpy(colorir3_1,"\x1b[91m");
		}
		if(matriz[3][2] == 0){
			strcpy(colorir3_2,"\x1b[37m");
		}else if (matriz[3][2] == 2){
			strcpy(colorir3_2,"\x1b[31m");
		}else if (matriz[3][2] == 4){
			strcpy(colorir3_2,"\x1b[34m");
		}else if (matriz[3][2] == 8){
			strcpy(colorir3_2,"\x1b[32m");
		}else if (matriz[3][2] == 16){
			strcpy(colorir3_2,"\x1b[33m");
		}else if (matriz[3][2] == 32){
			strcpy(colorir3_2,"\x1b[35m");
		}else if (matriz[3][2] == 64){
			strcpy(colorir3_2,"\x1b[92m");
		}else if (matriz[3][2] == 128){
			strcpy(colorir3_2,"\x1b[36m");
		}else if (matriz[3][2] == 256){
			strcpy(colorir3_2,"\x1b[94m");
		}else if (matriz[3][2] == 512){
			strcpy(colorir3_2,"\x1b[95m");
		}else if (matriz[3][2] == 1024){
			strcpy(colorir3_2,"\x1b[96m");
		}else if (matriz[3][2] == 2048){
			strcpy(colorir3_2,"\x1b[91m");
	}
	if(matriz[3][3] == 0){
			strcpy(colorir3_3,"\x1b[37m");
		}else if (matriz[3][3] == 2){
			strcpy(colorir3_3,"\x1b[31m");
		}else if (matriz[3][3] == 4){
			strcpy(colorir3_3,"\x1b[34m");
		}else if (matriz[3][3] == 8){
			strcpy(colorir3_3,"\x1b[32m");
		}else if (matriz[3][3] == 16){
			strcpy(colorir3_3,"\x1b[33m");
		}else if (matriz[3][3] == 32){
			strcpy(colorir3_3,"\x1b[35m");
		}else if (matriz[3][3] == 64){
			strcpy(colorir3_3,"\x1b[92m");
		}else if (matriz[3][3] == 128){
			strcpy(colorir3_3,"\x1b[36m");
		}else if (matriz[3][3] == 256){
			strcpy(colorir3_3,"\x1b[94m");
		}else if (matriz[3][3] == 512){
			strcpy(colorir3_3,"\x1b[95m");
		}else if (matriz[3][3] == 1024){
			strcpy(colorir3_3,"\x1b[96m");
		}else if (matriz[3][3] == 2048){
			strcpy(colorir3_3,"\x1b[91m");
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
	printf("\033[%d;%dH\x1b[31m--=-==-=--=-==-=-=-=-=-=-=--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-==--=-=-\n",(5), (42));
	printf("\033[%d;%dH*                          _______                            *\n",(1+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*     ||||  ||||    |||    |-------| ||    ||             -   *\n",(2+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*     || |||| ||   || ||      |||    ||____||           +     *\n",(3+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*\x1b[91m     ||  ||  ||  || _ ||     |||    ||----||            -    *\n",(4+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*     ||      || ||     ||    |_|    ||    ||           +     *\n",(5+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*\x1b[94m                    ||||||     ||             ||||||    -    *\n",(6+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*                    ||        ||||   |||  ||| ||       +     *\n",(7+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*                    || ||||  ||__||  || ||||| ||||||    -    *\n",(8+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*\x1b[32m 2+2=peixe\x1b[34m          ||||||| ||    || ||    || ||       _     *\n",(9+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*                                              ||||||    +    *\n",(10+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*                                                        +    *\n",(11+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH--=-==-=--=-==-=-=-=-=-=-=--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\x1b[37m\n",(17), (42));
	printf("\033[%d;%dH%s___________________________________________________                                                                   \n",(13+posicionador), (40+posicionadorY),corDefault);
	printf("\033[%d;%dH||          ||           ||           ||           ||       JOGADOR :\x1b[92m %s %s             \n",(14+posicionador), (40+posicionadorY),playerAtual[0],corDefault );
	printf("\033[%d;%dH||          ||           ||           ||           ||       PONTUACAO:\x1b[35m %d %s             \n",(15+posicionador), (40+posicionadorY), score,corDefault);
	printf("\033[%d;%dH||   %s %d %s          %s %d %s           %s %d %s          %s %d %s                                         \n",(16+posicionador), (40+posicionadorY),colorir0_0,matriz[0][0],corDefault,colorir0_1,matriz[0][1],corDefault,colorir0_2,matriz[0][2],corDefault,colorir0_3,matriz[0][3],corDefault);
	printf("\033[%d;%dH||          ||           ||           ||           ||       movimentos:\x1b[33m %d %s                           \n",(17+posicionador), (40+posicionadorY),pontuacao,corDefault);
	printf("\033[%d;%dH||__________||___________||___________||___________||       \x1b[31mR%s : começar novamente                            \n",(18+posicionador), (40+posicionadorY),corDefault);	
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
		case 114:
				zeraMatriz();
				break;
				
		
			
}			
	
	


 

	
}
	}
	int x, y;
	
		system("clear||cls");
		printf("                                                                                           \n");
		printf("\033[%d;%dH\x1b[31m--=-==-=--=-==-=-=-=-=-=-=--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-==--=-=-\n",(5), (42));
	printf("\033[%d;%dH*                          _______                            *\n",(1+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*     ||||  ||||    |||    |-------| ||    ||             -   *\n",(2+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*     || |||| ||   || ||      |||    ||____||           +     *\n",(3+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*\x1b[91m     ||  ||  ||  || _ ||     |||    ||----||            -    *\n",(4+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*     ||      || ||     ||    |_|    ||    ||           +     *\n",(5+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*\x1b[94m                    ||||||     ||             ||||||    -    *\n",(6+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*                    ||        ||||   |||  ||| ||       +     *\n",(7+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*                    || ||||  ||__||  || ||||| ||||||    -    *\n",(8+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*\x1b[32m 2+2=peixe\x1b[34m          ||||||| ||    || ||    || ||       _     *\n",(9+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*                                              ||||||    +    *\n",(10+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*                                                        +    *\n",(11+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH--=-==-=--=-==-=-=-=-=-=-=--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\x1b[37m\n",(17), (42));
	printf("\033[%d;%dHJOGADOR ATUAL:\x1b[92m %s\n \x1b[37m",(13+posicionador), (40),playerAtual[0]);
	printf("\033[%d;%dH                                                       Melhores jogadores       \n",(14+posicionador), (40));
	printf("\033[%d;%dH                                                      NOME      PONTUACAO       \n",(15+posicionador), (40));
	printf("\033[%d;%dH                                                    ||=====================||\n",(16+posicionador), (40));
	printf("\033[%d;%dH                                                    ||%s        %i         ||",(17+posicionador), (40),nomes2[0],vetor2[0]);
	printf("\033[%d;%dH                                                    ||%s        %i         ||\n",(18+posicionador), (40),nomes2[1],vetor2[1]);
	printf("\033[%d;%dH\x1b[92m1 - Nova Partida \x1b[37m                                   ||%s        %i         ||\n",(19+posicionador), (40),nomes2[2],vetor2[2]);
	printf("\033[%d;%dH\x1b[94m2 - Continuar Partida\x1b[37m                               ||%s        %i         ||\n",(20+posicionador), (40),nomes2[3],vetor2[3]);
	printf("\033[%d;%dH\x1b[96m3 - Configuracoes   \x1b[37m                                ||=====================||\n",(21+posicionador), (40));
	printf("\033[%d;%dH\x1b[93m4 - Ajuda\x1b[37m                                                                    \n",(22+posicionador), (40));
	printf("\033[%d;%dH\x1b[91m5 - trocar de usuario\x1b[37m                                                        \n",(23+posicionador), (40));
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
			printf("\033[%d;%dH\x1b[31m--=-==-=--=-==-=-=-=-=-=-=--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-==--=-=-\n",(5), (42));
	printf("\033[%d;%dH*                          _______                            *\n",(1+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*     ||||  ||||    |||    |-------| ||    ||             -   *\n",(2+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*     || |||| ||   || ||      |||    ||____||           +     *\n",(3+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*\x1b[91m     ||  ||  ||  || _ ||     |||    ||----||            -    *\n",(4+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*     ||      || ||     ||    |_|    ||    ||           +     *\n",(5+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*\x1b[94m                    ||||||     ||             ||||||    -    *\n",(6+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*                    ||        ||||   |||  ||| ||       +     *\n",(7+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*                    || ||||  ||__||  || ||||| ||||||    -    *\n",(8+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*\x1b[32m 2+2=peixe\x1b[34m          ||||||| ||    || ||    || ||       _     *\n",(9+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*                                              ||||||    +    *\n",(10+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*                                                        +    *\n",(11+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH--=-==-=--=-==-=-=-=-=-=-=--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\x1b[37m\n",(17), (42));
			printf("\033[%d;%dHconfigurações\n",(18), (70));
			printf("\033[%d;%dHEscolha uma das opções abaixo para prosseguir: \n",(19), (42));
			printf("\033[%d;%dH1 - Alterar a cor do tabuleiro\n",(20), (42));
			printf("\033[%d;%dH0 - Voltar para o menu principal\n",(21), (42));
			scanf("%d", & escolhaUser);
			if(escolhaUser == 4){
				textoMenu();
			}if(escolhaUser == 1 ){
				
				printf("\033[%d;%dH01-\x1b[34mAzul\n\x1b[37m\033[%d;%dH02-\x1b[32mVerde\n\x1b[37m\033[%d;%dH03-\x1b[37mPadrão\n\033[%d;%dH\x1b[31m0-VOLTAR\x1b[37m\n",(23), (45),(24), (46),(25), (47),(26), (48));
				scanf("%d",&escolhaUser);
				if(escolhaUser == 1){
					strcpy(corDefault,"\x1b[96m");
					textoMenu();
				}if(escolhaUser == 2){
					strcpy(corDefault,"\x1b[92m");
					textoMenu();
				}if(escolhaUser == 3){
					strcpy(corDefault,"\x1b[37m");
					textoMenu();
				}if(escolhaUser == 0){
					textoMenu();
				}
				
			}else{
				textoMenu();
			}
			break;
		case '4' :
			posicionadorY = 5 ;
			system("clear||cls");
		printf("                                                                                \n");
			printf("\033[%d;%dH\x1b[31m--=-==-=--=-==-=-=-=-=-=-=--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-==--=-=-\n",(5), (42));
	printf("\033[%d;%dH*                          _______                            *\n",(1+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*     ||||  ||||    |||    |-------| ||    ||             -   *\n",(2+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*     || |||| ||   || ||      |||    ||____||           +     *\n",(3+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*\x1b[91m     ||  ||  ||  || _ ||     |||    ||----||            -    *\n",(4+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*     ||      || ||     ||    |_|    ||    ||           +     *\n",(5+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*\x1b[94m                    ||||||     ||             ||||||    -    *\n",(6+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*                    ||        ||||   |||  ||| ||       +     *\n",(7+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*                    || ||||  ||__||  || ||||| ||||||    -    *\n",(8+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*\x1b[32m 2+2=peixe\x1b[34m          ||||||| ||    || ||    || ||       _     *\n",(9+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*                                              ||||||    +    *\n",(10+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*                                                        +    *\n",(11+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH--=-==-=--=-==-=-=-=-=-=-=--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\x1b[37m\n",(17), (42));
		    printf("\033[%d;%dH|      REGRAS DO JOGO: ENTÃO \x1b[32m %s \x1b[37m TUDO COMEÇA COM UMA     	 |",(18), (42+posicionadorY),playerAtual[0]);
			printf("\033[%d;%dH|  FORMA GEOMETRICA E DENTRO DELA TEMOS ALGUNS ESPEÇOS     |",(19), (42+posicionadorY));
			printf("\033[%d;%dH|  VAZIOS E AO INICIAR O JOGO VOCê GANHA DOIS NUMEROS      |",(20), (42+posicionadorY));
			printf("\033[%d;%dH|  2, 2 E AI COMEÇA JOGO, A REGRA É SEMPRE VOCÊ JUNTAR     |",(21), (42+posicionadorY));
			printf("\033[%d;%dH|  SEMPRE DOIS NUMEROS IGUAIS AI OS DOIS SOMAM UM AO OUTRO |",(22), (42+posicionadorY));
			printf("\033[%d;%dH|  NO CASO 2 +2 = 4, POREM VOCÊ JUNTA OS NUMEROS MOVENDO   |",(23), (42+posicionadorY));
			printf("\033[%d;%dH|  A TELINHA COMS OS NUMEROS, SÃO QUATRO MOVIMENTOS        |",(24), (42+posicionadorY));
			printf("\033[%d;%dH|  PARA CIMA, PARA BAIXO, PARA DIREITA E OU PARA ESQUERDA  |",(25), (42+posicionadorY));
			printf("\033[%d;%dH|                                                          |",(26), (42+posicionadorY));
			printf("\033[%d;%dH|                          ^                               |",(28), (42+posicionadorY));
			printf("\033[%d;%dH|                          |                               |",(29), (42+posicionadorY));
			printf("\033[%d;%dH|                    <____ | ____>                         |",(30), (42+posicionadorY));
			printf("\033[%d;%dH|                          |                               |",(31), (42+posicionadorY));
			printf("\033[%d;%dH|                          |                               |",(32), (42+posicionadorY));
			printf("\033[%d;%dH|                          +                               |",(33), (42+posicionadorY));
			printf("\033[%d;%dH|  E ASSIM JUNTANDO DE DOIS EM DOIS NUMEROS ATÉ 2048 E     |",(34), (42+posicionadorY));
			printf("\033[%d;%dH|  ASSIM VOCÊ GANHA O JOGUINHO, LEGAL NÉ, VAMOS TENTAR?    |",(35), (42+posicionadorY));
			printf("\033[%d;%dH|                                                          |",(36), (42+posicionadorY));
			printf("\033[%d;%dH|__________________________________________________________|\n",(37), (42+posicionadorY));
			printf("\033[%d;%dHPressione \x1b[32mEnter\x1b[37m Para Continuar",(39),(55+posicionadorY));
			respostaUserAsci = getch();
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
	{	posicionador  = 5;
		posicionadorY = 5;
		system("clear||cls");
		printf("                                                                                \n");
	printf("\033[%d;%dH\x1b[31m--=-==-=--=-==-=-=-=-=-=-=--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-==--=-=-\n",(5), (42));
	printf("\033[%d;%dH*                          _______                            *\n",(1+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*     ||||  ||||    |||    |-------| ||    ||             -   *\n",(2+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*     || |||| ||   || ||      |||    ||____||           +     *\n",(3+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*\x1b[91m     ||  ||  ||  || _ ||     |||    ||----||            -    *\n",(4+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*     ||      || ||     ||    |_|    ||    ||           +     *\n",(5+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*\x1b[94m                    ||||||     ||             ||||||    -    *\n",(6+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*                    ||        ||||   |||  ||| ||       +     *\n",(7+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*                    || ||||  ||__||  || ||||| ||||||    -    *\n",(8+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*\x1b[32m 2+2=peixe\x1b[34m          ||||||| ||    || ||    || ||       _     *\n",(9+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*                                              ||||||    +    *\n",(10+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*                                                        +    *\n",(11+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH--=-==-=--=-==-=-=-=-=-=-=--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\x1b[37m\n",(17), (42));
	printf("\033[%d;%dHOpcao escolhida: \x1b[32mLogin !\x1b[37m                                 \n",(18), (45));
	void fazerLogin(){
		printf("\033[%d;%dH=---=-=-==--=-=-==--=-=-=-=-=-==---=-=-==--=-=-==--=-=-=-=-=-=\n",(19), (45));
		printf("\033[%d;%dH|      Digite o \x1b[32mnumero\x1b[37m do cadastro para selecionar:           |\n",(20), (45));
		printf("\033[%d;%dH=---=-=-==--=-=-==--=-=-=-=-=-==---=-=-==--=-=-==--=-=-=-=-=-=\n",(21), (45));
		printf("\033[%d;%dH|                   \x1b[31mPlayer1:%s\x1b[37m                                |\n",(22), (45),player1[0]);
		printf("\033[%d;%dH|                   \x1b[32mPlayer2:%s\x1b[37m                                |\n",(23), (45),player2[0]);
		printf("\033[%d;%dH|                   \x1b[34mPlayer3:%s\x1b[37m                                |\n",(24), (45),player3[0]);
		printf("\033[%d;%dH|                   \x1b[35mPlayer4:%s\x1b[37m                                |\n",(25), (45),player4[0]);
		printf("\033[%d;%dH|                   0 -Sair                                   |\n",(26), (45));
		printf("\033[%d;%dH=---=-=-==--=-=-==--=-=-=-=-=-==---=-=-==--=-=-==--=-=-=-=-=-==\n",(27), (45));
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
		posicionador  = 5;
		posicionadorY = 5;
		system("clear||cls");
		printf("                                                                                \n");
printf("\033[%d;%dH\x1b[31m--=-==-=--=-==-=-=-=-=-=-=--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-==--=-=-\n",(5), (42));
	printf("\033[%d;%dH*                          _______                            *\n",(1+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*     ||||  ||||    |||    |-------| ||    ||             -   *\n",(2+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*     || |||| ||   || ||      |||    ||____||           +     *\n",(3+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*\x1b[91m     ||  ||  ||  || _ ||     |||    ||----||            -    *\n",(4+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*     ||      || ||     ||    |_|    ||    ||           +     *\n",(5+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*\x1b[94m                    ||||||     ||             ||||||    -    *\n",(6+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*                    ||        ||||   |||  ||| ||       +     *\n",(7+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*                    || ||||  ||__||  || ||||| ||||||    -    *\n",(8+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*\x1b[32m 2+2=peixe\x1b[34m          ||||||| ||    || ||    || ||       _     *\n",(9+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*                                              ||||||    +    *\n",(10+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH*                                                        +    *\n",(11+posicionador), (40+posicionadorY));
	printf("\033[%d;%dH--=-==-=--=-==-=-=-=-=-=-=--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\x1b[37m\n",(17), (40));
	printf("\033[%d;%dH                       Opcao escolhida: \x1b[32mCadastro!\x1b[37m                                 \n", (18), (40));
	printf("\033[%d;%dH--=-==-=--=-==-=-=-=-=-=-=--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=====--\n", (19), (40));
	printf(" \033[%d;%dH                       pressione \x1b[31m0\x1b[37m para voltar                                    \n", (20), (40));
	printf("\033[%d;%dH--=-==-=--=-==-=-=-=-=-=-=--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=====--\n", (21), (40));
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
	
	printf("\033[%d;%dH                       Digite o seu nome de usuario: \x1b[32m",(22), (40));
		if(strcmp(player1[0],vazio) == 0 ){
			scanf("%s",&nomeUsuario);
			if(strcmp(nomeUsuario, "0") == 0){
				textoInicial();
			}
			if(strcmp(nomeUsuario, player1[0]) == 0 ||strcmp(nomeUsuario, player2[0]) == 0 || strcmp(nomeUsuario, player3[0]) == 0 || strcmp(nomeUsuario, player4[0]) == 0  ){
				
				printf(" \033[%d;%dH\x1b[31m                                  Nome já em Uso !                                                 \n", (26), (40));
				printf(" \033[%d;%dH               para prosseguir informe um nome que não esteja em uso!                         \n", (27), (40) );
				
				sleep(3);
		
				textoCadastro();
				
				
			}
			else {
			
			strcpy(player1[0],nomeUsuario);
			printf("\033[%d;%dH\x1b[37m                       Digite o seu email:\x1b[32m ",(23), (40));
			scanf("%s", & emailUsuario);
			strcpy(player1[1],emailUsuario);
			printf("\033[%d;%dH\x1b[37m                       Digite a sua senha: \x1b[32m",(24), (40));
			scanf("%s", & senhaUsuario);
			printf("\033[%d;%dH\x1b[37m                       Digite a sua cor favorita:\x1b[32m ",(25), (40));
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
				
				printf(" \033[%d;%dH\x1b[31m                                  Nome já em Uso !                                                 \n", (26), (40));
				printf(" \033[%d;%dH               para prosseguir informe um nome que não esteja em uso!                         \n", (27), (40) );
				
				sleep(3);
		
				textoCadastro();
				
				
			}else {
			
			
			strcpy(player2[0],nomeUsuario);
			printf("\033[%d;%dH\x1b[37m                       Digite o seu email: \x1b[32m",(23), (40));
			scanf("%s", & emailUsuario);
			strcpy(player2[1],emailUsuario);
			printf("\033[%d;%dH\x1b[37m                       Digite a sua senha: \x1b[32m",(24), (40));
			scanf("%s", & senhaUsuario);
			printf("\033[%d;%dH\x1b[37m                       Digite a sua cor favorita: \x1b[32m",(25), (40));
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
				
				printf(" \033[%d;%dH\x1b[31m                                  Nome já em Uso !                                                 \n", (26), (40));
				printf(" \033[%d;%dH               para prosseguir informe um nome que não esteja em uso!                         \n", (27), (40) );
				
				sleep(3);
		
				textoCadastro();
				
				
			}else{
			
			strcpy(player3[0],nomeUsuario);
			printf("\033[%d;%dH\x1b[37m                       Digite o seu email:\x1b[32m ",(23), (40));
			scanf("%s", & emailUsuario);
			strcpy(player3[1],emailUsuario);
			printf("\033[%d;%dH\x1b[37m                       Digite a sua senha:\x1b[32m ",(24), (40));
			scanf("%s", & senhaUsuario);
			printf(" \033[%d;%dH\x1b[37m                       Digite a sua cor favorita:\x1b[32m ",(25), (40));
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
				
				printf(" \033[%d;%dH\x1b[31m                                  Nome já em Uso !                                                 \n", (26), (40));
				printf(" \033[%d;%dH               para prosseguir informe um nome que não esteja em uso!                         \n", (27), (40) );
				
				sleep(3);
		
				textoCadastro();
				
				
			}else{
			
			strcpy(player4[0],nomeUsuario);
			printf("\033[%d;%dH\x1b[37m                       Digite o seu email:\x1b[32m ",(23), (40));
			scanf("%s", & emailUsuario);
			strcpy(player4[1],emailUsuario);
			printf("\033[%d;%dH\x1b[37m                       Digite a sua senha:\x1b[32m ",(24), (40));
			scanf("%s", & senhaUsuario);
			printf(" \033[%d;%dH\x1b[37m                       Digite a sua cor favorita:\x1b[32m ",(25), (40));
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
		posicionador = 4;
		posicionadorY = -10;
		printf("\033[%d;%dH\x1b[32m_______________________________________________________________________________________________________________",(1+posicionador),(40+posicionadorY));
	printf("\033[%d;%dH|                                                                                                               |",(2+posicionador),(40+posicionadorY));
	printf("\033[%d;%dH|   m         ____________        ___________            _____             __________                           |",(3+posicionador),(40+posicionadorY));
	printf("\033[%d;%dH|   a        /____________|      /__________/|          /____/|           /_________/|                          |",(4+posicionador),(40+posicionadorY));
	printf("\033[%d;%dH|   t                    ||      |   ___    ||         /    | |           |   __    ||                          |",(5+posicionador),(40+posicionadorY));
	printf("\033[%d;%dH|   e         ___________||      |  |   |   ||        / /|  | |___        |  (__)   ||                          |",(6+posicionador),(40+posicionadorY));
	printf("\033[%d;%dH|   m        /___________|/      |  |   |   ||       / /_|  |/___/|        >       < |          16 + 16 = 32    |",(7+posicionador),(40+posicionadorY));
	printf("\033[%d;%dH|   a        | !                 |  |___|   ||      |___________|/        |   __    ||                          |",(8+posicionador),(40+posicionadorY));
	printf("\033[%d;%dH|   t        | !___________      |          ||           |  ||            |  (__)   ||                          |",(9+posicionador),(40+posicionadorY));
	printf("\033[%d;%dH|   i        |/___________/      |__________|/           |__|/            |_________|/                          |",(10+posicionador),(40+posicionadorY));
	printf("\033[%d;%dH|   c                                                                                                           |",(11+posicionador),(40+posicionadorY));
	printf("\033[%d;%dH|   a               soma !!!!                                                                                   |",(12+posicionador),(40+posicionadorY));
	printf("\033[%d;%dH|\x1b[31m   d         __   __    _____     __________                                            2 + 2 = 4              |",(13+posicionador),(40+posicionadorY));
	printf("\033[%d;%dH|   i        |  | |  |  |     |        |        |     |                                                         |",(14+posicionador),(40+posicionadorY));
	printf("\033[%d;%dH|   v        |  | |  |  |     |        |        |_____|                                                         |",(15+posicionador),(40+posicionadorY));
	printf("\033[%d;%dH|   e        |  |_|  |  |_____|        |        |     |                                           4 + 4 = 8     |",(16+posicionador),(40+posicionadorY));
	printf("\033[%d;%dH|   r        |       |  |     |        |        |     |                               8 + 8 = 16                |",(17+posicionador),(40+posicionadorY));
	printf("\033[%d;%dH|   t        |       |  |     |        |        |     |                                                         |",(18+posicionador),(40+posicionadorY));
	printf("\033[%d;%dH|   i                                                                                                           |",(19+posicionador),(40+posicionadorY));
	printf("\033[%d;%dH|\x1b[34m   d                                   ________    _______    __  __      _____         _                      |",(20+posicionador),(40+posicionadorY));
	printf("\033[%d;%dH|   a            64 + 64 = 128         |            |     |   | |  | |    |             | |                     |",(21+posicionador),(40+posicionadorY));
	printf("\033[%d;%dH|                                      |    ____    |_____|   | |__| |    |__           | |                     |",(22+posicionador),(40+posicionadorY));
	printf("\033[%d;%dH|                                      |       |    |     |   |      |    |             |_|                     |",(23+posicionador),(40+posicionadorY));
	printf("\033[%d;%dH|                                      |_______|    |     |   |      |    |_____         ()                     |",(24+posicionador),(40+posicionadorY));
	printf("\033[%d;%dH|_______________________________________________________________________________________________________________|\x1b[37m",(25+posicionador),(40+posicionadorY));
	printf("\033[%d;%dH-----------------------------------------------------------------------------------------------------------------\n",(26+posicionador),(40+posicionadorY));
	printf("\033[%d;%dHSe voce for novo no jogo, por favor realize o cadastro teclando \x1b[32m 1\x1b[37m e pressionando enter \n\033[%d;%dHse voce ja possui uma conta, tecle \x1b[34m2\x1b[37m e pressionando enter                                  \n",(27+posicionador),(40+posicionadorY),(28+posicionador),(40+posicionadorY));
	printf("\033[%d;%dH\x1b[32m1 - cadastrar-se                                                                  \x1b[37m\n",(29+posicionador),(40+posicionadorY));
	printf("\033[%d;%dH\x1b[34m2 - entrar                                                                       \x1b[37m\n",(30+posicionador),(40+posicionadorY));
	printf("\033[%d;%dH\x1b[31m3 - recuperar senha                                                                                 \x1b[37m\n",(31+posicionador),(40+posicionadorY));
	scanf("%c",& respostaUserS );
	
	
	if (respostaUserS == '1' ){
		textoCadastro();
		textoMenu();
	
	}else if (respostaUserS == '2' )
	{	textoLogin();
	
		textoMenu();
		
	}else if(respostaUserS == '3'){
		posicionador = 10 ;
		posicionadorY = 5;
		char emailRecup[50],perguntaRecup[50];
		system("cls");
		printf("\033[%d;%dH--=-==-=--=-==-=-=-=-=-=-=--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=====--\n",(1+posicionador),(40+posicionadorY));
		printf("\033[%d;%dH|                   Opção selecionada: \x1b[31mrecuperação de senha\x1b[37m                    |\n",(2+posicionador),(40+posicionadorY));
		printf("\033[%d;%dH--=-==-=--=-==-=-=-=-=-=-=--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=====--\n",(3+posicionador),(40+posicionadorY));
		printf("\033[%d;%dH                    para voltar ao menu digite \x1b[31m0\x1b[37m\n\n",(4+posicionador),(40+posicionadorY));
		printf("\033[%d;%dH                    Digite o e-mail cadastrado:\x1b[32m",(5+posicionador),(40+posicionadorY));
		scanf("%s", & emailRecup);
		if(strcmp(emailRecup, "0") == 0){
			textoInicial();
		}
		printf("\x1b[37m\033[%d;%dH                    Digite a sua cor favorita\x1b[32m :",(6+posicionador),(40+posicionadorY));
		scanf("%s", & perguntaRecup);
		
		
		if(strcmp(player1[3], perguntaRecup) == 0 &&  strcmp(player1[1], emailRecup) == 0  ){
			printf("\033[%d;%dH\x1b[37m--=-==-=--=-==-=-=-=-=-=-=--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=====--\n",(7+posicionador),(40+posicionadorY));
			printf("\033[%d;%dH                    Sua senha é :\x1b[32m%s\x1b[37m\n\n",(8+posicionador),(40+posicionadorY),player1[2]);
				printf("\033[%d;%dH--=-==-=--=-==-=-=-=-=-=-=--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=====--\n",(9+posicionador),(40+posicionadorY));
			printf("\033[%d;%dHPressione \x1b[32mEnter\x1b[37m Para Continuar",(11+posicionador),(62+posicionadorY));
			respostaUserAsci = getch();
			textoInicial();
			
		}else if(strcmp(player2[3], perguntaRecup) == 0 &&  strcmp(player2[1], emailRecup) == 0  ){
			printf("\033[%d;%dH\x1b[37m--=-==-=--=-==-=-=-=-=-=-=--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=====--\n",(7+posicionador),(40+posicionadorY));
			printf("\033[%d;%dH                    Sua senha é :\x1b[32m%s\x1b[37m\n\n",(8+posicionador),(40+posicionadorY),player2[2]);
				printf("\033[%d;%dH--=-==-=--=-==-=-=-=-=-=-=--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=====--\n",(9+posicionador),(40+posicionadorY));
			printf("\033[%d;%dHPressione \x1b[32mEnter\x1b[37m Para Continuar",(11+posicionador),(62+posicionadorY));
			respostaUserAsci = getch();
			textoInicial();
		}else if(strcmp(player3[3], perguntaRecup) == 0 &&  strcmp(player3[1], emailRecup) == 0  ){
				printf("\033[%d;%dH\x1b[37m--=-==-=--=-==-=-=-=-=-=-=--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=====--\n",(7+posicionador),(40+posicionadorY));
			printf("\033[%d;%dH                    Sua senha é :\x1b[32m%s\x1b[37m\n\n",(8+posicionador),(40+posicionadorY),player3[2]);
				printf("\033[%d;%dH--=-==-=--=-==-=-=-=-=-=-=--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=====--\n",(9+posicionador),(40+posicionadorY));
			printf("\033[%d;%dHPressione \x1b[32mEnter\x1b[37m Para Continuar",(11+posicionador),(62+posicionadorY));
			respostaUserAsci = getch();
			textoInicial();
		}else if(strcmp(player4[3], perguntaRecup) == 0 &&  strcmp(player4[1], emailRecup) == 0  ){
			printf("\033[%d;%dH\x1b[37m--=-==-=--=-==-=-=-=-=-=-=--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=====--\n",(7+posicionador),(40+posicionadorY));
			printf("\033[%d;%dH                    Sua senha é :\x1b[32m%s\x1b[37m\n\n",(8+posicionador),(40+posicionadorY),player4[2]);
				printf("\033[%d;%dH--=-==-=--=-==-=-=-=-=-=-=--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=====--\n",(9+posicionador),(40+posicionadorY));
			printf("\033[%d;%dHPressione \x1b[32mEnter\x1b[37m Para Continuar",(11+posicionador),(62+posicionadorY));
			respostaUserAsci = getch();
			textoInicial();
		}else{
			printf("\033[%d;%dH\x1b[37m--=-==-=--=-==-=-=-=-=-=-=--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=====--\n",(7+posicionador),(40+posicionadorY));
			printf("\033[%d;%dH                     Email ou codigo \x1b[31minvalidos!\x1b[37m\n\n",(8+posicionador),(40+posicionadorY));
			printf("\033[%d;%dH--=-==-=--=-==-=-=-=-=-=-=--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=====--\n",(9+posicionador),(40+posicionadorY));
			printf("\033[%d;%dHPressione \x1b[32mEnter\x1b[37m Para Continuar",(11+posicionador),(62+posicionadorY));
			respostaUserAsci = getch();
			textoInicial();
		}
		
		
	}
	else{
		textoInicial();
		
	}

	
}
textoInicial();
	
	

}
