//stackHanoi.c
/*
 *	File          : stackHanoi.c
 *	Deskripsi     : implemetasi header file dari ADT Stack [Linked List]
 *  Author        : Muhammad Rasyid Fadlurrahman - 201524019
 *                  Gefi Aulia Sanjaya - 201524008
 *                  Salma Syawalan Putriadhinia - 201524027 
 */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "stackHanoi.h"

/* Prototype ADT Stack [Linked List] */
/* {Konstruktor pembentuk Stack} */
void buatTower(stack *S){
/* Author : Muhammad Rasyid Fadlurrahman 
   I.S : S terdefinisi, tidak diketahui nilainya
   F.S : S diinisialisasi top(s) = 0,
*/
   Top(*S) = Nil;
}

/* {Kelompok Interaksi Dengan I/O Device} */
void masukCakram(stack *S, infotype X){
/* Author : Gefi Aulia Sanjaya 
   I.S : S terdefinisi sembarang, mungkin kosong
   F.S : S bertambah sebuah elemen sebagai elemen pertama
*/
    Top(*S) = Top(*S)+1;
	InfoTop(*S) = X;
}

void keluarCakram(stack *S, infotype *X){
/* Author : Muhammad Rasyid Fadlurrahman 
   I.S : S terdefinisi, Stack tidak kosong
   F.S : Menghapus elemen pada top(s)
*/
	if(isTowerEmpty(*S)){
		return;
	}
    *X = InfoTop(*S);
	Top(*S) = Top(*S)-1;
}

void printTower(stack S, int mode){
/* Author : Salma Syawalan Putriadhinia
   I.S : S terdefinisi, mungkin kosong
   F.S : Menampilkan seluruh elemen dalam stack ke layar dari mulai TOP sampai dengan bottom jika tidak kosong
*/
	int h, i;	//h = height
	int tanpaCakram = mode - hitungBanyakCakram(S);
	
	for(h = 0; h < tanpaCakram; h++){
		for(i = 0; i < mode - 1; i++){
			printf(" ");
		}
		printf("|");
	}
	Address current = S.Top;
	for(h = 0; h < hitungBanyakCakram(S) && current != Nil; h++){
		for(i = 0; i < (mode - current->Cakram); i++)
			printf(" ");
		for(i = 0; i <= (2 * current->Cakram) + 1; i++)
			printf("%c", 178);
		for(i = 0; i < (mode - current->Cakram); i++)
			printf(" ");
		printf("\n");
		current = current->Prev;
	}
	printf("===========\n\n\n");
}

boolean isTowerEmpty(stack S){
/* Author : Gefi Aulia Sanjaya 
   I.S : S terdefinisi, mungkin kosong, mungkin penuh
   F.S : mengembalikan nilai true apabila kosong dan false apabila tidak kosong.
*/
   return (Top(S) == Nil);
}

int hitungBanyakCakram(stack S){
/* Author : Salma Syawalan Putriadhinia
   I.S : S terdefinisi, mungkin kosong, mungkin penuh
   F.S : mengembalikan nilai jumlah cakram pada suatu tower(stack)
*/
	Address	current = S.Top;
	int banyakCakram = 0;
	
	while(current != Nil){
		banyakCakram++;
		current = current->Prev;
	}
	
	return banyakCakram;
}

