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
/* I.S : S terdefinisi, tidak diketahui nilainya
   F.S : S diinisialisasi top(s) = nil,
*/
   S->Top = Nil;
}

/* {Operasi terhadap komponen : selektor Get dan Set} */
//Destruktor or Dealokator
Address alokasi(infotype X){
//Mengirim sebuah elemen stack dalam bentuk address
   Address temp = (Address)malloc(sizeof(elemen));
   temp->Cakram = X;
   temp->Prev = Nil;
   return temp;
}

void dealokasi(Address P){
/* I.S : P terdefinisi
   F.S : P dikembalikan ke sistem
   		 Melakukan dealokasi / pengembalian address P ke sistem
*/
   P->Prev = Nil;
	free(P);
}

/* {Kelompok Interaksi Dengan I/O Device} */
void masukCakram(stack *S, infotype X){
/* I.S : S terdefinisi sembarang, mungkin kosong
   F.S : S bertambah sebuah elemen sebagai elemen pertama
*/
   Address temp = alokasi(X);
   if(S->Top == Nil){
      S->Top = temp;
      return;
   }
   temp->Prev = S->Top;
   S->Top = temp;
}

void keluarCakram(stack *S, infotype *X){
/* I.S : S terdefinisi, Stack tidak kosong
   F.S : Menghapus elemen pada top(s)
*/
   if(isTowerEmpty(*S)){
      printf(" Parkiran Kosong\n");
      return;
   }
   *X = S->Top->Cakram;
   Address temp = S->Top;
   S->Top = S->Top->Prev;
   Dealokasi(temp);
}

void printTower(stack S);
/* I.S : S terdefinisi, mungkin kosong
   F.S : Menampilkan seluruh elemen dalam stack ke layar dari mulai TOP sampai dengan bottom jika tidak kosong
*/

boolean isTowerEmpty(stack S){
/* I.S : S terdefinisi, mungkin kosong, mungkin penuh
   F.S : mengembalikan nilai true apabila kosong dan false apabila tidak kosong.
*/
   return (S.Top == Nil);
}