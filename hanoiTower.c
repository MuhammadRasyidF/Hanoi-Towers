//hanoiTower.c
/*
 *	File          : stackHanoi.h
 *	Deskripsi     : implementasi header file dari ADT Stack [Linked List]
 *  Author        : Muhammad Rasyid Fadlurrahman - 201524019
 *                  Gefi Aulia Sanjaya - 201524008
 *                  Salma Syawalan Putriadhinia - 201524027 
 */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include "hanoiTower.h"

//fitur username
void inputUname(char* nama){
/* Author : Muhammad Rasyid Fadlurrahman 
* I.S : nama = NULL
   F.S : mengembalikan nama yang sudah diinputkan 
*/
   nama = (char*)malloc(sizeof(char)*20); //alokasi char nama maks 20  huruf

	int i;
    for (i=0 ; i < 11 ; i++) //print banner username
  		printf("%c", 219);
   	printf(" USERNAME ");
	for (i=0 ; i < 11 ; i++)
   		printf("%c", 219);
   printf("\n\n");
   printf("\nUsername	: ");
   scanf("%s", nama); fflush(stdin);
   printf("\n");
}

//fitur choose language
int chooseLanguage(){
/*	Author : Salma Syawalan Putriadhinia
I.S. : bahasa belum dipilih
F.S. : mengembalikan nilai 1 untuk bahasa Indonesia dan nilai 2 untuk bahasa Inggris*/
	int choose = 0;
	while(choose < 1 || choose > 2){
		printf("[1] ID		[2] EN\n");
		printf("\npilihan bahasa anda : ");
		scanf("%d", &choose); fflush(stdin);
	}
	return choose;
}

//fitur main menu
int printMenu(int language){
/* 	Author : Gefi Aulia Sanjaya 
I.S : Layar kosong
F.S : Menampilkan tampilan Main Menu ke layar*/
	int choose, i;
	
	for(i = 0; i < 11; i++){
		printf("%c", 219);	
	}
	printf(" MAINMENU ");
	for(i = 0; i < 11; i++){
		printf("%c", 219);	
	}
	printf("\n\n");
	
	if(language == 1){
		printf(" [1] Bermain\n");
	  	printf(" [2] Tutorial\n");
	   	printf(" [3] Highscore\n");
	   	printf(" [0] Keluar\n\n");
	   	printf(" Pilihan : "); scanf("%d", &choose); fflush(stdin);
	} else{
		printf(" [1] Play\n");
	  	printf(" [2] Tutorial\n");
	   	printf(" [3] Highscore\n");
	   	printf(" [0] Exit\n\n");
	   	printf(" Your Choice : "); scanf("%d", &choose); fflush(stdin);
	}
    
	return choose;
}

//fitur tutorial
int printTutorial(){
	/*	Author : Salma Syawalan Putriadhinia
	I.S. : tutorial, cara bermain, dan credits belum ditampilkan ke layar
	F.S. : pada layar telah tampil penjelasan permainan, cara bermain, dan juga credits mengenai identitas pembuat program.*/
	int i;
	for (i=0 ; i < 58 ; i++)
   		printf("%c", 223);
   	printf("\n");
	printf("                        HANOI TOWER\n\n");
	for (i=0 ; i < 58 ; i++)
   		printf("%c", 220);
   	printf("\n\n");
	printf("[1] Permainan ini terdiri dari tiga tiang dan sejumlah\n");
	printf("    cakram antara lain 3 cakram, 4 cakram, dan 5 cakram,\n");
	printf("    dengan ukuran yang berbeda-beda yang dapat dimasukan\n");
	printf("    ke tiang mana saja.\n");
	printf("[2] Permainan dimulai dengan cakram-cakram yang tertumpuk\n");
	printf("    berurutan berdasarkan ukuran dalam tiang yang paling\n");
	printf("    kiri, cakram terbesar diletakkan terbawah dan cakram\n");
	printf("    terkecil diletakkan teratas, sehingga membentuk\n");
	printf("    kerucut.\n");
	printf("[3] Pemain harus memindahkan cakram ke tiang lain, baik\n");
	printf("    tiang tengah atau tiang kanan, sampai susunan cakram\n");
	printf("    tersusun di tiang lain\n\n");
	printf("========================== ATURAN ========================\n\n");
	printf("[1] Pemain hanya dapat memindahkan satu cakram dalam satu\n");
	printf("    waktu.\n");
	printf("[2] Pemain tidak boleh meletakkan cakram di atas cakram lain\n");
	printf("    yang lebih kecil.\n\n");
	printf("========================= TENTANG =========================\n");
	printf("Permainan ini dibuat dengan menggunakan bahasa C\n\n");
	printf("Author : \n");
	printf("[1] Gefi Aulia Sanjaya\n");
	printf("[2] Muhammad Rasyid Fadlurrahman\n");
	printf("[3] Salma Syawalan Putriadhinia\n\n");
	printf("==========================================================\n");

}

//fitur pindah cakram
void moveCakram(stack a, stack b){
/*	Author : Muhammad Rasyid Fadlurrahman
I.S. : cakram teratas dari stack a belum berpindah
F.S. : cakram sudah berpindah ke stack b*/
    infotype temp;
    keluarCakram(&a, &temp);
    masukCakram(&b, temp);
}

//fitur menampilkan tower
void showTowers(stack a, stack b, stack c, int mode){
/*	Author : Salma Syawalan Putriadhinia
I.S. : ketiga tower belum ditampilkan ke layar
F.S. : ketiga tower sudah ditampilkan ke layar*/
	printTower(a, mode);
	printTower(b, mode);
	printTower(c, mode);
}

//fitur surrender(Gefi)
/* ini bisa tanpa modul. Misal ada if( variabel == 0) maka menampilkan pilihan mau return ke mainmenu atau quit .*/

int score(int moves, int mode){
/* 	Author : Gefi Aulia Sanjaya 
   	I.S : score = Nil
   	F.S : Mengembalikan nilai score */
	int temp, score = 0;
	
	temp = moves - (pow(2,mode) -1 ); // untuk mencari moves yang lebih dari minimum
	if(temp == 0){
		score = 5000;
	}else{
		score = 5000 - (temp *(300/mode)) - ((temp - 1)* 10);
	}
	return score;
}

void printHighscore(){
/* Author : Muhammad Rasyid Fadlurrahman 
* I.S : mengambil data dari file
   F.S : menampilkan highhscore 10 besar 
*/

}

int chooseMode(int language){
/* Author : Gefi Aulia Sanjaya 
   I.S : mode belum dipilih
   F.S : mengembalikan nilai chooseMode antara 3/4/5 
*/	
	int choose, i;
	
	for(i = 0; i < 11; i++){
		printf("%c", 219);	
	}
	printf(" GAMEMODE ");
	for(i = 0; i < 11; i++){
		printf("%c", 219);	
	}
	printf("\n\n");
	
	if(language == 1){
	printf(" Pilih Mode Permaian :\n");
	printf(" [1] Mudah (3 Cakram)\n");
  	printf(" [2] Sedang (4 Cakram)\n");
   	printf(" [3] Sulit (5 Cakram)\n");
   	printf(" [0] Kembali\n");
   	printf(" Pilihan : "); scanf("%d", &choose); fflush(stdin);
   }else{
	printf(" Choose Game Mode :\n");
	printf(" [1] Easy (3 Disks)\n");
  	printf(" [2] Medium (4 Disks)\n");
   	printf(" [3] Hard (5 Disks)\n");
   	printf(" [0] Back\n");
   	printf(" Your Choice : "); scanf("%d", &choose); fflush(stdin);
   }

   return choose;
}

boolean checkWinner(stack S, int mode){
/* Author : Muhammad Rasyid Fadlurrahman 
* I.S : stack S mungkin kosong atau ada isi 
   F.S : mengembalikan nilai true apabila sudah ada tersusun lengkap pada tower tengah atau bawah, dan false apabila belum ada yang tersusun lengkap
*/
   if(hitungBanyakCakram(S) == mode){
      return true;
   }

   return false;
}

//moves(Salma)
/* ini bisa tanpa modul. Jadi misal ada variabel int namanya countMoves, setiap selesai 1 kali loop nanti countMoves++.*/

void banner(){
/* Author : Muhammad Rasyid Fadlurrahman 
* I.S : program belum berjalan 
   F.S : Menampilkan banner game pada bagian atas interface
*/
   int i;
	for (i=0 ; i < 32 ; i++)
   		printf("%c", 223);
   	printf("\n");
   	printf("           HANOI TOWER          \n");
   	for (i=0 ; i < 32 ; i++)
   		printf("%c", 220);
   	printf("\n\n");
}

void showWelcome(int language){
/* Author : Muhammad Rasyid Fadlurrahman 
* I.S : program belum berjalan 
   F.S : Menampilkan ucapan selamat bermain game hanoi tower
*/
	int i;
	if (language == 1)
	{
		for (i=0 ; i < 32 ; i++)
			printf("%c", 219);
		printf("\n\n");
		printf("        SELAMAT BERMAIN         \n");
		printf("        GAME HANOI TOWER        \n\n");
		for (i=0 ; i < 32 ; i++)
			printf("%c", 219);
		printf("\n\n");
	}
	else{
		for (i=0 ; i < 32 ; i++)
			printf("%c", 219);
		printf("\n\n");
		printf("             WELCOME              \n");
		printf("               TO                \n");
		printf("        HANOI TOWER GAME         \n\n");
		for (i=0 ; i < 32 ; i++)
			printf("%c", 219);
		printf("\n\n");
	}
	system("pause");
}
