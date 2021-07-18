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
void inputUname (char* nama){
/* Author : Muhammad Rasyid Fadlurrahman 
* I.S : nama = NULL
   F.S : mengembalikan nama yang sudah diinputkan 
*/
   nama = (char*)malloc(sizeof(char)*20); //alokasi char nama maks 20  huruf

   printf("\nInput Username = ");
   scanf("%s", nama);
   printf("\n");
}

//fitur choose language
int chooseLanguage(){
/*	Author : Salma Syawalan Putriadhinia
I.S. : bahasa belum dipilih
F.S. : mengembalikan nilai 1 untuk bahasa Indonesia dan nilai 2 utnuk bahasa Inggris*/

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
I.S. : layar
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

int score(int countMoves){
/* 	Author : Gefi Aulia Sanjaya 
   	I.S : countMoves belum operasikan
   	F.S : Mengembalikan nilai score */
// 

}

void highscore(){
/* Author : Muhammad Rasyid Fadlurrahman 
* I.S : mengambil data dari file
   F.S : menamilkan highhscore 10 besar 
*/

}

int chooseMode(){
/* Author : Gefi Aulia Sanjaya 
   I.S : mode belum dipilih
   F.S : mengembalikan nilai chooseMode antara 3/4/5 */

}

void checkWinner(stack S){
/* Author : Muhammad Rasyid Fadlurrahman 
* I.S : stack S mungkin kosong atau ada isi 
   F.S : mengembalikan nilai true apabila sudah ada tersusun lengkap pada tiang tengah atau bawah, dan false apabila belum ada yang tersusun lengkap
*/

}

//moves(Salma)
/* ini bisa tanpa modul. Jadi misal ada variabel int namanya countMoves, setiap selesai 1 kali loop nanti countMoves++.*/

