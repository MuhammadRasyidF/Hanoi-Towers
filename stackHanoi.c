//stackHanoi.c
/*
 *	File          : stackHanoi.c
 *	Deskripsi     : implemetasi header file dari ADT Stack [Linked List]
 *  Author        : Muhammad Rasyid Fadlurrahman - 201524019
 *                  Gefi Aulia Sanjaya - 201524008
 *                  Salma Syawalan Putriadhinia - 201524027 
 *  IDE           : Dev C++ 
 */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "stackHanoi.h"

/* Prototype ADT Stack [Linked List] */
/* {Konstruktor pembentuk Stack} */
void buatTower(stack *S){ //modul untuk membuat state Nil pada nilai tower
/* Author : Muhammad Rasyid Fadlurrahman 
   I.S : S terdefinisi, tidak diketahui nilainya
   F.S : S diinisialisasi top(s) = 0,
*/
   Top(*S) = Nil;
}

/* {Kelompok Interaksi Dengan I/O Device} */
void masukCakram(stack *S, infotype X){//modul untuk menambah nilai cakram
/* Author : Gefi Aulia Sanjaya 
   I.S : S terdefinisi sembarang, mungkin kosong
   F.S : S bertambah sebuah elemen sebagai elemen pertama
*/
    Top(*S) = Top(*S)+1;//memindahkan top ke cakram teratas
	InfoTop(*S) = X;//menambah nilai cakram teratas
}

void keluarCakram(stack *S, infotype *X){ //modul untuk mengambil nilai cakram dan melepaskannya dari tower
/* Author : Muhammad Rasyid Fadlurrahman 
   I.S : S terdefinisi, Stack tidak kosong
   F.S : Menghapus elemen pada top(s)
*/
	if(isTowerEmpty(*S)){ //cek apakah tower kosong atau tidak
		return;
	}
    *X = InfoTop(*S); //mengambil nilai cakram teratas pada tower
	Top(*S) = Top(*S)-1; //memindahkan top ke bawah cakram teratas
}

void printTower(stack S, int mode){//modul untuk menampilkan struktur tower
/* Author : Salma Syawalan Putriadhinia
   I.S : S terdefinisi, mungkin kosong
   F.S : Menampilkan seluruh elemen dalam stack ke layar dari mulai TOP sampai dengan bottom jika tidak kosong
*/
	int h, i;	//h = height
	int tanpaCakram = mode - hitungBanyakCakram(S);
	
	//untuk menampilkan bagian atas tower yang tidak berisi cakram
	for(h = 0; h < tanpaCakram; h++){
		for(i = 0; i < mode; i++){
			printf(" ");
		}
		printf("|\n");
	}
	
	Address current = Top(S);
	//untuk menampilkan cakram-cakram yang ada pada tower sesuai dengan nilai-nilai yang ada pada stack S
	for(h = 0; h < hitungBanyakCakram(S) && current != Nil ; h++){
		for(i = 0; i < (mode - Info(current)); i++)
			printf(" ");
		for(i = 0; i < (2 * Info(current)) + 1; i++)
			printf("%c", 178);
		printf("\n");
		current = --current;
	}
   for(i = 0 ; i < (mode*2)+1 ; i++)
	   printf("=");
}

boolean isTowerEmpty(stack S){//modul untuk mengecek apakah tower kosong
/* Author : Gefi Aulia Sanjaya 
   I.S : S terdefinisi, mungkin kosong, mungkin penuh
   F.S : mengembalikan nilai true apabila kosong dan false apabila tidak kosong.
*/
   return (Top(S) == Nil);
}

int hitungBanyakCakram(stack S){//modul untuk menghitung banyak cakram yang ada pada tower
/* Author : Salma Syawalan Putriadhinia
   I.S : S terdefinisi, mungkin kosong, mungkin penuh
   F.S : mengembalikan nilai jumlah cakram pada suatu tower(stack)
*/
	Address current = Top(S);
	int banyakCakram = 0;
	
	while(current != Nil){	//selama di current masih ada nilai
		banyakCakram++;
		current = --current;	//current turun ke elemen bawahnya
	}
	
	return banyakCakram;
}

