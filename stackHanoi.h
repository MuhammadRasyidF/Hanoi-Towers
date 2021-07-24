//stackHanoi.h
/*
 *	File          : stackHanoi.h
 *	Deskripsi     : Header file dari ADT Stack [Linked List]
 *  Author        : Muhammad Rasyid Fadlurrahman - 201524019
 *                  Gefi Aulia Sanjaya - 201524008
 *                  Salma Syawalan Putriadhinia - 201524027 
 */

#ifndef stackHanoi_H
#define stackHanoi_H

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "boolean.h"

#define Nil 0
#define MaxEl 5

#define Top(S) (S).Top
#define InfoTop(S) (S).Cakram[(S).Top]

/* Definisi Type Bentukan ADT Stack [Linked List] */

typedef int infotype;
typedef int Address;

typedef struct telmstack{
	infotype Cakram[MaxEl+1];
	Address Top;
}stack;

/* Prototype ADT Stack [Linked List] */
/* {Konstruktor pembentuk Stack} */
void buatTower(stack *S);
/* Author : Muhammad Rasyid Fadlurrahman 
   I.S : S terdefinisi, tidak diketahui nilainya
   F.S : S diinisialisasi top(s) = 0,
*/

/* {Kelompok Interaksi Dengan I/O Device} */
void masukCakram(stack *S, infotype X);
/* Author : Gefi Aulia Sanjaya 
   I.S : S terdefinisi sembarang, mungkin kosong
   F.S : S bertambah sebuah elemen sebagai elemen pertama
*/

void keluarCakram(stack *S, infotype *X);
/* Author : Muhammad Rasyid Fadlurrahman 
   I.S : S terdefinisi, Stack tidak kosong
   F.S : Menghapus elemen pada top(s)
*/

void printTower(stack S, int mode);
/* Author : Salma Syawalan Putriadhinia
   I.S : S terdefinisi, mungkin kosong
   F.S : Menampilkan seluruh elemen dalam stack ke layar dari mulai TOP sampai dengan bottom jika tidak kosong
*/

boolean isTowerEmpty(stack S);
/* Author : Gefi Aulia Sanjaya 
   I.S : S terdefinisi, mungkin kosong, mungkin penuh
   F.S : mengembalikan nilai true apabila kosong dan false apabila tidak kosong.
*/

int hitungBanyakCakram(stack S);
/* Author : Salma Syawalan Putriadhinia
   I.S : S terdefinisi, mungkin kosong, mungkin penuh
   F.S : mengembalikan nilai jumlah cakram pada suatu tower(stack)
*/

#endif
