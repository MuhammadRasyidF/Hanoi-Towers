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
    int choose, mode, language, i;
    int moves = 0;
    boolean isWin = false;
    char nama[20];

    buatTower(&Tower1);
    buatTower(&Tower2);
    buatTower(&Tower3);

    //algorithm 
    banner();
    inputUname(nama); //menu input username
    system("cls");

    language = chooseLanguage(); //menu pilih bahasa
    system("cls");

    showWelcome(language);
    system("cls");

    while (true)
    {
        banner();
        choose = printMenu(language); //Menampilkan Main Menu //butuh parameter kondisi bahasa
        system("cls");

        switch (choose)
        {
        case 1: //play
            banner();
            mode = chooseMode(language); //butuh parameter kondisi bahasa
            /*for(i = mode; i > 0; i--){
            	
			}*/
            play(mode, &isWin, Tower1, Tower2, Tower3, &moves);
            showIsWin(isWin, moves, mode);
            system("pause");
            break;
        case 2: //tutorial
            printTutorial(language); //butuh parameter kondisi bahasa
            system("pause");
            system("cls");
            break;
        case 3: //highscore
            printHighscore();
            system("pause");
            system("cls");
            break;
        case 0: //Exit Program
            exit(0);
            break;
        }

    }
    
}
