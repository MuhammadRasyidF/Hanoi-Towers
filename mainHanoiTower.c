//mainHanoiTower.c
/*
 *	File          : mainHanoiTower.c
 *	Deskripsi     : Main Program Hanoi Tower Game
 *  Author        : Muhammad Rasyid Fadlurrahman - 201524019
 *                  Gefi Aulia Sanjaya - 201524008
 *                  Salma Syawalan Putriadhinia - 201524027 
 */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "hanoiTower.h"

int main(){
    stack Tower1;
    stack Tower2;
    stack Tower3;
    int language, i;
    char nama[20];

    buatTower(&Tower1);
    buatTower(&Tower2);
    buatTower(&Tower3);

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
        int choose, mode, moves = 0;
        boolean isWin = false;

        system("cls");
        choose = printMenu(language, nama); //Menampilkan Main Menu //butuh parameter kondisi bahasa
        system("cls");

        switch (choose)
        {
        case 1: //play
            mode = chooseMode(language); //memilih mode
            if(mode == 0){
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
            printHighscore(); //menampilkan highscore
            system("pause");
            break;
        case 0: //Exit Program
            exit(0);
            break;
        }

    }
    
}
