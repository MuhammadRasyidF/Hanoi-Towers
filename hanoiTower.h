//hanoiTower.h
/*
 *	File          : stackHanoi.h
 *	Deskripsi     : Header file dari ADT Stack [Linked List]
 *  Author        : Muhammad Rasyid Fadlurrahman - 201524019
 *                  Gefi Aulia Sanjaya - 201524008
 *                  Salma Syawalan Putriadhinia - 201524027
 *  IDE           : Dev C++ 
 */

#ifndef hanoiTower_H
#define hanoiTower_H

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "stackHanoi.h"

//deklarasi tipe data baru
typedef struct UserData
{
   char nama[20];
   int mode;
   int moves;
   int score;
}Data;


//fitur username
void inputUname (char* nama); //modul untuk meminta inputan username
/* Author : Muhammad Rasyid Fadlurrahman 
* I.S : nama = NULL
   F.S : mengembalikan nama yang sudah diinputkan 
*/

//fitur choose language
int chooseLanguage();
/*	Author : Salma Syawalan Putriadhinia
I.S. : bahasa belum dipilih
F.S. : mengembalikan nilai 1 untuk bahasa Indonesia dan nilai 2 utnuk bahasa Inggris*/

//fitur main menu
int printMenu(int language, char nama[20]);
/* 	Author : Gefi Aulia Sanjaya 
I.S : Layar kosong
F.S : Menampilkan tampilan Main Menu ke layar*/

//fitur tutorial
int printTutorial(int language);
/*	Author : Salma Syawalan Putriadhinia
I.S. : layar
F.S. : pada layar telah tampil penjelasan permainan, cara bermain, dan juga credits mengenai identitas pembuat program.*/

//fitur pindah cakram
void moveCakram(stack *a, stack *b, boolean *isMoved);  //modul untuk memindahkan cakram dari tower a ke tower b
/*	Author : Muhammad Rasyid Fadlurrahman
I.S. : cakram teratas dari stack a belum berpindah
F.S. : cakram sudah berpindah ke stack b*/


//fitur menampilkan tower
void showTowers(stack a, stack b, stack c, int mode);
/*	Author : Salma Syawalan Putriadhinia
I.S. : ketiga tower belum ditampilkan ke layar
F.S. : ketiga tower sudah ditampilkan ke layar*/

//fitur surrender(Gefi)
/* ini bisa tanpa modul. Misal ada if( variabel == 0) maka menampilkan pilihan mau return ke mainmenu atau quit .*/

int score(int moves, int mode);
/* 	Author : Gefi Aulia Sanjaya 
   	I.S : score = Nil
   	F.S : Mengembalikan nilai score */
// 

int chooseMode(int language);
/* Author : Gefi Aulia Sanjaya 
   I.S : mode belum dipilih
   F.S : mengembalikan nilai chooseMode antara 3/4/5 */

boolean checkWinner(stack S, int mode); //untuk cek apakah sudah ada tower yang diisi dengan semua cakram yang ada
/* Author : Muhammad Rasyid Fadlurrahman  
* I.S : stack S mungkin kosong atau ada isi 
   F.S : mengembalikan nilai true apabila sudah ada tersusun lengkap pada tiang tengah atau bawah, dan false apabila belum ada yang tersusun lengkap
*/

char* descLevel(int mode, int language);
/* Author : Salma Syawalan Putriadhinia 
* I.S : Mode sudah terdefinisi
  F.S : Mengembalikan string yang mendeskripsikan level ketika suatu mode dipilih
*/

void showIsWin(char nama[20], boolean isWin, int moves, int mode, int language);
/* Author : Salma Syawalan Putriadhinia 
* I.S : kondisi menang atau tidaknya pemain sudah ditentukan
  F.S : Menampilkan banyak moves dan skor jika pemain menang, 
        menampilkan keterangan bahwa pemain menyerah ketika pemain tidak dapat menyelesaikan permainan
*/

void play(int mode, boolean *isWin, stack Tower1, stack Tower2, stack Tower3, int *moves, int language);
/* Author : Salma Syawalan Putriadhinia 
* I.S : mode permainan sudah dipilih
  F.S : memulai permainan, permainan berlangsung sampai pemain menang atau menyerah
*/

void banner();
/* Author : Muhammad Rasyid Fadlurrahman 
* I.S : program belum berjalan 
   F.S : Menampilkan banner game pada bagian atas interface
*/

void showWelcome(int language);  //modul untuk menampilkan ucapan selamat bermain dalam game
/* Author : Muhammad Rasyid Fadlurrahman 
* I.S : program belum berjalan 
   F.S : Menampilkan ucapan selamat datang di game hanoi tower
*/

void showBegin(); //menampilkan tampilan awal pada game
/* Author : Muhammad Rasyid Fadlurrahman 
* I.S : program belum berjalan 
  F.S : Menampilkan tampilan awal game hanoi tower
*/

void saveToFile(Data pemain); //modul untuk menyimpan data-data yang sudah dimainkan oleh user ke file 
/* Author : Muhammad Rasyid Fadlurrahman 
* I.S : data pemain belum terdapat di file 
  F.S : Menyimpan data pemain di file
*/

void sortFile(Data pemain); // modul untuk mengurutkan file secara descending
/* Author : Muhammad Rasyid Fadlurrahman 
* I.S : file belum terurut
  F.S : file terurut secara descending berdasarkan jumlah score
*/

void printHighscore(int language, char nama[20]); //modul untuk menampilkan highscore mana yang akan ditampilkan, setelah memiilih modul akan memanggil modul tertentu
/* Author : Muhammad Rasyid Fadlurrahman 
* I.S : mengambil data dari file
   F.S : menampilkan highhscore 10 besar sesuai mode 
*/

void printEasy(int language, char nama[20]);  //modul menampilkan highscore mode mudah 
/* Author : Muhammad Rasyid Fadlurrahman 
* I.S : mengambil data dari file
   F.S : menampilkan highhscore 10 besar mode mudah 
*/

void printMedium(int language, char nama[20]);  //modul menampilkan highscore mode sedang
/* Author : Muhammad Rasyid Fadlurrahman 
* I.S : mengambil data dari file
   F.S : menampilkan highhscore 10 besar mode Sedang 
*/

void printHard(int language, char nama[20]);  //modul menampilkan highscore mode sulit
/* Author : Muhammad Rasyid Fadlurrahman 
* I.S : mengambil data dari file
   F.S : menampilkan highhscore 10 besar mode Sulit
*/

void makeOutputBlue(); //modul untuk mengubah warna font menjadi biru
/* Author : Muhammad Rasyid Fadlurrahman 
* I.S : warna font terdefinisi
   F.S : menampilkan warna font biru
*/

void makeOutputWhite(); //modul untuk mengubah warna font menjadi putih
/* Author : Muhammad Rasyid Fadlurrahman 
* I.S : warna font terdefinisi
   F.S : menampilkan warna font putih
*/

#endif
