//mainHanoiTower.c
/*
 *	File          : mainHanoiTower.c
 *	Deskripsi     : Main Program Hanoi Tower Game, menggunakan ADT stackHanoi dan hanoiTower untuk 
 *                  membuat Game hanoi tower yang dimana pada mainHanoiTower semua modul di itegrasikan menjadi sebuah game Hanoi Tower
 *  Author        : Muhammad Rasyid Fadlurrahman - 201524019
 *                  Gefi Aulia Sanjaya - 201524008
 *                  Salma Syawalan Putriadhinia - 201524027
 *  IDE           : Dev C++ 
 */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "hanoiTower.h"

int main(){
    stack Tower1; //deklarasi tower ke 1
    stack Tower2; //deklarasi tower ke 2
    stack Tower3; //deklarasi tower ke 3
    int language, i; //language adalah variable untuk menyimpan bahasa yang digunakan // i untuk var iterasi 
    char nama[20];

    buatTower(&Tower1); //make state that tower 1 is empthy
    buatTower(&Tower2); //make state that tower 2 is empthy
    buatTower(&Tower3); //make state that tower 3 is empthy

    //algorithm
    showBegin(); //menampilkan tampilan awal
    system("cls");
    
    banner();
    inputUname(nama); //menu input username
    system("cls");

    language = chooseLanguage(); //menu pilih bahasa
    system("cls");

    showWelcome(language); //menampilkan selamat bermain
    system("cls");

    while (true)
    {
        int choose, mode, moves = 0; // choose untuk var menyimpan pilihan // var mode untuk menyimpan mode yang dipilih // var moves untuk menyimpan berapa step yang user butuhkan untuk menyelesaikan game
        boolean isWin = false; // isWin untuk menandai apakah player sudah menang atau belum

        system("cls");
        choose = printMenu(language, nama); //Menampilkan Main Menu
        system("cls");

        switch (choose)
        {
        case 1: //play
            mode = chooseMode(language); //memilih mode
            if(mode == 0){ //apabila mode 0 maka akan kembali ke main menu
                continue;
            }
            play(mode, &isWin, Tower1, Tower2, Tower3, &moves, language); //menampilkan permainan
            showIsWin(nama, isWin, moves, mode, language); //menampilkan menang atau surender (GAMEOVER)
            system("pause");
            break;
        case 2: //tutorial
            printTutorial(language); //meanmpilkan tutorial
            system("pause");
            break;
        case 3: //highscore
            printHighscore(language, nama); //menampilkan highscore
            system("pause");
            break;
        case 0: //Exit Program
            exit(0);
            break;
        }

    }
    
}
