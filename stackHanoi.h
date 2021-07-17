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

#define Nil NULL

#define Cakram(p) (p)->cakram
#define Prev(p) p->prev

#define top(s) (s).top

/* Definisi Type Bentukan ADT Stack [Linked List] */

typedef struct{
int value;
}infotype;

typedef struct telmstack *Address;

typedef struct telmstack{
	infotype Cakram;
	Address Prev;
}elemen;

typedef struct{
	Address Top;
}stack;

/* Prototype ADT Stack [Linked List] */
/* {Konstruktor pembentuk Stack} */
void buatTower(stack *S);
/* I.S : S terdefinisi, tidak diketahui nilainya
   F.S : S diinisialisasi top(s) = nil,
*/

/* {Operasi terhadap komponen : selektor Get dan Set} */
//Destruktor or Dealokator
Address alokasi(infotype X);
//Mengirim sebuah elemen stack dalam bentuk address

void dealokasi(Address P);
/* I.S : P terdefinisi
   F.S : P dikembalikan ke sistem
   		 Melakukan dealokasi / pengembalian address P ke sistem
*/

/* {Kelompok Interaksi Dengan I/O Device} */
void masukCakram(stack *S, infotype X);
/* I.S : S terdefinisi sembarang, mungkin kosong
   F.S : S bertambah sebuah elemen sebagai elemen pertama
*/

void keluarCakram(stack *S, infotype *X);
/* I.S : S terdefinisi, Stack tidak kosong
   F.S : Menghapus elemen pada top(s)
*/

void printTower(stack S);
/* I.S : S terdefinisi, mungkin kosong
   F.S : Menampilkan seluruh elemen dalam stack ke layar dari mulai TOP sampai dengan bottom jika tidak kosong
*/

boolean isTowerEmpty(stack S);
/* I.S : S terdefinisi, mungkin kosong, mungkin penuh
   F.S : mengembalikan nilai true apabila kosong dan false apabila tidak kosong.
*/

#endif