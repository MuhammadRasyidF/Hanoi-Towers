//hanoiTower.c
/*
 *	File          : stackHanoi.h
 *	Deskripsi     : implementasi header file dari ADT Stack [Linked List]
 *  Author        : Muhammad Rasyid Fadlurrahman - 201524019
 *                  Gefi Aulia Sanjaya - 201524008
 *                  Salma Syawalan Putriadhinia - 201524027 
 *  IDE           : Dev C++ 
 */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include "hanoiTower.h"

//fitur username
void inputUname(char nama[20]){
/* Author : Muhammad Rasyid Fadlurrahman 
* I.S : nama = NULL
   F.S : mengembalikan nama yang sudah diinputkan 
*/
	int i;
    for (i=0 ; i < 11 ; i++) //print banner username
  		printf("%c", 219);
   	printf(" USERNAME ");
	for (i=0 ; i < 11 ; i++)
   		printf("%c", 219);
   printf("\n\n");
   printf("\n Username	: ");
   scanf("%s", nama); fflush(stdin);
   printf("\n");
}

//fitur choose language
int chooseLanguage(){
/*	Author : Salma Syawalan Putriadhinia
I.S. : bahasa belum dipilih
F.S. : mengembalikan nilai 1 untuk bahasa Indonesia dan nilai 2 untuk bahasa Inggris*/
	int choose = 0;
	int i;
	while(choose < 1 || choose > 2){
		system("cls");
		banner();
		for(i = 0; i < 11; i++){
			printf("%c", 219);	
		}
		printf(" LANGUAGE ");
		for(i = 0; i < 11; i++){
			printf("%c", 219);	
		}
		printf("\n\n");
		printf("[1] ID		[2] EN\n");
		printf("\npilihan bahasa anda : ");
		scanf("%d", &choose); fflush(stdin);
	}
	return choose;
}

//fitur main menu
int printMenu(int language, char nama[20]){
/* 	Author : Gefi Aulia Sanjaya 
I.S : Layar kosong
F.S : Menampilkan tampilan Main Menu ke layar*/
	int choose, i;
	
	
	
	while(choose < 0 || choose > 3){
		system("cls");
		banner();
		for(i = 0; i < 11; i++){
			printf("%c", 219);	
		}
		printf(" MAINMENU ");
		for(i = 0; i < 11; i++){
			printf("%c", 219);	
		}
		printf("\n\n");

		if(language == 1){
			printf(" Nama Pemain : %s\n\n", nama);
			printf(" [1] Bermain\n");
		  	printf(" [2] Tutorial\n");
		   	printf(" [3] Highscore\n");
		   	printf(" [0] Keluar\n\n");
		   	printf(" Pilihan : "); scanf("%d", &choose); fflush(stdin);
		} else{
			printf(" Username : %s\n\n", nama);
			printf(" [1] Play\n");
		  	printf(" [2] Tutorial\n");
		   	printf(" [3] Highscore\n");
		   	printf(" [0] Exit\n\n");
		   	printf(" Your Choice : "); scanf("%d", &choose); fflush(stdin);
		}
	}
    
	return choose;
}

//fitur tutorial
int printTutorial(int language){
	/*	Author : Salma Syawalan Putriadhinia
	I.S. : tutorial, cara bermain, dan credits belum ditampilkan ke layar
	F.S. : pada layar telah tampil penjelasan permainan, cara bermain, dan juga credits mengenai identitas pembuat program.*/
	int i;
	for (i=0 ; i < 58 ; i++)
   		printf("%c", 223);
   	printf("\n");
	printf("                        HANOI TOWER\n");
	for (i=0 ; i < 58 ; i++)
   		printf("%c", 220);
   	printf("\n\n");
   	if(language == 1){
		printf("[1] Permainan ini terdiri dari tiga tiang dan sejumlah\n");
		printf("    cakram antara lain 3 cakram, 4 cakram, dan 5 cakram,\n");
		printf("    dengan ukuran yang berbeda-beda yang dapat dimasukan\n");
		printf("    ke tiang mana saja.\n");
		printf("[2] Permainan dimulai dengan cakram-cakram yang tertumpuk\n");
		printf("    berurutan berdasarkan ukuran dalam tiang yang paling\n");
		printf("    kiri, cakram terbesar diletakkan terbawah dan cakram\n");
		printf("    terkecil diletakkan teratas, sehingga membentuk\n");
		printf("    kerucut.\n");
		printf("[3] Pemain harus memindahkan cakram ke tiang lain, baik\n");
		printf("    tiang tengah atau tiang kanan, sampai susunan cakram\n");
		printf("    tersusun di tiang lain\n\n");
		printf("========================= PANDUAN ========================\n\n");
		printf("[1] Untuk memindahkan cakram, pemain harus menginputkan\n");
		printf("    angka yang merepresentasikan tower dimana cakram\n");
		printf("    tersebut berasal lalu klik enter.\n");
		printf("[2] Setelah itu, pemain harus menginputkan angka yang\n");
		printf("    merepresentasikan tower yang dituju lalu klik enter\n\n");
		printf("========================== ATURAN ========================\n\n");
		printf("[1] Pemain hanya dapat memindahkan satu cakram dalam satu\n");
		printf("    waktu.\n");
		printf("[2] Pemain tidak boleh meletakkan cakram di atas cakram lain\n");
		printf("    yang lebih kecil.\n\n");
		printf("========================= TENTANG =========================\n");
		printf("Permainan ini dibuat dengan menggunakan bahasa C\n\n");
		printf("Author : \n");
		printf("[1] Gefi Aulia Sanjaya\n");
		printf("[2] Muhammad Rasyid Fadlurrahman\n");
		printf("[3] Salma Syawalan Putriadhinia\n\n");
		printf("==========================================================\n");
	}else{
		printf("[1] This game consists of three towers and a number\n");
		printf("    of discs including 3 discs, 4 discs, and 5 discs,\n");
		printf("    with different sizes that can be inserted into\n");
		printf("    any tower.\n");
		printf("[2] The game starts with the discs stacked in\n");
		printf("    order according to size in the far left tower,\n");
		printf("    the largest disc is placed at the bottom and the\n");
		printf("    smallest disc is placed at the top, thus forming\n");
		printf("    a cone.\n");
		printf("[3] Players must move the disc to another tower,\n");
		printf("    either the center tower or the right tower, until\n");
		printf("    the discs are arranged on the other tower.\n\n");
		printf("========================= TUTORIAL ========================\n\n");
		printf("[1] To move the disc, the player must input\n");
		printf("    number representing the tower where the disc\n");
		printf("    comes from then click enter.\n");
		printf("[2] After that, the player must input the number that\n");
		printf("    represents the goal tower then click enter\n");
		printf("========================== RULES ==========================\n\n");
		printf("[1] Players can only move one disc at a time\n");
		printf("[2] Players may not place a disc on top of another,\n");
		printf("    smaller disc.\n\n");
		printf("========================== ABOUT ==========================\n");
		printf("This game is made in C. language\n\n");
		printf("Author : \n");
		printf("[1] Gefi Aulia Sanjaya\n");
		printf("[2] Muhammad Rasyid Fadlurrahman\n");
		printf("[3] Salma Syawalan Putriadhinia\n\n");
		printf("==========================================================\n");
	}
}

//fitur pindah cakram
void moveCakram(stack *a, stack *b, boolean *isMoved){
/*	Author : Muhammad Rasyid Fadlurrahman
I.S. : cakram teratas dari stack a belum berpindah
F.S. : cakram sudah berpindah ke stack b*/
    infotype temp;
    if(InfoTop(*a) < InfoTop(*b) || isTowerEmpty((*b))){
    	keluarCakram(a, &temp);
    	masukCakram(b, temp);
    	*isMoved = true;
    	return;
	}
	*isMoved = false;
}

//fitur menampilkan tower
void showTowers(stack a, stack b, stack c, int mode){
/*	Author : Salma Syawalan Putriadhinia
I.S. : ketiga tower belum ditampilkan ke layar, stack a, stack b, stack c, dan mode sudah terdefinisi
F.S. : ketiga tower sudah ditampilkan ke layar*/

	//menampilkan isi dari stack a, b, dan c dalam bentuk hanoi tower
	printTower(a, mode);	
	printf("\nTower 1\n\n");
	printTower(b, mode);
	printf("\nTower 2\n\n");
	printTower(c, mode);
	printf("\nTower 3\n");
}


int score(int moves, int mode){
/* 	Author : Gefi Aulia Sanjaya 
   	I.S : score = Nil
   	F.S : Mengembalikan nilai score */
	int temp, score = 0;
	
	temp = moves - (pow(2,mode) -1 ); // untuk mencari moves yang lebih dari minimum
	if(temp == 0){
		score = mode * 1000;
	}else{
		score = (mode * 1000) - (temp *(300/mode)) - ((temp - 1)* 10);
	}
	return score;
}

int chooseMode(int language){
/* Author : Gefi Aulia Sanjaya 
   I.S : mode belum dipilih
   F.S : mengembalikan nilai chooseMode antara 3/4/5 
*/	
	int choose, i;
	
	while(choose < 0 || choose > 3){
		system("cls");
		banner();
		for(i = 0; i < 11; i++){
			printf("%c", 219);	
		}
		printf(" GAMEMODE ");
		for(i = 0; i < 11; i++){
			printf("%c", 219);	
		}
		printf("\n\n");
		if(language == 1){
		printf(" Pilih Mode Permaian :\n");
		printf(" [1] Mudah (3 Cakram)\n");
	  	printf(" [2] Sedang (4 Cakram)\n");
	   	printf(" [3] Sulit (5 Cakram)\n");
	   	printf(" [0] Kembali\n");
	   	printf(" Pilihan : "); scanf("%d", &choose); fflush(stdin);
	   }else{
		printf(" Choose Game Mode :\n");
		printf(" [1] Easy (3 Disks)\n");
	  	printf(" [2] Medium (4 Disks)\n");
	   	printf(" [3] Hard (5 Disks)\n");
	   	printf(" [0] Back\n");
	   	printf(" Your Choice : "); scanf("%d", &choose); fflush(stdin);
	   }
	}

   return choose == 1 ? 3 : choose == 2 ? 4 : choose == 3 ? 5 : 0;
}

boolean checkWinner(stack S, int mode){
/* Author : Muhammad Rasyid Fadlurrahman 
* I.S : stack S mungkin kosong atau ada isi 
   F.S : mengembalikan nilai true apabila sudah ada tersusun lengkap pada tower tengah atau bawah, dan false apabila belum ada yang tersusun lengkap
*/
   if(hitungBanyakCakram(S) == mode){
      return true;
   }

   return false;
}


char* descLevel(int mode, int language){
/* Author : Salma Syawalan Putriadhinia 
* I.S : Mode sudah terdefinisi
  F.S : Mengembalikan string yang mendeskripsikan level ketika suatu mode dipilih
*/
	switch(mode){	//inputan mode akan menenentukan string yang akan dikembalikan ke modul pemanggil
		case 3:
			if(language == 1){
				return "Mudah";
			}else{
				return "Easy";
			}
		case 4:
			if(language == 1){
				return "Sedang";
			}else{
				return "Medium";
			}
		case 5:
			if(language == 1){
				return "Sulit";
			}else{
				return "Hard";
			}
	}
}

void showIsWin(char nama[20], boolean isWin, int moves, int mode, int language){
/* Author : Salma Syawalan Putriadhinia 
* I.S : kondisi menang atau tidaknya pemain sudah ditentukan
  F.S : Menampilkan banyak moves dan skor jika pemain menang, 
        menampilkan keterangan bahwa pemain menyerah ketika pemain tidak dapat menyelesaikan permainan
*/
	system("cls");
	banner();

	int i;
	for (i=0 ; i < 11 ; i++)
           printf("%c", 219);
    printf(" GAMEOVER ");
    for (i=0 ; i < 11 ; i++)
           printf("%c", 219);
    printf("\n\n");
    
	if(language == 1){
		if(isWin){
			printf("Selamat!\nAnda berhasil menyelesaikan \npermainan Hanoi Tower \ndengan %d langkah dalam mode %s !\n\n", moves, descLevel(mode,1));
			printf("Skor anda : %d\n\n", score(moves, mode));
			Data pemain;
			strcpy(pemain.nama, nama);
			pemain.mode = mode;
			pemain.moves = moves;
			pemain.score = score(moves, mode);
			saveToFile(pemain); //save to file
			sortFile(pemain); //sort file
		}
		else{
			printf("Anda memilih untuk menyerah...\n\n");
		}
	}else{
		if(isWin){
			printf("Congratulations!\nYou have won Hanoi Tower Game \nwithin %d steps at %s mode!\n\n", moves, descLevel(mode,2));
			printf("Your score : %d\n\n", score(moves, mode));
			Data pemain;
			strcpy(pemain.nama, nama);
			pemain.mode = mode;
			pemain.moves = moves;
			pemain.score = score(moves, mode);
			saveToFile(pemain); //save to file
			sortFile(pemain); //sort file
		}
		else{
			printf("You have been surrender...\n\n");
		}
	}
}

void play(int mode, boolean *isWin, stack Tower1, stack Tower2, stack Tower3, int *moves, int language){
/* Author : Salma Syawalan Putriadhinia 
* I.S : mode permainan sudah dipilih
  F.S : memulai permainan, permainan berlangsung sampai pemain menang atau menyerah
*/

	int dari, ke, i;
	for(i = mode; i > 0; i--){
        masukCakram(&Tower1, i);	//tower1 diisi cakram dengan jumlah yang sesuai dengan mode permainan
	}
	
	while((*isWin) == false){
		boolean isMoved = false; //variable untuk mengecek apakah tower dipindahkan

		system("cls");
		banner();	//menampilkan banner
		switch (mode) //menampilkan ideal move (move paling sedikit yang memungkinkan) dari suatu mode
		{
			case 3:
				printf("Ideal Move : 7\n");
				break;

			case 4:
				printf("Ideal Move : 15\n");
				break;

			case 5:
				printf("Ideal Move : 31\n");
				break;

		}
		printf("\nMoves : %d\n\n", *moves);
		showTowers(Tower1, Tower2, Tower3, mode); //menampilkan ketiga tower
		if(language == 1){
			printf("\nPindahkan\ndari tower ('0' untuk menyerah) : "); scanf("%d", &dari); fflush(stdin);
		}else{
			printf("\nMove\nfrom tower ('0' to surrender) : "); scanf("%d", &dari); fflush(stdin);
		}
		if(dari == 0){	//jika pemain memilih untuk menyerah, maka akan keluar dari modul play dan kembali ke main program
			Beep(300, 300);
			return;
		}
		if(language == 1){
			printf("ke tower : "); scanf("%d", &ke); fflush(stdin);
		}else{
			printf("to tower : "); scanf("%d", &ke); fflush(stdin);
		}
		Beep(300, 300);
		
		//move menggunakan switch
		switch(dari){
			case 1 :{ 	//jika tower yang akan diambil cakramnya adalah tower1
				if(!isTowerEmpty(Tower1)){
					if(ke == 2)	//jika tower yang menjadi tujuan cakram dipindahkan adalah tower2
						moveCakram(&Tower1, &Tower2, &isMoved);	//memindahkan cakram dari tower1 ke tower2
					else if(ke == 3)	//jika tower yang menjadi tujuan cakram dipindahkan adalah tower3
						moveCakram(&Tower1, &Tower3, &isMoved);	//memindahkan cakram dari tower1 ke tower3
					if(isMoved) //memeriksa apakah cakram berhasil dipindahkan
						(*moves)++;	//perhitungan moves bertambah
				}
				break;
			}
			case 2:{	//jika tower yang akan diambil cakramnya adalah tower2
				if(!isTowerEmpty(Tower2)){
					if(ke == 1)		//jika tower yang menjadi tujuan cakram dipindahkan adalah tower1
						moveCakram(&Tower2, &Tower1, &isMoved);	//memindahkan cakram dari tower2 ke tower1
					else if(ke == 3)	//jika tower yang menjadi tujuan cakram dipindahkan adalah tower3
						moveCakram(&Tower2, &Tower3, &isMoved);	//memindahkan cakram dari tower2 ke tower3
					if(isMoved) //memeriksa apakah cakram berhasil dipindahkan
						(*moves)++;
				}
				break;
			}
			case 3:{	//jika tower yang akan diambil cakramnya adalah tower3
				if(!isTowerEmpty(Tower3)){
					if(ke == 1)
						moveCakram(&Tower3, &Tower1, &isMoved);	//memindahkan cakram dari tower3 ke tower1
					else if(ke == 2)
						moveCakram(&Tower3, &Tower2, &isMoved);	//memindahkan cakram dari tower3 ke tower2
					if(isMoved) 
						(*moves)++;
				}
				break;
			}
		}
		
		//cek kondisi menang;
		(*isWin) = checkWinner(Tower2, mode);
		if((*isWin))
			continue;
		(*isWin) = checkWinner(Tower3, mode);
	}
}

void banner(){
/* Author : Muhammad Rasyid Fadlurrahman 
* I.S : program belum berjalan 
   F.S : Menampilkan banner game pada bagian atas interface
*/
   int i;
	for (i=0 ; i < 32 ; i++)
   		printf("%c", 223);
   	printf("\n");
   	printf("           HANOI TOWER          \n");
   	for (i=0 ; i < 32 ; i++)
   		printf("%c", 220);
   	printf("\n\n");
}

void showWelcome(int language){
/* Author : Muhammad Rasyid Fadlurrahman 
* I.S : program belum berjalan 
   F.S : Menampilkan ucapan selamat bermain game hanoi tower
*/
	int i;
	if (language == 1)
	{
		for (i=0 ; i < 32 ; i++)
			printf("%c", 219);
		printf("\n\n");
		printf("        SELAMAT BERMAIN         \n");
		printf("        GAME HANOI TOWER        \n\n");
		for (i=0 ; i < 32 ; i++)
			printf("%c", 219);
		printf("\n\n");
	}
	else{
		for (i=0 ; i < 32 ; i++)
			printf("%c", 219);
		printf("\n\n");
		printf("             WELCOME              \n");
		printf("               TO                \n");
		printf("        HANOI TOWER GAME         \n\n");
		for (i=0 ; i < 32 ; i++)
			printf("%c", 219);
		printf("\n\n");
	}
	system("pause");
}

void showBegin(){
/* Author : Muhammad Rasyid Fadlurrahman 
* I.S : program belum berjalan 
  F.S : Menampilkan tampilan awal game hanoi tower
*/
	int i, h, j = 1;

	for (i=0 ; i < 32 ; i++)
		printf("%c", 219);
	printf("\n\n");
	printf("           HANOI TOWER         \n\n");
	for(h = 0; h < 5 ; h++){
		for(i = 0; i < (15 - j); i++)
			printf(" ");
		for(i = 0; i <= (2 * j) + 1; i++)
			printf("%c", 178);
		printf("\n");
		j++;
	}
	for(i = 0; i < 10; i++)
		printf(" ");
	for(i = 0; i <= 11; i++)
		printf("=");
	printf("\n\n");
	for (i=0 ; i < 32 ; i++)
		printf("%c", 219);
	printf("\n\n");

	Beep(500,500);

	system("pause");
}

void saveToFile(Data pemain){
/* Author : Muhammad Rasyid Fadlurrahman 
* I.S : data pemain belum terdapat di file 
  F.S : Menyimpan data pemain di file sebanyak maksimal 15 data, kalau penuh, timpa data paling bawah
*/
	//Make record to read the file
	Data temp[15] = {}; //maks 15 data in file

	//deklarasi file
	FILE *fptr;

	//open file for read the file
	switch (pemain.mode)
	{
	case 3:
		fptr = fopen("Mode Mudah.dat", "rb");
		break;
	case 4:
		fptr = fopen("Mode Sedang.dat", "rb");
		break;
	case 5:
		fptr = fopen("Mode Sulit.dat", "rb");
		break;
	}

	if(fptr == Nil){ //if there is nothing file with specific file name write new one
		temp[0] = pemain;
		fclose(fptr);

		//open file for write in new file
		switch (pemain.mode)
		{
		case 3:
			fptr = fopen("Mode Mudah.dat", "wb");
			break;
		case 4:
			fptr = fopen("Mode Sedang.dat", "wb");
			break;
		case 5:
			fptr = fopen("Mode Sulit.dat", "wb");
			break;
		}

		fwrite(temp, sizeof(Data), 15, fptr);
		fclose(fptr);
	}
	else{ //if there is file with specific file name write the file with new content
		fread(temp, sizeof(Data), 15, fptr);

		int i = 0;
		while (temp[i].nama[0] != Nil && i < 14)
		{
			if(strcmp(temp[i].nama, pemain.nama) == 0){ //check is there the name of user in the file or no 
				if (temp[i].score < pemain.score){ //check if the score of user in the file is lower than new score, overwrite 
					temp[i] = pemain;
					fclose(fptr);

					//open file for write new file
					switch (pemain.mode)
					{
					case 3:
						fptr = fopen("Mode Mudah.dat", "wb");
						break;
					case 4:
						fptr = fopen("Mode Sedang.dat", "wb");
						break;
					case 5:
						fptr = fopen("Mode Sulit.dat", "wb");
						break;
					}

					fwrite(temp, sizeof(Data), 15, fptr);
					fclose(fptr);
				}
				return;
			}
			i++; //to next record
		}

		//if there is empthy space in record or in last record and new name
		temp[i] = pemain;
		fclose(fptr);
		//open file for write new file
		switch (pemain.mode)
		{
		case 3:
			fptr = fopen("Mode Mudah.dat", "wb");
			break;
		case 4:
			fptr = fopen("Mode Sedang.dat", "wb");
			break;
		case 5:
			fptr = fopen("Mode Sulit.dat", "wb");
			break;
		}
		fwrite(temp, sizeof(Data), 15, fptr);
		fclose(fptr);
	}
}

void sortFile(Data pemain){
/* Author : Muhammad Rasyid Fadlurrahman 
* I.S : file belum terurut
  F.S : file terurut secara descending berdasarkan jumlah score
*/
	int i, j;
	Data temp; //place to save temporary data
	//Make record to read the file
	Data dataFile[15] = {}; //maks 15 data in file

	//deklarasi file
	FILE *fptr;

	//open file for read the file
	switch (pemain.mode)
	{
	case 3:
		fptr = fopen("Mode Mudah.dat", "rb");
		break;
	case 4:
		fptr = fopen("Mode Sedang.dat", "rb");
		break;
	case 5:
		fptr = fopen("Mode Sulit.dat", "rb");
		break;
	}

	if(fptr == Nil){ //if there is nothing file with specific file name, return
		return;
	}

	fread(dataFile, sizeof(Data), 15, fptr);

	for(i = 0 ; i < 14 ; i++){
        if(dataFile[i].nama[0] == Nil)
            continue;
        for(j = i ; j < 15 ; j++){
            if(dataFile[j].nama[0] == Nil)
                continue;
            if(dataFile[i].score < dataFile[j].score){
                    temp = dataFile[i];
                    dataFile[i] = dataFile[j];
                    dataFile[j] = temp;
            }
        }
    }
	fclose(fptr);

	//open file for write new file
	switch (pemain.mode)
	{
	case 3:
		fptr = fopen("Mode Mudah.dat", "wb");
		break;
	case 4:
		fptr = fopen("Mode Sedang.dat", "wb");
		break;
	case 5:
		fptr = fopen("Mode Sulit.dat", "wb");
		break;
	}
	fwrite(dataFile, sizeof(Data), 15, fptr);
	fclose(fptr);
}

void printHighscore(int language, char nama[20]){
/* Author : Muhammad Rasyid Fadlurrahman 
* I.S : mengambil data dari file
   F.S : menampilkan highhscore 10 besar
*/
	int choose, i;
	
	while(choose < 1 || choose > 3){
		system("cls");
		banner();
		for(i = 0; i < 11 ; i++){
			printf("%c", 219);	
		}
		printf(" HIGHSCORE ");
		for(i = 0; i < 10 ; i++){
			printf("%c", 219);	
		}
		printf("\n\n");
		if(language == 1){
		printf(" Pilih Mode Yang Akan Ditampilkan\n Di Highscore :\n\n");
		printf(" [1] Tampilkan Mode Mudah \n");
	  	printf(" [2] Tampilkan Mode Sedang \n");
	   	printf(" [3] Tampilkan Mode Sulit \n\n");
	   	printf(" Pilihan : "); scanf("%d", &choose); fflush(stdin);
	   }else{
		printf(" Choose Mode To Show\n In Hihghscore :\n\n");
		printf(" [1] Show Easy Mode\n");
	  	printf(" [2] Show Medium Mode\n");
	   	printf(" [3] Show Hard Mode\n\n");
	   	printf(" Your Choice : "); scanf("%d", &choose); fflush(stdin);
	   }
	}
	system("cls");

	switch (choose)
	{
	case 1:
		printEasy(language, nama);
		break;
	case 2:
		printMedium(language, nama);
		break;
	case 3:
		printHard(language, nama);
		break;
	}
	
}

void printEasy(int language, char nama[20]){
/* Author : Muhammad Rasyid Fadlurrahman 
* I.S : mengambil data dari file
   F.S : menampilkan highhscore 10 besar mode mudah 
*/
	int i;

	//Make record to read the file
	Data dataFile[15] = {}; //maks 15 data in file

	//deklarasi file
	FILE *fptr;

	//open file for read the file
	fptr = fopen("Mode Mudah.dat", "rb");

	fread(dataFile, sizeof(Data), 15, fptr);

	for (i=0 ; i < 48 ; i++)
		printf("\xDB");
	printf("\n\n");
	printf("                   HANOI TOWER        \n\n");
	for (i=0 ; i < 48 ; i++)
		printf("\xDB");
	printf("\n\n");
	switch (language)
	{
	case 1 :
		printf("                HIGHSCORE (MUDAH)         \n\n");
		for (i=0 ; i < 48 ; i++)
		printf("\xDB");
		printf("\n\n");
		printf("Rank Nama                 Mode    Moves  Skor \n");
		break;
	case 2 :
		printf("                 HIGHSCORE (EASY)        \n\n");
		for (i=0 ; i < 48 ; i++)
		printf("\xDB");
		printf("\n\n");
		printf("Rank Username             Mode    Moves  Score\n");
		break;
	}
	
	//print content of highscore
	for(i=0 ; i < 10 ; i++){
		//print empthy in table
		if(dataFile[i].nama[0] == Nil){
			printf("\n");
			continue;
		}
		//print highscore Easy mode
		if (strcmp(dataFile[i].nama, nama) == 0)
		{
			makeOutputBlue();
			printf(" %-3d %-20s %-7s %-6d %d\n", i+1, dataFile[i].nama, descLevel(dataFile[i].mode, language), dataFile[i].moves, dataFile[i].score);
			makeOutputWhite();
		}
		else{
			makeOutputWhite();
			printf(" %-3d %-20s %-7s %-6d %d\n", i+1, dataFile[i].nama, descLevel(dataFile[i].mode, language), dataFile[i].moves, dataFile[i].score);
		}
	}
	printf("\n");
	for (i=0 ; i < 48 ; i++)
		printf("\xDB");
	printf("\n");

	fclose(fptr);
}

void printMedium(int language, char nama[20]){
/* Author : Muhammad Rasyid Fadlurrahman 
* I.S : mengambil data dari file
   F.S : menampilkan highhscore 10 besar mode Sedang 
*/
	int i;

	//Make record to read the file
	Data dataFile[15] = {}; //maks 15 data in file

	//deklarasi file
	FILE *fptr;

	//open file for read the file
	fptr = fopen("Mode Sedang.dat", "rb");

	fread(dataFile, sizeof(Data), 15, fptr);

	for (i=0 ; i < 48 ; i++)
		printf("\xDB");
	printf("\n\n");
	printf("                   HANOI TOWER        \n\n");
	for (i=0 ; i < 48 ; i++)
		printf("\xDB");
	printf("\n\n");
	switch (language)
	{
	case 1 :
		printf("                HIGHSCORE (SEDANG)         \n\n");
		for (i=0 ; i < 48 ; i++)
		printf("\xDB");
		printf("\n\n");
		printf("Rank Nama                 Mode    Moves  Skor \n");
		break;
	case 2 :
		printf("                HIGHSCORE (MEDIUM)        \n\n");
		for (i=0 ; i < 48 ; i++)
		printf("\xDB");
		printf("\n\n");
		printf("Rank Username             Mode    Moves  Score\n");
		break;
	}
	
	//print content of highscore
	for(i=0 ; i < 10 ; i++){
		//print empthy in table
		if(dataFile[i].nama[0] == Nil){
			printf("\n");
			continue;
		}
		//print highscore Easy mode
		if (strcmp(dataFile[i].nama, nama) == 0)
		{
			makeOutputBlue();
			printf(" %-3d %-20s %-7s %-6d %d\n", i+1, dataFile[i].nama, descLevel(dataFile[i].mode, language), dataFile[i].moves, dataFile[i].score);
			makeOutputWhite();
		}
		else{
			makeOutputWhite();
			printf(" %-3d %-20s %-7s %-6d %d\n", i+1, dataFile[i].nama, descLevel(dataFile[i].mode, language), dataFile[i].moves, dataFile[i].score);
		}
	}
	printf("\n");
	for (i=0 ; i < 48 ; i++)
		printf("\xDB");
	printf("\n");

	fclose(fptr);
}

void printHard(int language, char nama[20]){
/* Author : Muhammad Rasyid Fadlurrahman 
* I.S : mengambil data dari file
   F.S : menampilkan highhscore 10 besar mode Sulit
*/
	int i;

	//Make record to read the file
	Data dataFile[15] = {}; //maks 15 data in file

	//deklarasi file
	FILE *fptr;

	//open file for read the file
	fptr = fopen("Mode Sulit.dat", "rb");

	fread(dataFile, sizeof(Data), 15, fptr);

	for (i=0 ; i < 48 ; i++)
		printf("\xDB");
	printf("\n\n");
	printf("                   HANOI TOWER        \n\n");
	for (i=0 ; i < 48 ; i++)
		printf("\xDB");
	printf("\n\n");
	switch (language)
	{
	case 1 :
		printf("                HIGHSCORE (SULIT)         \n\n");
		for (i=0 ; i < 48 ; i++)
		printf("\xDB");
		printf("\n\n");
		printf("Rank Nama                 Mode    Moves  Skor \n");
		break;
	case 2 :
		printf("                 HIGHSCORE (HARD)        \n\n");
		for (i=0 ; i < 48 ; i++)
		printf("\xDB");
		printf("\n\n");
		printf("Rank Username             Mode    Moves  Score\n");
		break;
	}
	
	//print content of highscore
	for(i=0 ; i < 10 ; i++){
		//print empthy in table
		if(dataFile[i].nama[0] == Nil){
			printf("\n");
			continue;
		}
		//print highscore Easy mode
		if (strcmp(dataFile[i].nama, nama) == 0)
		{
			makeOutputBlue();
			printf(" %-3d %-20s %-7s %-6d %d\n", i+1, dataFile[i].nama, descLevel(dataFile[i].mode, language), dataFile[i].moves, dataFile[i].score);
			makeOutputWhite();
		}
		else{
			makeOutputWhite();
			printf(" %-3d %-20s %-7s %-6d %d\n", i+1, dataFile[i].nama, descLevel(dataFile[i].mode, language), dataFile[i].moves, dataFile[i].score);
		}
	}
	printf("\n");
	for (i=0 ; i < 48 ; i++)
		printf("\xDB");
	printf("\n");

	fclose(fptr);
}

void makeOutputBlue(){
/* Author : Muhammad Rasyid Fadlurrahman 
* I.S : warna font terdefinisi
   F.S : menampilkan warna font biru
*/
	HANDLE hconsole;
    hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hconsole, 9);
}

void makeOutputWhite(){
/* Author : Muhammad Rasyid Fadlurrahman 
* I.S : warna font terdefinisi
   F.S : menampilkan warna font putih
*/
    HANDLE hconsole;
    hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hconsole, 15);
}
