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
#include "hanoiTower.h"

//fitur username
void inputUname(char* nama){
/* Author : Muhammad Rasyid Fadlurrahman 
* I.S : nama = NULL
   F.S : mengembalikan nama yang sudah diinputkan 
*/
   nama = (char*)malloc(sizeof(char)*20); //alokasi char nama maks 20  huruf

   for (i=0 ; i < 11 ; i++) //print banner username
   		printf("%c", 219);
   	printf(" Username ");
	for (i=0 ; i < 11 ; i++)
   		printf("%c", 219);
   printf("\n\n");
   printf("\nInput Username = ");
   scanf("%s", nama); fflush(stdin);
   printf("\n");
}

//fitur choose language
int chooseLanguage(){
/*	Author : Salma Syawalan Putriadhinia
I.S. : bahasa belum dipilih
F.S. : mengembalikan nilai 1 untuk bahasa Indonesia dan nilai 2 untuk bahasa Inggris*/

}

//fitur main menu
int printMenu(){
/* 	Author : Gefi Aulia Sanjaya 
I.S : Layar kosong
F.S : Menampilkan tampilan Main Menu ke layar*/

}

//fitur tutorial
int printTutorial(){
	/*	Author : Salma Syawalan Putriadhinia
	I.S. : tutorial belum ditampilkan ke layar
	F.S. : pada layar telah tampil penjelasan permainan, cara bermain, dan juga credits mengenai identitas pembuat program.*/
	
}

//fitur play
void moveCakram(stack a, stack b){
/*	Author : Muhammad Rasyid Fadlurrahman
I.S. : cakram teratas dari stack a belum berpindah
F.S. : cakram sudah berpindah ke stack b*/
    infotype temp;
    keluarCakram(&a, &temp);
    masukCakram(&b, temp);
}

//fitur menampilkan tower
void showTowers(stack a, stack b, stack c){  //keine ahnung! :)
/*	Author : Salma Syawalan Putriadhinia
I.S. : ketiga tower belum ditampilkan ke layar
F.S. : ketiga tower sudah ditampilkan ke layar*/

}

//fitur surrender(Gefi)
/* ini bisa tanpa modul. Misal ada if( variabel == 0) maka menampilkan pilihan mau return ke mainmenu atau quit .*/

int score(int moves, int cakram){
/* 	Author : Gefi Aulia Sanjaya 
   	I.S : score = Nil
   	F.S : Mengembalikan nilai score */
	int temp, score = 0;
	
	temp = moves - (pow(2,cakram) -1 ); // untuk mencari moves yang lebih dari minimum
	if(temp == 0){
		score = 5000;
	}else{
		score = 5000 - (temp *(300/cakram)) - ((temp - 1)* 10);
	}
	return score
}

void printHighscore(){
/* Author : Muhammad Rasyid Fadlurrahman 
* I.S : mengambil data dari file
   F.S : menampilkan highhscore 10 besar 
*/

}

int chooseMode(){
/* Author : Gefi Aulia Sanjaya 
   I.S : mode belum dipilih
   F.S : mengembalikan nilai chooseMode antara 3/4/5 
*/	

   	int choose;
	printf(" Pilih Mode Permaian :\n");
	printf(" 1. Mudah (3 Cakram)\n");
  	printf(" 2. Sedang (4 Cakram)\n");
   	printf(" 3. Sulit (5 Cakram)\n");
   	printf(" Pilihan : "); scanf("%d", &choose); fflush(stdin);
    
   return choose;
}

void checkWinner(stack S, int mode){
/* Author : Muhammad Rasyid Fadlurrahman 
* I.S : stack S mungkin kosong atau ada isi 
   F.S : mengembalikan nilai true apabila sudah ada tersusun lengkap pada tiang tengah atau bawah, dan false apabila belum ada yang tersusun lengkap
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
	if (language == 1)
	{
		for (i=0 ; i < 32 ; i++)
			printf("%c", 219);
		printf("\n\n");
		printf("         SELAMAT BERMAIN         \n");
		printf("         GAME HANOI TOWER        \n\n");
		for (i=0 ; i < 32 ; i++)
			printf("%c", 219);
		printf("\n\n");
	}
	else{
		for (i=0 ; i < 32 ; i++)
			printf("%c", 219);
		printf("\n\n");
		printf("              WELCOME             \n");
		printf("                TO                \n");
		printf("         HANOI TOWER GAME         \n\n");
		for (i=0 ; i < 32 ; i++)
			printf("%c", 219);
		printf("\n\n");
	}
	system("pause");
}