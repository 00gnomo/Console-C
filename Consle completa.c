#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <conio.h>
#include <time.h>

/*
Barlascini Marco 21-05-2023 [ALL RIGHTS RESERVED]
*/

void battaglianavale();
void stampabn(char g[10][10]);
void stampaattacco(char g1[10][10], char g2[10][10], char gc1[10][10], char gc2[10][10], int f);
void posizionamento(char g2[10][10]);
void battaglianavalebotez();
void battaglianavalebothd();

void tris();
void stampatris(char g[3][3], char sel_orz[3], char sel_ver[3]);
void trisbotez();
void trisbothd();


void forza4();
void stampaf4(char g[6][7],char sel[7]);
void forza4botez();
void forza4bothd();


void cronologia_write();
void cronologia_read();
typedef struct{
	int w;
	int gioco;
	int bot;
}crono_template;
crono_template t1;

char k;

int main(){
	char mov;
	int a,b,i;
	char space=32;
	char sel_line[4] ={space,space,space,space},
		 sel_line1[4]={space,space,space,space};
	
	menu:
	
	for(i=0;i<4;i++){
		sel_line[i]=space;
		sel_line1[i]=space;
	}
	
	a=0;
	b=0;
	sel_line[a]='>';
	sel_line1[b]='>';
	
	while(1){
		
		system("cls");
		printf(" _______  ___   _______  _______  __   __  ___  \n");
		printf("|       ||   | |       ||       ||  | |  ||   | \n");
		printf("|    ___||   | |   _   ||       ||  |_|  ||   | \n");
		printf("|   | __ |   | |  | |  ||       ||       ||   | \n");
		printf("|   ||  ||   | |  |_|  ||      _||       ||   | \n");
		printf("|   |_| ||   | |       ||     |_ |   _   ||   | \n");
		printf("|_______||___| |_______||_______||__| |__||___| \n");
		printf("         _______  __   __  _______              \n");
		printf("        |       ||  | |  ||       |             \n");
		printf("        |    _  ||  |_|  ||    _  |             \n");
		printf("        |   |_| ||       ||   |_| |             \n");
		printf("        |    ___||       ||    ___|             \n");
		printf("        |   |     \\     / |   |                \n");
		printf("        |___|      \\___/  |___|                \n");
	
		printf("\n\n\t  %c [TRIS]\n\t  %c [BATTAGLIA NAVALE]\n\t  %c [FORZA 4]\n\t  %c [CRONOLOGIA PARTITE]\n\n\tComandi per navigare nel menu:\n\tMuoversi in alto con il tasto: W\n\tMuoversi in basso con il tasto: S\n\tConfermare la scelta con il tasto: Barra spaziatrice ",sel_line[0],sel_line[1],sel_line[2],sel_line[3]);
		
		mov=getch();
		
		if(mov=='s'||mov=='S'){
			if(a==3){
				sel_line[a]=space;
				a=0;
				sel_line[a]='>';
			}
			else{
				sel_line[a]=space;
				a++;
				sel_line[a]='>';
			}
		}

		else if(mov=='w'||mov=='W'){
			if(a==0){
				sel_line[a]=space;
				a=3;
				sel_line[a]='>';
			}
			else{
				sel_line[a]=space;
				a--;
				sel_line[a]='>';
			}
			
		}
		else if(mov==space){
			goto out;
		}
	}
	out:
	
	switch(a){
		case 0:
			while(1){
				system("cls");
				printf("\n\n\t  %c [PvP]\n\t  %c [PvE facile]\n\t  %c [PvE difficile]\n\t  %c [MENU]\n\n\tComandi per navigare nel menu:\n\tMuoversi in alto con il tasto: W\n\tMuoversi in basso con il tasto: S\n\tConfermare la scelta con il tasto: Barra spaziatrice ",sel_line1[0],sel_line1[1],sel_line1[2],sel_line1[3]);
				mov=getch();
		
				if(mov=='s'||mov=='S'){
					if(b==3){
						sel_line1[b]=space;
						b=0;
						sel_line1[b]='>';
					}
					else{
						sel_line1[b]=space;
						b++;
						sel_line1[b]='>';
					}
				}
		
				else if(mov=='w'||mov=='W'){
					if(b==0){
						sel_line1[b]=space;
						b=3;
						sel_line1[b]='>';
					}
					else{
						sel_line1[b]=space;
						b--;
						sel_line1[b]='>';
					}
				}
				else if(mov==space){
					goto tris;
				}
			}
			
			tris:
			switch(b){
				case 0:
					system("cls");
					tris();
					goto menu;
				break;
				
				case 1:
					system("cls");
					trisbotez();
					goto menu;
				break;
				
				case 2:
					system("cls");
					trisbothd();
					goto menu;
				break;
				
				case 3:
					system("cls");
					goto menu;
				break;
			}
		break;
	
		case 1:
			while(1){
				system("cls");
				printf("\n\n\t  %c [PvP]\n\t  %c [PvE facile]\n\t  %c [PvE difficile]\n\t  %c [MENU]\n\n\tComandi per navigare nel menu:\n\tMuoversi in alto con il tasto: W\n\tMuoversi in basso con il tasto: S\n\tConfermare la scelta con il tasto: Barra spaziatrice ",sel_line1[0],sel_line1[1],sel_line1[2],sel_line1[3]);
				mov=getch();
		
				if(mov=='s'||mov=='S'){
					if(b==3){
						sel_line1[b]=space;
						b=0;
						sel_line1[b]='>';
					}
					else{
						sel_line1[b]=space;
						b++;
						sel_line1[b]='>';
					}
				}
		
				else if(mov=='w'||mov=='W'){
					if(b==0){
						sel_line1[b]=space;
						b=3;
						sel_line1[b]='>';
					}
					else{
						sel_line1[b]=space;
						b--;
						sel_line1[b]='>';
					}
				}
				else if(mov==space){
					goto battaglianavale;
				}
			}
			
			battaglianavale:
			switch(b){
				case 0:
					system("cls");
					battaglianavale();
					goto menu;
				break;
				
				case 1:
					system("cls");
					battaglianavalebotez();
					goto menu;
				break;
				
				case 2:
					system("cls");
					battaglianavalebothd();
					goto menu;
				break;
				
				case 3:
					system("cls");
					goto menu;
				break;
			}
		break;
		
		case 2:
			while(1){
				system("cls");
				printf("\n\n\t  %c [PvP]\n\t  %c [PvE facile]\n\t  %c [PvE difficile]\n\t  %c [MENU]\n\n\tComandi per navigare nel menu:\n\tMuoversi in alto con il tasto: W\n\tMuoversi in basso con il tasto: S\n\tConfermare la scelta con il tasto: Barra spaziatrice ",sel_line1[0],sel_line1[1],sel_line1[2],sel_line1[3]);
				mov=getch();
		
				if(mov=='s'||mov=='S'){
					if(b==3){
						sel_line1[b]=space;
						b=0;
						sel_line1[b]='>';
					}
					else{
						sel_line1[b]=space;
						b++;
						sel_line1[b]='>';
					}
				}
		
				else if(mov=='w'||mov=='W'){
					if(b==0){
						sel_line1[b]=space;
						b=3;
						sel_line1[b]='>';
					}
					else{
						sel_line1[b]=space;
						b--;
						sel_line1[b]='>';
					}
				}
				else if(mov==space){
					goto forza4;
				}
			}
			
			forza4:
			switch(b){
				case 0:
					system("cls");
					forza4();
					goto menu;
				break;
				
				case 1:
					system("cls");
					forza4botez();
					goto menu;
				break;
				
				case 2:
					system("cls");
					forza4bothd();
					goto menu;
				break;
				
				case 3:
					system("cls");
					goto menu;
				break;
			}			
		break;
		
		case 3:
			cronologia_read();
			goto menu;
		break; 
	}
}


void cronologia_write(){
	
	FILE *fp;
	
	fp=fopen("crono.sus","ab");
	fwrite(&t1,sizeof(crono_template),1,fp);
	fclose(fp);
}

void cronologia_read(){
	
	FILE *fp;
	long size,one;
	
	system("cls");
	printf("[Premere un TASTO QUALSIASI per tornare al menu]\n\n\n");
	fp=fopen("crono.sus","rb");
	fseek(fp,0,SEEK_END);
	size=ftell(fp);
	rewind(fp);
	fseek(fp,sizeof(crono_template),SEEK_SET);
	one=ftell(fp);
	while(size!=0){
		rewind(fp);
		size=size-one;
		fseek(fp,size,SEEK_SET);
		fread(&t1,sizeof(crono_template),1,fp);	
		if(t1.w==1){
			if(t1.bot==0){
				if(t1.gioco==1){
					printf("_Giocatore 1 vince contro Giocatore 2 a tris\n\n");
				}
				else if(t1.gioco==2){
					printf("_Giocatore 1 vince contro Giocatore 2 a battaglia navale\n\n");
				}
				else if(t1.gioco==3){
					printf("_Giocatore 1 vince contro Giocatore 2 a forza 4\n\n");
				}	
			}
			else if(t1.bot==-1){
				if(t1.gioco==1){
					printf("_Giocatore 1 vince contro Bot facile a tris\n\n");
				}
				else if(t1.gioco==2){
					printf("_Giocatore 1 vince contro Bot facile a battaglia navale\n\n");
				}
				else if(t1.gioco==3){
					printf("_Giocatore 1 vince contro Bot facile 2 a forza 4\n\n");
				}
			}
			else if(t1.bot==-2){
				if(t1.gioco==1){
					printf("_Giocatore 1 vince contro Bot difficile a tris\n\n");
				}
				else if(t1.gioco==2){
					printf("_Giocatore 1 vince contro Bot difficile a battaglia navale\n\n");
				}
				else if(t1.gioco==3){
					printf("_Giocatore 1 vince contro Bot difficile a forza 4\n\n");
				}
			}
		}
		else if(t1.w==2){
			printf("_Giocatore 2 vince contro Giocatore 1\n\n");
		}
		else if(t1.w==-1){
			if(t1.gioco==1){
				printf("_Bot facile vince contro Giocatore 1 a tris\n\n");
			}
			else if(t1.gioco==2){
				printf("_Bot facile vince contro Giocatore 1 a battaglia navale\n\n");
			}
			else if(t1.gioco==3){
				printf("_Bot facile vince contro Giocatore 1 a forza 4\n\n");
			}
		}
		else if(t1.w==-2){
			if(t1.gioco==1){
				printf("_Bot difficile vince contro Giocatore 1 a tris\n\n");
			}
			else if(t1.gioco==2){
				printf("_Bot difficile vince contro Giocatore 1 a battaglia navale\n\n");
			}
			else if(t1.gioco==3){
				printf("_Bot difficile vince contro Giocatore 1 a forza 4\n\n");
			}
		}
		else if(t1.w==0){
			if(t1.gioco==1){
				printf("_Giocatore 1 e Giocatore 2 pareggiano nel tris\n\n");
			}
			else if(t1.gioco==2){
				printf("_Giocatore 1 e Giocatore 2 pareggiano nella battaglia navale\n\n");
			}
			else if(t1.gioco==3){
				printf("_Giocatore 1 e Giocatore 2 pareggiano nel forza 4\n\n");
			}
		}
	}
	k=getch();
	system("cls");
}


//FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-
//FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-
//FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-
//FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-
//FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-
//FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-
void forza4(){
	int i,j,l,c=0,flag=0,temp,win=0;
	int check[7]={5,5,5,5,5,5,5};
	char space=32, cube=254;
	char grid[6][7]={space,space,space,space,space,space,space,
				  	 space,space,space,space,space,space,space,
				  	 space,space,space,space,space,space,space,
				  	 space,space,space,space,space,space,space,
				  	 space,space,space,space,space,space,space,
				  	 space,space,space,space,space,space,space,};
				  	 
	char sel_line[7]={space,space,space,space,space,space,space,};
	char mov;
	
	sel_line[c]='V';
	
	/*STAMPA TABELLA COMPLETA*/
	
	stampaf4(grid,sel_line);
	printf("\nGiocatore 1 (X)\n");
	printf("\nMuoversi a destra con il tasto: D\nMuoversi a sinistra con il tasto: A\n\nConfermare la colonna con il tasto: Barra spaziatrice\n");
	/*STAMPA TABELLA COMPLETA*/
	
	while(1){
		
		mov=getch();
		system("cls");
		
		/*>>>>>*/
		if(mov=='d'||mov=='D'){
			if(c==6){
				sel_line[c]=space;
				c=0;
				sel_line[c]='V';
			}
			else{
				sel_line[c]=space;
				c++;
				sel_line[c]='V';
			}
		}
		/*>>>>>*/
					
		/*<<<<<*/
		else if(mov=='a'||mov=='A'){
			if(c==0){
				sel_line[c]=space;
				c=6;
				sel_line[c]='V';
			}
			else{
				sel_line[c]=space;
				c--;
				sel_line[c]='V';
			}
			
		}
		/*<<<<<*/
		
		/*POSIZIONAMENTO*/
		else if(mov==space){
			/*PLAYER 1*/
			if(flag==0){
					if(check[c]<0){
					printf("Colonna piena! >:T\n");
					goto retry;
				}
				else{
					temp=check[c];
					grid[temp][c]='X';
				/*CONTROLLI*/
					//CONTROLLI ORIZZONTALE------------------------------------------------------------------------------------------------------------------					
					//CONTROLLO 1----------------------------------------------------------------------------------------------------------------------------
					if(/*Xxxx*/grid[temp][c]=='X' && grid[temp][c+1]=='X' && grid[temp][c+2]=='X' && grid[temp][c+3]=='X' && c+3<7){
						win=1;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp][c]=cube;
								grid[temp][c+1]=cube;
								grid[temp][c+2]=cube;
								grid[temp][c+3]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp][c]='X';
								grid[temp][c+1]='X';
								grid[temp][c+2]='X';
								grid[temp][c+3]='X';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;	
					}
					//FINE CONTROLLO 1-----------------------------------------------------------------------------------------------------------------------

					
					//CONTROLLO 2----------------------------------------------------------------------------------------------------------------------------
					else if(/*xXxx*/grid[temp][c-1]=='X' && grid[temp][c]=='X' && grid[temp][c+1]=='X' && grid[temp][c+2]=='X' && c+2<7 && c-1>=0){
						win=1;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp][c-1]=cube;
								grid[temp][c]=cube;
								grid[temp][c+1]=cube;
								grid[temp][c+2]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp][c-1]='X';
								grid[temp][c]='X';
								grid[temp][c+1]='X';
								grid[temp][c+2]='X';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}	
						goto out;
						
					}
					//FINE CONTROLLO 2-----------------------------------------------------------------------------------------------------------------------					


					//CONTROLLO 3----------------------------------------------------------------------------------------------------------------------------
					else if(/*xxXx*/grid[temp][c-2]=='X' && grid[temp][c-1]=='X' && grid[temp][c]=='X' && grid[temp][c+1]=='X' && c-2>=0 && c+1<7){
						win=1;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp][c-2]=cube;
								grid[temp][c-1]=cube;
								grid[temp][c]=cube;
								grid[temp][c+1]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp][c-2]='X';
								grid[temp][c-1]='X';
								grid[temp][c]='X';
								grid[temp][c+1]='X';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONTROLLO 3-----------------------------------------------------------------------------------------------------------------------


					//CONTROLLO 4----------------------------------------------------------------------------------------------------------------------------
					else if(/*xxxX*/grid[temp][c-3]=='X' && grid[temp][c-2]=='X' && grid[temp][c-1]=='X' && grid[temp][c]=='X' && c-3>=0){
						win=1;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp][c-3]=cube;
								grid[temp][c-2]=cube;
								grid[temp][c-1]=cube;
								grid[temp][c]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp][c-3]='X';
								grid[temp][c-2]='X';
								grid[temp][c-1]='X';
								grid[temp][c]='X';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONTROLLO 4-----------------------------------------------------------------------------------------------------------------------
					//FINE CONTROLLI ORIZZONTALE-------------------------------------------------------------------------------------------------------------



					//CONTROLLO VERTICALE--------------------------------------------------------------------------------------------------------------------
					//CONTROLLO 1----------------------------------------------------------------------------------------------------------------------------
					else if(grid[temp+3][c]=='X' && grid[temp+2][c]=='X' && grid[temp+1][c]=='X' && grid[temp][c]=='X'){
						win=1;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp+3][c]=cube;
								grid[temp+2][c]=cube;
								grid[temp+1][c]=cube;
								grid[temp][c]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp+3][c]='X';
								grid[temp+2][c]='X';
								grid[temp+1][c]='X';
								grid[temp][c]='X';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;	
					}
					//FINE CONTROLLO 1-----------------------------------------------------------------------------------------------------------------------					
					//FINE CONTROLLO VERTICALE---------------------------------------------------------------------------------------------------------------



					//CONTROLLI DIAGONALI /------------------------------------------------------------------------------------------------------------------
					//CONTROLLO DIAGONALE 1 /----------------------------------------------------------------------------------------------------------------
					else if(grid[temp][c]=='X' && grid[temp-1][c+1]=='X' && grid[temp-2][c+2]=='X' && grid[temp-3][c+3]=='X' && c+3<7){
						win=1;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp][c]=cube;
								grid[temp-1][c+1]=cube;
								grid[temp-2][c+2]=cube;
								grid[temp-3][c+3]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp][c]='X';
								grid[temp-1][c+1]='X';
								grid[temp-2][c+2]='X';
								grid[temp-3][c+3]='X';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONTROLLO DIAGONALE 1 /-----------------------------------------------------------------------------------------------------------
					
					
					//CONTROLLO DIAGONALE 2 /----------------------------------------------------------------------------------------------------------------
					else if(grid[temp+1][c-1]=='X' && grid[temp][c]=='X' && grid[temp-1][c+1]=='X' && grid[temp-2][c+2]=='X' && c+2<7 && c-1>=0){
						win=1;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp+1][c-1]=cube;
								grid[temp][c]=cube;
								grid[temp-1][c+1]=cube;
								grid[temp-2][c+2]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp+1][c-1]='X';
								grid[temp][c]='X';
								grid[temp-1][c+1]='X';
								grid[temp-2][c+2]='X';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONTROLLO DIAGONALE 2 /-----------------------------------------------------------------------------------------------------------
					
					
					//CONTROLLO DIAGONALE 3 /----------------------------------------------------------------------------------------------------------------
					else if(grid[temp+2][c-2]=='X' && grid[temp+1][c-1]=='X' && grid[temp][c]=='X' && grid[temp-1][c+1]=='X' && c+1<7 && c-2>=0){
						win=1;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp+2][c-2]=cube;
								grid[temp+1][c-1]=cube;
								grid[temp][c]=cube;
								grid[temp-1][c+1]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp+2][c-2]='X';
								grid[temp+1][c-1]='X';
								grid[temp][c]='X';
								grid[temp-1][c+1]='X';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONTROLLO DIAGONALE 3 /-----------------------------------------------------------------------------------------------------------
					
					
					//CONTROLLO DIAGONALE 4 /----------------------------------------------------------------------------------------------------------------
					else if(grid[temp+3][c-3]=='X' && grid[temp+2][c-2]=='X' && grid[temp+1][c-1]=='X' && grid[temp][c]=='X' && c-3>=0){
						win=1;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp+3][c-3]=cube;
								grid[temp+2][c-2]=cube;
								grid[temp+1][c-1]=cube;
								grid[temp][c]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp+3][c-3]='X';
								grid[temp+2][c-2]='X';
								grid[temp+1][c-1]='X';
								grid[temp][c]='X';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONTROLLO DIAGONALE 4 /-----------------------------------------------------------------------------------------------------------
					//FINE CONTROLLI DIAGONALI /-------------------------------------------------------------------------------------------------------------
					
					
					
					//CONTROLLI DIAGONALE \-------------------------------------------------------------------------------------------------------------------
					//CONTROLLO DIAGONALE 1 \-----------------------------------------------------------------------------------------------------------------
					else if(grid[temp][c]=='X' && grid[temp+1][c+1]=='X' && grid[temp+2][c+2]=='X' && grid[temp+3][c+3]=='X' && c+3<7){
						win=1;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp][c]=cube;
								grid[temp+1][c+1]=cube;
								grid[temp+2][c+2]=cube;
								grid[temp+3][c+3]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp][c]='X';
								grid[temp+1][c+1]='X';
								grid[temp+2][c+2]='X';
								grid[temp+3][c+3]='X';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONTROLLO DIAGONALE 1 \------------------------------------------------------------------------------------------------------------
					
					
					//CONTROLLO DIAGONALE 2 \-----------------------------------------------------------------------------------------------------------------
					else if(grid[temp-1][c-1]=='X' && grid[temp][c]=='X' && grid[temp+1][c+1]=='X' && grid[temp+2][c+2]=='X' && c+2<7 && c-1>=0){
						win=1;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp-1][c-1]=cube;
								grid[temp][c]=cube;
								grid[temp+1][c+1]=cube;
								grid[temp+2][c+2]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp-1][c-1]='X';
								grid[temp][c]='X';
								grid[temp+1][c+1]='X';
								grid[temp+2][c+2]='X';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONRTOLLO DIAGONALE 2 \------------------------------------------------------------------------------------------------------------
					
					
					//CONTROLLO DIAGONALE 3 \-----------------------------------------------------------------------------------------------------------------
					else if(grid[temp-2][c-2]=='X' && grid[temp-1][c-1]=='X' && grid[temp][c]=='X' && grid[temp+1][c+1]=='X' && c+1<7 && c-2>=0){
						win=1;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp-2][c-2]=cube;
								grid[temp-1][c-1]=cube;
								grid[temp][c]=cube;
								grid[temp+1][c+1]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp-2][c-2]='X';
								grid[temp-1][c-1]='X';
								grid[temp][c]='X';
								grid[temp+1][c+1]='X';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONTROLLO DIAGONALE 3 \------------------------------------------------------------------------------------------------------------
					
					
					//CONTROLLO DIAGONALE 4 \-----------------------------------------------------------------------------------------------------------------
					else if(grid[temp-3][c-3]=='X' && grid[temp-2][c-2]=='X' && grid[temp-1][c-1]=='X' && grid[temp][c]=='X' && c-3>=0){
						win=1;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp-3][c-3]=cube;
								grid[temp-2][c-2]=cube;
								grid[temp-1][c-1]=cube;
								grid[temp][c]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp-3][c-3]='X';
								grid[temp-2][c-2]='X';
								grid[temp-1][c-1]='X';
								grid[temp][c]='X';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONTROLLO DIAGONALE 4 \------------------------------------------------------------------------------------------------------------
					//FINE CONTROLLI DIAGONALE \--------------------------------------------------------------------------------------------------------------
					
					
					//CONTROLLO TABELLA PIENA-----------------------------------------------------------------------------------------------------------------------------------------------------
					else if(grid[0][0]!=space && grid[0][1]!=space && grid[0][2]!=space && grid[0][3]!=space && grid[0][4]!=space && grid[0][5]!=space && grid[0][6]!=space &&
					   		grid[1][0]!=space && grid[1][1]!=space && grid[1][2]!=space && grid[1][3]!=space && grid[1][4]!=space && grid[1][5]!=space && grid[1][6]!=space &&
					   		grid[2][0]!=space && grid[2][1]!=space && grid[2][2]!=space && grid[2][3]!=space && grid[2][4]!=space && grid[2][5]!=space && grid[2][6]!=space &&
					   		grid[3][0]!=space && grid[3][1]!=space && grid[3][2]!=space && grid[3][3]!=space && grid[3][4]!=space && grid[3][5]!=space && grid[3][6]!=space &&
					  		grid[4][0]!=space && grid[4][1]!=space && grid[4][2]!=space && grid[4][3]!=space && grid[4][4]!=space && grid[4][5]!=space && grid[4][6]!=space &&
					   		grid[5][0]!=space && grid[5][1]!=space && grid[5][2]!=space && grid[5][3]!=space && grid[5][4]!=space && grid[5][5]!=space && grid[5][6]!=space){
						win=0;
						/*STAMPA TABELLA COMPLETA*/
						stampaf4(grid,sel_line);
						/*STAMPA TABELLA COMPLETA*/
						goto out;
					}
					//FINE CONTROLLO TABELLA PIENA------------------------------------------------------------------------------------------------------------------------------------------------
				/*CONTROLLI*/
					
					temp--;
					check[c]=temp;
					flag=1;
				}
			}
			/*PLAYER 1*/
			
			/*PLAYER 2*/
			else if(flag==1){
					if(check[c]<0){
					printf("Colonna piena! >:T\n");
					goto retry;
				}
				else{
					temp=check[c];
					grid[temp][c]='O';
				/*CONTROLLI*/
				//CONTROLLI ORIZZONTALE------------------------------------------------------------------------------------------------------------------					
					//CONTROLLO 1----------------------------------------------------------------------------------------------------------------------------
					if(/*Xxxx*/grid[temp][c]=='O' && grid[temp][c+1]=='O' && grid[temp][c+2]=='O' && grid[temp][c+3]=='O' && c+3<7){
						win=2;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp][c]=cube;
								grid[temp][c+1]=cube;
								grid[temp][c+2]=cube;
								grid[temp][c+3]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp][c]='O';
								grid[temp][c+1]='O';
								grid[temp][c+2]='O';
								grid[temp][c+3]='O';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;	
					}
					//FINE CONTROLLO 1-----------------------------------------------------------------------------------------------------------------------

					
					//CONTROLLO 2----------------------------------------------------------------------------------------------------------------------------
					else if(/*xXxx*/grid[temp][c-1]=='O' && grid[temp][c]=='O' && grid[temp][c+1]=='O' && grid[temp][c+2]=='O' && c+2<7 && c-1>=0){
						win=2;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp][c-1]=cube;
								grid[temp][c]=cube;
								grid[temp][c+1]=cube;
								grid[temp][c+2]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp][c-1]='O';
								grid[temp][c]='O';
								grid[temp][c+1]='O';
								grid[temp][c+2]='O';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}	
						goto out;
						
					}
					//FINE CONTROLLO 2-----------------------------------------------------------------------------------------------------------------------					


					//CONTROLLO 3----------------------------------------------------------------------------------------------------------------------------
					else if(/*xxXx*/grid[temp][c-2]=='O' && grid[temp][c-1]=='O' && grid[temp][c]=='O' && grid[temp][c+1]=='O' && c-2>=0 && c+1<7){
						win=2;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp][c-2]=cube;
								grid[temp][c-1]=cube;
								grid[temp][c]=cube;
								grid[temp][c+1]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp][c-2]='O';
								grid[temp][c-1]='O';
								grid[temp][c]='O';
								grid[temp][c+1]='O';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONTROLLO 3-----------------------------------------------------------------------------------------------------------------------


					//CONTROLLO 4----------------------------------------------------------------------------------------------------------------------------
					else if(/*xxxX*/grid[temp][c-3]=='O' && grid[temp][c-2]=='O' && grid[temp][c-1]=='O' && grid[temp][c]=='O' && c-3>=0){
						win=2;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp][c-3]=cube;
								grid[temp][c-2]=cube;
								grid[temp][c-1]=cube;
								grid[temp][c]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp][c-3]='O';
								grid[temp][c-2]='O';
								grid[temp][c-1]='O';
								grid[temp][c]='O';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONTROLLO 4-----------------------------------------------------------------------------------------------------------------------
					//FINE CONTROLLI ORIZZONTALE-------------------------------------------------------------------------------------------------------------



					//CONTROLLO VERTICALE--------------------------------------------------------------------------------------------------------------------
					//CONTROLLO 1----------------------------------------------------------------------------------------------------------------------------
					else if(grid[temp+3][c]=='O' && grid[temp+2][c]=='O' && grid[temp+1][c]=='O' && grid[temp][c]=='O'){
						win=2;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp+3][c]=cube;
								grid[temp+2][c]=cube;
								grid[temp+1][c]=cube;
								grid[temp][c]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp+3][c]='O';
								grid[temp+2][c]='O';
								grid[temp+1][c]='O';
								grid[temp][c]='O';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;	
					}
					//FINE CONTROLLO 1-----------------------------------------------------------------------------------------------------------------------					
					//FINE CONTROLLO VERTICALE---------------------------------------------------------------------------------------------------------------



					//CONTROLLI DIAGONALI /------------------------------------------------------------------------------------------------------------------
					//CONTROLLO DIAGONALE 1 /----------------------------------------------------------------------------------------------------------------
					else if(grid[temp][c]=='O' && grid[temp-1][c+1]=='O' && grid[temp-2][c+2]=='O' && grid[temp-3][c+3]=='O' && c+3<7){
						win=2;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp][c]=cube;
								grid[temp-1][c+1]=cube;
								grid[temp-2][c+2]=cube;
								grid[temp-3][c+3]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp][c]='O';
								grid[temp-1][c+1]='O';
								grid[temp-2][c+2]='O';
								grid[temp-3][c+3]='O';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONTROLLO DIAGONALE 1 /-----------------------------------------------------------------------------------------------------------
					
					
					//CONTROLLO DIAGONALE 2 /----------------------------------------------------------------------------------------------------------------
					else if(grid[temp+1][c-1]=='O' && grid[temp][c]=='O' && grid[temp-1][c+1]=='O' && grid[temp-2][c+2]=='O' && c+2<7 && c-1>=0){
						win=2;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp+1][c-1]=cube;
								grid[temp][c]=cube;
								grid[temp-1][c+1]=cube;
								grid[temp-2][c+2]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp+1][c-1]='O';
								grid[temp][c]='O';
								grid[temp-1][c+1]='O';
								grid[temp-2][c+2]='O';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONTROLLO DIAGONALE 2 /-----------------------------------------------------------------------------------------------------------
					
					
					//CONTROLLO DIAGONALE 3 /----------------------------------------------------------------------------------------------------------------
					else if(grid[temp+2][c-2]=='O' && grid[temp+1][c-1]=='O' && grid[temp][c]=='O' && grid[temp-1][c+1]=='O' && c+1<7 && c-2>=0){
						win=2;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp+2][c-2]=cube;
								grid[temp+1][c-1]=cube;
								grid[temp][c]=cube;
								grid[temp-1][c+1]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp+2][c-2]='O';
								grid[temp+1][c-1]='O';
								grid[temp][c]='O';
								grid[temp-1][c+1]='O';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONTROLLO DIAGONALE 3 /-----------------------------------------------------------------------------------------------------------
					
					
					//CONTROLLO DIAGONALE 4 /----------------------------------------------------------------------------------------------------------------
					else if(grid[temp+3][c-3]=='O' && grid[temp+2][c-2]=='O' && grid[temp+1][c-1]=='O' && grid[temp][c]=='O' && c-3>=0){
						win=2;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp+3][c-3]=cube;
								grid[temp+2][c-2]=cube;
								grid[temp+1][c-1]=cube;
								grid[temp][c]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp+3][c-3]='O';
								grid[temp+2][c-2]='O';
								grid[temp+1][c-1]='O';
								grid[temp][c]='O';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONTROLLO DIAGONALE 4 /-----------------------------------------------------------------------------------------------------------
					//FINE CONTROLLI DIAGONALI /-------------------------------------------------------------------------------------------------------------
					
					
					
					//CONTROLLI DIAGONALE \-------------------------------------------------------------------------------------------------------------------
					//CONTROLLO DIAGONALE 1 \-----------------------------------------------------------------------------------------------------------------
					else if(grid[temp][c]=='O' && grid[temp+1][c+1]=='O' && grid[temp+2][c+2]=='O' && grid[temp+3][c+3]=='O' && c+3<7){
						win=2;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp][c]=cube;
								grid[temp+1][c+1]=cube;
								grid[temp+2][c+2]=cube;
								grid[temp+3][c+3]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp][c]='O';
								grid[temp+1][c+1]='O';
								grid[temp+2][c+2]='O';
								grid[temp+3][c+3]='O';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONTROLLO DIAGONALE 1 \------------------------------------------------------------------------------------------------------------
					
					
					//CONTROLLO DIAGONALE 2 \-----------------------------------------------------------------------------------------------------------------
					else if(grid[temp-1][c-1]=='O' && grid[temp][c]=='O' && grid[temp+1][c+1]=='O' && grid[temp+2][c+2]=='O' && c+2<7 && c-1>=0){
						win=2;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp-1][c-1]=cube;
								grid[temp][c]=cube;
								grid[temp+1][c+1]=cube;
								grid[temp+2][c+2]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp-1][c-1]='O';
								grid[temp][c]='O';
								grid[temp+1][c+1]='O';
								grid[temp+2][c+2]='O';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONRTOLLO DIAGONALE 2 \------------------------------------------------------------------------------------------------------------
					
					
					//CONTROLLO DIAGONALE 3 \-----------------------------------------------------------------------------------------------------------------
					else if(grid[temp-2][c-2]=='O' && grid[temp-1][c-1]=='O' && grid[temp][c]=='O' && grid[temp+1][c+1]=='O' && c+1<7 && c-2>=0){
						win=2;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp-2][c-2]=cube;
								grid[temp-1][c-1]=cube;
								grid[temp][c]=cube;
								grid[temp+1][c+1]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp-2][c-2]='O';
								grid[temp-1][c-1]='O';
								grid[temp][c]='O';
								grid[temp+1][c+1]='O';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONTROLLO DIAGONALE 3 \------------------------------------------------------------------------------------------------------------
					
					
					//CONTROLLO DIAGONALE 4 \-----------------------------------------------------------------------------------------------------------------
					else if(grid[temp-3][c-3]=='O' && grid[temp-2][c-2]=='O' && grid[temp-1][c-1]=='O' && grid[temp][c]=='O' && c-3>=0){
						win=2;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp-3][c-3]=cube;
								grid[temp-2][c-2]=cube;
								grid[temp-1][c-1]=cube;
								grid[temp][c]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp-3][c-3]='O';
								grid[temp-2][c-2]='O';
								grid[temp-1][c-1]='O';
								grid[temp][c]='O';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONTROLLO DIAGONALE 4 \------------------------------------------------------------------------------------------------------------
					//FINE CONTROLLI DIAGONALE \--------------------------------------------------------------------------------------------------------------
				
				
					//CONTROLLO TABELLA PIENA-----------------------------------------------------------------------------------------------------------------------------------------------------
					else if(grid[0][0]!=space && grid[0][1]!=space && grid[0][2]!=space && grid[0][3]!=space && grid[0][4]!=space && grid[0][5]!=space && grid[0][6]!=space &&
					   		grid[1][0]!=space && grid[1][1]!=space && grid[1][2]!=space && grid[1][3]!=space && grid[1][4]!=space && grid[1][5]!=space && grid[1][6]!=space &&
					  		grid[2][0]!=space && grid[2][1]!=space && grid[2][2]!=space && grid[2][3]!=space && grid[2][4]!=space && grid[2][5]!=space && grid[2][6]!=space &&
					   		grid[3][0]!=space && grid[3][1]!=space && grid[3][2]!=space && grid[3][3]!=space && grid[3][4]!=space && grid[3][5]!=space && grid[3][6]!=space &&
					   		grid[4][0]!=space && grid[4][1]!=space && grid[4][2]!=space && grid[4][3]!=space && grid[4][4]!=space && grid[4][5]!=space && grid[4][6]!=space &&
					   		grid[5][0]!=space && grid[5][1]!=space && grid[5][2]!=space && grid[5][3]!=space && grid[5][4]!=space && grid[5][5]!=space && grid[5][6]!=space){
						win=0;
						/*STAMPA TABELLA COMPLETA*/
						stampaf4(grid,sel_line);
						/*STAMPA TABELLA COMPLETA*/
						goto out;
					}
					//FINE CONTROLLO TABELLA PIENA------------------------------------------------------------------------------------------------------------------------------------------------
				/*CONTROLLI*/
				
					temp--;
					check[c]=temp;
					flag=0;
				}
			}
			/*PLAYER 2*/
		}
		/*POSIZIONAMENTO*/
		
		
		retry:
		/*STAMPA TABELLA COMPLETA*/
		stampaf4(grid,sel_line);
		/*STAMPA TABELLA COMPLETA*/
		if(flag==0){
			printf("\nGiocatore 1 (X)\n");	
		}
		else if(flag==1){
			printf("\nGiocatore 2 (O)\n");
		}
		printf("\nMuoversi a destra con il tasto: D\nMuoversi a sinistra con il tasto: A\n\nConfermare la colonna con il tasto: Barra spaziatrice\n");
	}
	
	out:
	if(win==1){
		printf("\n\nGiocatore 1 vince!");
	}
	else if(win==2){
		printf("\n\nGiocatore 2 vince!");
	}
	else if(win==0){
		printf("\n\nParita'!");
	}
	for(i=0;i<5;i++){
		system("color 1A");
		Sleep(60);
		system("color 2C");
		Sleep(60);
		system("color 3D");
		Sleep(60);
		system("color 4E");
		Sleep(60);
		system("color 5B");
		Sleep(60);
		system("color 6C");
		Sleep(60);
		system("color 7B");
		Sleep(60);
		system("color 8D");
		Sleep(60);
		system("color 9A");
		Sleep(60);
		system("color 0F");
		Sleep(60);
	}
	t1.gioco=3;
	t1.w=win;
	t1.bot=0;
	cronologia_write();
	printf("\n\n[premere un TASTO QUALSIASI per tornare al menu]");
	k=getch();
}


void forza4botez(){
	
	srand(time(NULL));
	int i,j,l,c=0,flag=0,temp,win=0,colonna;
	int check[7]={5,5,5,5,5,5,5};
	char space=32, cube=254;
	char grid[6][7]={space,space,space,space,space,space,space,
				  	 space,space,space,space,space,space,space,
				  	 space,space,space,space,space,space,space,
				  	 space,space,space,space,space,space,space,
				  	 space,space,space,space,space,space,space,
				  	 space,space,space,space,space,space,space,};
				  	 
	char sel_line[7]={space,space,space,space,space,space,space,};
	char mov;
	
	sel_line[c]='V';
	
	/*STAMPA TABELLA COMPLETA*/
	
	stampaf4(grid,sel_line);
	printf("\nGiocatore 1 (X)\n");
	printf("\nMuoversi a destra con il tasto: D\nMuoversi a sinistra con il tasto: A\n\nConfermare la colonna con il tasto: Barra spaziatrice\n");
	/*STAMPA TABELLA COMPLETA*/
	
	while(1){
		
		mov=getch();
		system("cls");
		
		/*>>>>>*/
		if(mov=='d'||mov=='D'){
			if(c==6){
				sel_line[c]=space;
				c=0;
				sel_line[c]='V';
			}
			else{
				sel_line[c]=space;
				c++;
				sel_line[c]='V';
			}
		}
		/*>>>>>*/
					
		/*<<<<<*/
		else if(mov=='a'||mov=='A'){
			if(c==0){
				sel_line[c]=space;
				c=6;
				sel_line[c]='V';
			}
			else{
				sel_line[c]=space;
				c--;
				sel_line[c]='V';
			}
			
		}
		/*<<<<<*/
		
		/*POSIZIONAMENTO*/
		else if(mov==space){
			/*PLAYER 1*/
				if(check[c]<0){
					printf("Colonna piena! >:T\n");
					goto retry;
				}
				else{
					temp=check[c];
					grid[temp][c]='X';
				/*CONTROLLI*/
					//CONTROLLI ORIZZONTALE------------------------------------------------------------------------------------------------------------------					
					//CONTROLLO 1----------------------------------------------------------------------------------------------------------------------------
					if(/*Xxxx*/grid[temp][c]=='X' && grid[temp][c+1]=='X' && grid[temp][c+2]=='X' && grid[temp][c+3]=='X' && c+3<7){
						win=1;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp][c]=cube;
								grid[temp][c+1]=cube;
								grid[temp][c+2]=cube;
								grid[temp][c+3]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp][c]='X';
								grid[temp][c+1]='X';
								grid[temp][c+2]='X';
								grid[temp][c+3]='X';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;	
					}
					//FINE CONTROLLO 1-----------------------------------------------------------------------------------------------------------------------

					
					//CONTROLLO 2----------------------------------------------------------------------------------------------------------------------------
					else if(/*xXxx*/grid[temp][c-1]=='X' && grid[temp][c]=='X' && grid[temp][c+1]=='X' && grid[temp][c+2]=='X' && c+2<7 && c-1>=0){
						win=1;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp][c-1]=cube;
								grid[temp][c]=cube;
								grid[temp][c+1]=cube;
								grid[temp][c+2]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp][c-1]='X';
								grid[temp][c]='X';
								grid[temp][c+1]='X';
								grid[temp][c+2]='X';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}	
						goto out;
						
					}
					//FINE CONTROLLO 2-----------------------------------------------------------------------------------------------------------------------					


					//CONTROLLO 3----------------------------------------------------------------------------------------------------------------------------
					else if(/*xxXx*/grid[temp][c-2]=='X' && grid[temp][c-1]=='X' && grid[temp][c]=='X' && grid[temp][c+1]=='X' && c-2>=0 && c+1<7){
						win=1;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp][c-2]=cube;
								grid[temp][c-1]=cube;
								grid[temp][c]=cube;
								grid[temp][c+1]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp][c-2]='X';
								grid[temp][c-1]='X';
								grid[temp][c]='X';
								grid[temp][c+1]='X';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONTROLLO 3-----------------------------------------------------------------------------------------------------------------------


					//CONTROLLO 4----------------------------------------------------------------------------------------------------------------------------
					else if(/*xxxX*/grid[temp][c-3]=='X' && grid[temp][c-2]=='X' && grid[temp][c-1]=='X' && grid[temp][c]=='X' && c-3>=0){
						win=1;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp][c-3]=cube;
								grid[temp][c-2]=cube;
								grid[temp][c-1]=cube;
								grid[temp][c]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp][c-3]='X';
								grid[temp][c-2]='X';
								grid[temp][c-1]='X';
								grid[temp][c]='X';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONTROLLO 4-----------------------------------------------------------------------------------------------------------------------
					//FINE CONTROLLI ORIZZONTALE-------------------------------------------------------------------------------------------------------------



					//CONTROLLO VERTICALE--------------------------------------------------------------------------------------------------------------------
					//CONTROLLO 1----------------------------------------------------------------------------------------------------------------------------
					else if(grid[temp+3][c]=='X' && grid[temp+2][c]=='X' && grid[temp+1][c]=='X' && grid[temp][c]=='X'){
						win=1;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp+3][c]=cube;
								grid[temp+2][c]=cube;
								grid[temp+1][c]=cube;
								grid[temp][c]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp+3][c]='X';
								grid[temp+2][c]='X';
								grid[temp+1][c]='X';
								grid[temp][c]='X';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;	
					}
					//FINE CONTROLLO 1-----------------------------------------------------------------------------------------------------------------------					
					//FINE CONTROLLO VERTICALE---------------------------------------------------------------------------------------------------------------



					//CONTROLLI DIAGONALI /------------------------------------------------------------------------------------------------------------------
					//CONTROLLO DIAGONALE 1 /----------------------------------------------------------------------------------------------------------------
					else if(grid[temp][c]=='X' && grid[temp-1][c+1]=='X' && grid[temp-2][c+2]=='X' && grid[temp-3][c+3]=='X' && c+3<7){
						win=1;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp][c]=cube;
								grid[temp-1][c+1]=cube;
								grid[temp-2][c+2]=cube;
								grid[temp-3][c+3]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp][c]='X';
								grid[temp-1][c+1]='X';
								grid[temp-2][c+2]='X';
								grid[temp-3][c+3]='X';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONTROLLO DIAGONALE 1 /-----------------------------------------------------------------------------------------------------------
					
					
					//CONTROLLO DIAGONALE 2 /----------------------------------------------------------------------------------------------------------------
					else if(grid[temp+1][c-1]=='X' && grid[temp][c]=='X' && grid[temp-1][c+1]=='X' && grid[temp-2][c+2]=='X' && c+2<7 && c-1>=0){
						win=1;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp+1][c-1]=cube;
								grid[temp][c]=cube;
								grid[temp-1][c+1]=cube;
								grid[temp-2][c+2]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp+1][c-1]='X';
								grid[temp][c]='X';
								grid[temp-1][c+1]='X';
								grid[temp-2][c+2]='X';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONTROLLO DIAGONALE 2 /-----------------------------------------------------------------------------------------------------------
					
					
					//CONTROLLO DIAGONALE 3 /----------------------------------------------------------------------------------------------------------------
					else if(grid[temp+2][c-2]=='X' && grid[temp+1][c-1]=='X' && grid[temp][c]=='X' && grid[temp-1][c+1]=='X' && c+1<7 && c-2>=0){
						win=1;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp+2][c-2]=cube;
								grid[temp+1][c-1]=cube;
								grid[temp][c]=cube;
								grid[temp-1][c+1]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp+2][c-2]='X';
								grid[temp+1][c-1]='X';
								grid[temp][c]='X';
								grid[temp-1][c+1]='X';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONTROLLO DIAGONALE 3 /-----------------------------------------------------------------------------------------------------------
					
					
					//CONTROLLO DIAGONALE 4 /----------------------------------------------------------------------------------------------------------------
					else if(grid[temp+3][c-3]=='X' && grid[temp+2][c-2]=='X' && grid[temp+1][c-1]=='X' && grid[temp][c]=='X' && c-3>=0){
						win=1;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp+3][c-3]=cube;
								grid[temp+2][c-2]=cube;
								grid[temp+1][c-1]=cube;
								grid[temp][c]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp+3][c-3]='X';
								grid[temp+2][c-2]='X';
								grid[temp+1][c-1]='X';
								grid[temp][c]='X';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONTROLLO DIAGONALE 4 /-----------------------------------------------------------------------------------------------------------
					//FINE CONTROLLI DIAGONALI /-------------------------------------------------------------------------------------------------------------
					
					
					
					//CONTROLLI DIAGONALE \-------------------------------------------------------------------------------------------------------------------
					//CONTROLLO DIAGONALE 1 \-----------------------------------------------------------------------------------------------------------------
					else if(grid[temp][c]=='X' && grid[temp+1][c+1]=='X' && grid[temp+2][c+2]=='X' && grid[temp+3][c+3]=='X' && c+3<7){
						win=1;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp][c]=cube;
								grid[temp+1][c+1]=cube;
								grid[temp+2][c+2]=cube;
								grid[temp+3][c+3]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp][c]='X';
								grid[temp+1][c+1]='X';
								grid[temp+2][c+2]='X';
								grid[temp+3][c+3]='X';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONTROLLO DIAGONALE 1 \------------------------------------------------------------------------------------------------------------
					
					
					//CONTROLLO DIAGONALE 2 \-----------------------------------------------------------------------------------------------------------------
					else if(grid[temp-1][c-1]=='X' && grid[temp][c]=='X' && grid[temp+1][c+1]=='X' && grid[temp+2][c+2]=='X' && c+2<7 && c-1>=0){
						win=1;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp-1][c-1]=cube;
								grid[temp][c]=cube;
								grid[temp+1][c+1]=cube;
								grid[temp+2][c+2]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp-1][c-1]='X';
								grid[temp][c]='X';
								grid[temp+1][c+1]='X';
								grid[temp+2][c+2]='X';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONRTOLLO DIAGONALE 2 \------------------------------------------------------------------------------------------------------------
					
					
					//CONTROLLO DIAGONALE 3 \-----------------------------------------------------------------------------------------------------------------
					else if(grid[temp-2][c-2]=='X' && grid[temp-1][c-1]=='X' && grid[temp][c]=='X' && grid[temp+1][c+1]=='X' && c+1<7 && c-2>=0){
						win=1;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp-2][c-2]=cube;
								grid[temp-1][c-1]=cube;
								grid[temp][c]=cube;
								grid[temp+1][c+1]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp-2][c-2]='X';
								grid[temp-1][c-1]='X';
								grid[temp][c]='X';
								grid[temp+1][c+1]='X';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONTROLLO DIAGONALE 3 \------------------------------------------------------------------------------------------------------------
					
					
					//CONTROLLO DIAGONALE 4 \-----------------------------------------------------------------------------------------------------------------
					else if(grid[temp-3][c-3]=='X' && grid[temp-2][c-2]=='X' && grid[temp-1][c-1]=='X' && grid[temp][c]=='X' && c-3>=0){
						win=1;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp-3][c-3]=cube;
								grid[temp-2][c-2]=cube;
								grid[temp-1][c-1]=cube;
								grid[temp][c]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp-3][c-3]='X';
								grid[temp-2][c-2]='X';
								grid[temp-1][c-1]='X';
								grid[temp][c]='X';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONTROLLO DIAGONALE 4 \------------------------------------------------------------------------------------------------------------
					//FINE CONTROLLI DIAGONALE \--------------------------------------------------------------------------------------------------------------
					
					
					//CONTROLLO TABELLA PIENA-----------------------------------------------------------------------------------------------------------------------------------------------------
					else if(grid[0][0]!=space && grid[0][1]!=space && grid[0][2]!=space && grid[0][3]!=space && grid[0][4]!=space && grid[0][5]!=space && grid[0][6]!=space &&
					   		grid[1][0]!=space && grid[1][1]!=space && grid[1][2]!=space && grid[1][3]!=space && grid[1][4]!=space && grid[1][5]!=space && grid[1][6]!=space &&
					   		grid[2][0]!=space && grid[2][1]!=space && grid[2][2]!=space && grid[2][3]!=space && grid[2][4]!=space && grid[2][5]!=space && grid[2][6]!=space &&
					   		grid[3][0]!=space && grid[3][1]!=space && grid[3][2]!=space && grid[3][3]!=space && grid[3][4]!=space && grid[3][5]!=space && grid[3][6]!=space &&
					  		grid[4][0]!=space && grid[4][1]!=space && grid[4][2]!=space && grid[4][3]!=space && grid[4][4]!=space && grid[4][5]!=space && grid[4][6]!=space &&
					   		grid[5][0]!=space && grid[5][1]!=space && grid[5][2]!=space && grid[5][3]!=space && grid[5][4]!=space && grid[5][5]!=space && grid[5][6]!=space){
						win=0;
						/*STAMPA TABELLA COMPLETA*/
						stampaf4(grid,sel_line);
						/*STAMPA TABELLA COMPLETA*/
						goto out;
					}
					//FINE CONTROLLO TABELLA PIENA------------------------------------------------------------------------------------------------------------------------------------------------
				/*CONTROLLI*/
					
					temp--;
					check[c]=temp;
					
				/*BOT*/
				temp=-1;
				while(temp<0){
					colonna=rand()%7;
					temp=check[colonna];
				}
				grid[temp][colonna]='O';
				/*BOT*/
				
				/*CONTROLLI*/
				//CONTROLLI ORIZZONTALE------------------------------------------------------------------------------------------------------------------					
					//CONTROLLO 1----------------------------------------------------------------------------------------------------------------------------
					if(/*Xxxx*/grid[temp][colonna]=='O' && grid[temp][colonna+1]=='O' && grid[temp][colonna+2]=='O' && grid[temp][colonna+3]=='O' && colonna+3<7){
						win=-1;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp][colonna]=cube;
								grid[temp][colonna+1]=cube;
								grid[temp][colonna+2]=cube;
								grid[temp][colonna+3]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp][colonna]='O';
								grid[temp][colonna+1]='O';
								grid[temp][colonna+2]='O';
								grid[temp][colonna+3]='O';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;	
					}
					//FINE CONTROLLO 1-----------------------------------------------------------------------------------------------------------------------

					
					//CONTROLLO 2----------------------------------------------------------------------------------------------------------------------------
					else if(/*xXxx*/grid[temp][colonna-1]=='O' && grid[temp][colonna]=='O' && grid[temp][colonna+1]=='O' && grid[temp][colonna+2]=='O' && colonna+2<7 && colonna-1>=0){
						win=-1;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp][colonna-1]=cube;
								grid[temp][colonna]=cube;
								grid[temp][colonna+1]=cube;
								grid[temp][colonna+2]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp][colonna-1]='O';
								grid[temp][colonna]='O';
								grid[temp][colonna+1]='O';
								grid[temp][colonna+2]='O';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}	
						goto out;
						
					}
					//FINE CONTROLLO 2-----------------------------------------------------------------------------------------------------------------------					


					//CONTROLLO 3----------------------------------------------------------------------------------------------------------------------------
					else if(/*xxXx*/grid[temp][colonna-2]=='O' && grid[temp][colonna-1]=='O' && grid[temp][colonna]=='O' && grid[temp][colonna+1]=='O' && colonna-2>=0 && colonna+1<7){
						win=-1;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp][colonna-2]=cube;
								grid[temp][colonna-1]=cube;
								grid[temp][colonna]=cube;
								grid[temp][colonna+1]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp][colonna-2]='O';
								grid[temp][colonna-1]='O';
								grid[temp][colonna]='O';
								grid[temp][colonna+1]='O';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONTROLLO 3-----------------------------------------------------------------------------------------------------------------------


					//CONTROLLO 4----------------------------------------------------------------------------------------------------------------------------
					else if(/*xxxX*/grid[temp][colonna-3]=='O' && grid[temp][colonna-2]=='O' && grid[temp][colonna-1]=='O' && grid[temp][colonna]=='O' && colonna-3>=0){
						win=-1;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp][colonna-3]=cube;
								grid[temp][colonna-2]=cube;
								grid[temp][colonna-1]=cube;
								grid[temp][colonna]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp][colonna-3]='O';
								grid[temp][colonna-2]='O';
								grid[temp][colonna-1]='O';
								grid[temp][colonna]='O';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONTROLLO 4-----------------------------------------------------------------------------------------------------------------------
					//FINE CONTROLLI ORIZZONTALE-------------------------------------------------------------------------------------------------------------



					//CONTROLLO VERTICALE--------------------------------------------------------------------------------------------------------------------
					//CONTROLLO 1----------------------------------------------------------------------------------------------------------------------------
					else if(grid[temp+3][colonna]=='O' && grid[temp+2][colonna]=='O' && grid[temp+1][colonna]=='O' && grid[temp][colonna]=='O'){
						win=-1;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp+3][colonna]=cube;
								grid[temp+2][colonna]=cube;
								grid[temp+1][colonna]=cube;
								grid[temp][colonna]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp+3][colonna]='O';
								grid[temp+2][colonna]='O';
								grid[temp+1][colonna]='O';
								grid[temp][colonna]='O';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;	
					}
					//FINE CONTROLLO 1-----------------------------------------------------------------------------------------------------------------------					
					//FINE CONTROLLO VERTICALE---------------------------------------------------------------------------------------------------------------



					//CONTROLLI DIAGONALI /------------------------------------------------------------------------------------------------------------------
					//CONTROLLO DIAGONALE 1 /----------------------------------------------------------------------------------------------------------------
					else if(grid[temp][colonna]=='O' && grid[temp-1][colonna+1]=='O' && grid[temp-2][colonna+2]=='O' && grid[temp-3][colonna+3]=='O' && colonna+3<7){
						win=-1;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp][colonna]=cube;
								grid[temp-1][colonna+1]=cube;
								grid[temp-2][colonna+2]=cube;
								grid[temp-3][colonna+3]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp][colonna]='O';
								grid[temp-1][colonna+1]='O';
								grid[temp-2][colonna+2]='O';
								grid[temp-3][colonna+3]='O';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONTROLLO DIAGONALE 1 /-----------------------------------------------------------------------------------------------------------
					
					
					//CONTROLLO DIAGONALE 2 /----------------------------------------------------------------------------------------------------------------
					else if(grid[temp+1][colonna-1]=='O' && grid[temp][colonna]=='O' && grid[temp-1][colonna+1]=='O' && grid[temp-2][colonna+2]=='O' && colonna+2<7 && colonna-1>=0){
						win=-1;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp+1][colonna-1]=cube;
								grid[temp][colonna]=cube;
								grid[temp-1][colonna+1]=cube;
								grid[temp-2][colonna+2]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp+1][colonna-1]='O';
								grid[temp][colonna]='O';
								grid[temp-1][colonna+1]='O';
								grid[temp-2][colonna+2]='O';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONTROLLO DIAGONALE 2 /-----------------------------------------------------------------------------------------------------------
					
					
					//CONTROLLO DIAGONALE 3 /----------------------------------------------------------------------------------------------------------------
					else if(grid[temp+2][colonna-2]=='O' && grid[temp+1][colonna-1]=='O' && grid[temp][colonna]=='O' && grid[temp-1][colonna+1]=='O' && colonna+1<7 && colonna-2>=0){
						win=-1;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp+2][colonna-2]=cube;
								grid[temp+1][colonna-1]=cube;
								grid[temp][colonna]=cube;
								grid[temp-1][colonna+1]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp+2][colonna-2]='O';
								grid[temp+1][colonna-1]='O';
								grid[temp][colonna]='O';
								grid[temp-1][colonna+1]='O';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONTROLLO DIAGONALE 3 /-----------------------------------------------------------------------------------------------------------
					
					
					//CONTROLLO DIAGONALE 4 /----------------------------------------------------------------------------------------------------------------
					else if(grid[temp+3][colonna-3]=='O' && grid[temp+2][colonna-2]=='O' && grid[temp+1][colonna-1]=='O' && grid[temp][colonna]=='O' && colonna-3>=0){
						win=-1;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp+3][colonna-3]=cube;
								grid[temp+2][colonna-2]=cube;
								grid[temp+1][colonna-1]=cube;
								grid[temp][colonna]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp+3][colonna-3]='O';
								grid[temp+2][colonna-2]='O';
								grid[temp+1][colonna-1]='O';
								grid[temp][colonna]='O';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONTROLLO DIAGONALE 4 /-----------------------------------------------------------------------------------------------------------
					//FINE CONTROLLI DIAGONALI /-------------------------------------------------------------------------------------------------------------
					
					
					
					//CONTROLLI DIAGONALE \-------------------------------------------------------------------------------------------------------------------
					//CONTROLLO DIAGONALE 1 \-----------------------------------------------------------------------------------------------------------------
					else if(grid[temp][colonna]=='O' && grid[temp+1][colonna+1]=='O' && grid[temp+2][colonna+2]=='O' && grid[temp+3][colonna+3]=='O' && colonna+3<7){
						win=-1;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp][colonna]=cube;
								grid[temp+1][colonna+1]=cube;
								grid[temp+2][colonna+2]=cube;
								grid[temp+3][colonna+3]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp][colonna]='O';
								grid[temp+1][colonna+1]='O';
								grid[temp+2][colonna+2]='O';
								grid[temp+3][colonna+3]='O';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONTROLLO DIAGONALE 1 \------------------------------------------------------------------------------------------------------------
					
					
					//CONTROLLO DIAGONALE 2 \-----------------------------------------------------------------------------------------------------------------
					else if(grid[temp-1][colonna-1]=='O' && grid[temp][colonna]=='O' && grid[temp+1][colonna+1]=='O' && grid[temp+2][colonna+2]=='O' && colonna+2<7 && colonna-1>=0){
						win=-1;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp-1][colonna-1]=cube;
								grid[temp][colonna]=cube;
								grid[temp+1][colonna+1]=cube;
								grid[temp+2][colonna+2]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp-1][colonna-1]='O';
								grid[temp][colonna]='O';
								grid[temp+1][colonna+1]='O';
								grid[temp+2][colonna+2]='O';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONRTOLLO DIAGONALE 2 \------------------------------------------------------------------------------------------------------------
					
					
					//CONTROLLO DIAGONALE 3 \-----------------------------------------------------------------------------------------------------------------
					else if(grid[temp-2][colonna-2]=='O' && grid[temp-1][colonna-1]=='O' && grid[temp][colonna]=='O' && grid[temp+1][colonna+1]=='O' && colonna+1<7 && colonna-2>=0){
						win=-1;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp-2][colonna-2]=cube;
								grid[temp-1][colonna-1]=cube;
								grid[temp][colonna]=cube;
								grid[temp+1][colonna+1]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp-2][colonna-2]='O';
								grid[temp-1][colonna-1]='O';
								grid[temp][colonna]='O';
								grid[temp+1][colonna+1]='O';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONTROLLO DIAGONALE 3 \------------------------------------------------------------------------------------------------------------
					
					
					//CONTROLLO DIAGONALE 4 \-----------------------------------------------------------------------------------------------------------------
					else if(grid[temp-3][colonna-3]=='O' && grid[temp-2][colonna-2]=='O' && grid[temp-1][colonna-1]=='O' && grid[temp][colonna]=='O' && colonna-3>=0){
						win=-1;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp-3][colonna-3]=cube;
								grid[temp-2][colonna-2]=cube;
								grid[temp-1][colonna-1]=cube;
								grid[temp][colonna]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp-3][colonna-3]='O';
								grid[temp-2][colonna-2]='O';
								grid[temp-1][colonna-1]='O';
								grid[temp][colonna]='O';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONTROLLO DIAGONALE 4 \------------------------------------------------------------------------------------------------------------
					//FINE CONTROLLI DIAGONALE \--------------------------------------------------------------------------------------------------------------
				
				
					//CONTROLLO TABELLA PIENA-----------------------------------------------------------------------------------------------------------------------------------------------------
					else if(grid[0][0]!=space && grid[0][1]!=space && grid[0][2]!=space && grid[0][3]!=space && grid[0][4]!=space && grid[0][5]!=space && grid[0][6]!=space &&
					   		grid[1][0]!=space && grid[1][1]!=space && grid[1][2]!=space && grid[1][3]!=space && grid[1][4]!=space && grid[1][5]!=space && grid[1][6]!=space &&
					  		grid[2][0]!=space && grid[2][1]!=space && grid[2][2]!=space && grid[2][3]!=space && grid[2][4]!=space && grid[2][5]!=space && grid[2][6]!=space &&
					   		grid[3][0]!=space && grid[3][1]!=space && grid[3][2]!=space && grid[3][3]!=space && grid[3][4]!=space && grid[3][5]!=space && grid[3][6]!=space &&
					   		grid[4][0]!=space && grid[4][1]!=space && grid[4][2]!=space && grid[4][3]!=space && grid[4][4]!=space && grid[4][5]!=space && grid[4][6]!=space &&
					   		grid[5][0]!=space && grid[5][1]!=space && grid[5][2]!=space && grid[5][3]!=space && grid[5][4]!=space && grid[5][5]!=space && grid[5][6]!=space){
						win=0;
						/*STAMPA TABELLA COMPLETA*/
						stampaf4(grid,sel_line);
						/*STAMPA TABELLA COMPLETA*/
						goto out;
					}
					//FINE CONTROLLO TABELLA PIENA------------------------------------------------------------------------------------------------------------------------------------------------
				/*CONTROLLI*/
				
				temp--;
				check[colonna]=temp;
				}
				
				
			/*PLAYER 1*/
		}
		/*POSIZIONAMENTO*/
		
		
		retry:
		/*STAMPA TABELLA COMPLETA*/
		stampaf4(grid,sel_line);
		/*STAMPA TABELLA COMPLETA*/
		if(flag==0){
			printf("\nGiocatore 1 (X)\n");	
		}
		else if(flag==1){
			printf("\nGiocatore 2 (O)\n");
		}
		printf("\nMuoversi a destra con il tasto: D\nMuoversi a sinistra con il tasto: A\n\nConfermare la colonna con il tasto: Barra spaziatrice\n");
	}
	
	out:
	if(win==1){
		printf("\n\nGiocatore 1 vince!");
	}
	else if(win==-1){
		printf("\n\nBot vince!");
	}
	else if(win==0){
		printf("\n\nParita'!");
	}
	for(i=0;i<5;i++){
		system("color 1A");
		Sleep(60);
		system("color 2C");
		Sleep(60);
		system("color 3D");
		Sleep(60);
		system("color 4E");
		Sleep(60);
		system("color 5B");
		Sleep(60);
		system("color 6C");
		Sleep(60);
		system("color 7B");
		Sleep(60);
		system("color 8D");
		Sleep(60);
		system("color 9A");
		Sleep(60);
		system("color 0F");
		Sleep(60);
	}
	t1.gioco=3;
	t1.w=win;
	t1.bot=-1;
	cronologia_write();
	printf("\n\n[premere un TASTO QUALSIASI per tornare al menu]");
	k=getch();
}


void forza4bothd(){
	
	srand(time(NULL));
	int i,j,l,c=0,flag=0,temp,win=0,colonna,tempc;
	int check[7]={5,5,5,5,5,5,5};
	char space=32, cube=254;
	char grid[6][7]={space,space,space,space,space,space,space,
				  	 space,space,space,space,space,space,space,
				  	 space,space,space,space,space,space,space,
				  	 space,space,space,space,space,space,space,
				  	 space,space,space,space,space,space,space,
				  	 space,space,space,space,space,space,space,};
				  	 
	char sel_line[7]={space,space,space,space,space,space,space,};
	char mov;
	
	sel_line[c]='V';
	
	/*STAMPA TABELLA COMPLETA*/
	
	stampaf4(grid,sel_line);
	printf("\nGiocatore 1 (X)\n");
	printf("\nMuoversi a destra con il tasto: D\nMuoversi a sinistra con il tasto: A\n\nConfermare la colonna con il tasto: Barra spaziatrice\n");
	/*STAMPA TABELLA COMPLETA*/
	
	while(1){
		
		mov=getch();
		system("cls");
		
		/*>>>>>*/
		if(mov=='d'||mov=='D'){
			if(c==6){
				sel_line[c]=space;
				c=0;
				sel_line[c]='V';
			}
			else{
				sel_line[c]=space;
				c++;
				sel_line[c]='V';
			}
		}
		/*>>>>>*/
					
		/*<<<<<*/
		else if(mov=='a'||mov=='A'){
			if(c==0){
				sel_line[c]=space;
				c=6;
				sel_line[c]='V';
			}
			else{
				sel_line[c]=space;
				c--;
				sel_line[c]='V';
			}
			
		}
		/*<<<<<*/
		
		/*POSIZIONAMENTO*/
		else if(mov==space){
			/*PLAYER 1*/
				if(check[c]<0){
					printf("Colonna piena! >:T\n");
					goto retry;
				}
				else{
					temp=check[c];
					grid[temp][c]='X';
				/*CONTROLLI*/
					//CONTROLLI ORIZZONTALE------------------------------------------------------------------------------------------------------------------					
					//CONTROLLO 1----------------------------------------------------------------------------------------------------------------------------
					if(/*Xxxx*/grid[temp][c]=='X' && grid[temp][c+1]=='X' && grid[temp][c+2]=='X' && grid[temp][c+3]=='X' && c+3<7){
						win=1;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp][c]=cube;
								grid[temp][c+1]=cube;
								grid[temp][c+2]=cube;
								grid[temp][c+3]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp][c]='X';
								grid[temp][c+1]='X';
								grid[temp][c+2]='X';
								grid[temp][c+3]='X';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;	
					}
					//FINE CONTROLLO 1-----------------------------------------------------------------------------------------------------------------------

					
					//CONTROLLO 2----------------------------------------------------------------------------------------------------------------------------
					else if(/*xXxx*/grid[temp][c-1]=='X' && grid[temp][c]=='X' && grid[temp][c+1]=='X' && grid[temp][c+2]=='X' && c+2<7 && c-1>=0){
						win=1;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp][c-1]=cube;
								grid[temp][c]=cube;
								grid[temp][c+1]=cube;
								grid[temp][c+2]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp][c-1]='X';
								grid[temp][c]='X';
								grid[temp][c+1]='X';
								grid[temp][c+2]='X';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}	
						goto out;
						
					}
					//FINE CONTROLLO 2-----------------------------------------------------------------------------------------------------------------------					


					//CONTROLLO 3----------------------------------------------------------------------------------------------------------------------------
					else if(/*xxXx*/grid[temp][c-2]=='X' && grid[temp][c-1]=='X' && grid[temp][c]=='X' && grid[temp][c+1]=='X' && c-2>=0 && c+1<7){
						win=1;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp][c-2]=cube;
								grid[temp][c-1]=cube;
								grid[temp][c]=cube;
								grid[temp][c+1]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp][c-2]='X';
								grid[temp][c-1]='X';
								grid[temp][c]='X';
								grid[temp][c+1]='X';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONTROLLO 3-----------------------------------------------------------------------------------------------------------------------


					//CONTROLLO 4----------------------------------------------------------------------------------------------------------------------------
					else if(/*xxxX*/grid[temp][c-3]=='X' && grid[temp][c-2]=='X' && grid[temp][c-1]=='X' && grid[temp][c]=='X' && c-3>=0){
						win=1;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp][c-3]=cube;
								grid[temp][c-2]=cube;
								grid[temp][c-1]=cube;
								grid[temp][c]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp][c-3]='X';
								grid[temp][c-2]='X';
								grid[temp][c-1]='X';
								grid[temp][c]='X';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONTROLLO 4-----------------------------------------------------------------------------------------------------------------------
					//FINE CONTROLLI ORIZZONTALE-------------------------------------------------------------------------------------------------------------



					//CONTROLLO VERTICALE--------------------------------------------------------------------------------------------------------------------
					//CONTROLLO 1----------------------------------------------------------------------------------------------------------------------------
					else if(grid[temp+3][c]=='X' && grid[temp+2][c]=='X' && grid[temp+1][c]=='X' && grid[temp][c]=='X'){
						win=1;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp+3][c]=cube;
								grid[temp+2][c]=cube;
								grid[temp+1][c]=cube;
								grid[temp][c]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp+3][c]='X';
								grid[temp+2][c]='X';
								grid[temp+1][c]='X';
								grid[temp][c]='X';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;	
					}
					//FINE CONTROLLO 1-----------------------------------------------------------------------------------------------------------------------					
					//FINE CONTROLLO VERTICALE---------------------------------------------------------------------------------------------------------------



					//CONTROLLI DIAGONALI /------------------------------------------------------------------------------------------------------------------
					//CONTROLLO DIAGONALE 1 /----------------------------------------------------------------------------------------------------------------
					else if(grid[temp][c]=='X' && grid[temp-1][c+1]=='X' && grid[temp-2][c+2]=='X' && grid[temp-3][c+3]=='X' && c+3<7){
						win=1;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp][c]=cube;
								grid[temp-1][c+1]=cube;
								grid[temp-2][c+2]=cube;
								grid[temp-3][c+3]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp][c]='X';
								grid[temp-1][c+1]='X';
								grid[temp-2][c+2]='X';
								grid[temp-3][c+3]='X';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONTROLLO DIAGONALE 1 /-----------------------------------------------------------------------------------------------------------
					
					
					//CONTROLLO DIAGONALE 2 /----------------------------------------------------------------------------------------------------------------
					else if(grid[temp+1][c-1]=='X' && grid[temp][c]=='X' && grid[temp-1][c+1]=='X' && grid[temp-2][c+2]=='X' && c+2<7 && c-1>=0){
						win=1;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp+1][c-1]=cube;
								grid[temp][c]=cube;
								grid[temp-1][c+1]=cube;
								grid[temp-2][c+2]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp+1][c-1]='X';
								grid[temp][c]='X';
								grid[temp-1][c+1]='X';
								grid[temp-2][c+2]='X';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONTROLLO DIAGONALE 2 /-----------------------------------------------------------------------------------------------------------
					
					
					//CONTROLLO DIAGONALE 3 /----------------------------------------------------------------------------------------------------------------
					else if(grid[temp+2][c-2]=='X' && grid[temp+1][c-1]=='X' && grid[temp][c]=='X' && grid[temp-1][c+1]=='X' && c+1<7 && c-2>=0){
						win=1;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp+2][c-2]=cube;
								grid[temp+1][c-1]=cube;
								grid[temp][c]=cube;
								grid[temp-1][c+1]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp+2][c-2]='X';
								grid[temp+1][c-1]='X';
								grid[temp][c]='X';
								grid[temp-1][c+1]='X';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONTROLLO DIAGONALE 3 /-----------------------------------------------------------------------------------------------------------
					
					
					//CONTROLLO DIAGONALE 4 /----------------------------------------------------------------------------------------------------------------
					else if(grid[temp+3][c-3]=='X' && grid[temp+2][c-2]=='X' && grid[temp+1][c-1]=='X' && grid[temp][c]=='X' && c-3>=0){
						win=1;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp+3][c-3]=cube;
								grid[temp+2][c-2]=cube;
								grid[temp+1][c-1]=cube;
								grid[temp][c]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp+3][c-3]='X';
								grid[temp+2][c-2]='X';
								grid[temp+1][c-1]='X';
								grid[temp][c]='X';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONTROLLO DIAGONALE 4 /-----------------------------------------------------------------------------------------------------------
					//FINE CONTROLLI DIAGONALI /-------------------------------------------------------------------------------------------------------------
					
					
					
					//CONTROLLI DIAGONALE \-------------------------------------------------------------------------------------------------------------------
					//CONTROLLO DIAGONALE 1 \-----------------------------------------------------------------------------------------------------------------
					else if(grid[temp][c]=='X' && grid[temp+1][c+1]=='X' && grid[temp+2][c+2]=='X' && grid[temp+3][c+3]=='X' && c+3<7){
						win=1;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp][c]=cube;
								grid[temp+1][c+1]=cube;
								grid[temp+2][c+2]=cube;
								grid[temp+3][c+3]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp][c]='X';
								grid[temp+1][c+1]='X';
								grid[temp+2][c+2]='X';
								grid[temp+3][c+3]='X';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONTROLLO DIAGONALE 1 \------------------------------------------------------------------------------------------------------------
					
					
					//CONTROLLO DIAGONALE 2 \-----------------------------------------------------------------------------------------------------------------
					else if(grid[temp-1][c-1]=='X' && grid[temp][c]=='X' && grid[temp+1][c+1]=='X' && grid[temp+2][c+2]=='X' && c+2<7 && c-1>=0){
						win=1;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp-1][c-1]=cube;
								grid[temp][c]=cube;
								grid[temp+1][c+1]=cube;
								grid[temp+2][c+2]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp-1][c-1]='X';
								grid[temp][c]='X';
								grid[temp+1][c+1]='X';
								grid[temp+2][c+2]='X';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONRTOLLO DIAGONALE 2 \------------------------------------------------------------------------------------------------------------
					
					
					//CONTROLLO DIAGONALE 3 \-----------------------------------------------------------------------------------------------------------------
					else if(grid[temp-2][c-2]=='X' && grid[temp-1][c-1]=='X' && grid[temp][c]=='X' && grid[temp+1][c+1]=='X' && c+1<7 && c-2>=0){
						win=1;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp-2][c-2]=cube;
								grid[temp-1][c-1]=cube;
								grid[temp][c]=cube;
								grid[temp+1][c+1]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp-2][c-2]='X';
								grid[temp-1][c-1]='X';
								grid[temp][c]='X';
								grid[temp+1][c+1]='X';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONTROLLO DIAGONALE 3 \------------------------------------------------------------------------------------------------------------
					
					
					//CONTROLLO DIAGONALE 4 \-----------------------------------------------------------------------------------------------------------------
					else if(grid[temp-3][c-3]=='X' && grid[temp-2][c-2]=='X' && grid[temp-1][c-1]=='X' && grid[temp][c]=='X' && c-3>=0){
						win=1;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp-3][c-3]=cube;
								grid[temp-2][c-2]=cube;
								grid[temp-1][c-1]=cube;
								grid[temp][c]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp-3][c-3]='X';
								grid[temp-2][c-2]='X';
								grid[temp-1][c-1]='X';
								grid[temp][c]='X';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONTROLLO DIAGONALE 4 \------------------------------------------------------------------------------------------------------------
					//FINE CONTROLLI DIAGONALE \--------------------------------------------------------------------------------------------------------------
					
					
					//CONTROLLO TABELLA PIENA-----------------------------------------------------------------------------------------------------------------------------------------------------
					else if(grid[0][0]!=space && grid[0][1]!=space && grid[0][2]!=space && grid[0][3]!=space && grid[0][4]!=space && grid[0][5]!=space && grid[0][6]!=space &&
					   		grid[1][0]!=space && grid[1][1]!=space && grid[1][2]!=space && grid[1][3]!=space && grid[1][4]!=space && grid[1][5]!=space && grid[1][6]!=space &&
					   		grid[2][0]!=space && grid[2][1]!=space && grid[2][2]!=space && grid[2][3]!=space && grid[2][4]!=space && grid[2][5]!=space && grid[2][6]!=space &&
					   		grid[3][0]!=space && grid[3][1]!=space && grid[3][2]!=space && grid[3][3]!=space && grid[3][4]!=space && grid[3][5]!=space && grid[3][6]!=space &&
					  		grid[4][0]!=space && grid[4][1]!=space && grid[4][2]!=space && grid[4][3]!=space && grid[4][4]!=space && grid[4][5]!=space && grid[4][6]!=space &&
					   		grid[5][0]!=space && grid[5][1]!=space && grid[5][2]!=space && grid[5][3]!=space && grid[5][4]!=space && grid[5][5]!=space && grid[5][6]!=space){
						win=0;
						/*STAMPA TABELLA COMPLETA*/
						stampaf4(grid,sel_line);
						/*STAMPA TABELLA COMPLETA*/
						goto out;
					}
					//FINE CONTROLLO TABELLA PIENA------------------------------------------------------------------------------------------------------------------------------------------------
				/*CONTROLLI*/
					
					temp--;
					check[c]=temp;
					
				/*BOT*/
				//CERVELLO BOT
				for(colonna=0;colonna<7;colonna++){
					temp=check[colonna];
					if(temp>=0){
						if(grid[temp][colonna+1]=='O' && grid[temp][colonna+2]=='O' && grid[temp][colonna+3]=='O' && colonna+3<7||
					   grid[temp][colonna-1]=='O' && grid[temp][colonna+1]=='O' && grid[temp][colonna+2]=='O' && colonna+2<7 && colonna-1>=0||
					   grid[temp][colonna-2]=='O' && grid[temp][colonna-1]=='O' && grid[temp][colonna+1]=='O' && colonna+1<7 && colonna-2>=0||
					   grid[temp][colonna-3]=='O' && grid[temp][colonna-2]=='O' && grid[temp][colonna-1]=='O' && colonna-3>=0||
					   
					   grid[temp+3][colonna]=='O' && grid[temp+2][colonna]=='O' && grid[temp+1][colonna]=='O' ||
					   
					   grid[temp-1][colonna-1]=='O' && grid[temp-2][colonna-2]=='O' && grid[temp-3][colonna-3]=='O' &&colonna-3>=0||
					   grid[temp+1][colonna+1]=='O' && grid[temp-1][colonna-1]=='O' && grid[temp-2][colonna-2]=='O' &&colonna-2>=0 && colonna+1<7||
					   grid[temp+2][colonna+2]=='O' && grid[temp+1][colonna+1]=='O' && grid[temp-1][colonna-1]=='O' &&colonna-1>=0 && colonna+2<7||
					   grid[temp+3][colonna+3]=='O' && grid[temp+2][colonna+2]=='O' && grid[temp+1][colonna+1]=='O' &&colonna+3<7||
					   
					   grid[temp+1][colonna-1]=='O' && grid[temp+2][colonna-2]=='O' && grid[temp+3][colonna-3]=='O' &&colonna-3>=0||
					   grid[temp-1][colonna+1]=='O' && grid[temp+1][colonna-1]=='O' && grid[temp+2][colonna-2]=='O' &&colonna-2>=0 && colonna+1<7||
					   grid[temp-2][colonna+2]=='O' && grid[temp-1][colonna+1]=='O' && grid[temp+1][colonna-1]=='O' &&colonna-1>=0 && colonna+2<7||
					   grid[temp-3][colonna+3]=='O' && grid[temp-2][colonna+2]=='O' && grid[temp-1][colonna+1]=='O' &&colonna+3<7){
					   	
							grid[temp][colonna]='O';
							goto fuori;
						}	
					}
				}
				for(colonna=0;colonna<7;colonna++){
					temp=check[colonna];
					if(temp>=0){
						if(grid[temp][colonna+1]=='X' && grid[temp][colonna+2]=='X' && grid[temp][colonna+3]=='X' && colonna+3<7||
					   grid[temp][colonna-1]=='X' && grid[temp][colonna+1]=='X' && grid[temp][colonna+2]=='X' && colonna+2<7 && colonna-1>=0||
					   grid[temp][colonna-2]=='X' && grid[temp][colonna-1]=='X' && grid[temp][colonna+1]=='X' && colonna+1<7 && colonna-2>=0||
					   grid[temp][colonna-3]=='X' && grid[temp][colonna-2]=='X' && grid[temp][colonna-1]=='X' && colonna-3>=0||
					   
					   grid[temp+3][colonna]=='X' && grid[temp+2][colonna]=='X' && grid[temp+1][colonna]=='X' ||
					   
					   grid[temp-1][colonna-1]=='X' && grid[temp-2][colonna-2]=='X' && grid[temp-3][colonna-3]=='X' &&colonna-3>=0||
					   grid[temp+1][colonna+1]=='X' && grid[temp-1][colonna-1]=='X' && grid[temp-2][colonna-2]=='X' &&colonna-2>=0 && colonna+1<7||
					   grid[temp+2][colonna+2]=='X' && grid[temp+1][colonna+1]=='X' && grid[temp-1][colonna-1]=='X' &&colonna-1>=0 && colonna+2<7||
					   grid[temp+3][colonna+3]=='X' && grid[temp+2][colonna+2]=='X' && grid[temp+1][colonna+1]=='X' &&colonna+3<7||
					   
					   grid[temp+1][colonna-1]=='X' && grid[temp+2][colonna-2]=='X' && grid[temp+3][colonna-3]=='X' &&colonna-3>=0||
					   grid[temp-1][colonna+1]=='X' && grid[temp+1][colonna-1]=='X' && grid[temp+2][colonna-2]=='X' &&colonna-2>=0 && colonna+1<7||
					   grid[temp-2][colonna+2]=='X' && grid[temp-1][colonna+1]=='X' && grid[temp+1][colonna-1]=='X' &&colonna-1>=0 && colonna+2<7||
					   grid[temp-3][colonna+3]=='X' && grid[temp-2][colonna+2]=='X' && grid[temp-1][colonna+1]=='X' &&colonna+3<7){
					   	
							grid[temp][colonna]='O';
							goto fuori;
						}	
					}	
				}
				for(colonna=0;colonna<7;colonna++){
					temp=check[colonna];
					if(temp>=0){
						if(grid[temp][colonna+1]=='O' && grid[temp][colonna+2]=='O' && colonna+2<7||
					   grid[temp][colonna-1]=='O' && grid[temp][colonna+1]=='O' && colonna+1<7 && colonna-1>=0||
					   grid[temp][colonna-2]=='O' && grid[temp][colonna-1]=='O' && colonna-2>=0||
					   
					   grid[temp+2][colonna]=='O' && grid[temp+1][colonna]=='O' ||
					   
					   grid[temp-1][colonna-1]=='O' && grid[temp-2][colonna-2]=='O' &&colonna-2>=0||
					   grid[temp+1][colonna+1]=='O' && grid[temp-1][colonna-1]=='O' &&colonna-1>=0 && colonna+1<7||
					   grid[temp+2][colonna+2]=='O' && grid[temp+1][colonna+1]=='O' && colonna+2<7||
					   
					   grid[temp+1][colonna-1]=='O' && grid[temp+2][colonna-2]=='O' &&colonna-2>=0||
					   grid[temp-1][colonna+1]=='O' && grid[temp+1][colonna-1]=='O' &&colonna-1>=0 && colonna+1<7||
					   grid[temp-2][colonna+2]=='O' && grid[temp-1][colonna+1]=='O' &&colonna+2<7){
					   	
							grid[temp][colonna]='O';
							goto fuori;
						}
					}
				}
				for(colonna=0;colonna<7;colonna++){
					temp=check[colonna];
					if(temp>=0){
						if(grid[temp][colonna+1]=='O' && colonna+1<7||
					   grid[temp][colonna-1]=='O' && colonna-1>=0||
					   
					   grid[temp+1][colonna]=='O' ||
					   
					   grid[temp-1][colonna-1]=='O' &&colonna-1>=0||
					   grid[temp+1][colonna+1]=='O' &&colonna+1<7||
					   
					   grid[temp+1][colonna-1]=='O' &&colonna-1>=0||
					   grid[temp-1][colonna+1]=='O' &&colonna+1<7){
					   	
							grid[temp][colonna]='O';
							goto fuori;
						}
					}
				}
				temp=-1;
				while(temp<0){
					colonna=rand()%7;
					temp=check[colonna];
				}
				grid[temp][colonna]='O';
				fuori:
				//CERVELLO BOT
				/*BOT*/
				
				/*CONTROLLI*/
				//CONTROLLI ORIZZONTALE------------------------------------------------------------------------------------------------------------------					
					//CONTROLLO 1----------------------------------------------------------------------------------------------------------------------------
					if(/*Xxxx*/grid[temp][colonna]=='O' && grid[temp][colonna+1]=='O' && grid[temp][colonna+2]=='O' && grid[temp][colonna+3]=='O' && colonna+3<7){
						win=-2;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp][colonna]=cube;
								grid[temp][colonna+1]=cube;
								grid[temp][colonna+2]=cube;
								grid[temp][colonna+3]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp][colonna]='O';
								grid[temp][colonna+1]='O';
								grid[temp][colonna+2]='O';
								grid[temp][colonna+3]='O';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;	
					}
					//FINE CONTROLLO 1-----------------------------------------------------------------------------------------------------------------------

					
					//CONTROLLO 2----------------------------------------------------------------------------------------------------------------------------
					else if(/*xXxx*/grid[temp][colonna-1]=='O' && grid[temp][colonna]=='O' && grid[temp][colonna+1]=='O' && grid[temp][colonna+2]=='O' && colonna+2<7 && colonna-1>=0){
						win=-2;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp][colonna-1]=cube;
								grid[temp][colonna]=cube;
								grid[temp][colonna+1]=cube;
								grid[temp][colonna+2]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp][colonna-1]='O';
								grid[temp][colonna]='O';
								grid[temp][colonna+1]='O';
								grid[temp][colonna+2]='O';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}	
						goto out;
						
					}
					//FINE CONTROLLO 2-----------------------------------------------------------------------------------------------------------------------					


					//CONTROLLO 3----------------------------------------------------------------------------------------------------------------------------
					else if(/*xxXx*/grid[temp][colonna-2]=='O' && grid[temp][colonna-1]=='O' && grid[temp][colonna]=='O' && grid[temp][colonna+1]=='O' && colonna-2>=0 && colonna+1<7){
						win=-2;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp][colonna-2]=cube;
								grid[temp][colonna-1]=cube;
								grid[temp][colonna]=cube;
								grid[temp][colonna+1]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp][colonna-2]='O';
								grid[temp][colonna-1]='O';
								grid[temp][colonna]='O';
								grid[temp][colonna+1]='O';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONTROLLO 3-----------------------------------------------------------------------------------------------------------------------


					//CONTROLLO 4----------------------------------------------------------------------------------------------------------------------------
					else if(/*xxxX*/grid[temp][colonna-3]=='O' && grid[temp][colonna-2]=='O' && grid[temp][colonna-1]=='O' && grid[temp][colonna]=='O' && colonna-3>=0){
						win=-2;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp][colonna-3]=cube;
								grid[temp][colonna-2]=cube;
								grid[temp][colonna-1]=cube;
								grid[temp][colonna]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp][colonna-3]='O';
								grid[temp][colonna-2]='O';
								grid[temp][colonna-1]='O';
								grid[temp][colonna]='O';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONTROLLO 4-----------------------------------------------------------------------------------------------------------------------
					//FINE CONTROLLI ORIZZONTALE-------------------------------------------------------------------------------------------------------------



					//CONTROLLO VERTICALE--------------------------------------------------------------------------------------------------------------------
					//CONTROLLO 1----------------------------------------------------------------------------------------------------------------------------
					else if(grid[temp+3][colonna]=='O' && grid[temp+2][colonna]=='O' && grid[temp+1][colonna]=='O' && grid[temp][colonna]=='O'){
						win=-2;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp+3][colonna]=cube;
								grid[temp+2][colonna]=cube;
								grid[temp+1][colonna]=cube;
								grid[temp][colonna]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp+3][colonna]='O';
								grid[temp+2][colonna]='O';
								grid[temp+1][colonna]='O';
								grid[temp][colonna]='O';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;	
					}
					//FINE CONTROLLO 1-----------------------------------------------------------------------------------------------------------------------					
					//FINE CONTROLLO VERTICALE---------------------------------------------------------------------------------------------------------------



					//CONTROLLI DIAGONALI /------------------------------------------------------------------------------------------------------------------
					//CONTROLLO DIAGONALE 1 /----------------------------------------------------------------------------------------------------------------
					else if(grid[temp][colonna]=='O' && grid[temp-1][colonna+1]=='O' && grid[temp-2][colonna+2]=='O' && grid[temp-3][colonna+3]=='O' && colonna+3<7){
						win=-2;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp][colonna]=cube;
								grid[temp-1][colonna+1]=cube;
								grid[temp-2][colonna+2]=cube;
								grid[temp-3][colonna+3]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp][colonna]='O';
								grid[temp-1][colonna+1]='O';
								grid[temp-2][colonna+2]='O';
								grid[temp-3][colonna+3]='O';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONTROLLO DIAGONALE 1 /-----------------------------------------------------------------------------------------------------------
					
					
					//CONTROLLO DIAGONALE 2 /----------------------------------------------------------------------------------------------------------------
					else if(grid[temp+1][colonna-1]=='O' && grid[temp][colonna]=='O' && grid[temp-1][colonna+1]=='O' && grid[temp-2][colonna+2]=='O' && colonna+2<7 && colonna-1>=0){
						win=-2;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp+1][colonna-1]=cube;
								grid[temp][colonna]=cube;
								grid[temp-1][colonna+1]=cube;
								grid[temp-2][colonna+2]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp+1][colonna-1]='O';
								grid[temp][colonna]='O';
								grid[temp-1][colonna+1]='O';
								grid[temp-2][colonna+2]='O';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONTROLLO DIAGONALE 2 /-----------------------------------------------------------------------------------------------------------
					
					
					//CONTROLLO DIAGONALE 3 /----------------------------------------------------------------------------------------------------------------
					else if(grid[temp+2][colonna-2]=='O' && grid[temp+1][colonna-1]=='O' && grid[temp][colonna]=='O' && grid[temp-1][colonna+1]=='O' && colonna+1<7 && colonna-2>=0){
						win=-2;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp+2][colonna-2]=cube;
								grid[temp+1][colonna-1]=cube;
								grid[temp][colonna]=cube;
								grid[temp-1][colonna+1]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp+2][colonna-2]='O';
								grid[temp+1][colonna-1]='O';
								grid[temp][colonna]='O';
								grid[temp-1][colonna+1]='O';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONTROLLO DIAGONALE 3 /-----------------------------------------------------------------------------------------------------------
					
					
					//CONTROLLO DIAGONALE 4 /----------------------------------------------------------------------------------------------------------------
					else if(grid[temp+3][colonna-3]=='O' && grid[temp+2][colonna-2]=='O' && grid[temp+1][colonna-1]=='O' && grid[temp][colonna]=='O' && colonna-3>=0){
						win=-2;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp+3][colonna-3]=cube;
								grid[temp+2][colonna-2]=cube;
								grid[temp+1][colonna-1]=cube;
								grid[temp][colonna]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp+3][colonna-3]='O';
								grid[temp+2][colonna-2]='O';
								grid[temp+1][colonna-1]='O';
								grid[temp][colonna]='O';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONTROLLO DIAGONALE 4 /-----------------------------------------------------------------------------------------------------------
					//FINE CONTROLLI DIAGONALI /-------------------------------------------------------------------------------------------------------------
					
					
					
					//CONTROLLI DIAGONALE \-------------------------------------------------------------------------------------------------------------------
					//CONTROLLO DIAGONALE 1 \-----------------------------------------------------------------------------------------------------------------
					else if(grid[temp][colonna]=='O' && grid[temp+1][colonna+1]=='O' && grid[temp+2][colonna+2]=='O' && grid[temp+3][colonna+3]=='O' && colonna+3<7){
						win=-2;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp][colonna]=cube;
								grid[temp+1][colonna+1]=cube;
								grid[temp+2][colonna+2]=cube;
								grid[temp+3][colonna+3]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp][colonna]='O';
								grid[temp+1][colonna+1]='O';
								grid[temp+2][colonna+2]='O';
								grid[temp+3][colonna+3]='O';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONTROLLO DIAGONALE 1 \------------------------------------------------------------------------------------------------------------
					
					
					//CONTROLLO DIAGONALE 2 \-----------------------------------------------------------------------------------------------------------------
					else if(grid[temp-1][colonna-1]=='O' && grid[temp][colonna]=='O' && grid[temp+1][colonna+1]=='O' && grid[temp+2][colonna+2]=='O' && colonna+2<7 && colonna-1>=0){
						win=-2;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp-1][colonna-1]=cube;
								grid[temp][colonna]=cube;
								grid[temp+1][colonna+1]=cube;
								grid[temp+2][colonna+2]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp-1][colonna-1]='O';
								grid[temp][colonna]='O';
								grid[temp+1][colonna+1]='O';
								grid[temp+2][colonna+2]='O';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONRTOLLO DIAGONALE 2 \------------------------------------------------------------------------------------------------------------
					
					
					//CONTROLLO DIAGONALE 3 \-----------------------------------------------------------------------------------------------------------------
					else if(grid[temp-2][colonna-2]=='O' && grid[temp-1][colonna-1]=='O' && grid[temp][colonna]=='O' && grid[temp+1][colonna+1]=='O' && colonna+1<7 && colonna-2>=0){
						win=-2;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp-2][colonna-2]=cube;
								grid[temp-1][colonna-1]=cube;
								grid[temp][colonna]=cube;
								grid[temp+1][colonna+1]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp-2][colonna-2]='O';
								grid[temp-1][colonna-1]='O';
								grid[temp][colonna]='O';
								grid[temp+1][colonna+1]='O';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONTROLLO DIAGONALE 3 \------------------------------------------------------------------------------------------------------------
					
					
					//CONTROLLO DIAGONALE 4 \-----------------------------------------------------------------------------------------------------------------
					else if(grid[temp-3][colonna-3]=='O' && grid[temp-2][colonna-2]=='O' && grid[temp-1][colonna-1]=='O' && grid[temp][colonna]=='O' && colonna-3>=0){
						win=-2;
						for(l=0;l<10;l++){
							system("cls");
							if(l%2==0){
								grid[temp-3][colonna-3]=cube;
								grid[temp-2][colonna-2]=cube;
								grid[temp-1][colonna-1]=cube;
								grid[temp][colonna]=cube;
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
							else{
								grid[temp-3][colonna-3]='O';
								grid[temp-2][colonna-2]='O';
								grid[temp-1][colonna-1]='O';
								grid[temp][colonna]='O';
								
								/*STAMPA TABELLA COMPLETA*/
								stampaf4(grid,sel_line);
								/*STAMPA TABELLA COMPLETA*/
								Sleep(250);
							}
						}
						goto out;
					}
					//FINE CONTROLLO DIAGONALE 4 \------------------------------------------------------------------------------------------------------------
					//FINE CONTROLLI DIAGONALE \--------------------------------------------------------------------------------------------------------------
				
				
					//CONTROLLO TABELLA PIENA-----------------------------------------------------------------------------------------------------------------------------------------------------
					else if(grid[0][0]!=space && grid[0][1]!=space && grid[0][2]!=space && grid[0][3]!=space && grid[0][4]!=space && grid[0][5]!=space && grid[0][6]!=space &&
					   		grid[1][0]!=space && grid[1][1]!=space && grid[1][2]!=space && grid[1][3]!=space && grid[1][4]!=space && grid[1][5]!=space && grid[1][6]!=space &&
					  		grid[2][0]!=space && grid[2][1]!=space && grid[2][2]!=space && grid[2][3]!=space && grid[2][4]!=space && grid[2][5]!=space && grid[2][6]!=space &&
					   		grid[3][0]!=space && grid[3][1]!=space && grid[3][2]!=space && grid[3][3]!=space && grid[3][4]!=space && grid[3][5]!=space && grid[3][6]!=space &&
					   		grid[4][0]!=space && grid[4][1]!=space && grid[4][2]!=space && grid[4][3]!=space && grid[4][4]!=space && grid[4][5]!=space && grid[4][6]!=space &&
					   		grid[5][0]!=space && grid[5][1]!=space && grid[5][2]!=space && grid[5][3]!=space && grid[5][4]!=space && grid[5][5]!=space && grid[5][6]!=space){
						win=0;
						/*STAMPA TABELLA COMPLETA*/
						stampaf4(grid,sel_line);
						/*STAMPA TABELLA COMPLETA*/
						goto out;
					}
					//FINE CONTROLLO TABELLA PIENA------------------------------------------------------------------------------------------------------------------------------------------------
				/*CONTROLLI*/
				
				temp--;
				check[colonna]=temp;
				}
				
				
			/*PLAYER 1*/
		}
		/*POSIZIONAMENTO*/
		
		
		retry:
		/*STAMPA TABELLA COMPLETA*/
		stampaf4(grid,sel_line);
		/*STAMPA TABELLA COMPLETA*/
		if(flag==0){
			printf("\nGiocatore 1 (X)\n");	
		}
		else if(flag==1){
			printf("\nGiocatore 2 (O)\n");
		}
		printf("\nMuoversi a destra con il tasto: D\nMuoversi a sinistra con il tasto: A\n\nConfermare la colonna con il tasto: Barra spaziatrice\n");
	}
	
	out:
	if(win==1){
		printf("\n\nGiocatore 1 vince!");
	}
	else if(win==-2){
		printf("\n\nBot vince!");
	}
	else if(win==0){
		printf("\n\nParita'!");
	}
	for(i=0;i<5;i++){
		system("color 1A");
		Sleep(60);
		system("color 2C");
		Sleep(60);
		system("color 3D");
		Sleep(60);
		system("color 4E");
		Sleep(60);
		system("color 5B");
		Sleep(60);
		system("color 6C");
		Sleep(60);
		system("color 7B");
		Sleep(60);
		system("color 8D");
		Sleep(60);
		system("color 9A");
		Sleep(60);
		system("color 0F");
		Sleep(60);
	}
	t1.gioco=3;
	t1.w=win;
	t1.bot=-2;
	cronologia_write();
	printf("\n\n[premere un TASTO QUALSIASI per tornare al menu]");
	k=getch();
}


void stampaf4(char g[6][7], char sel[7]){
	
	int i,j;
	char line_up=186, down_r=200, down_l=188, up_r=201, up_l=187, line_orz=205, t_down=203, t_up=202, t_l=185, t_r=204, x=206;
	
	printf("  ");
	for(i=0;i<7;i++){
		printf("%c   ",sel[i]);
	}
	printf("\n");
	printf("%c",up_r);
	for(i=0;i<7;i++){
		if(i==6){
			printf("%c%c%c%c",line_orz,line_orz,line_orz,up_l);
		}
		else{
			printf("%c%c%c%c",line_orz,line_orz,line_orz,t_down);
		}
	}
	printf("\n");
	for(i=0;i<5;i++){
		for(j=0;j<7;j++){
			printf("%c %c ",line_up, g[i][j]);
		}
		printf("%c\n",line_up);
		for(j=0;j<7;j++){
			if(j==0){
				printf("%c%c%c%c%c",t_r,line_orz,line_orz,line_orz,x);	
			}
			else if(j==6){
				printf("%c%c%c%c",line_orz,line_orz,line_orz,t_l);
			}
			else{
				printf("%c%c%c%c",line_orz,line_orz,line_orz,x);
			}
		}
		printf("\n");
	}
	for(i=0;i<7;i++){
		printf("%c %c ",line_up, g[5][i]);
	}
	printf("%c\n",line_up);
	printf("%c",down_r);
	for(i=0;i<7;i++){
		if(i==6){
			printf("%c%c%c%c",line_orz,line_orz,line_orz,down_l);
		}
		else{
			printf("%c%c%c%c",line_orz,line_orz,line_orz,t_up);
		}
	}	
}
//FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-
//FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-
//FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-
//FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-
//FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-
//FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-FORZA4-




//TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS
//TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS
//TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS
//TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS
//TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS
//TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS
void tris(){
		
	char space=32,arrow_d='v',arrow_r='>',cube=254;
	char so[3]={'v',space,space};
	char sv[3]={'>',space,space};
	char a;
	int r=0,c=0,win=-1;
	int i,j,l,flag=0;
	char grid[3][3]={space,space,space,
	
					 space,space,space,
				  
					 space,space,space};
	
	
	//STAMPA TABELLA COMPLETA
	stampatris(grid,so,sv);
	//STAMPA TABELLA COMPLETA
	printf("\nGiocatore 1 (X)\n");
	printf("\nSelezione riga:\nMuoversi in alto con il tasto: W\nMuoversi in basso con il tasto: S\n");
	printf("\nSelezione colonna:\nMuoversi a destra con il tasto: D\nMuoversi a sinistra con il tasto: A\n");
	printf("\nConfermare la casella con il tasto: Barra spaziatrice\n");
	
	while(1){
		a=getch();
		system("cls");
		//VERTICALI
		if(a=='w' || a=='W'){
			if(r==0){
				sv[r]=space;
				r=2;
				sv[r]=arrow_r;
			}
			else{
				sv[r]=space;
				r--;
				sv[r]=arrow_r;
			}
		}
		else if(a=='s' || a=='S'){
			if(r==2){
				sv[r]=space;
				r=0;
				sv[r]=arrow_r;
			}
			else{
				sv[r]=space;
				r++;
				sv[r]=arrow_r;
			}
		}
		//VERTICALI
		
		//ORIZZONTALI
		else if(a=='d' || a=='D'){
			if(c==2){
				so[c]=space;
				c=0;
				so[c]=arrow_d;
			}
			else{
				so[c]=space;
				c++;
				so[c]=arrow_d;
			}
		}
		else if(a=='a' || a=='A'){
			if(c==0){
				so[c]=space;
				c=2;
				so[c]=arrow_d;
			}
			else{
				so[c]=space;
				c--;
				so[c]=arrow_d;
			}
		}
		//ORIZZONTALI
		
		//CONFERMA
		else if(a==space){
			if(grid[r][c]!=space){
				printf("Casella gia'occupata! >:T\n");
			}
			//PLAYER 1
			else if(flag==0){
				grid[r][c]='X';
				flag=1;
				//CONTROLLI----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
				//ORIZZONTALE----------------------------------------------------------------------
				if(grid[0][0]=='X' && grid[0][1]=='X' && grid[0][2]=='X'){
					win=1;
					for(l=0;l<10;l++){
						system("cls");
						if(l%2==0){
							grid[0][0]=cube;
							grid[0][1]=cube;
							grid[0][2]=cube;
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
						else{
							grid[0][0]='X';
							grid[0][1]='X';
							grid[0][2]='X';
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
					}
					goto out;
				}
				else if(grid[1][0]=='X' && grid[1][1]=='X' && grid[1][2]=='X'){
					win=1;
					for(l=0;l<10;l++){
						system("cls");
						if(l%2==0){
							grid[1][0]=cube;
							grid[1][1]=cube;
							grid[1][2]=cube;
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
						else{
							grid[1][0]='X';
							grid[1][1]='X';
							grid[1][2]='X';
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
					}
					goto out;
				}
				else if(grid[2][0]=='X' && grid[2][1]=='X' && grid[2][2]=='X'){
					win=1;
					for(l=0;l<10;l++){
						system("cls");
						if(l%2==0){
							grid[2][0]=cube;
							grid[2][1]=cube;
							grid[2][2]=cube;
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
						else{
							grid[2][0]='X';
							grid[2][1]='X';
							grid[2][2]='X';
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
					}
					goto out;
				}
				//ORIZZONTALE----------------------------------------------------------------------
				
				//VERTICALE------------------------------------------------------------------------
				else if(grid[0][0]=='X' && grid[1][0]=='X' && grid[2][0]=='X'){
					win=1;
					for(l=0;l<10;l++){
						system("cls");
						if(l%2==0){
							grid[0][0]=cube;
							grid[1][0]=cube;
							grid[2][0]=cube;
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
						else{
							grid[0][0]='X';
							grid[1][0]='X';
							grid[2][0]='X';
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
					}
					goto out;
				}
				else if(grid[0][1]=='X' && grid[1][1]=='X' && grid[2][1]=='X'){
					win=1;
					for(l=0;l<10;l++){
						system("cls");
						if(l%2==0){
							grid[0][1]=cube;
							grid[1][1]=cube;
							grid[2][1]=cube;
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
						else{
							grid[0][1]='X';
							grid[1][1]='X';
							grid[2][1]='X';
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
					}
					goto out;
				}
				else if(grid[0][2]=='X' && grid[1][2]=='X' && grid[2][2]=='X'){
					win=1;
					for(l=0;l<10;l++){
						system("cls");
						if(l%2==0){
							grid[0][2]=cube;
							grid[1][2]=cube;
							grid[2][2]=cube;
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
						else{
							grid[0][2]='X';
							grid[1][2]='X';
							grid[2][2]='X';
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
					}
					goto out;
				}
				//VERTICALE------------------------------------------------------------------------
				
				//OBLIQUO \------------------------------------------------------------------------
				else if(grid[0][0]=='X' && grid[1][1]=='X' && grid[2][2]=='X'){
					win=1;
					for(l=0;l<10;l++){
						system("cls");
						if(l%2==0){
							grid[0][0]=cube;
							grid[1][1]=cube;
							grid[2][2]=cube;
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
						else{
							grid[0][0]='X';
							grid[1][1]='X';
							grid[2][2]='X';
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
					}
					goto out;
				}
				//OBLIQUO \------------------------------------------------------------------------
				
				//OBLIQUO /------------------------------------------------------------------------
				else if(grid[0][2]=='X' && grid[1][1]=='X' && grid[2][0]=='X'){
					win=1;
					for(l=0;l<10;l++){
						system("cls");
						if(l%2==0){
							grid[0][2]=cube;
							grid[1][1]=cube;
							grid[2][0]=cube;
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
						else{
							grid[0][2]='X';
							grid[1][1]='X';
							grid[2][0]='X';
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
					}
					goto out;
				}
				//OBLIQUO /------------------------------------------------------------------------
				
				//TABELLA PIENA--------------------------------------------------------------------
				else if(grid[0][0]!=space && grid[0][1]!=space && grid[0][2]!=space && grid[1][0]!=space && grid[1][1]!=space && grid[1][2]!=space && grid[2][0]!=space && grid[2][1]!=space && grid[2][2]!=space){
					win=0;
					/*STAMPA TABELLA COMPLETA*/
					stampatris(grid,so,sv);
					/*STAMPA TABELLA COMPLETA*/
					goto out;
				}
				//TABELLA PIENA--------------------------------------------------------------------
				//CONTROLLI----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
			}
		//PLAYER 1
			
		//PLAYER 2
			else if(flag==1){
				grid[r][c]='O';
				flag=0;
				//CONTROLLI----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
				//ORIZZONTALE----------------------------------------------------------------------
				if(grid[0][0]=='O' && grid[0][1]=='O' && grid[0][2]=='O'){
					win=2;
					for(l=0;l<10;l++){
						system("cls");
						if(l%2==0){
							grid[0][0]=cube;
							grid[0][1]=cube;
							grid[0][2]=cube;
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
						else{
							grid[0][0]='O';
							grid[0][1]='O';
							grid[0][2]='O';
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
					}
					goto out;
				}
				else if(grid[1][0]=='O' && grid[1][1]=='O' && grid[1][2]=='O'){
					win=2;
					for(l=0;l<10;l++){
						system("cls");
						if(l%2==0){
							grid[1][0]=cube;
							grid[1][1]=cube;
							grid[1][2]=cube;
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
						else{
							grid[1][0]='O';
							grid[1][1]='O';
							grid[1][2]='O';
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
					}
					goto out;
				}
				else if(grid[2][0]=='O' && grid[2][1]=='O' && grid[2][2]=='O'){
					win=2;
					for(l=0;l<10;l++){
						system("cls");
						if(l%2==0){
							grid[2][0]=cube;
							grid[2][1]=cube;
							grid[2][2]=cube;
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
						else{
							grid[2][0]='O';
							grid[2][1]='O';
							grid[2][2]='O';
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
					}
					goto out;
				}
				//ORIZZONTALE----------------------------------------------------------------------
				
				//VERTICALE------------------------------------------------------------------------
				else if(grid[0][0]=='O' && grid[1][0]=='O' && grid[2][0]=='O'){
					win=2;
					for(l=0;l<10;l++){
						system("cls");
						if(l%2==0){
							grid[0][0]=cube;
							grid[1][0]=cube;
							grid[2][0]=cube;
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
						else{
							grid[0][0]='O';
							grid[1][0]='O';
							grid[2][0]='O';
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
					}
					goto out;
				}
				else if(grid[0][1]=='O' && grid[1][1]=='O' && grid[2][1]=='O'){
					win=2;
					for(l=0;l<10;l++){
						system("cls");
						if(l%2==0){
							grid[0][1]=cube;
							grid[1][1]=cube;
							grid[2][1]=cube;
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
						else{
							grid[0][1]='O';
							grid[1][1]='O';
							grid[2][1]='O';
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
					}
					goto out;
				}
				else if(grid[0][2]=='O' && grid[1][2]=='O' && grid[2][2]=='O'){
					win=2;
					for(l=0;l<10;l++){
						system("cls");
						if(l%2==0){
							grid[0][2]=cube;
							grid[1][2]=cube;
							grid[2][2]=cube;
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
						else{
							grid[0][2]='O';
							grid[1][2]='O';
							grid[2][2]='O';
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
					}
					goto out;
				}
				//VERTICALE------------------------------------------------------------------------
				
				//OBLIQUO \------------------------------------------------------------------------
				else if(grid[0][0]=='O' && grid[1][1]=='O' && grid[2][2]=='O'){
					win=2;
					for(l=0;l<10;l++){
						system("cls");
						if(l%2==0){
							grid[0][0]=cube;
							grid[1][1]=cube;
							grid[2][2]=cube;
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
						else{
							grid[0][0]='O';
							grid[1][1]='O';
							grid[2][2]='O';
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
					}
					goto out;
				}
				//OBLIQUO \------------------------------------------------------------------------
				
				//OBLIQUO /------------------------------------------------------------------------
				else if(grid[0][2]=='O' && grid[1][1]=='O' && grid[2][0]=='O'){
					win=2;
					for(l=0;l<10;l++){
						system("cls");
						if(l%2==0){
							grid[0][2]=cube;
							grid[1][1]=cube;
							grid[2][0]=cube;
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
						else{
							grid[0][2]='O';
							grid[1][1]='O';
							grid[2][0]='O';
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
					}
					goto out;
				}
				//OBLIQUO /------------------------------------------------------------------------
				
				//TABELLA PIENA--------------------------------------------------------------------
				else if(grid[0][0]!=space && grid[0][1]!=space && grid[0][2]!=space && grid[1][0]!=space && grid[1][1]!=space && grid[1][2]!=space && grid[2][0]!=space && grid[2][1]!=space && grid[2][2]!=space){
					win=0;
					/*STAMPA TABELLA COMPLETA*/
					stampatris(grid,so,sv);
					/*STAMPA TABELLA COMPLETA*/
					goto out;
				}
				//TABELLA PIENA--------------------------------------------------------------------
				//CONTROLLI----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
			}
			//PLAYER 2
		}
		//CONFERMA
		
		//STAMPA TABELLA COMPLETA
		stampatris(grid,so,sv);
		//STAMPA TABELLA COMPLETA
		if(flag==0){
			printf("\nGiocatore 1 (X)\n");	
		}
		else if(flag==1){
			printf("\nGiocatore 2 (O)\n");
		}
		printf("\nSelezione riga:\nMuoversi in alto con il tasto: W\nMuoversi in basso con il tasto: S\n");
		printf("\nSelezione colonna:\nMuoversi a destra con il tasto: D\nMuoversi a sinistra con il tasto: A\n");
		printf("\nConfermare la casella con il tasto: Barra spaziatrice\n");
	}
	
	out: 
	if(win==1){
		printf("\nGiocatore 1 vince!");
	}
	else if(win==2){
		printf("\nGiocatore 2 vince!");
	}
	else if(win==0){
		printf("\nParita'!");
	}
	for(i=0;i<5;i++){
		system("color 1A");
		Sleep(60);
		system("color 2C");
		Sleep(60);
		system("color 3D");
		Sleep(60);
		system("color 4E");
		Sleep(60);
		system("color 5B");
		Sleep(60);
		system("color 6C");
		Sleep(60);
		system("color 7B");
		Sleep(60);
		system("color 8D");
		Sleep(60);
		system("color 9A");
		Sleep(60);
		system("color 0F");
		Sleep(60);
	}
	t1.gioco=1;
	t1.w=win;
	t1.bot=0;
	cronologia_write();
	printf("\n\n[premere un TASTO QUALSIASI per tornare al menu]");
	k=getch();
}



void trisbotez(){
			
	char space=32,arrow_d='v',arrow_r='>',cube=254;
	char so[3]={'v',space,space};
	char sv[3]={'>',space,space};
	char a;
	int r=0,c=0,win=0,riga,colonna;
	int i,j,l,flag=0;
	char grid[3][3]={space,space,space,
	
					 space,space,space,
				  
					 space,space,space};
	srand(time(NULL));
	
	//STAMPA TABELLA COMPLETA
	stampatris(grid,so,sv);
	//STAMPA TABELLA COMPLETA
	printf("\nGiocatore 1 (X)\n");
	printf("\nSelezione riga:\nMuoversi in alto con il tasto: W\nMuoversi in basso con il tasto: S\n");
	printf("\nSelezione colonna:\nMuoversi a destra con il tasto: D\nMuoversi a sinistra con il tasto: A\n");
	printf("\nConfermare la casella con il tasto: Barra spaziatrice\n");
	
	while(1){
		a=getch();
		system("cls");
		//VERTICALI
		if(a=='w' || a=='W'){
			if(r==0){
				sv[r]=space;
				r=2;
				sv[r]=arrow_r;
			}
			else{
				sv[r]=space;
				r--;
				sv[r]=arrow_r;
			}
		}
		else if(a=='s' || a=='S'){
			if(r==2){
				sv[r]=space;
				r=0;
				sv[r]=arrow_r;
			}
			else{
				sv[r]=space;
				r++;
				sv[r]=arrow_r;
			}
		}
		//VERTICALI
		
		//ORIZZONTALI
		else if(a=='d' || a=='D'){
			if(c==2){
				so[c]=space;
				c=0;
				so[c]=arrow_d;
			}
			else{
				so[c]=space;
				c++;
				so[c]=arrow_d;
			}
		}
		else if(a=='a' || a=='A'){
			if(c==0){
				so[c]=space;
				c=2;
				so[c]=arrow_d;
			}
			else{
				so[c]=space;
				c--;
				so[c]=arrow_d;
			}
		}
		//ORIZZONTALI
		
		//CONFERMA
		else if(a==space){
			if(grid[r][c]!=space){
				printf("Casella gia'occupata! >:T\n");
			}
			//PLAYER 1
			else{
				grid[r][c]='X';
				//CONTROLLI----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
				//ORIZZONTALE----------------------------------------------------------------------
				if(grid[0][0]=='X' && grid[0][1]=='X' && grid[0][2]=='X'){
					win=1;
					for(l=0;l<10;l++){
						system("cls");
						if(l%2==0){
							grid[0][0]=cube;
							grid[0][1]=cube;
							grid[0][2]=cube;
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
						else{
							grid[0][0]='X';
							grid[0][1]='X';
							grid[0][2]='X';
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
					}
					goto out;
				}
				else if(grid[1][0]=='X' && grid[1][1]=='X' && grid[1][2]=='X'){
					win=1;
					for(l=0;l<10;l++){
						system("cls");
						if(l%2==0){
							grid[1][0]=cube;
							grid[1][1]=cube;
							grid[1][2]=cube;
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
						else{
							grid[1][0]='X';
							grid[1][1]='X';
							grid[1][2]='X';
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
					}
					goto out;
				}
				else if(grid[2][0]=='X' && grid[2][1]=='X' && grid[2][2]=='X'){
					win=1;
					for(l=0;l<10;l++){
						system("cls");
						if(l%2==0){
							grid[2][0]=cube;
							grid[2][1]=cube;
							grid[2][2]=cube;
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
						else{
							grid[2][0]='X';
							grid[2][1]='X';
							grid[2][2]='X';
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
					}
					goto out;
				}
				//ORIZZONTALE----------------------------------------------------------------------
				
				//VERTICALE------------------------------------------------------------------------
				else if(grid[0][0]=='X' && grid[1][0]=='X' && grid[2][0]=='X'){
					win=1;
					for(l=0;l<10;l++){
						system("cls");
						if(l%2==0){
							grid[0][0]=cube;
							grid[1][0]=cube;
							grid[2][0]=cube;
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
						else{
							grid[0][0]='X';
							grid[1][0]='X';
							grid[2][0]='X';
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
					}
					goto out;
				}
				else if(grid[0][1]=='X' && grid[1][1]=='X' && grid[2][1]=='X'){
					win=1;
					for(l=0;l<10;l++){
						system("cls");
						if(l%2==0){
							grid[0][1]=cube;
							grid[1][1]=cube;
							grid[2][1]=cube;
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
						else{
							grid[0][1]='X';
							grid[1][1]='X';
							grid[2][1]='X';
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
					}
					goto out;
				}
				else if(grid[0][2]=='X' && grid[1][2]=='X' && grid[2][2]=='X'){
					win=1;
					for(l=0;l<10;l++){
						system("cls");
						if(l%2==0){
							grid[0][2]=cube;
							grid[1][2]=cube;
							grid[2][2]=cube;
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
						else{
							grid[0][2]='X';
							grid[1][2]='X';
							grid[2][2]='X';
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
					}
					goto out;
				}
				//VERTICALE------------------------------------------------------------------------
				
				//OBLIQUO \------------------------------------------------------------------------
				else if(grid[0][0]=='X' && grid[1][1]=='X' && grid[2][2]=='X'){
					win=1;
					for(l=0;l<10;l++){
						system("cls");
						if(l%2==0){
							grid[0][0]=cube;
							grid[1][1]=cube;
							grid[2][2]=cube;
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
						else{
							grid[0][0]='X';
							grid[1][1]='X';
							grid[2][2]='X';
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
					}
					goto out;
				}
				//OBLIQUO \------------------------------------------------------------------------
				
				//OBLIQUO /------------------------------------------------------------------------
				else if(grid[0][2]=='X' && grid[1][1]=='X' && grid[2][0]=='X'){
					win=1;
					for(l=0;l<10;l++){
						system("cls");
						if(l%2==0){
							grid[0][2]=cube;
							grid[1][1]=cube;
							grid[2][0]=cube;
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
						else{
							grid[0][2]='X';
							grid[1][1]='X';
							grid[2][0]='X';
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
					}
					goto out;
				}
				//OBLIQUO /------------------------------------------------------------------------
				
				//TABELLA PIENA--------------------------------------------------------------------
				else if(grid[0][0]!=space && grid[0][1]!=space && grid[0][2]!=space && grid[1][0]!=space && grid[1][1]!=space && grid[1][2]!=space && grid[2][0]!=space && grid[2][1]!=space && grid[2][2]!=space){
					win=0;
					/*STAMPA TABELLA COMPLETA*/
					stampatris(grid,so,sv);
					/*STAMPA TABELLA COMPLETA*/
					goto out;
				}
				//TABELLA PIENA--------------------------------------------------------------------
				//CONTROLLI----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
				
				
				/*BOT*/
				while(grid[riga][colonna]!=space){
					riga=rand()%3;
					colonna=rand()%3;
				}
				grid[riga][colonna]='O';
				/*BOT*/
				
				
				if(grid[0][0]=='O' && grid[0][1]=='O' && grid[0][2]=='O'){
							win=-1;
							for(l=0;l<10;l++){
								system("cls");
								if(l%2==0){
									grid[0][0]=cube;
									grid[0][1]=cube;
									grid[0][2]=cube;
										
									/*STAMPA TABELLA COMPLETA*/
									stampatris(grid,so,sv);
									/*STAMPA TABELLA COMPLETA*/
									Sleep(250);
								}
								else{
									grid[0][0]='O';
									grid[0][1]='O';
									grid[0][2]='O';
										
									/*STAMPA TABELLA COMPLETA*/
									stampatris(grid,so,sv);
									/*STAMPA TABELLA COMPLETA*/
									Sleep(250);
								}
							}
							goto out;
						}
						else if(grid[1][0]=='O' && grid[1][1]=='O' && grid[1][2]=='O'){
							win=-1;
							for(l=0;l<10;l++){
								system("cls");
								if(l%2==0){
									grid[1][0]=cube;
									grid[1][1]=cube;
									grid[1][2]=cube;
										
									/*STAMPA TABELLA COMPLETA*/
									stampatris(grid,so,sv);
									/*STAMPA TABELLA COMPLETA*/
									Sleep(250);
								}
								else{
									grid[1][0]='O';
									grid[1][1]='O';
									grid[1][2]='O';
										
									/*STAMPA TABELLA COMPLETA*/
									stampatris(grid,so,sv);
									/*STAMPA TABELLA COMPLETA*/
									Sleep(250);
								}
							}
							goto out;
						}
						else if(grid[2][0]=='O' && grid[2][1]=='O' && grid[2][2]=='O'){
							win=-1;
							for(l=0;l<10;l++){
								system("cls");
								if(l%2==0){
									grid[2][0]=cube;
									grid[2][1]=cube;
									grid[2][2]=cube;
										
									/*STAMPA TABELLA COMPLETA*/
									stampatris(grid,so,sv);
									/*STAMPA TABELLA COMPLETA*/
									Sleep(250);
								}
								else{
									grid[2][0]='O';
									grid[2][1]='O';
									grid[2][2]='O';
										
									/*STAMPA TABELLA COMPLETA*/
									stampatris(grid,so,sv);
									/*STAMPA TABELLA COMPLETA*/
									Sleep(250);
								}
							}
							goto out;
						}
						//ORIZZONTALE----------------------------------------------------------------------
						
						//VERTICALE------------------------------------------------------------------------
						else if(grid[0][0]=='O' && grid[1][0]=='O' && grid[2][0]=='O'){
							win=-1;
							for(l=0;l<10;l++){
								system("cls");
								if(l%2==0){
									grid[0][0]=cube;
									grid[1][0]=cube;
									grid[2][0]=cube;
										
									/*STAMPA TABELLA COMPLETA*/
									stampatris(grid,so,sv);
									/*STAMPA TABELLA COMPLETA*/
									Sleep(250);
								}
								else{
									grid[0][0]='O';
									grid[1][0]='O';
									grid[2][0]='O';
										
									/*STAMPA TABELLA COMPLETA*/
									stampatris(grid,so,sv);
									/*STAMPA TABELLA COMPLETA*/
									Sleep(250);
								}
							}
							goto out;
						}
						else if(grid[0][1]=='O' && grid[1][1]=='O' && grid[2][1]=='O'){
							win=-1;
							for(l=0;l<10;l++){
								system("cls");
								if(l%2==0){
									grid[0][1]=cube;
									grid[1][1]=cube;
									grid[2][1]=cube;
										
									/*STAMPA TABELLA COMPLETA*/
									stampatris(grid,so,sv);
									/*STAMPA TABELLA COMPLETA*/
									Sleep(250);
								}
								else{
									grid[0][1]='O';
									grid[1][1]='O';
									grid[2][1]='O';
										
									/*STAMPA TABELLA COMPLETA*/
									stampatris(grid,so,sv);
									/*STAMPA TABELLA COMPLETA*/
									Sleep(250);
								}
							}
							goto out;
						}
						else if(grid[0][2]=='O' && grid[1][2]=='O' && grid[2][2]=='O'){
							win=-1;
							for(l=0;l<10;l++){
								system("cls");
								if(l%2==0){
									grid[0][2]=cube;
									grid[1][2]=cube;
									grid[2][2]=cube;
										
									/*STAMPA TABELLA COMPLETA*/
									stampatris(grid,so,sv);
									/*STAMPA TABELLA COMPLETA*/
									Sleep(250);
								}
								else{
									grid[0][2]='O';
									grid[1][2]='O';
									grid[2][2]='O';
										
									/*STAMPA TABELLA COMPLETA*/
									stampatris(grid,so,sv);
									/*STAMPA TABELLA COMPLETA*/
									Sleep(250);
								}
							}
							goto out;
						}
						//VERTICALE------------------------------------------------------------------------
						
						//OBLIQUO \------------------------------------------------------------------------
						else if(grid[0][0]=='O' && grid[1][1]=='O' && grid[2][2]=='O'){
							win=-1;
							for(l=0;l<10;l++){
								system("cls");
								if(l%2==0){
									grid[0][0]=cube;
									grid[1][1]=cube;
									grid[2][2]=cube;
										
									/*STAMPA TABELLA COMPLETA*/
									stampatris(grid,so,sv);
									/*STAMPA TABELLA COMPLETA*/
									Sleep(250);
								}
								else{
									grid[0][0]='O';
									grid[1][1]='O';
									grid[2][2]='O';
										
									/*STAMPA TABELLA COMPLETA*/
									stampatris(grid,so,sv);
									/*STAMPA TABELLA COMPLETA*/
									Sleep(250);
								}
							}
							goto out;
						}
						//OBLIQUO \------------------------------------------------------------------------
						
						//OBLIQUO /------------------------------------------------------------------------
						else if(grid[0][2]=='O' && grid[1][1]=='O' && grid[2][0]=='O'){
							win=-1;
							for(l=0;l<10;l++){
								system("cls");
								if(l%2==0){
									grid[0][2]=cube;
									grid[1][1]=cube;
									grid[2][0]=cube;
										
									/*STAMPA TABELLA COMPLETA*/
									stampatris(grid,so,sv);
									/*STAMPA TABELLA COMPLETA*/
									Sleep(250);
								}
								else{
									grid[0][2]='O';
									grid[1][1]='O';
									grid[2][0]='O';
										
									/*STAMPA TABELLA COMPLETA*/
									stampatris(grid,so,sv);
									/*STAMPA TABELLA COMPLETA*/
									Sleep(250);
								}
							}
							goto out;
						}
						//OBLIQUO /------------------------------------------------------------------------
						
						//TABELLA PIENA--------------------------------------------------------------------
						else if(grid[0][0]!=space && grid[0][1]!=space && grid[0][2]!=space && grid[1][0]!=space && grid[1][1]!=space && grid[1][2]!=space && grid[2][0]!=space && grid[2][1]!=space && grid[2][2]!=space){
							win=0;
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							goto out;
						}
						//TABELLA PIENA--------------------------------------------------------------------
						//CONTROLLI----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
			//BOT
			
			}
		//PLAYER 1
		}
		//CONFERMA
		
		
		//STAMPA TABELLA COMPLETA
		stampatris(grid,so,sv);
		//STAMPA TABELLA COMPLETA
		printf("\nGiocatore 1 (X)\n");	
		printf("\nSelezione riga:\nMuoversi in alto con il tasto: W\nMuoversi in basso con il tasto: S\n");
		printf("\nSelezione colonna:\nMuoversi a destra con il tasto: D\nMuoversi a sinistra con il tasto: A\n");
		printf("\nConfermare la casella con il tasto: Barra spaziatrice\n");
	}
	
	out: 
	if(win==1){
		printf("\nGiocatore 1 vince!");
	}
	else if(win==-1){
		printf("\nBot vince!");
	}
	else if(win==0){
		printf("\nParita'!");
	}
	for(i=0;i<5;i++){
		system("color 1A");
		Sleep(60);
		system("color 2C");
		Sleep(60);
		system("color 3D");
		Sleep(60);
		system("color 4E");
		Sleep(60);
		system("color 5B");
		Sleep(60);
		system("color 6C");
		Sleep(60);
		system("color 7B");
		Sleep(60);
		system("color 8D");
		Sleep(60);
		system("color 9A");
		Sleep(60);
		system("color 0F");
		Sleep(60);
	}
	t1.gioco=1;
	t1.w=win;
	t1.bot=-1;
	cronologia_write();
	printf("\n\n[premere un TASTO QUALSIASI per tornare al menu]");
	k=getch();
}



void trisbothd(){
			
	char space=32,arrow_d='v',arrow_r='>',cube=254;
	char so[3]={'v',space,space};
	char sv[3]={'>',space,space};
	char a;
	int r=0,c=0,win=0,riga,colonna;
	int i,j,l,flag=0;
	char grid[3][3]={space,space,space,
	
					 space,space,space,
				  
					 space,space,space};
	srand(time(NULL));
	
	//STAMPA TABELLA COMPLETA
	stampatris(grid,so,sv);
	//STAMPA TABELLA COMPLETA
	printf("\nGiocatore 1 (X)\n");
	printf("\nSelezione riga:\nMuoversi in alto con il tasto: W\nMuoversi in basso con il tasto: S\n");
	printf("\nSelezione colonna:\nMuoversi a destra con il tasto: D\nMuoversi a sinistra con il tasto: A\n");
	printf("\nConfermare la casella con il tasto: Barra spaziatrice\n");
	
	while(1){
		a=getch();
		system("cls");
		//VERTICALI
		if(a=='w' || a=='W'){
			if(r==0){
				sv[r]=space;
				r=2;
				sv[r]=arrow_r;
			}
			else{
				sv[r]=space;
				r--;
				sv[r]=arrow_r;
			}
		}
		else if(a=='s' || a=='S'){
			if(r==2){
				sv[r]=space;
				r=0;
				sv[r]=arrow_r;
			}
			else{
				sv[r]=space;
				r++;
				sv[r]=arrow_r;
			}
		}
		//VERTICALI
		
		//ORIZZONTALI
		else if(a=='d' || a=='D'){
			if(c==2){
				so[c]=space;
				c=0;
				so[c]=arrow_d;
			}
			else{
				so[c]=space;
				c++;
				so[c]=arrow_d;
			}
		}
		else if(a=='a' || a=='A'){
			if(c==0){
				so[c]=space;
				c=2;
				so[c]=arrow_d;
			}
			else{
				so[c]=space;
				c--;
				so[c]=arrow_d;
			}
		}
		//ORIZZONTALI
		
		//CONFERMA
		else if(a==space){
			if(grid[r][c]!=space){
				printf("Casella gia'occupata! >:T\n");
			}
			//PLAYER 1
			else{
				grid[r][c]='X';
				//CONTROLLI----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
				//ORIZZONTALE----------------------------------------------------------------------
				if(grid[0][0]=='X' && grid[0][1]=='X' && grid[0][2]=='X'){
					win=1;
					for(l=0;l<10;l++){
						system("cls");
						if(l%2==0){
							grid[0][0]=cube;
							grid[0][1]=cube;
							grid[0][2]=cube;
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
						else{
							grid[0][0]='X';
							grid[0][1]='X';
							grid[0][2]='X';
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
					}
					goto out;
				}
				else if(grid[1][0]=='X' && grid[1][1]=='X' && grid[1][2]=='X'){
					win=1;
					for(l=0;l<10;l++){
						system("cls");
						if(l%2==0){
							grid[1][0]=cube;
							grid[1][1]=cube;
							grid[1][2]=cube;
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
						else{
							grid[1][0]='X';
							grid[1][1]='X';
							grid[1][2]='X';
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
					}
					goto out;
				}
				else if(grid[2][0]=='X' && grid[2][1]=='X' && grid[2][2]=='X'){
					win=1;
					for(l=0;l<10;l++){
						system("cls");
						if(l%2==0){
							grid[2][0]=cube;
							grid[2][1]=cube;
							grid[2][2]=cube;
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
						else{
							grid[2][0]='X';
							grid[2][1]='X';
							grid[2][2]='X';
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
					}
					goto out;
				}
				//ORIZZONTALE----------------------------------------------------------------------
				
				//VERTICALE------------------------------------------------------------------------
				else if(grid[0][0]=='X' && grid[1][0]=='X' && grid[2][0]=='X'){
					win=1;
					for(l=0;l<10;l++){
						system("cls");
						if(l%2==0){
							grid[0][0]=cube;
							grid[1][0]=cube;
							grid[2][0]=cube;
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
						else{
							grid[0][0]='X';
							grid[1][0]='X';
							grid[2][0]='X';
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
					}
					goto out;
				}
				else if(grid[0][1]=='X' && grid[1][1]=='X' && grid[2][1]=='X'){
					win=1;
					for(l=0;l<10;l++){
						system("cls");
						if(l%2==0){
							grid[0][1]=cube;
							grid[1][1]=cube;
							grid[2][1]=cube;
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
						else{
							grid[0][1]='X';
							grid[1][1]='X';
							grid[2][1]='X';
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
					}
					goto out;
				}
				else if(grid[0][2]=='X' && grid[1][2]=='X' && grid[2][2]=='X'){
					win=1;
					for(l=0;l<10;l++){
						system("cls");
						if(l%2==0){
							grid[0][2]=cube;
							grid[1][2]=cube;
							grid[2][2]=cube;
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
						else{
							grid[0][2]='X';
							grid[1][2]='X';
							grid[2][2]='X';
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
					}
					goto out;
				}
				//VERTICALE------------------------------------------------------------------------
				
				//OBLIQUO \------------------------------------------------------------------------
				else if(grid[0][0]=='X' && grid[1][1]=='X' && grid[2][2]=='X'){
					win=1;
					for(l=0;l<10;l++){
						system("cls");
						if(l%2==0){
							grid[0][0]=cube;
							grid[1][1]=cube;
							grid[2][2]=cube;
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
						else{
							grid[0][0]='X';
							grid[1][1]='X';
							grid[2][2]='X';
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
					}
					goto out;
				}
				//OBLIQUO \------------------------------------------------------------------------
				
				//OBLIQUO /------------------------------------------------------------------------
				else if(grid[0][2]=='X' && grid[1][1]=='X' && grid[2][0]=='X'){
					win=1;
					for(l=0;l<10;l++){
						system("cls");
						if(l%2==0){
							grid[0][2]=cube;
							grid[1][1]=cube;
							grid[2][0]=cube;
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
						else{
							grid[0][2]='X';
							grid[1][1]='X';
							grid[2][0]='X';
								
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							Sleep(250);
						}
					}
					goto out;
				}
				//OBLIQUO /------------------------------------------------------------------------
				
				//TABELLA PIENA--------------------------------------------------------------------
				else if(grid[0][0]!=space && grid[0][1]!=space && grid[0][2]!=space && grid[1][0]!=space && grid[1][1]!=space && grid[1][2]!=space && grid[2][0]!=space && grid[2][1]!=space && grid[2][2]!=space){
					win=0;
					/*STAMPA TABELLA COMPLETA*/
					stampatris(grid,so,sv);
					/*STAMPA TABELLA COMPLETA*/
					goto out;
				}
				//TABELLA PIENA--------------------------------------------------------------------
				//CONTROLLI----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
				
			
				/*BOT*/
				//CERVELLO DEL BOT
				
				/*vincita*/
				for(i=0;i<3;i++){
					for(j=0;j<3;j++){
						if(grid[i][j]==space){
							grid[i][j]='O';
							if(grid[0][0]=='O' && grid[0][1]=='O' && grid[0][2]=='O' || grid[1][0]=='O' && grid[1][1]=='O' && grid[1][2]=='O' || grid[2][0]=='O' && grid[2][1]=='O' && grid[2][2]=='O' || grid[0][0]=='O' && grid[1][0]=='O' && grid[2][0]=='O' || grid[0][1]=='O' && grid[1][1]=='O' && grid[2][1]=='O' || grid[0][2]=='O' && grid[1][2]=='O' && grid[2][2]=='O' || grid[0][0]=='O' && grid[1][1]=='O' && grid[2][2]=='O' || grid[0][2]=='O' && grid[1][1]=='O' && grid[2][0]=='O'){
								grid[i][j]='O';
								goto exit;
							}
							grid[i][j]=space;
						}
					}
				}
				/*vincita*/
				
				/*blocco avversario*/
				for(i=0;i<3;i++){
					for(j=0;j<3;j++){
						if(grid[i][j]==space){
							grid[i][j]='X';
							if(grid[0][0]=='X' && grid[0][1]=='X' && grid[0][2]=='X' || grid[1][0]=='X' && grid[1][1]=='X' && grid[1][2]=='X' || grid[2][0]=='X' && grid[2][1]=='X' && grid[2][2]=='X' || grid[0][0]=='X' && grid[1][0]=='X' && grid[2][0]=='X' || grid[0][1]=='X' && grid[1][1]=='X' && grid[2][1]=='X' || grid[0][2]=='X' && grid[1][2]=='X' && grid[2][2]=='X' || grid[0][0]=='X' && grid[1][1]=='X' && grid[2][2]=='X' || grid[0][2]=='X' && grid[1][1]=='X' && grid[2][0]=='X'){
								grid[i][j]='O';
								goto exit;
							}
							grid[i][j]=space;
						}
					}
				}
				/*blocco avversario*/
				
				/*posizionamento intelligente*/
				for(i=0;i<3;i++){
					for(j=0;j<3;j++){
						if(grid[i][j]==space){
							if(grid[i][j+1]=='O' && j+1<3 || grid[i][j-1]=='O' && j-1>=0 || grid[i+1][j]=='O' || grid[i-1][j]=='O' || i==2 && j==0 && grid[i-1][j+1]=='O' || i==1 && j==1 && grid[i+1][j-1]=='O' || i==1 && j==1 && grid[i-1][j+1]=='O' || i==0 && j==2 && grid[i+1][j-1] || i==0 && j==0 && grid[i+1][j+1]=='O' || i==1 && j==1 && grid[i-1][j-1]=='O' || i==1 && j==1 && grid[i+1][j+1]=='O'){
								grid[i][j]='O';
								goto exit;
							}
						}
					}
				}
				/*posizionamento intelligente*/
				
				/*controllo centro*/
				if(grid[1][1]==space){
					grid[1][1]='O';
					goto exit;
				}
				/*controllo centro*/
				
				/*rand*/
				while(grid[riga][colonna]!=space){
					riga=rand()%3;
					colonna=rand()%3;
				}
				grid[riga][colonna]='O';
				/*rand*/
				
				exit:
				//CERVELLO DEL BOT
				/*BOT*/
				
				
				if(grid[0][0]=='O' && grid[0][1]=='O' && grid[0][2]=='O'){
							win=-2;
							for(l=0;l<10;l++){
								system("cls");
								if(l%2==0){
									grid[0][0]=cube;
									grid[0][1]=cube;
									grid[0][2]=cube;
										
									/*STAMPA TABELLA COMPLETA*/
									stampatris(grid,so,sv);
									/*STAMPA TABELLA COMPLETA*/
									Sleep(250);
								}
								else{
									grid[0][0]='O';
									grid[0][1]='O';
									grid[0][2]='O';
										
									/*STAMPA TABELLA COMPLETA*/
									stampatris(grid,so,sv);
									/*STAMPA TABELLA COMPLETA*/
									Sleep(250);
								}
							}
							goto out;
						}
						else if(grid[1][0]=='O' && grid[1][1]=='O' && grid[1][2]=='O'){
							win=-2;
							for(l=0;l<10;l++){
								system("cls");
								if(l%2==0){
									grid[1][0]=cube;
									grid[1][1]=cube;
									grid[1][2]=cube;
										
									/*STAMPA TABELLA COMPLETA*/
									stampatris(grid,so,sv);
									/*STAMPA TABELLA COMPLETA*/
									Sleep(250);
								}
								else{
									grid[1][0]='O';
									grid[1][1]='O';
									grid[1][2]='O';
										
									/*STAMPA TABELLA COMPLETA*/
									stampatris(grid,so,sv);
									/*STAMPA TABELLA COMPLETA*/
									Sleep(250);
								}
							}
							goto out;
						}
						else if(grid[2][0]=='O' && grid[2][1]=='O' && grid[2][2]=='O'){
							win=-2;
							for(l=0;l<10;l++){
								system("cls");
								if(l%2==0){
									grid[2][0]=cube;
									grid[2][1]=cube;
									grid[2][2]=cube;
										
									/*STAMPA TABELLA COMPLETA*/
									stampatris(grid,so,sv);
									/*STAMPA TABELLA COMPLETA*/
									Sleep(250);
								}
								else{
									grid[2][0]='O';
									grid[2][1]='O';
									grid[2][2]='O';
										
									/*STAMPA TABELLA COMPLETA*/
									stampatris(grid,so,sv);
									/*STAMPA TABELLA COMPLETA*/
									Sleep(250);
								}
							}
							goto out;
						}
						//ORIZZONTALE----------------------------------------------------------------------
						
						//VERTICALE------------------------------------------------------------------------
						else if(grid[0][0]=='O' && grid[1][0]=='O' && grid[2][0]=='O'){
							win=-2;
							for(l=0;l<10;l++){
								system("cls");
								if(l%2==0){
									grid[0][0]=cube;
									grid[1][0]=cube;
									grid[2][0]=cube;
										
									/*STAMPA TABELLA COMPLETA*/
									stampatris(grid,so,sv);
									/*STAMPA TABELLA COMPLETA*/
									Sleep(250);
								}
								else{
									grid[0][0]='O';
									grid[1][0]='O';
									grid[2][0]='O';
										
									/*STAMPA TABELLA COMPLETA*/
									stampatris(grid,so,sv);
									/*STAMPA TABELLA COMPLETA*/
									Sleep(250);
								}
							}
							goto out;
						}
						else if(grid[0][1]=='O' && grid[1][1]=='O' && grid[2][1]=='O'){
							win=-2;
							for(l=0;l<10;l++){
								system("cls");
								if(l%2==0){
									grid[0][1]=cube;
									grid[1][1]=cube;
									grid[2][1]=cube;
										
									/*STAMPA TABELLA COMPLETA*/
									stampatris(grid,so,sv);
									/*STAMPA TABELLA COMPLETA*/
									Sleep(250);
								}
								else{
									grid[0][1]='O';
									grid[1][1]='O';
									grid[2][1]='O';
										
									/*STAMPA TABELLA COMPLETA*/
									stampatris(grid,so,sv);
									/*STAMPA TABELLA COMPLETA*/
									Sleep(250);
								}
							}
							goto out;
						}
						else if(grid[0][2]=='O' && grid[1][2]=='O' && grid[2][2]=='O'){
							win=-2;
							for(l=0;l<10;l++){
								system("cls");
								if(l%2==0){
									grid[0][2]=cube;
									grid[1][2]=cube;
									grid[2][2]=cube;
										
									/*STAMPA TABELLA COMPLETA*/
									stampatris(grid,so,sv);
									/*STAMPA TABELLA COMPLETA*/
									Sleep(250);
								}
								else{
									grid[0][2]='O';
									grid[1][2]='O';
									grid[2][2]='O';
										
									/*STAMPA TABELLA COMPLETA*/
									stampatris(grid,so,sv);
									/*STAMPA TABELLA COMPLETA*/
									Sleep(250);
								}
							}
							goto out;
						}
						//VERTICALE------------------------------------------------------------------------
						
						//OBLIQUO \------------------------------------------------------------------------
						else if(grid[0][0]=='O' && grid[1][1]=='O' && grid[2][2]=='O'){
							win=-2;
							for(l=0;l<10;l++){
								system("cls");
								if(l%2==0){
									grid[0][0]=cube;
									grid[1][1]=cube;
									grid[2][2]=cube;
										
									/*STAMPA TABELLA COMPLETA*/
									stampatris(grid,so,sv);
									/*STAMPA TABELLA COMPLETA*/
									Sleep(250);
								}
								else{
									grid[0][0]='O';
									grid[1][1]='O';
									grid[2][2]='O';
										
									/*STAMPA TABELLA COMPLETA*/
									stampatris(grid,so,sv);
									/*STAMPA TABELLA COMPLETA*/
									Sleep(250);
								}
							}
							goto out;
						}
						//OBLIQUO \------------------------------------------------------------------------
						
						//OBLIQUO /------------------------------------------------------------------------
						else if(grid[0][2]=='O' && grid[1][1]=='O' && grid[2][0]=='O'){
							win=-2;
							for(l=0;l<10;l++){
								system("cls");
								if(l%2==0){
									grid[0][2]=cube;
									grid[1][1]=cube;
									grid[2][0]=cube;
										
									/*STAMPA TABELLA COMPLETA*/
									stampatris(grid,so,sv);
									/*STAMPA TABELLA COMPLETA*/
									Sleep(250);
								}
								else{
									grid[0][2]='O';
									grid[1][1]='O';
									grid[2][0]='O';
										
									/*STAMPA TABELLA COMPLETA*/
									stampatris(grid,so,sv);
									/*STAMPA TABELLA COMPLETA*/
									Sleep(250);
								}
							}
							goto out;
						}
						//OBLIQUO /------------------------------------------------------------------------
						
						//TABELLA PIENA--------------------------------------------------------------------
						else if(grid[0][0]!=space && grid[0][1]!=space && grid[0][2]!=space && grid[1][0]!=space && grid[1][1]!=space && grid[1][2]!=space && grid[2][0]!=space && grid[2][1]!=space && grid[2][2]!=space){
							win=0;
							/*STAMPA TABELLA COMPLETA*/
							stampatris(grid,so,sv);
							/*STAMPA TABELLA COMPLETA*/
							goto out;
						}
						//TABELLA PIENA--------------------------------------------------------------------
						//CONTROLLI----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
			//BOT
			
			}
		//PLAYER 1
		}
		//CONFERMA
		
		
		//STAMPA TABELLA COMPLETA
		stampatris(grid,so,sv);
		//STAMPA TABELLA COMPLETA
		printf("\nGiocatore 1 (X)\n");	
		printf("\nSelezione riga:\nMuoversi in alto con il tasto: W\nMuoversi in basso con il tasto: S\n");
		printf("\nSelezione colonna:\nMuoversi a destra con il tasto: D\nMuoversi a sinistra con il tasto: A\n");
		printf("\nConfermare la casella con il tasto: Barra spaziatrice\n");
	}
	
	out: 
	if(win==1){
		printf("\nGiocatore 1 vince!");
	}
	else if(win==-2){
		printf("\nBot vince!");
	}
	else if(win==0){
		printf("\nParita'!");
	}
	for(i=0;i<5;i++){
		system("color 1A");
		Sleep(60);
		system("color 2C");
		Sleep(60);
		system("color 3D");
		Sleep(60);
		system("color 4E");
		Sleep(60);
		system("color 5B");
		Sleep(60);
		system("color 6C");
		Sleep(60);
		system("color 7B");
		Sleep(60);
		system("color 8D");
		Sleep(60);
		system("color 9A");
		Sleep(60);
		system("color 0F");
		Sleep(60);
	}
	t1.gioco=1;
	t1.w=win;
	t1.bot=-2;
	cronologia_write();
	printf("\n\n[premere un TASTO QUALSIASI per tornare al menu]");
	k=getch();
}


void stampatris(char g[3][3], char sel_orz[3], char sel_ver[3]){
	
	char line_up=186, down_r=200, down_l=188, up_r=201, up_l=187, line_orz=205, t_down=203, t_up=202, t_l=185, t_r=204, x=206;
	char space=32,arrow_d='v',arrow_r='>';
	int i,j;
	
	printf("%c%c%c%c%c",space,space,space,space,sel_orz[0]);
	printf("%c%c%c%c",space,space,space,sel_orz[1]);
	printf("%c%c%c%c",space,space,space,sel_orz[2]);
	printf("\n ");
	printf(" %c",up_r);
	for(i=0;i<3;i++){
		if(i!=2){
			printf("%c%c%c%c",line_orz,line_orz,line_orz,t_down);
		}
		else{
			printf("%c%c%c%c",line_orz,line_orz,line_orz,up_l);
		}
	}
	printf("\n");
	for(i=0;i<3;i++){
		printf("");
		printf("%c ",sel_ver[i]);
		for(j=0;j<3;j++){
			printf("%c %c ",line_up,g[i][j]);
		}
		if(i==2){
			printf("%c\n",line_up);
			printf("  %c%c%c%c%c%c%c%c%c%c%c%c%c\n",down_r,line_orz,line_orz,line_orz,t_up,line_orz,line_orz,line_orz,t_up,line_orz,line_orz,line_orz,down_l);	
		}
		else{
			printf("%c\n",line_up);
			printf("  %c%c%c%c%c%c%c%c%c%c%c%c%c\n",t_r,line_orz,line_orz,line_orz,x,line_orz,line_orz,line_orz,x,line_orz,line_orz,line_orz,t_l);
		}
	}
}


//TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS
//TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS
//TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS
//TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS
//TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS
//TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS-TRIS




//BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-
//BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-
//BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-
//BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-
//BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-
//BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-
void battaglianavale(){
		
	char grid1[10][10],gridc1[10][10]
		,grid2[10][10],gridc2[10][10];	
	char a=65;
	char portaerei='P'/*5*/, corazzata='C'/*4*/, incrociatore='I'/*3*/, sottomarino='S'/*3*/, assalto='A'/*2*/;

	char onda=126, line_up=186, down_r=200, down_l=188, up_r=201, up_l=187, line_orz=205;
	int i,j;
	int win=-1;
	int flag=0;
	int temp;
	char space=32;
	char sel;
	char lato;
	int r,c;
	int check[5]={0,0,0,0,0};
	int colpi1=0,colpi2=0;
		
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			grid1[j][i]=onda;
			gridc1[j][i]=onda;
			grid2[j][i]=onda;
			gridc2[j][i]=onda;
		}
	}
	
	
	
	while(1){
		redo:
		if(flag==0){
			stampabn(grid1);
		}
		else if(flag==1){
			stampabn(grid2);
		}
		
		if(flag==0){
			printf("\n\nGiocatore 1 inserisci le navi:\nPortaerei......[P]\nCorazzata......[C]\nIncrociatore...[I]\nSottomarino....[S]\nNave d'assalto.[A]\n>");
		}
		else if(flag==1){
			printf("\n\nGiocatore 2 inserisci le navi:\nPortaerei......[P]\nCorazzata......[C]\nIncrociatore...[I]\nSottomarino....[S]\nNave d'assalto.[A]\n>");
		}
		
		scanf("%c",&sel);
		if(sel>=97 && sel<=122){
			sel=sel-32;
		}
		switch(sel){
			//PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI
			case 80:
				if(check[0]==1){
					system("cls");
					goto redo;
				}
				invalidp:
				system("cls");
				pienap:
					
				if(flag==0){
					stampabn(grid1);
				}
				else if(flag==1){
					stampabn(grid2);
				}
				
				printf("\n\nInserisci le coordinate della punta della nave (prua),\nprima la RIGA e poi la COLONNA");
				printf("\n>");
				scanf("%d",&r);
				if(r!=0 && r!=1 && r!=2 && r!=3 && r!=4 && r!=5 && r!=6 && r!=7 && r!=8 && r!=9){
					goto invalidp;
				}
				printf(">");
				scanf("%d",&c);
				if(c!=0 && c!=1 && c!=2 && c!=3 && c!=4 && c!=5 && c!=6 && c!=7 && c!=8 && c!=9){
					goto invalidp;
				}
				
				if(flag==0 && grid1[r][c]!=onda){
					system("cls");
					printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
					goto pienap;
				}
				else if(flag==1 && grid2[r][c]!=onda){
					system("cls");
					printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
					goto pienap;
				}
				
				while(1){
					restartp:
					system("cls");
					plimit:
					if(flag==0){
						stampabn(grid1);
					}
					else if(flag==1){
						stampabn(grid2);
					}
					printf("\n\nGira la nave con:\nW (in alto)\nS (in basso)\nD (a destra)\nA (a sinistra)\n\nHai sbagliato a inserire le coordinate della punta?\nNon c'e' problema, premi 'O' per tornare indietro");
					lato=getch();
					
					//UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP
					if(lato=='W' || lato=='w'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(r-4<0){
							
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='P'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							else if(flag==1){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid2[j][i]=='P'){
											grid2[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto plimit;
						}
						//LIMITE SFORATO---------------------------------------------------------
						
						else if(flag==0){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='P'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r-1][c]!=onda || grid1[r-2][c]!=onda || grid1[r-3][c]!=onda || grid1[r-4][c]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto plimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid1[r][c]='P';
							grid1[r-1][c]='P';
							grid1[r-2][c]='P';
							grid1[r-3][c]='P';
							grid1[r-4][c]='P';
							system("cls");
							stampabn(grid1);
						}
						
						
						else if(flag==1){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid2[j][i]=='P'){
										grid2[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid2[r][c]!=onda || grid2[r-1][c]!=onda || grid2[r-2][c]!=onda || grid2[r-3][c]!=onda || grid2[r-4][c]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto plimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid2[r][c]='P';
							grid2[r-1][c]='P';
							grid2[r-2][c]='P';
							grid2[r-3][c]='P';
							grid2[r-4][c]='P';
							system("cls");
							stampabn(grid2);	
						}	
					}
					//UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP
					
					
					//DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN
					else if(lato=='S' || lato=='s'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(r+4>=10){
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='P'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							else if(flag==1){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid2[j][i]=='P'){
											grid2[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto plimit;
						}
						//LIMITE SFORATO---------------------------------------------------------
					
						else if(flag==0){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='P'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r+1][c]!=onda || grid1[r+2][c]!=onda || grid1[r+3][c]!=onda || grid1[r+4][c]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto plimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid1[r][c]='P';
							grid1[r+1][c]='P';
							grid1[r+2][c]='P';
							grid1[r+3][c]='P';
							grid1[r+4][c]='P';
							system("cls");
							stampabn(grid1);
						}
						else if(flag==1){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid2[j][i]=='P'){
										grid2[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid2[r][c]!=onda || grid2[r+1][c]!=onda || grid2[r+2][c]!=onda || grid2[r+3][c]!=onda || grid2[r+4][c]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto plimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid2[r][c]='P';
							grid2[r+1][c]='P';
							grid2[r+2][c]='P';
							grid2[r+3][c]='P';
							grid2[r+4][c]='P';
							system("cls");
							stampabn(grid2);	
						}
					}
					
					//DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN
					
					
					//RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT
					else if(lato=='D' || lato=='d'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(c+4>=10){
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='P'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							else if(flag==1){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid2[j][i]=='P'){
											grid2[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto plimit;
						}
						//LIMITE SFORATO---------------------------------------------------------
						
						else if(flag==0){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='P'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r][c+1]!=onda || grid1[r][c+2]!=onda || grid1[r][c+3]!=onda || grid1[r][c+4]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto plimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid1[r][c]='P';
							grid1[r][c+1]='P';
							grid1[r][c+2]='P';
							grid1[r][c+3]='P';
							grid1[r][c+4]='P';
							system("cls");
							stampabn(grid1);
						}
						else if(flag==1){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid2[j][i]=='P'){
										grid2[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid2[r][c]!=onda || grid2[r][c+1]!=onda || grid2[r][c+2]!=onda || grid2[r][c+3]!=onda || grid2[r][c+4]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto plimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid2[r][c]='P';
							grid2[r][c+1]='P';
							grid2[r][c+2]='P';
							grid2[r][c+3]='P';
							grid2[r][c+4]='P';
							system("cls");
							stampabn(grid2);	
						}
					}
					//RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT
					
					
					//LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT
					else if(lato=='A' || lato=='a'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(c-4<0){
							
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='P'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							else if(flag==1){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid2[j][i]=='P'){
											grid2[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto plimit;
						}
						//LIMITE SFORATO---------------------------------------------------------
					
						if(flag==0){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='P'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r][c-1]!=onda || grid1[r][c-2]!=onda || grid1[r][c-3]!=onda || grid1[r][c-4]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto plimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid1[r][c]='P';
							grid1[r][c-1]='P';
							grid1[r][c-2]='P';
							grid1[r][c-3]='P';
							grid1[r][c-4]='P';
							system("cls");
							stampabn(grid1);
						}
						else if(flag==1){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid2[j][i]=='P'){
										grid2[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid2[r][c]!=onda || grid2[r][c-1]!=onda || grid2[r][c-2]!=onda || grid2[r][c-3]!=onda || grid2[r][c-4]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto plimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid2[r][c]='P';
							grid2[r][c-1]='P';
							grid2[r][c-2]='P';
							grid2[r][c-3]='P';
							grid2[r][c-4]='P';
							system("cls");
							stampabn(grid2);	
						}
					}
					//LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT
					
					//RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO
					else if(lato=='O' || lato=='o'){
						if(flag==0){
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='P'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
						}
						else if(flag==1){
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid2[j][i]=='P'){
										grid2[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
						}
						goto redo;
					}
					//RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO
					
					else if(lato==space){
						check[0]=1;
						goto pfine;
					}
					else if(lato!='W' || lato!='A' || lato!='S' || lato!='D' || lato!='w' || lato!='a' || lato!='s' || lato!='d'){
						goto restartp;
					}
				}
				pfine:
			break;
			//PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI
			
			//CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA
			case 67:
				if(check[1]==1){
					system("cls");
					goto redo;
				}
				invalidc:
				system("cls");
				pienac:
					
				if(flag==0){
					stampabn(grid1);
				}
				else if(flag==1){
					stampabn(grid2);
				}
				
				printf("\n\nInserisci le coordinate della punta della nave (prua),\nprima la RIGA e poi la COLONNA");
				printf("\n>");
				scanf("%d",&r);
				if(r!=0 && r!=1 && r!=2 && r!=3 && r!=4 && r!=5 && r!=6 && r!=7 && r!=8 && r!=9){
					goto invalidc;
				}
				printf(">");
				scanf("%d",&c);
				if(c!=0 && c!=1 && c!=2 && c!=3 && c!=4 && c!=5 && c!=6 && c!=7 && c!=8 && c!=9){
					goto invalidc;
				}
				
				if(flag==0 && grid1[r][c]!=onda){
					system("cls");
					printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
					goto pienac;
				}
				else if(flag==1 && grid2[r][c]!=onda){
					system("cls");
					printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
					goto pienac;
				}
				
				while(1){
					restartc:
					system("cls");
					climit:
					if(flag==0){
						stampabn(grid1);
					}
					else if(flag==1){
						stampabn(grid2);
					}
					printf("\n\nGira la nave con:\nW (in alto)\nS (in basso)\nD (a destra)\nA (a sinistra)\n\nHai sbagliato a inserire le coordinate della punta?\nNon c'e' problema, premi 'O' per tornare indietro");
					lato=getch();
					
					//UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP
					if(lato=='W' || lato=='w'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(r-3<0){
							
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='C'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							else if(flag==1){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid2[j][i]=='C'){
											grid2[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto climit;
						}
						//LIMITE SFORATO---------------------------------------------------------
					
						else if(flag==0 && grid1){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='C'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
						
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r-1][c]!=onda || grid1[r-2][c]!=onda || grid1[r-3][c]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto climit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
						
							grid1[r][c]='C';
							grid1[r-1][c]='C';
							grid1[r-2][c]='C';
							grid1[r-3][c]='C';
							system("cls");
							stampabn(grid1);
						}
						
						
						else if(flag==1){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid2[j][i]=='C'){
										grid2[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid2[r][c]!=onda || grid2[r-1][c]!=onda || grid2[r-2][c]!=onda || grid2[r-3][c]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto climit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid2[r][c]='C';
							grid2[r-1][c]='C';
							grid2[r-2][c]='C';
							grid2[r-3][c]='C';
							system("cls");
							stampabn(grid2);	
						}	
					}
					//UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-
					
					//DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN
					else if(lato=='S' || lato=='s'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(r+3>=10){
							
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='C'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							else if(flag==1){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid2[j][i]=='C'){
											grid2[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto climit;
						}
						//LIMITE SFORATO---------------------------------------------------------
						else if(flag==0){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='C'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r+1][c]!=onda || grid1[r+2][c]!=onda || grid1[r+3][c]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto climit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid1[r][c]='C';
							grid1[r+1][c]='C';
							grid1[r+2][c]='C';
							grid1[r+3][c]='C';
							system("cls");
							stampabn(grid1);
						}
						else if(flag==1){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid2[j][i]=='C'){
										grid2[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid2[r][c]!=onda || grid2[r+1][c]!=onda || grid2[r+2][c]!=onda || grid2[r+3][c]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto climit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid2[r][c]='C';
							grid2[r+1][c]='C';
							grid2[r+2][c]='C';
							grid2[r+3][c]='C';
							system("cls");
							stampabn(grid2);	
						}
					}
					//DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN
					
					
					//RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT
					else if(lato=='D' || lato=='d'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(c+3>=10){
							
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='C'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							else if(flag==1){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid2[j][i]=='C'){
											grid2[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto climit;
						}
						//LIMITE SFORATO---------------------------------------------------------
						else if(flag==0){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='C'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r][c+1]!=onda || grid1[r][c+2]!=onda || grid1[r][c+3]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto climit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid1[r][c]='C';
							grid1[r][c+1]='C';
							grid1[r][c+2]='C';
							grid1[r][c+3]='C';
							system("cls");
							stampabn(grid1);
						}
						else if(flag==1){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid2[j][i]=='C'){
										grid2[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid2[r][c]!=onda || grid2[r][c+1]!=onda || grid2[r][c+2]!=onda || grid2[r][c+3]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto climit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid2[r][c]='C';
							grid2[r][c+1]='C';
							grid2[r][c+2]='C';
							grid2[r][c+3]='C';
							system("cls");
							stampabn(grid2);	
						}
					}
					//RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT
					
					
					//LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT
					else if(lato=='A' || lato=='a'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(c-3<0){
							
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='C'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							else if(flag==1){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid2[j][i]=='C'){
											grid2[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto climit;
						}
						//LIMITE SFORATO---------------------------------------------------------
						if(flag==0){
	
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='C'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r][c-1]!=onda || grid1[r][c-2]!=onda || grid1[r][c-3]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto climit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid1[r][c]='C';
							grid1[r][c-1]='C';
							grid1[r][c-2]='C';
							grid1[r][c-3]='C';
							system("cls");
							stampabn(grid1);
						}
						else if(flag==1){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid2[j][i]=='C'){
										grid2[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid2[r][c]!=onda || grid2[r][c-1]!=onda || grid2[r][c-2]!=onda || grid2[r][c-3]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto climit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid2[r][c]='C';
							grid2[r][c-1]='C';
							grid2[r][c-2]='C';
							grid2[r][c-3]='C';
							system("cls");
							stampabn(grid2);	
						}
					}
					//LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT
					
					//RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO
					else if(lato=='O' || lato=='o'){
						if(flag==0){
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='C'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
						}
						else if(flag==1){
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid2[j][i]=='C'){
										grid2[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
						}
						goto redo;
					}
					//RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO
					
					else if(lato==space){
						check[1]=1;
						goto cfine;
					}
					else if(lato!='W' || lato!='A' || lato!='S' || lato!='D' || lato!='w' || lato!='a' || lato!='s' || lato!='d'){
						goto restartc;
					}
				}
				cfine:
			break;
			//CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA
			
			//INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE
			case 73:
			if(check[2]==1){
					system("cls");
					goto redo;
				}
				invalidi:
				system("cls");
				pienai:
					
				if(flag==0){
					stampabn(grid1);
				}
				else if(flag==1){
					stampabn(grid2);
				}
				
				printf("\n\nInserisci le coordinate della punta della nave (prua),\nprima la RIGA e poi la COLONNA");
				printf("\n>");
				scanf("%d",&r);
				if(r!=0 && r!=1 && r!=2 && r!=3 && r!=4 && r!=5 && r!=6 && r!=7 && r!=8 && r!=9){
					goto invalidi;
				}
				printf(">");
				scanf("%d",&c);
				if(c!=0 && c!=1 && c!=2 && c!=3 && c!=4 && c!=5 && c!=6 && c!=7 && c!=8 && c!=9){
					goto invalidi;
				}
				
				if(flag==0 && grid1[r][c]!=onda){
					system("cls");
					printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
					goto pienai;
				}
				else if(flag==1 && grid2[r][c]!=onda){
					system("cls");
					printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
					goto pienai;
				}
				
				while(1){
					restarti:
					system("cls");
					ilimit:
					if(flag==0){
						stampabn(grid1);
					}
					else if(flag==1){
						stampabn(grid2);
					}
					printf("\n\nGira la nave con:\nW (in alto)\nS (in basso)\nD (a destra)\nA (a sinistra)\n\nHai sbagliato a inserire le coordinate della punta?\nNon c'e' problema, premi 'O' per tornare indietro");
					lato=getch();
					
					//UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP
					if(lato=='W' || lato=='w'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(r-2<0){
							
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='I'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							else if(flag==1){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid2[j][i]=='I'){
											grid2[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto ilimit;
						}
						//LIMITE SFORATO---------------------------------------------------------
					
						else if(flag==0 && grid1){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='I'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
						
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r-1][c]!=onda || grid1[r-2][c]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto ilimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
						
							grid1[r][c]='I';
							grid1[r-1][c]='I';
							grid1[r-2][c]='I';
							system("cls");
							stampabn(grid1);
						}
						
						
						else if(flag==1){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid2[j][i]=='I'){
										grid2[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid2[r][c]!=onda || grid2[r-1][c]!=onda || grid2[r-2][c]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto ilimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid2[r][c]='I';
							grid2[r-1][c]='I';
							grid2[r-2][c]='I';
							system("cls");
							stampabn(grid2);	
						}	
					}
					//UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-
					
					//DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN
					else if(lato=='S' || lato=='s'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(r+2>=10){
							
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='I'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							else if(flag==1){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid2[j][i]=='I'){
											grid2[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto ilimit;
						}
						//LIMITE SFORATO---------------------------------------------------------
						else if(flag==0){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='I'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r+1][c]!=onda || grid1[r+2][c]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto ilimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid1[r][c]='I';
							grid1[r+1][c]='I';
							grid1[r+2][c]='I';
							system("cls");
							stampabn(grid1);
						}
						else if(flag==1){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid2[j][i]=='I'){
										grid2[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid2[r][c]!=onda || grid2[r+1][c]!=onda || grid2[r+2][c]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto ilimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid2[r][c]='I';
							grid2[r+1][c]='I';
							grid2[r+2][c]='I';
							system("cls");
							stampabn(grid2);	
						}
					}
					//DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN
					
					
					//RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT
					else if(lato=='D' || lato=='d'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(c+2>=10){
							
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='I'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							else if(flag==1){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid2[j][i]=='I'){
											grid2[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto ilimit;
						}
						//LIMITE SFORATO---------------------------------------------------------
						else if(flag==0){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='I'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r][c+1]!=onda || grid1[r][c+2]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto ilimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid1[r][c]='I';
							grid1[r][c+1]='I';
							grid1[r][c+2]='I';
							system("cls");
							stampabn(grid1);
						}
						else if(flag==1){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid2[j][i]=='I'){
										grid2[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid2[r][c]!=onda || grid2[r][c+1]!=onda || grid2[r][c+2]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto ilimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid2[r][c]='I';
							grid2[r][c+1]='I';
							grid2[r][c+2]='I';
							system("cls");
							stampabn(grid2);	
						}
					}
					//RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT
					
					
					//LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT
					else if(lato=='A' || lato=='a'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(c-2<0){
							
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='I'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							else if(flag==1){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid2[j][i]=='I'){
											grid2[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto ilimit;
						}
						//LIMITE SFORATO---------------------------------------------------------
						if(flag==0){
	
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='I'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r][c-1]!=onda || grid1[r][c-2]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto ilimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid1[r][c]='I';
							grid1[r][c-1]='I';
							grid1[r][c-2]='I';
							system("cls");
							stampabn(grid1);
						}
						else if(flag==1){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid2[j][i]=='I'){
										grid2[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid2[r][c]!=onda || grid2[r][c-1]!=onda || grid2[r][c-2]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto ilimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid2[r][c]='I';
							grid2[r][c-1]='I';
							grid2[r][c-2]='I';
							system("cls");
							stampabn(grid2);	
						}
					}
					//LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT
					
					//RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO
					else if(lato=='O' || lato=='o'){
						if(flag==0){
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='I'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
						}
						else if(flag==1){
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid2[j][i]=='I'){
										grid2[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
						}
						goto redo;
					}
					//RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO
					
					else if(lato==space){
						check[2]=1;
						goto ifine;
					}
					else if(lato!='W' || lato!='A' || lato!='S' || lato!='D' || lato!='w' || lato!='a' || lato!='s' || lato!='d'){
						goto restarti;
					}
				}
				ifine:	
			break;
			//INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE
			
			//SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO
			case 83:
				if(check[3]==1){
					system("cls");
					goto redo;
				}
				invalids:
				system("cls");
				pienas:
					
				if(flag==0){
					stampabn(grid1);
				}
				else if(flag==1){
					stampabn(grid2);
				}
				
				printf("\n\nInserisci le coordinate della punta della nave (prua),\nprima la RIGA e poi la COLONNA");
				printf("\n>");
				scanf("%d",&r);
				if(r!=0 && r!=1 && r!=2 && r!=3 && r!=4 && r!=5 && r!=6 && r!=7 && r!=8 && r!=9){
					goto invalids;
				}
				printf(">");
				scanf("%d",&c);
				if(c!=0 && c!=1 && c!=2 && c!=3 && c!=4 && c!=5 && c!=6 && c!=7 && c!=8 && c!=9){
					goto invalids;
				}
				
				if(flag==0 && grid1[r][c]!=onda){
					system("cls");
					printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
					goto pienas;
				}
				else if(flag==1 && grid2[r][c]!=onda){
					system("cls");
					printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
					goto pienas;
				}
				
				while(1){
					restarts:
					system("cls");
					slimit:
					if(flag==0){
						stampabn(grid1);
					}
					else if(flag==1){
						stampabn(grid2);
					}
					printf("\n\nGira la nave con:\nW (in alto)\nS (in basso)\nD (a destra)\nA (a sinistra)\n\nHai sbagliato a inserire le coordinate della punta?\nNon c'e' problema, premi 'O' per tornare indietro");
					lato=getch();
					
					//UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP
					if(lato=='W' || lato=='w'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(r-2<0){
							
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='S'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							else if(flag==1){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid2[j][i]=='S'){
											grid2[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto slimit;
						}
						//LIMITE SFORATO---------------------------------------------------------
					
						else if(flag==0 && grid1){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='S'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
						
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r-1][c]!=onda || grid1[r-2][c]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto ilimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
						
							grid1[r][c]='S';
							grid1[r-1][c]='S';
							grid1[r-2][c]='S';
							system("cls");
							stampabn(grid1);
						}
						
						
						else if(flag==1){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid2[j][i]=='S'){
										grid2[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid2[r][c]!=onda || grid2[r-1][c]!=onda || grid2[r-2][c]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto slimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid2[r][c]='S';
							grid2[r-1][c]='S';
							grid2[r-2][c]='S';
							system("cls");
							stampabn(grid2);	
						}	
					}
					//UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-
					
					//DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN
					else if(lato=='S' || lato=='s'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(r+2>=10){
							
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='S'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							else if(flag==1){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid2[j][i]=='S'){
											grid2[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto slimit;
						}
						//LIMITE SFORATO---------------------------------------------------------
						else if(flag==0){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='S'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r+1][c]!=onda || grid1[r+2][c]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto slimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid1[r][c]='S';
							grid1[r+1][c]='S';
							grid1[r+2][c]='S';
							system("cls");
							stampabn(grid1);
						}
						else if(flag==1){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid2[j][i]=='S'){
										grid2[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid2[r][c]!=onda || grid2[r+1][c]!=onda || grid2[r+2][c]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto slimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid2[r][c]='S';
							grid2[r+1][c]='S';
							grid2[r+2][c]='S';
							system("cls");
							stampabn(grid2);	
						}
					}
					//DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN
					
					
					//RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT
					else if(lato=='D' || lato=='d'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(c+2>=10){
							
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='S'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							else if(flag==1){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid2[j][i]=='S'){
											grid2[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto slimit;
						}
						//LIMITE SFORATO---------------------------------------------------------
						else if(flag==0){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='S'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r][c+1]!=onda || grid1[r][c+2]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto slimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid1[r][c]='S';
							grid1[r][c+1]='S';
							grid1[r][c+2]='S';
							system("cls");
							stampabn(grid1);
						}
						else if(flag==1){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid2[j][i]=='S'){
										grid2[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid2[r][c]!=onda || grid2[r][c+1]!=onda || grid2[r][c+2]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto slimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid2[r][c]='S';
							grid2[r][c+1]='S';
							grid2[r][c+2]='S';
							system("cls");
							stampabn(grid2);	
						}
					}
					//RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT
					
					
					//LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT
					else if(lato=='A' || lato=='a'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(c-2<0){
							
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='S'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							else if(flag==1){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid2[j][i]=='S'){
											grid2[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto slimit;
						}
						//LIMITE SFORATO---------------------------------------------------------
						if(flag==0){
	
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='S'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r][c-1]!=onda || grid1[r][c-2]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto slimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid1[r][c]='S';
							grid1[r][c-1]='S';
							grid1[r][c-2]='S';
							system("cls");
							stampabn(grid1);
						}
						else if(flag==1){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid2[j][i]=='S'){
										grid2[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid2[r][c]!=onda || grid2[r][c-1]!=onda || grid2[r][c-2]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto slimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid2[r][c]='S';
							grid2[r][c-1]='S';
							grid2[r][c-2]='S';
							system("cls");
							stampabn(grid2);	
						}
					}
					//LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT
					
					//RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO
					else if(lato=='O' || lato=='o'){
						if(flag==0){
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='S'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
						}
						else if(flag==1){
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid2[j][i]=='S'){
										grid2[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
						}
						goto redo;
					}
					//RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO
					
					else if(lato==space){
						check[3]=1;
						goto sfine;
					}
					else if(lato!='W' || lato!='A' || lato!='S' || lato!='D' || lato!='w' || lato!='a' || lato!='s' || lato!='d'){
						goto restarts;
					}
				}
				sfine:
			break;
			//SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO
			
			//ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO
			case 65:
				if(check[4]==1){
					system("cls");
					goto redo;
				}
				invalida:
				system("cls");
				pienaa:
					
				if(flag==0){
					stampabn(grid1);
				}
				else if(flag==1){
					stampabn(grid2);
				}
				
				printf("\n\nInserisci le coordinate della punta della nave (prua),\nprima la RIGA e poi la COLONNA");
				printf("\n>");
				scanf("%d",&r);
				if(r!=0 && r!=1 && r!=2 && r!=3 && r!=4 && r!=5 && r!=6 && r!=7 && r!=8 && r!=9){
					goto invalida;
				}
				printf(">");
				scanf("%d",&c);
				if(c!=0 && c!=1 && c!=2 && c!=3 && c!=4 && c!=5 && c!=6 && c!=7 && c!=8 && c!=9){
					goto invalida;
				}
				
				if(flag==0 && grid1[r][c]!=onda){
					system("cls");
					printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
					goto pienaa;
				}
				else if(flag==1 && grid2[r][c]!=onda){
					system("cls");
					printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
					goto pienaa;
				}
				
				while(1){
					restarta:
					system("cls");
					alimit:
					if(flag==0){
						stampabn(grid1);
					}
					else if(flag==1){
						stampabn(grid2);
					}
					printf("\n\nGira la nave con:\nW (in alto)\nS (in basso)\nD (a destra)\nA (a sinistra)\n\nHai sbagliato a inserire le coordinate della punta?\nNon c'e' problema, premi 'O' per tornare indietro");
					lato=getch();
					
					//UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP
					if(lato=='W' || lato=='w'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(r-1<0){
							
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='A'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							else if(flag==1){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid2[j][i]=='A'){
											grid2[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto alimit;
						}
						//LIMITE SFORATO---------------------------------------------------------
					
						else if(flag==0 && grid1){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='A'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
						
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r-1][c]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto alimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
						
							grid1[r][c]='A';
							grid1[r-1][c]='A';
							system("cls");
							stampabn(grid1);
						}
						
						
						else if(flag==1){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid2[j][i]=='A'){
										grid2[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid2[r][c]!=onda || grid2[r-1][c]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto alimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid2[r][c]='A';
							grid2[r-1][c]='A';
							system("cls");
							stampabn(grid2);	
						}	
					}
					//UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-
					
					//DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN
					else if(lato=='S' || lato=='s'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(r+1>=10){
							
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='A'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							else if(flag==1){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid2[j][i]=='A'){
											grid2[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto alimit;
						}
						//LIMITE SFORATO---------------------------------------------------------
						else if(flag==0){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='A'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r+1][c]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto alimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid1[r][c]='A';
							grid1[r+1][c]='A';
							system("cls");
							stampabn(grid1);
						}
						else if(flag==1){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid2[j][i]=='A'){
										grid2[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid2[r][c]!=onda || grid2[r+1][c]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto alimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid2[r][c]='A';
							grid2[r+1][c]='A';
							system("cls");
							stampabn(grid2);	
						}
					}
					//DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN
					
					
					//RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT
					else if(lato=='D' || lato=='d'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(c+1>=10){
							
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='A'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							else if(flag==1){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid2[j][i]=='A'){
											grid2[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto alimit;
						}
						//LIMITE SFORATO---------------------------------------------------------
						else if(flag==0){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='A'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r][c+1]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto alimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid1[r][c]='A';
							grid1[r][c+1]='A';
							system("cls");
							stampabn(grid1);
						}
						else if(flag==1){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid2[j][i]=='A'){
										grid2[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid2[r][c]!=onda || grid2[r][c+1]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto alimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid2[r][c]='A';
							grid2[r][c+1]='A';
							system("cls");
							stampabn(grid2);	
						}
					}
					//RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT
					
					
					//LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT
					else if(lato=='A' || lato=='a'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(c-1<0){
							
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='A'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							else if(flag==1){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid2[j][i]=='A'){
											grid2[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto alimit;
						}
						//LIMITE SFORATO---------------------------------------------------------
						if(flag==0){
	
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='A'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r][c-1]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto alimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid1[r][c]='A';
							grid1[r][c-1]='A';
							system("cls");
							stampabn(grid1);
						}
						else if(flag==1){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid2[j][i]=='A'){
										grid2[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid2[r][c]!=onda || grid2[r][c-1]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto alimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid2[r][c]='A';
							grid2[r][c-1]='A';
							system("cls");
							stampabn(grid2);	
						}
					}
					//LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT
					
					//RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO
					else if(lato=='O' || lato=='o'){
						if(flag==0){
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='A'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
						}
						else if(flag==1){
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid2[j][i]=='A'){
										grid2[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
						}
						goto redo;
					}
					//RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO
					
					else if(lato==space){
						check[4]=1;
						goto afine;
					}
					else if(lato!='W' || lato!='A' || lato!='S' || lato!='D' || lato!='w' || lato!='a' || lato!='s' || lato!='d'){
						goto restarta;
					}
				}
				afine:
			break;
			//ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO
			
			default:
				system("cls");
				goto redo;
			break;
		}
		
		
		if(check[0]==1 && check[1]==1 && check[2]==1 && check[3]==1 && check[4]==1 && flag==0){
			check[0]=0;
			check[1]=0;
			check[2]=0;
			check[3]=0;
			check[4]=0;
			flag=1;
			system("cls");
			printf("Giocatore 1 hai inserito tutte le navi,\nORA TOCCA AL GIOCATORE 2");
			Sleep(4000);
		}
		else if(check[0]==1 && check[1]==1 && check[2]==1 && check[3]==1 && check[4]==1 && flag==1){
			goto out;
		}	
	}
	out:
	
	
		
	flag=0;
	while(1){
		system("cls");
		stampaattacco(grid1, grid2, gridc1, gridc2, flag);
		scanf("%d",&r);
		printf(">");
		scanf("%d",&c);
		if(flag==0){
			if(grid2[r][c]!=onda){
				colpi1++;
				gridc1[r][c]='X';
				grid2[r][c]='X';
				system("cls");
				printf("COLPITO!");
				for(i=0;i<10;i++){
					system("color 4C");
					Sleep(60);
					system("color 8E");
					Sleep(60);
				}
				system("color 0F");
			}
			else if(grid2[r][c]==onda){
				gridc1[r][c]='O';
				system("cls");
				printf("MANCATO!");
				for(i=0;i<10;i++){
					system("color 1B");
					Sleep(60);
					system("color 9F");
					Sleep(60);
				}
				system("color 0F");
			}
			flag=1;
		}
		else if(flag==1){
			if(grid1[r][c]!=onda){
				colpi2++;
				gridc2[r][c]='X';
				grid1[r][c]='X';
				system("cls");
				printf("COLPITO!");
				for(i=0;i<10;i++){
					system("color 4C");
					Sleep(60);
					system("color 8E");
					Sleep(60);
				}
				system("color 0F");
			}
			else if(grid1[r][c]==onda){
				gridc2[r][c]='O';
				system("cls");
				printf("MANCATO!");
				for(i=0;i<10;i++){
					system("color 1B");
					Sleep(60);
					system("color 9F");
					Sleep(60);
				}
				system("color 0F");
			}
			flag=0;
		}
		
		if(colpi1==17){
			win=1;
			goto win;
		}
		else if(colpi2==17){
			win=2;
			goto win;
		}
	}
	win:
		if(win==1){
			system("cls");
			printf("giocatore 1 vince");
		}
		else if(win==2){
			system("cls");
			printf("giocatore 2 vince");
		}
		
		for(i=0;i<5;i++){
		system("color 1A");
		Sleep(60);
		system("color 2C");
		Sleep(60);
		system("color 3D");
		Sleep(60);
		system("color 4E");
		Sleep(60);
		system("color 5B");
		Sleep(60);
		system("color 6C");
		Sleep(60);
		system("color 7B");
		Sleep(60);
		system("color 8D");
		Sleep(60);
		system("color 9A");
		Sleep(60);
		system("color 0F");
		Sleep(60);
	}
	
	printf("\n\nGriglia giocatore 1:\n");
	stampabn(grid1);
	printf("\n\nGriglia giocatore 2:\n");
	stampabn(grid2);
	
	t1.gioco=2;
	t1.w=win;
	t1.bot=0;
	cronologia_write();
	printf("\n\n[premere un TASTO QUALSIASI per tornare al menu]");
	k=getch();
}

void battaglianavalebotez(){
	
	srand(time(NULL));
		
	char grid1[10][10],gridc1[10][10]
		,grid2[10][10],gridc2[10][10];	
	char a=65;
	char portaerei='P'/*5*/, corazzata='C'/*4*/, incrociatore='I'/*3*/, sottomarino='S'/*3*/, assalto='A'/*2*/;

	char onda=126, line_up=186, down_r=200, down_l=188, up_r=201, up_l=187, line_orz=205;
	int i,j;
	int win=0;
	int flag=0;
	int temp;
	char space=32;
	char sel;
	char lato;
	int r,c,pos;
	int check[5]={0,0,0,0,0};
	int colpi1=0,colpi2=0;
	int verso;
		
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			grid1[j][i]=onda;
			gridc1[j][i]=onda;
			grid2[j][i]=onda;
			gridc2[j][i]=onda;
		}
	}
	
	
	
	while(1){
		redo:
		if(flag==0){
			stampabn(grid1);
		}
		else if(flag==1){
			stampabn(grid2);
		}
		
		if(flag==0){
			printf("\n\nGiocatore 1 inserisci le navi:\nPortaerei......[P]\nCorazzata......[C]\nIncrociatore...[I]\nSottomarino....[S]\nNave d'assalto.[A]\n>");
		}
		else if(flag==1){
			printf("\n\nGiocatore 2 inserisci le navi:\nPortaerei......[P]\nCorazzata......[C]\nIncrociatore...[I]\nSottomarino....[S]\nNave d'assalto.[A]\n>");
		}
		
		scanf("%c",&sel);
		if(sel>=97 && sel<=122){
			sel=sel-32;
		}
		switch(sel){
			//PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI
			case 80:
				if(check[0]==1){
					system("cls");
					goto redo;
				}
				invalidp:
				system("cls");
				pienap:
					
				if(flag==0){
					stampabn(grid1);
				}
				else if(flag==1){
					stampabn(grid2);
				}
				
				printf("\n\nInserisci le coordinate della punta della nave (prua),\nprima la RIGA e poi la COLONNA");
				printf("\n>");
				scanf("%d",&r);
				if(r!=0 && r!=1 && r!=2 && r!=3 && r!=4 && r!=5 && r!=6 && r!=7 && r!=8 && r!=9){
					goto invalidp;
				}
				printf(">");
				scanf("%d",&c);
				if(c!=0 && c!=1 && c!=2 && c!=3 && c!=4 && c!=5 && c!=6 && c!=7 && c!=8 && c!=9){
					goto invalidp;
				}
				
				if(flag==0 && grid1[r][c]!=onda){
					system("cls");
					printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
					goto pienap;
				}
				else if(flag==1 && grid2[r][c]!=onda){
					system("cls");
					printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
					goto pienap;
				}
				
				while(1){
					restartp:
					system("cls");
					plimit:
					if(flag==0){
						stampabn(grid1);
					}
					else if(flag==1){
						stampabn(grid2);
					}
					printf("\n\nGira la nave con:\nW (in alto)\nS (in basso)\nD (a destra)\nA (a sinistra)\n\nHai sbagliato a inserire le coordinate della punta?\nNon c'e' problema, premi 'O' per tornare indietro");
					lato=getch();
					
					//UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP
					if(lato=='W' || lato=='w'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(r-4<0){
							
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='P'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto plimit;
						}
						//LIMITE SFORATO---------------------------------------------------------
						
						else if(flag==0){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='P'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r-1][c]!=onda || grid1[r-2][c]!=onda || grid1[r-3][c]!=onda || grid1[r-4][c]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto plimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid1[r][c]='P';
							grid1[r-1][c]='P';
							grid1[r-2][c]='P';
							grid1[r-3][c]='P';
							grid1[r-4][c]='P';
							system("cls");
							stampabn(grid1);
						}	
					}
					//UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP
					
					
					//DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN
					else if(lato=='S' || lato=='s'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(r+4>=10){
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='P'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto plimit;
						}
						//LIMITE SFORATO---------------------------------------------------------
					
						else if(flag==0){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='P'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r+1][c]!=onda || grid1[r+2][c]!=onda || grid1[r+3][c]!=onda || grid1[r+4][c]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto plimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid1[r][c]='P';
							grid1[r+1][c]='P';
							grid1[r+2][c]='P';
							grid1[r+3][c]='P';
							grid1[r+4][c]='P';
							system("cls");
							stampabn(grid1);
						}
					}
					
					//DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN
					
					
					//RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT
					else if(lato=='D' || lato=='d'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(c+4>=10){
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='P'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto plimit;
						}
						//LIMITE SFORATO---------------------------------------------------------
						
						else if(flag==0){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='P'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r][c+1]!=onda || grid1[r][c+2]!=onda || grid1[r][c+3]!=onda || grid1[r][c+4]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto plimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid1[r][c]='P';
							grid1[r][c+1]='P';
							grid1[r][c+2]='P';
							grid1[r][c+3]='P';
							grid1[r][c+4]='P';
							system("cls");
							stampabn(grid1);
						}
					}
					//RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT
					
					
					//LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT
					else if(lato=='A' || lato=='a'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(c-4<0){
							
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='P'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto plimit;
						}
						//LIMITE SFORATO---------------------------------------------------------
					
						if(flag==0){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='P'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r][c-1]!=onda || grid1[r][c-2]!=onda || grid1[r][c-3]!=onda || grid1[r][c-4]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto plimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid1[r][c]='P';
							grid1[r][c-1]='P';
							grid1[r][c-2]='P';
							grid1[r][c-3]='P';
							grid1[r][c-4]='P';
							system("cls");
							stampabn(grid1);
						}
					}
					//LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT
					
					//RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO
					else if(lato=='O' || lato=='o'){
						if(flag==0){
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='P'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
						}
						goto redo;
					}
					//RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO
					
					else if(lato==space){
						check[0]=1;
						goto pfine;
					}
					else if(lato!='W' || lato!='A' || lato!='S' || lato!='D' || lato!='w' || lato!='a' || lato!='s' || lato!='d'){
						goto restartp;
					}
				}
				pfine:
			break;
			//PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI
			
			//CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA
			case 67:
				if(check[1]==1){
					system("cls");
					goto redo;
				}
				invalidc:
				system("cls");
				pienac:
					
				if(flag==0){
					stampabn(grid1);
				}
				else if(flag==1){
					stampabn(grid2);
				}
				
				printf("\n\nInserisci le coordinate della punta della nave (prua),\nprima la RIGA e poi la COLONNA");
				printf("\n>");
				scanf("%d",&r);
				if(r!=0 && r!=1 && r!=2 && r!=3 && r!=4 && r!=5 && r!=6 && r!=7 && r!=8 && r!=9){
					goto invalidc;
				}
				printf(">");
				scanf("%d",&c);
				if(c!=0 && c!=1 && c!=2 && c!=3 && c!=4 && c!=5 && c!=6 && c!=7 && c!=8 && c!=9){
					goto invalidc;
				}
				
				if(flag==0 && grid1[r][c]!=onda){
					system("cls");
					printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
					goto pienac;
				}
				else if(flag==1 && grid2[r][c]!=onda){
					system("cls");
					printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
					goto pienac;
				}
				
				while(1){
					restartc:
					system("cls");
					climit:
					if(flag==0){
						stampabn(grid1);
					}
					else if(flag==1){
						stampabn(grid2);
					}
					printf("\n\nGira la nave con:\nW (in alto)\nS (in basso)\nD (a destra)\nA (a sinistra)\n\nHai sbagliato a inserire le coordinate della punta?\nNon c'e' problema, premi 'O' per tornare indietro");
					lato=getch();
					
					//UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP
					if(lato=='W' || lato=='w'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(r-3<0){
							
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='C'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto climit;
						}
						//LIMITE SFORATO---------------------------------------------------------
					
						else if(flag==0 && grid1){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='C'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
						
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r-1][c]!=onda || grid1[r-2][c]!=onda || grid1[r-3][c]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto climit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
						
							grid1[r][c]='C';
							grid1[r-1][c]='C';
							grid1[r-2][c]='C';
							grid1[r-3][c]='C';
							system("cls");
							stampabn(grid1);
						}
							
					}
					//UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-
					
					//DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN
					else if(lato=='S' || lato=='s'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(r+3>=10){
							
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='C'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto climit;
						}
						//LIMITE SFORATO---------------------------------------------------------
						else if(flag==0){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='C'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r+1][c]!=onda || grid1[r+2][c]!=onda || grid1[r+3][c]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto climit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid1[r][c]='C';
							grid1[r+1][c]='C';
							grid1[r+2][c]='C';
							grid1[r+3][c]='C';
							system("cls");
							stampabn(grid1);
						}
					}
					//DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN
					
					
					//RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT
					else if(lato=='D' || lato=='d'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(c+3>=10){
							
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='C'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto climit;
						}
						//LIMITE SFORATO---------------------------------------------------------
						else if(flag==0){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='C'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r][c+1]!=onda || grid1[r][c+2]!=onda || grid1[r][c+3]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto climit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid1[r][c]='C';
							grid1[r][c+1]='C';
							grid1[r][c+2]='C';
							grid1[r][c+3]='C';
							system("cls");
							stampabn(grid1);
						}
					}
					//RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT
					
					
					//LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT
					else if(lato=='A' || lato=='a'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(c-3<0){
							
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='C'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto climit;
						}
						//LIMITE SFORATO---------------------------------------------------------
						if(flag==0){
	
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='C'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r][c-1]!=onda || grid1[r][c-2]!=onda || grid1[r][c-3]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto climit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid1[r][c]='C';
							grid1[r][c-1]='C';
							grid1[r][c-2]='C';
							grid1[r][c-3]='C';
							system("cls");
							stampabn(grid1);
						}
					}
					//LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT
					
					//RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO
					else if(lato=='O' || lato=='o'){
						if(flag==0){
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='C'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
						}
						goto redo;
					}
					//RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO
					
					else if(lato==space){
						check[1]=1;
						goto cfine;
					}
					else if(lato!='W' || lato!='A' || lato!='S' || lato!='D' || lato!='w' || lato!='a' || lato!='s' || lato!='d'){
						goto restartc;
					}
				}
				cfine:
			break;
			//CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA
			
			//INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE
			case 73:
			if(check[2]==1){
					system("cls");
					goto redo;
				}
				invalidi:
				system("cls");
				pienai:
					
				if(flag==0){
					stampabn(grid1);
				}
				else if(flag==1){
					stampabn(grid2);
				}
				
				printf("\n\nInserisci le coordinate della punta della nave (prua),\nprima la RIGA e poi la COLONNA");
				printf("\n>");
				scanf("%d",&r);
				if(r!=0 && r!=1 && r!=2 && r!=3 && r!=4 && r!=5 && r!=6 && r!=7 && r!=8 && r!=9){
					goto invalidi;
				}
				printf(">");
				scanf("%d",&c);
				if(c!=0 && c!=1 && c!=2 && c!=3 && c!=4 && c!=5 && c!=6 && c!=7 && c!=8 && c!=9){
					goto invalidi;
				}
				
				if(flag==0 && grid1[r][c]!=onda){
					system("cls");
					printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
					goto pienai;
				}
				else if(flag==1 && grid2[r][c]!=onda){
					system("cls");
					printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
					goto pienai;
				}
				
				while(1){
					restarti:
					system("cls");
					ilimit:
					if(flag==0){
						stampabn(grid1);
					}
					else if(flag==1){
						stampabn(grid2);
					}
					printf("\n\nGira la nave con:\nW (in alto)\nS (in basso)\nD (a destra)\nA (a sinistra)\n\nHai sbagliato a inserire le coordinate della punta?\nNon c'e' problema, premi 'O' per tornare indietro");
					lato=getch();
					
					//UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP
					if(lato=='W' || lato=='w'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(r-2<0){
							
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='I'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto ilimit;
						}
						//LIMITE SFORATO---------------------------------------------------------
					
						else if(flag==0){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='I'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
						
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r-1][c]!=onda || grid1[r-2][c]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto ilimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
						
							grid1[r][c]='I';
							grid1[r-1][c]='I';
							grid1[r-2][c]='I';
							system("cls");
							stampabn(grid1);
						}
					}
					//UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-
					
					//DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN
					else if(lato=='S' || lato=='s'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(r+2>=10){
							
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='I'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto ilimit;
						}
						//LIMITE SFORATO---------------------------------------------------------
						else if(flag==0){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='I'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r+1][c]!=onda || grid1[r+2][c]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto ilimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid1[r][c]='I';
							grid1[r+1][c]='I';
							grid1[r+2][c]='I';
							system("cls");
							stampabn(grid1);
						}
					}
					//DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN
					
					
					//RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT
					else if(lato=='D' || lato=='d'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(c+2>=10){
							
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='I'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto ilimit;
						}
						//LIMITE SFORATO---------------------------------------------------------
						else if(flag==0){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='I'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r][c+1]!=onda || grid1[r][c+2]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto ilimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid1[r][c]='I';
							grid1[r][c+1]='I';
							grid1[r][c+2]='I';
							system("cls");
							stampabn(grid1);
						}
					}
					//RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT
					
					
					//LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT
					else if(lato=='A' || lato=='a'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(c-2<0){
							
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='I'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto ilimit;
						}
						//LIMITE SFORATO---------------------------------------------------------
						if(flag==0){
	
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='I'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r][c-1]!=onda || grid1[r][c-2]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto ilimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid1[r][c]='I';
							grid1[r][c-1]='I';
							grid1[r][c-2]='I';
							system("cls");
							stampabn(grid1);
						}
					}
					//LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT
					
					//RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO
					else if(lato=='O' || lato=='o'){
						if(flag==0){
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='I'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
						}
						goto redo;
					}
					//RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO
					
					else if(lato==space){
						check[2]=1;
						goto ifine;
					}
					else if(lato!='W' || lato!='A' || lato!='S' || lato!='D' || lato!='w' || lato!='a' || lato!='s' || lato!='d'){
						goto restarti;
					}
				}
				ifine:	
			break;
			//INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE
			
			//SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO
			case 83:
				if(check[3]==1){
					system("cls");
					goto redo;
				}
				invalids:
				system("cls");
				pienas:
					
				if(flag==0){
					stampabn(grid1);
				}
				else if(flag==1){
					stampabn(grid2);
				}
				
				printf("\n\nInserisci le coordinate della punta della nave (prua),\nprima la RIGA e poi la COLONNA");
				printf("\n>");
				scanf("%d",&r);
				if(r!=0 && r!=1 && r!=2 && r!=3 && r!=4 && r!=5 && r!=6 && r!=7 && r!=8 && r!=9){
					goto invalids;
				}
				printf(">");
				scanf("%d",&c);
				if(c!=0 && c!=1 && c!=2 && c!=3 && c!=4 && c!=5 && c!=6 && c!=7 && c!=8 && c!=9){
					goto invalids;
				}
				
				if(flag==0 && grid1[r][c]!=onda){
					system("cls");
					printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
					goto pienas;
				}
				else if(flag==1 && grid2[r][c]!=onda){
					system("cls");
					printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
					goto pienas;
				}
				
				while(1){
					restarts:
					system("cls");
					slimit:
					if(flag==0){
						stampabn(grid1);
					}
					else if(flag==1){
						stampabn(grid2);
					}
					printf("\n\nGira la nave con:\nW (in alto)\nS (in basso)\nD (a destra)\nA (a sinistra)\n\nHai sbagliato a inserire le coordinate della punta?\nNon c'e' problema, premi 'O' per tornare indietro");
					lato=getch();
					
					//UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP
					if(lato=='W' || lato=='w'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(r-2<0){
							
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='S'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
				
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto slimit;
						}
						//LIMITE SFORATO---------------------------------------------------------
					
						else if(flag==0 && grid1){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='S'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
						
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r-1][c]!=onda || grid1[r-2][c]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto ilimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
						
							grid1[r][c]='S';
							grid1[r-1][c]='S';
							grid1[r-2][c]='S';
							system("cls");
							stampabn(grid1);
						}
					}
					//UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-
					
					//DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN
					else if(lato=='S' || lato=='s'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(r+2>=10){
							
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='S'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto slimit;
						}
						//LIMITE SFORATO---------------------------------------------------------
						else if(flag==0){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='S'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r+1][c]!=onda || grid1[r+2][c]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto slimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid1[r][c]='S';
							grid1[r+1][c]='S';
							grid1[r+2][c]='S';
							system("cls");
							stampabn(grid1);
						}
					}
					//DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN
					
					
					//RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT
					else if(lato=='D' || lato=='d'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(c+2>=10){
							
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='S'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto slimit;
						}
						//LIMITE SFORATO---------------------------------------------------------
						else if(flag==0){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='S'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r][c+1]!=onda || grid1[r][c+2]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto slimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid1[r][c]='S';
							grid1[r][c+1]='S';
							grid1[r][c+2]='S';
							system("cls");
							stampabn(grid1);
						}
					}
					//RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT
					
					
					//LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT
					else if(lato=='A' || lato=='a'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(c-2<0){
							
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='S'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto slimit;
						}
						//LIMITE SFORATO---------------------------------------------------------
						if(flag==0){
	
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='S'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r][c-1]!=onda || grid1[r][c-2]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto slimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid1[r][c]='S';
							grid1[r][c-1]='S';
							grid1[r][c-2]='S';
							system("cls");
							stampabn(grid1);
						}
					}
					//LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT
					
					//RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO
					else if(lato=='O' || lato=='o'){
						if(flag==0){
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='S'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
						}
						goto redo;
					}
					//RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO
					
					else if(lato==space){
						check[3]=1;
						goto sfine;
					}
					else if(lato!='W' || lato!='A' || lato!='S' || lato!='D' || lato!='w' || lato!='a' || lato!='s' || lato!='d'){
						goto restarts;
					}
				}
				sfine:
			break;
			//SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO
			
			//ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO
			case 65:
				if(check[4]==1){
					system("cls");
					goto redo;
				}
				invalida:
				system("cls");
				pienaa:
					
				if(flag==0){
					stampabn(grid1);
				}
				else if(flag==1){
					stampabn(grid2);
				}
				
				printf("\n\nInserisci le coordinate della punta della nave (prua),\nprima la RIGA e poi la COLONNA");
				printf("\n>");
				scanf("%d",&r);
				if(r!=0 && r!=1 && r!=2 && r!=3 && r!=4 && r!=5 && r!=6 && r!=7 && r!=8 && r!=9){
					goto invalida;
				}
				printf(">");
				scanf("%d",&c);
				if(c!=0 && c!=1 && c!=2 && c!=3 && c!=4 && c!=5 && c!=6 && c!=7 && c!=8 && c!=9){
					goto invalida;
				}
				
				if(flag==0 && grid1[r][c]!=onda){
					system("cls");
					printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
					goto pienaa;
				}
				else if(flag==1 && grid2[r][c]!=onda){
					system("cls");
					printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
					goto pienaa;
				}
				
				while(1){
					restarta:
					system("cls");
					alimit:
					if(flag==0){
						stampabn(grid1);
					}
					else if(flag==1){
						stampabn(grid2);
					}
					printf("\n\nGira la nave con:\nW (in alto)\nS (in basso)\nD (a destra)\nA (a sinistra)\n\nHai sbagliato a inserire le coordinate della punta?\nNon c'e' problema, premi 'O' per tornare indietro");
					lato=getch();
					
					//UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP
					if(lato=='W' || lato=='w'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(r-1<0){
							
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='A'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto alimit;
						}
						//LIMITE SFORATO---------------------------------------------------------
					
						else if(flag==0 && grid1){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='A'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
						
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r-1][c]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto alimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
						
							grid1[r][c]='A';
							grid1[r-1][c]='A';
							system("cls");
							stampabn(grid1);
						}	
					}
					//UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-
					
					//DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN
					else if(lato=='S' || lato=='s'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(r+1>=10){
							
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='A'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto alimit;
						}
						//LIMITE SFORATO---------------------------------------------------------
						else if(flag==0){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='A'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r+1][c]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto alimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid1[r][c]='A';
							grid1[r+1][c]='A';
							system("cls");
							stampabn(grid1);
						}
					}
					//DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN
					
					
					//RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT
					else if(lato=='D' || lato=='d'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(c+1>=10){
							
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='A'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto alimit;
						}
						//LIMITE SFORATO---------------------------------------------------------
						else if(flag==0){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='A'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r][c+1]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto alimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid1[r][c]='A';
							grid1[r][c+1]='A';
							system("cls");
							stampabn(grid1);
						}
					}
					//RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT
					
					
					//LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT
					else if(lato=='A' || lato=='a'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(c-1<0){
							
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='A'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto alimit;
						}
						//LIMITE SFORATO---------------------------------------------------------
						if(flag==0){
	
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='A'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r][c-1]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto alimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid1[r][c]='A';
							grid1[r][c-1]='A';
							system("cls");
							stampabn(grid1);
						}
					}
					//LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT
					
					//RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO
					else if(lato=='O' || lato=='o'){
						if(flag==0){
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='A'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
						}
						goto redo;
					}
					//RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO
					
					else if(lato==space){
						check[4]=1;
						goto afine;
					}
					else if(lato!='W' || lato!='A' || lato!='S' || lato!='D' || lato!='w' || lato!='a' || lato!='s' || lato!='d'){
						goto restarta;
					}
				}
				afine:
			break;
			//ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO
			
			default:
				system("cls");
				goto redo;
			break;
		}
		
		
		if(check[0]==1 && check[1]==1 && check[2]==1 && check[3]==1 && check[4]==1){
			goto out;
		}	
	}
	out:
		
	posizionamento(grid2);
		
	flag=0;
	while(1){
		system("cls");
		stampaattacco(grid1, grid2, gridc1, gridc2, flag);
		scanf("%d",&r);
		printf(">");
		scanf("%d",&c);
		
		if(grid2[r][c]!=onda){
			colpi1++;
			gridc1[r][c]='X';
			grid2[r][c]='X';
			system("cls");
			printf("COLPITO!");
			for(i=0;i<10;i++){
				system("color 4C");
				Sleep(60);
				system("color 8E");
				Sleep(60);
			}
			system("color 0F");
		}
		else if(grid2[r][c]==onda){
			gridc1[r][c]='O';
			system("cls");
			printf("MANCATO!");
			for(i=0;i<10;i++){
				system("color 1B");
				Sleep(60);
				system("color 9F");
				Sleep(60);
			}
			system("color 0F");
		}
		
		//BOT
		for(i=0;i<5;i++){
			system("cls");
			printf("Bot");
			Sleep(100);
			printf(".");
			Sleep(100);
			printf(".");
			Sleep(100);
			printf(".");
			Sleep(100);	
		}
		r=rand()%10;
		c=rand()%10;
		if(grid1[r][c]!=onda){
			colpi2++;
			grid1[r][c]='X';
			system("cls");
			printf("COLPITO!");
			for(i=0;i<10;i++){
				system("color 4C");
				Sleep(60);
				system("color 8E");
				Sleep(60);
			}
			system("color 0F");
		}
		else if(grid1[r][c]==onda){
			system("cls");
			printf("MANCATO!");
			for(i=0;i<10;i++){
				system("color 1B");
				Sleep(60);
				system("color 9F");
				Sleep(60);
			}
			system("color 0F");
		}
		//BOT
		
		
		if(colpi1==17){
			win=1;
			goto win;
		}
		else if(colpi2==17){
			win=-1;
			goto win;
		}
	}
	win:
		if(win==1){
			system("cls");
			printf("giocatore 1 vince");
		}
		else if(win==-1){
			system("cls");
			printf("Bot vince");
		}
		
		for(i=0;i<5;i++){
		system("color 1A");
		Sleep(60);
		system("color 2C");
		Sleep(60);
		system("color 3D");
		Sleep(60);
		system("color 4E");
		Sleep(60);
		system("color 5B");
		Sleep(60);
		system("color 6C");
		Sleep(60);
		system("color 7B");
		Sleep(60);
		system("color 8D");
		Sleep(60);
		system("color 9A");
		Sleep(60);
		system("color 0F");
		Sleep(60);
	}
	
	printf("\n\nGriglia giocatore 1:\n");
	stampabn(grid1);
	printf("\n\nGriglia bot:\n");
	stampabn(grid2);
	
	t1.gioco=2;
	t1.w=win;
	t1.bot=-1;
	cronologia_write();
	printf("\n\n[premere un TASTO QUALSIASI per tornare al menu]");
	k=getch();
}

void battaglianavalebothd(){
	
	srand(time(NULL));
		
	char grid1[10][10],gridc1[10][10]
		,grid2[10][10],gridc2[10][10];	
	char a=65;
	char portaerei='P'/*5*/, corazzata='C'/*4*/, incrociatore='I'/*3*/, sottomarino='S'/*3*/, assalto='A'/*2*/;

	char onda=126, line_up=186, down_r=200, down_l=188, up_r=201, up_l=187, line_orz=205;
	int i,j;
	int win=0;
	int flag=0;
	int temp;
	char space=32;
	char sel;
	char lato;
	int r,c,pos;
	int check[5]={0,0,0,0,0};
	int colpi1=0,colpi2=0;
	int verso;
		
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			grid1[j][i]=onda;
			gridc1[j][i]=onda;
			grid2[j][i]=onda;
			gridc2[j][i]=onda;
		}
	}
	
	
	
	while(1){
		redo:
		if(flag==0){
			stampabn(grid1);
		}
		else if(flag==1){
			stampabn(grid2);
		}
		
		if(flag==0){
			printf("\n\nGiocatore 1 inserisci le navi:\nPortaerei......[P]\nCorazzata......[C]\nIncrociatore...[I]\nSottomarino....[S]\nNave d'assalto.[A]\n>");
		}
		else if(flag==1){
			printf("\n\nGiocatore 2 inserisci le navi:\nPortaerei......[P]\nCorazzata......[C]\nIncrociatore...[I]\nSottomarino....[S]\nNave d'assalto.[A]\n>");
		}
		
		scanf("%c",&sel);
		if(sel>=97 && sel<=122){
			sel=sel-32;
		}
		switch(sel){
			//PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI
			case 80:
				if(check[0]==1){
					system("cls");
					goto redo;
				}
				invalidp:
				system("cls");
				pienap:
					
				if(flag==0){
					stampabn(grid1);
				}
				else if(flag==1){
					stampabn(grid2);
				}
				
				printf("\n\nInserisci le coordinate della punta della nave (prua),\nprima la RIGA e poi la COLONNA");
				printf("\n>");
				scanf("%d",&r);
				if(r!=0 && r!=1 && r!=2 && r!=3 && r!=4 && r!=5 && r!=6 && r!=7 && r!=8 && r!=9){
					goto invalidp;
				}
				printf(">");
				scanf("%d",&c);
				if(c!=0 && c!=1 && c!=2 && c!=3 && c!=4 && c!=5 && c!=6 && c!=7 && c!=8 && c!=9){
					goto invalidp;
				}
				
				if(flag==0 && grid1[r][c]!=onda){
					system("cls");
					printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
					goto pienap;
				}
				else if(flag==1 && grid2[r][c]!=onda){
					system("cls");
					printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
					goto pienap;
				}
				
				while(1){
					restartp:
					system("cls");
					plimit:
					if(flag==0){
						stampabn(grid1);
					}
					else if(flag==1){
						stampabn(grid2);
					}
					printf("\n\nGira la nave con:\nW (in alto)\nS (in basso)\nD (a destra)\nA (a sinistra)\n\nHai sbagliato a inserire le coordinate della punta?\nNon c'e' problema, premi 'O' per tornare indietro");
					lato=getch();
					
					//UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP
					if(lato=='W' || lato=='w'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(r-4<0){
							
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='P'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto plimit;
						}
						//LIMITE SFORATO---------------------------------------------------------
						
						else if(flag==0){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='P'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r-1][c]!=onda || grid1[r-2][c]!=onda || grid1[r-3][c]!=onda || grid1[r-4][c]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto plimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid1[r][c]='P';
							grid1[r-1][c]='P';
							grid1[r-2][c]='P';
							grid1[r-3][c]='P';
							grid1[r-4][c]='P';
							system("cls");
							stampabn(grid1);
						}	
					}
					//UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP
					
					
					//DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN
					else if(lato=='S' || lato=='s'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(r+4>=10){
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='P'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto plimit;
						}
						//LIMITE SFORATO---------------------------------------------------------
					
						else if(flag==0){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='P'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r+1][c]!=onda || grid1[r+2][c]!=onda || grid1[r+3][c]!=onda || grid1[r+4][c]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto plimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid1[r][c]='P';
							grid1[r+1][c]='P';
							grid1[r+2][c]='P';
							grid1[r+3][c]='P';
							grid1[r+4][c]='P';
							system("cls");
							stampabn(grid1);
						}
					}
					
					//DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN
					
					
					//RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT
					else if(lato=='D' || lato=='d'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(c+4>=10){
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='P'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto plimit;
						}
						//LIMITE SFORATO---------------------------------------------------------
						
						else if(flag==0){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='P'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r][c+1]!=onda || grid1[r][c+2]!=onda || grid1[r][c+3]!=onda || grid1[r][c+4]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto plimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid1[r][c]='P';
							grid1[r][c+1]='P';
							grid1[r][c+2]='P';
							grid1[r][c+3]='P';
							grid1[r][c+4]='P';
							system("cls");
							stampabn(grid1);
						}
					}
					//RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT
					
					
					//LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT
					else if(lato=='A' || lato=='a'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(c-4<0){
							
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='P'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto plimit;
						}
						//LIMITE SFORATO---------------------------------------------------------
					
						if(flag==0){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='P'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r][c-1]!=onda || grid1[r][c-2]!=onda || grid1[r][c-3]!=onda || grid1[r][c-4]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto plimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid1[r][c]='P';
							grid1[r][c-1]='P';
							grid1[r][c-2]='P';
							grid1[r][c-3]='P';
							grid1[r][c-4]='P';
							system("cls");
							stampabn(grid1);
						}
					}
					//LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT
					
					//RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO
					else if(lato=='O' || lato=='o'){
						if(flag==0){
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='P'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
						}
						goto redo;
					}
					//RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO
					
					else if(lato==space){
						check[0]=1;
						goto pfine;
					}
					else if(lato!='W' || lato!='A' || lato!='S' || lato!='D' || lato!='w' || lato!='a' || lato!='s' || lato!='d'){
						goto restartp;
					}
				}
				pfine:
			break;
			//PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI-PORTAEREI
			
			//CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA
			case 67:
				if(check[1]==1){
					system("cls");
					goto redo;
				}
				invalidc:
				system("cls");
				pienac:
					
				if(flag==0){
					stampabn(grid1);
				}
				else if(flag==1){
					stampabn(grid2);
				}
				
				printf("\n\nInserisci le coordinate della punta della nave (prua),\nprima la RIGA e poi la COLONNA");
				printf("\n>");
				scanf("%d",&r);
				if(r!=0 && r!=1 && r!=2 && r!=3 && r!=4 && r!=5 && r!=6 && r!=7 && r!=8 && r!=9){
					goto invalidc;
				}
				printf(">");
				scanf("%d",&c);
				if(c!=0 && c!=1 && c!=2 && c!=3 && c!=4 && c!=5 && c!=6 && c!=7 && c!=8 && c!=9){
					goto invalidc;
				}
				
				if(flag==0 && grid1[r][c]!=onda){
					system("cls");
					printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
					goto pienac;
				}
				else if(flag==1 && grid2[r][c]!=onda){
					system("cls");
					printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
					goto pienac;
				}
				
				while(1){
					restartc:
					system("cls");
					climit:
					if(flag==0){
						stampabn(grid1);
					}
					else if(flag==1){
						stampabn(grid2);
					}
					printf("\n\nGira la nave con:\nW (in alto)\nS (in basso)\nD (a destra)\nA (a sinistra)\n\nHai sbagliato a inserire le coordinate della punta?\nNon c'e' problema, premi 'O' per tornare indietro");
					lato=getch();
					
					//UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP
					if(lato=='W' || lato=='w'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(r-3<0){
							
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='C'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto climit;
						}
						//LIMITE SFORATO---------------------------------------------------------
					
						else if(flag==0 && grid1){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='C'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
						
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r-1][c]!=onda || grid1[r-2][c]!=onda || grid1[r-3][c]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto climit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
						
							grid1[r][c]='C';
							grid1[r-1][c]='C';
							grid1[r-2][c]='C';
							grid1[r-3][c]='C';
							system("cls");
							stampabn(grid1);
						}
							
					}
					//UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-
					
					//DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN
					else if(lato=='S' || lato=='s'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(r+3>=10){
							
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='C'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto climit;
						}
						//LIMITE SFORATO---------------------------------------------------------
						else if(flag==0){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='C'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r+1][c]!=onda || grid1[r+2][c]!=onda || grid1[r+3][c]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto climit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid1[r][c]='C';
							grid1[r+1][c]='C';
							grid1[r+2][c]='C';
							grid1[r+3][c]='C';
							system("cls");
							stampabn(grid1);
						}
					}
					//DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN
					
					
					//RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT
					else if(lato=='D' || lato=='d'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(c+3>=10){
							
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='C'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto climit;
						}
						//LIMITE SFORATO---------------------------------------------------------
						else if(flag==0){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='C'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r][c+1]!=onda || grid1[r][c+2]!=onda || grid1[r][c+3]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto climit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid1[r][c]='C';
							grid1[r][c+1]='C';
							grid1[r][c+2]='C';
							grid1[r][c+3]='C';
							system("cls");
							stampabn(grid1);
						}
					}
					//RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT
					
					
					//LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT
					else if(lato=='A' || lato=='a'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(c-3<0){
							
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='C'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto climit;
						}
						//LIMITE SFORATO---------------------------------------------------------
						if(flag==0){
	
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='C'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r][c-1]!=onda || grid1[r][c-2]!=onda || grid1[r][c-3]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto climit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid1[r][c]='C';
							grid1[r][c-1]='C';
							grid1[r][c-2]='C';
							grid1[r][c-3]='C';
							system("cls");
							stampabn(grid1);
						}
					}
					//LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT
					
					//RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO
					else if(lato=='O' || lato=='o'){
						if(flag==0){
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='C'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
						}
						goto redo;
					}
					//RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO
					
					else if(lato==space){
						check[1]=1;
						goto cfine;
					}
					else if(lato!='W' || lato!='A' || lato!='S' || lato!='D' || lato!='w' || lato!='a' || lato!='s' || lato!='d'){
						goto restartc;
					}
				}
				cfine:
			break;
			//CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA-CORAZZATA
			
			//INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE
			case 73:
			if(check[2]==1){
					system("cls");
					goto redo;
				}
				invalidi:
				system("cls");
				pienai:
					
				if(flag==0){
					stampabn(grid1);
				}
				else if(flag==1){
					stampabn(grid2);
				}
				
				printf("\n\nInserisci le coordinate della punta della nave (prua),\nprima la RIGA e poi la COLONNA");
				printf("\n>");
				scanf("%d",&r);
				if(r!=0 && r!=1 && r!=2 && r!=3 && r!=4 && r!=5 && r!=6 && r!=7 && r!=8 && r!=9){
					goto invalidi;
				}
				printf(">");
				scanf("%d",&c);
				if(c!=0 && c!=1 && c!=2 && c!=3 && c!=4 && c!=5 && c!=6 && c!=7 && c!=8 && c!=9){
					goto invalidi;
				}
				
				if(flag==0 && grid1[r][c]!=onda){
					system("cls");
					printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
					goto pienai;
				}
				else if(flag==1 && grid2[r][c]!=onda){
					system("cls");
					printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
					goto pienai;
				}
				
				while(1){
					restarti:
					system("cls");
					ilimit:
					if(flag==0){
						stampabn(grid1);
					}
					else if(flag==1){
						stampabn(grid2);
					}
					printf("\n\nGira la nave con:\nW (in alto)\nS (in basso)\nD (a destra)\nA (a sinistra)\n\nHai sbagliato a inserire le coordinate della punta?\nNon c'e' problema, premi 'O' per tornare indietro");
					lato=getch();
					
					//UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP
					if(lato=='W' || lato=='w'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(r-2<0){
							
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='I'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto ilimit;
						}
						//LIMITE SFORATO---------------------------------------------------------
					
						else if(flag==0){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='I'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
						
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r-1][c]!=onda || grid1[r-2][c]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto ilimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
						
							grid1[r][c]='I';
							grid1[r-1][c]='I';
							grid1[r-2][c]='I';
							system("cls");
							stampabn(grid1);
						}
					}
					//UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-
					
					//DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN
					else if(lato=='S' || lato=='s'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(r+2>=10){
							
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='I'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto ilimit;
						}
						//LIMITE SFORATO---------------------------------------------------------
						else if(flag==0){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='I'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r+1][c]!=onda || grid1[r+2][c]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto ilimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid1[r][c]='I';
							grid1[r+1][c]='I';
							grid1[r+2][c]='I';
							system("cls");
							stampabn(grid1);
						}
					}
					//DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN
					
					
					//RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT
					else if(lato=='D' || lato=='d'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(c+2>=10){
							
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='I'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto ilimit;
						}
						//LIMITE SFORATO---------------------------------------------------------
						else if(flag==0){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='I'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r][c+1]!=onda || grid1[r][c+2]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto ilimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid1[r][c]='I';
							grid1[r][c+1]='I';
							grid1[r][c+2]='I';
							system("cls");
							stampabn(grid1);
						}
					}
					//RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT
					
					
					//LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT
					else if(lato=='A' || lato=='a'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(c-2<0){
							
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='I'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto ilimit;
						}
						//LIMITE SFORATO---------------------------------------------------------
						if(flag==0){
	
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='I'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r][c-1]!=onda || grid1[r][c-2]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto ilimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid1[r][c]='I';
							grid1[r][c-1]='I';
							grid1[r][c-2]='I';
							system("cls");
							stampabn(grid1);
						}
					}
					//LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT
					
					//RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO
					else if(lato=='O' || lato=='o'){
						if(flag==0){
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='I'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
						}
						goto redo;
					}
					//RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO
					
					else if(lato==space){
						check[2]=1;
						goto ifine;
					}
					else if(lato!='W' || lato!='A' || lato!='S' || lato!='D' || lato!='w' || lato!='a' || lato!='s' || lato!='d'){
						goto restarti;
					}
				}
				ifine:	
			break;
			//INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE-INCROCIATORE
			
			//SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO
			case 83:
				if(check[3]==1){
					system("cls");
					goto redo;
				}
				invalids:
				system("cls");
				pienas:
					
				if(flag==0){
					stampabn(grid1);
				}
				else if(flag==1){
					stampabn(grid2);
				}
				
				printf("\n\nInserisci le coordinate della punta della nave (prua),\nprima la RIGA e poi la COLONNA");
				printf("\n>");
				scanf("%d",&r);
				if(r!=0 && r!=1 && r!=2 && r!=3 && r!=4 && r!=5 && r!=6 && r!=7 && r!=8 && r!=9){
					goto invalids;
				}
				printf(">");
				scanf("%d",&c);
				if(c!=0 && c!=1 && c!=2 && c!=3 && c!=4 && c!=5 && c!=6 && c!=7 && c!=8 && c!=9){
					goto invalids;
				}
				
				if(flag==0 && grid1[r][c]!=onda){
					system("cls");
					printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
					goto pienas;
				}
				else if(flag==1 && grid2[r][c]!=onda){
					system("cls");
					printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
					goto pienas;
				}
				
				while(1){
					restarts:
					system("cls");
					slimit:
					if(flag==0){
						stampabn(grid1);
					}
					else if(flag==1){
						stampabn(grid2);
					}
					printf("\n\nGira la nave con:\nW (in alto)\nS (in basso)\nD (a destra)\nA (a sinistra)\n\nHai sbagliato a inserire le coordinate della punta?\nNon c'e' problema, premi 'O' per tornare indietro");
					lato=getch();
					
					//UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP
					if(lato=='W' || lato=='w'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(r-2<0){
							
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='S'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
				
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto slimit;
						}
						//LIMITE SFORATO---------------------------------------------------------
					
						else if(flag==0 && grid1){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='S'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
						
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r-1][c]!=onda || grid1[r-2][c]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto ilimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
						
							grid1[r][c]='S';
							grid1[r-1][c]='S';
							grid1[r-2][c]='S';
							system("cls");
							stampabn(grid1);
						}
					}
					//UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-
					
					//DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN
					else if(lato=='S' || lato=='s'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(r+2>=10){
							
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='S'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto slimit;
						}
						//LIMITE SFORATO---------------------------------------------------------
						else if(flag==0){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='S'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r+1][c]!=onda || grid1[r+2][c]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto slimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid1[r][c]='S';
							grid1[r+1][c]='S';
							grid1[r+2][c]='S';
							system("cls");
							stampabn(grid1);
						}
					}
					//DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN
					
					
					//RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT
					else if(lato=='D' || lato=='d'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(c+2>=10){
							
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='S'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto slimit;
						}
						//LIMITE SFORATO---------------------------------------------------------
						else if(flag==0){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='S'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r][c+1]!=onda || grid1[r][c+2]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto slimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid1[r][c]='S';
							grid1[r][c+1]='S';
							grid1[r][c+2]='S';
							system("cls");
							stampabn(grid1);
						}
					}
					//RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT
					
					
					//LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT
					else if(lato=='A' || lato=='a'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(c-2<0){
							
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='S'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto slimit;
						}
						//LIMITE SFORATO---------------------------------------------------------
						if(flag==0){
	
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='S'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r][c-1]!=onda || grid1[r][c-2]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto slimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid1[r][c]='S';
							grid1[r][c-1]='S';
							grid1[r][c-2]='S';
							system("cls");
							stampabn(grid1);
						}
					}
					//LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT
					
					//RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO
					else if(lato=='O' || lato=='o'){
						if(flag==0){
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='S'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
						}
						goto redo;
					}
					//RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO
					
					else if(lato==space){
						check[3]=1;
						goto sfine;
					}
					else if(lato!='W' || lato!='A' || lato!='S' || lato!='D' || lato!='w' || lato!='a' || lato!='s' || lato!='d'){
						goto restarts;
					}
				}
				sfine:
			break;
			//SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO-SOTTOMARINO
			
			//ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO
			case 65:
				if(check[4]==1){
					system("cls");
					goto redo;
				}
				invalida:
				system("cls");
				pienaa:
					
				if(flag==0){
					stampabn(grid1);
				}
				else if(flag==1){
					stampabn(grid2);
				}
				
				printf("\n\nInserisci le coordinate della punta della nave (prua),\nprima la RIGA e poi la COLONNA");
				printf("\n>");
				scanf("%d",&r);
				if(r!=0 && r!=1 && r!=2 && r!=3 && r!=4 && r!=5 && r!=6 && r!=7 && r!=8 && r!=9){
					goto invalida;
				}
				printf(">");
				scanf("%d",&c);
				if(c!=0 && c!=1 && c!=2 && c!=3 && c!=4 && c!=5 && c!=6 && c!=7 && c!=8 && c!=9){
					goto invalida;
				}
				
				if(flag==0 && grid1[r][c]!=onda){
					system("cls");
					printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
					goto pienaa;
				}
				else if(flag==1 && grid2[r][c]!=onda){
					system("cls");
					printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
					goto pienaa;
				}
				
				while(1){
					restarta:
					system("cls");
					alimit:
					if(flag==0){
						stampabn(grid1);
					}
					else if(flag==1){
						stampabn(grid2);
					}
					printf("\n\nGira la nave con:\nW (in alto)\nS (in basso)\nD (a destra)\nA (a sinistra)\n\nHai sbagliato a inserire le coordinate della punta?\nNon c'e' problema, premi 'O' per tornare indietro");
					lato=getch();
					
					//UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP
					if(lato=='W' || lato=='w'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(r-1<0){
							
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='A'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto alimit;
						}
						//LIMITE SFORATO---------------------------------------------------------
					
						else if(flag==0 && grid1){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='A'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
						
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r-1][c]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto alimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
						
							grid1[r][c]='A';
							grid1[r-1][c]='A';
							system("cls");
							stampabn(grid1);
						}	
					}
					//UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-UP-
					
					//DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN
					else if(lato=='S' || lato=='s'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(r+1>=10){
							
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='A'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto alimit;
						}
						//LIMITE SFORATO---------------------------------------------------------
						else if(flag==0){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='A'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r+1][c]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto alimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid1[r][c]='A';
							grid1[r+1][c]='A';
							system("cls");
							stampabn(grid1);
						}
					}
					//DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN-DOWN
					
					
					//RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT
					else if(lato=='D' || lato=='d'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(c+1>=10){
							
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='A'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto alimit;
						}
						//LIMITE SFORATO---------------------------------------------------------
						else if(flag==0){
							
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='A'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r][c+1]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto alimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid1[r][c]='A';
							grid1[r][c+1]='A';
							system("cls");
							stampabn(grid1);
						}
					}
					//RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT-RIGHT
					
					
					//LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT
					else if(lato=='A' || lato=='a'){
						
						//LIMITE SFORATO---------------------------------------------------------
						if(c-1<0){
							
							if(flag==0){
								//PULIZIA DELLA SCELTA PRECEDENTE
								for(i=0;i<10;i++){
									for(j=0;j<10;j++){
										if(grid1[j][i]=='A'){
											grid1[j][i]=onda;
										}
									}
								}
								//PULIZIA DELLA SCELTA PRECEDENTE
							}
							
							system("cls");
							printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
							goto alimit;
						}
						//LIMITE SFORATO---------------------------------------------------------
						if(flag==0){
	
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='A'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
							
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							if(grid1[r][c]!=onda || grid1[r][c-1]!=onda){
								system("cls");
								printf("Non puoi inserire la nave nella posizione selezionata! >:T\n\n");
								goto alimit;
							}
							//CONTROLLO COLLISIONE CON ALTRE NAVI
							
							grid1[r][c]='A';
							grid1[r][c-1]='A';
							system("cls");
							stampabn(grid1);
						}
					}
					//LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT-LEFT
					
					//RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO
					else if(lato=='O' || lato=='o'){
						if(flag==0){
							//PULIZIA DELLA SCELTA PRECEDENTE
							for(i=0;i<10;i++){
								for(j=0;j<10;j++){
									if(grid1[j][i]=='A'){
										grid1[j][i]=onda;
									}
								}
							}
							//PULIZIA DELLA SCELTA PRECEDENTE
						}
						goto redo;
					}
					//RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO-RIPOSIZIONAMENTO
					
					else if(lato==space){
						check[4]=1;
						goto afine;
					}
					else if(lato!='W' || lato!='A' || lato!='S' || lato!='D' || lato!='w' || lato!='a' || lato!='s' || lato!='d'){
						goto restarta;
					}
				}
				afine:
			break;
			//ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO-ASSALTO
			
			default:
				system("cls");
				goto redo;
			break;
		}
		
		
		if(check[0]==1 && check[1]==1 && check[2]==1 && check[3]==1 && check[4]==1){
			goto out;
		}	
	}
	out:
		
	posizionamento(grid2);

	flag=0;
	while(1){
		system("cls");
		stampaattacco(grid1, grid2, gridc1, gridc2, flag);
		scanf("%d",&r);
		printf(">");
		scanf("%d",&c);
		
		if(grid2[r][c]!=onda){
			colpi1++;
			gridc1[r][c]='X';
			grid2[r][c]='X';
			system("cls");
			printf("COLPITO!");
			for(i=0;i<10;i++){
				system("color 4C");
				Sleep(60);
				system("color 8E");
				Sleep(60);
			}
			system("color 0F");
		}
		else if(grid2[r][c]==onda){
			gridc1[r][c]='O';
			system("cls");
			printf("MANCATO!");
			for(i=0;i<10;i++){
				system("color 1B");
				Sleep(60);
				system("color 9F");
				Sleep(60);
			}
			system("color 0F");
		}
		
		//BOT
		for(i=0;i<5;i++){
			system("cls");
			printf("Bot");
			Sleep(100);
			printf(".");
			Sleep(100);
			printf(".");
			Sleep(100);
			printf(".");
			Sleep(100);	
		}
		/*cervello bot*/
		for(i=0;i<10;i++){
			for(j=0;j<10;j++){
				if(gridc2[i][j]=='X'){
					if(gridc2[i][j+1]==onda && j+1<10){
						j++;
						c=j;
						r=i;
						goto colpo;
					}
					else if(gridc2[i][j-1]==onda && j-1>=0){
						j--;
						c=j;
						r=i;
						goto colpo;
					}
					else if(gridc2[i+1][j]==onda){
						i++;
						c=j;
						r=i;
						goto colpo;
					}
					else if(gridc2[i-1][j]==onda){
						i--;
						c=j;
						r=i;
						goto colpo;
					}	
				}
			}
		}
		
		while(1){
			r=rand()%10;
			c=rand()%10;
			if(gridc2[r][c]==onda){
				goto colpo;
			}
		}
		/*cervello bot*/
		
		colpo:
		if(grid1[r][c]!=onda){
			colpi2++;
			gridc2[r][c]='X';
			grid1[r][c]='X';
			system("cls");
			printf("COLPITO!");
			for(i=0;i<10;i++){
				system("color 4C");
				Sleep(60);
				system("color 8E");
				Sleep(60);
			}
			system("color 0F");
		}
		else if(grid1[r][c]==onda){
			gridc2[r][c]='O';
			system("cls");
			printf("MANCATO!");
			for(i=0;i<10;i++){
				system("color 1B");
				Sleep(60);
				system("color 9F");
				Sleep(60);
			}
			system("color 0F");
		}
		//BOT
		
		
		if(colpi1==17){
			win=1;
			goto vinci;
		}
		else if(colpi2==17){
			win=-2;
			goto vinci;
		}
	}
		vinci:
		if(win==1){
			system("cls");
			printf("giocatore 1 vince");
		}
		else if(win==-2){
			system("cls");
			printf("Bot vince");
		}
		
		for(i=0;i<5;i++){
		system("color 1A");
		Sleep(60);
		system("color 2C");
		Sleep(60);
		system("color 3D");
		Sleep(60);
		system("color 4E");
		Sleep(60);
		system("color 5B");
		Sleep(60);
		system("color 6C");
		Sleep(60);
		system("color 7B");
		Sleep(60);
		system("color 8D");
		Sleep(60);
		system("color 9A");
		Sleep(60);
		system("color 0F");
		Sleep(60);
	}
	
	printf("\n\nGriglia giocatore 1:\n");
	stampabn(grid1);
	printf("\n\nGriglia bot:\n");
	stampabn(grid2);
	
	t1.gioco=2;
	t1.w=win;
	t1.bot=-2;
	cronologia_write();
	printf("\n\n[premere un TASTO QUALSIASI per tornare al menu]");
	k=getch();
}

void posizionamento(char g2[10][10]){
	
	srand(time(NULL));
	
	int c,r,verso,flag=0;
	char onda=126;
	
	while(flag==0){
		while(g2[r][c]!=onda){
			c=rand()%10;
			r=rand()%10;	
		}
		verso=rand()%4;
		switch(verso){
			case 0:
				if(g2[r][c+1]==onda && g2[r][c+2]==onda && g2[r][c+3]==onda && g2[r][c+4]==onda && c+4<10){
					g2[r][c]='P';
					g2[r][c+1]='P';
					g2[r][c+2]='P';
					g2[r][c+3]='P';
					g2[r][c+4]='P';
					flag=1;
				}
			break;
			case 1:
				if(g2[r][c-1]==onda && g2[r][c-2]==onda && g2[r][c-3]==onda && g2[r][c-4]==onda && c-4>=0){
					g2[r][c]='P';
					g2[r][c-1]='P';
					g2[r][c-2]='P';
					g2[r][c-3]='P';
					g2[r][c-4]='P';
					flag=1;
				}
			break;
			case 2:
				if(g2[r-1][c]==onda && g2[r-2][c]==onda && g2[r-3][c]==onda && g2[r-4][c]==onda){
					g2[r][c]='P';
					g2[r-1][c]='P';
					g2[r-2][c]='P';
					g2[r-3][c]='P';
					g2[r-4][c]='P';
					flag=1;
				}
			break;
			case 3:
				if(g2[r+1][c]==onda && g2[r+2][c]==onda && g2[r+3][c]==onda && g2[r+4][c]==onda){
					g2[r][c]='P';
					g2[r+1][c]='P';
					g2[r+2][c]='P';
					g2[r+3][c]='P';
					g2[r+4][c]='P';
					flag=1;
				}
			break;
		}
	}
	flag=0;
	
	while(flag==0){
		while(g2[r][c]!=onda){
			c=rand()%10;
			r=rand()%10;	
		}
		verso=rand()%4;
		switch(verso){
			case 0:
				if(g2[r][c+1]==onda && g2[r][c+2]==onda && g2[r][c+3]==onda && c+3<10){
					g2[r][c]='C';
					g2[r][c+1]='C';
					g2[r][c+2]='C';
					g2[r][c+3]='C';
					flag=1;
				}
			break;
			case 1:
				if(g2[r][c-1]==onda && g2[r][c-2]==onda && g2[r][c-3]==onda && c-3>=0){
					g2[r][c]='C';
					g2[r][c-1]='C';
					g2[r][c-2]='C';
					g2[r][c-3]='C';
					flag=1;
				}
			break;
			case 2:
				if(g2[r-1][c]==onda && g2[r-2][c]==onda && g2[r-3][c]==onda){
					g2[r][c]='C';
					g2[r-1][c]='C';
					g2[r-2][c]='C';
					g2[r-3][c]='C';
					flag=1;
				}
			break;
			case 3:
				if(g2[r+1][c]==onda && g2[r+2][c]==onda && g2[r+3][c]==onda){
					g2[r][c]='C';
					g2[r+1][c]='C';
					g2[r+2][c]='C';
					g2[r+3][c]='C';
					flag=1;
				}
			break;
		}
	}
	flag=0;
	
	while(flag==0){
		while(g2[r][c]!=onda){
			c=rand()%10;
			r=rand()%10;	
		}
		verso=rand()%4;
		switch(verso){
			case 0:
				if(g2[r][c+1]==onda && g2[r][c+2]==onda && c+2<10){
					g2[r][c]='I';
					g2[r][c+1]='I';
					g2[r][c+2]='I';
					flag=1;
				}
			break;
			case 1:
				if(g2[r][c-1]==onda && g2[r][c-2]==onda && c-2>=0){
					g2[r][c]='I';
					g2[r][c-1]='I';
					g2[r][c-2]='I';
					flag=1;
				}
			break;
			case 2:
				if(g2[r-1][c]==onda && g2[r-2][c]==onda){
					g2[r][c]='I';
					g2[r-1][c]='I';
					g2[r-2][c]='I';
					flag=1;
				}
			break;
			case 3:
				if(g2[r+1][c]==onda && g2[r+2][c]==onda){
					g2[r][c]='I';
					g2[r+1][c]='I';
					g2[r+2][c]='I';
					flag=1;
				}
			break;
		}
	}
	flag=0;
	
	while(flag==0){
		while(g2[r][c]!=onda){
			c=rand()%10;
			r=rand()%10;	
		}
		verso=rand()%4;
		switch(verso){
			case 0:
				if(g2[r][c+1]==onda && g2[r][c+2]==onda && c+2<10){
					g2[r][c]='S';
					g2[r][c+1]='S';
					g2[r][c+2]='S';
					flag=1;
				}
			break;
			case 1:
				if(g2[r][c-1]==onda && g2[r][c-2]==onda && c-2>=0){
					g2[r][c]='S';
					g2[r][c-1]='S';
					g2[r][c-2]='S';
					flag=1;
				}
			break;
			case 2:
				if(g2[r-1][c]==onda && g2[r-2][c]==onda){
					g2[r][c]='S';
					g2[r-1][c]='S';
					g2[r-2][c]='S';
					flag=1;
				}
			break;
			case 3:
				if(g2[r+1][c]==onda && g2[r+2][c]==onda){
					g2[r][c]='S';
					g2[r+1][c]='S';
					g2[r+2][c]='S';
					flag=1;
				}
			break;
		}
	}
	flag=0;
	
	while(flag==0){
		while(g2[r][c]!=onda){
			c=rand()%10;
			r=rand()%10;	
		}
		verso=rand()%4;
		switch(verso){
			case 0:
				if(g2[r][c+1]==onda && r+1<10){
					g2[r][c]='A';
					g2[r][c+1]='A';
					flag=1;
				}
			break;
			case 1:
				if(g2[r][c-1]==onda && r-1>=0){
					g2[r][c]='A';
					g2[r][c-1]='A';
					flag=1;
				}
			break;
			case 2:
				if(g2[r-1][c]==onda){
					g2[r][c]='A';
					g2[r-1][c]='A';
					flag=1;
				}
			break;
			case 3:
				if(g2[r+1][c]==onda){
					g2[r][c]='A';
					g2[r+1][c]='A';
					flag=1;
				}
			break;
		}
	}
}


void stampabn(char g[10][10]){
	
	int i,j;
	int a=0;	
	char onda=126, line_up=186, down_r=200, down_l=188, up_r=201, up_l=187, line_orz=205;
	
	printf("%c",up_r);
	for(i=0;i<23;i++){
		printf("%c",line_orz);
	}
	printf("%c",up_l);
	printf("\n");
	
	printf("%c   ",line_up);
	for(i=0;i<10;i++){
		printf("%d ",a);
		a=a+1;
	}
	printf("%c",line_up);
	printf("\n");
	
	for(i=0;i<10;i++){
		printf("%c %d ",line_up,i);
		for(j=0;j<10;j++){
			printf("%c ",g[i][j]);
		}
		printf("%c\n",line_up);
	}
	
	printf("%c",down_r);
	for(i=0;i<23;i++){
		printf("%c",line_orz);
	}
	printf("%c",down_l);
}


void stampaattacco(char g1[10][10], char g2[10][10], char gc1[10][10], char gc2[10][10], int f){
	
	printf("ATTACCO!\n\n");
		printf("Griglia di controllo:\n");
		if(f==0){
			stampabn(gc1);
		}
		else if(f==1){
			stampabn(gc2);
		}
		
		printf("\nGriglia con le tue navi:\n");
		if(f==0){
			stampabn(g1);
		}
		else if(f==1){
			stampabn(g2);
		}
		printf("\nGiocatore %d inserisci le coordinate della casella che si vuole attaccare\nPrima la RIGA e poi la COLONNA,\nle 'X' rappresentano i colpi che hanno colpito una nave mentre le 'O' rappresentano i colpi andati in mare\n\n>",f+1);
}
//BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-
//BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-
//BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-
//BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-
//BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-
//BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-BATTAGLIA NAVALE-