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
    int choose, mode, language1;
    char nama[20];

    buatTower(&Tower1);
    buatTower(&Tower2);
    buatTower(&Tower3);

    while (true)
    {
        banner();
        inputUname(nama);
        language = chooseLanguage(); //butuh kondisi pada setiap interface
        choose = printMenu(); //Menampilkan Main Menu

        switch (choose)
        {
        case 1: //play
            banner();
            mode = chooseMode(); //butuh parameter kondisi bahasa
            //modul untuk main
            system("pause");
            break;
        case 2: //tutorial
            banner();
            printTutorial(); //butuh parameter kondisi bahasa
            system("pause");
            break;
        case 3: //highscore
            printHighscore();
            system("pause");
            break;
        case 0: //Exit Program
            exit(0);
            break;
        }

    }
    
}