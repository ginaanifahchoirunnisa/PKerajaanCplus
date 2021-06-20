#ifndef KINGDOM_H_INCLUDED
#define KINGDOM_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>
#include<stdbool.h>
#include<string.h>
#include<iostream>

using namespace std;
typedef char infotype[45];
typedef struct kingFam *address;
typedef struct kingFam
{
   infotype nama;
   infotype  status; //Status di kerajaan sebagai apa
   int umur;
   address FS; //First Son
   address NB; //Next Brother
   address PR; //parent
}Kingdom;

typedef address Tree;

void CreateEmptyTree(Tree *tree);
/*
    Membuat pointer penunjuk Tree == NULL
*/

address CreateTree(address Root, infotype Nama,infotype Status, int Umur);
/*
    Membuat Root dari suatu Tree
    Berisi Nama Raja Yang Memerintah Saat ini atau keturunan
*/
address CreateNode(Tree *Root, infotype Nama, infotype Status, int Umur);

void IsiTree(Tree Root,infotype Nama, infotype Status, int Umur);
/*
    Mengisi Tree
    Dengan Root Sudah dibuat

    Jika Root == NULL, maka panggil createRoot
    Namun Jika Root != NULL maka Root akan diisi dengan menghubungkannya dengan Root


    ada pengecekan dari umur
*/

void TampilTree(Tree Root);
/*
    Menampilkan isi dari tree
*/

bool IsEmpty(Tree Root);
/*
    Mengecek apakah tree kosong atau tidak
    jika tree kosong maka return NULL
*/

address Search(Tree Root, infotype Data);
/*
    Mencari node tertentu
*/






#endif // KINGDOM_H_INCLUDED
