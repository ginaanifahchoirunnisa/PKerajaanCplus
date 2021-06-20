#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include"kingdom.h"

using namespace std;

int main()
{
    Tree FamKingdom;
    address sapi;
    int pilih;
    infotype  Nama;
    infotype Status;
    int Umur;
    CreateEmptyTree(&FamKingdom);


    while(1)
    {
        printf("\n\n");
        printf("1. Buat Root\n");
        printf("2. Isi Tree\n");
        printf("3. Penerus Kepemimpinan Selanjunya\n");
        printf("4. Cari Parent dari Orang Tertentu\n");
        printf("5. Cari Anak dari Parent Tertentu\n");
        printf("6. Cari orang dengan Jabatan tertentu dikerajaan\n");
        printf("7. Keluar\n");
        scanf("%d",&pilih);


        switch(pilih)
        {
                case 1:
                    system("cls");
                    printf("\n\t\t\t=== CREATE ROOT ===");
                    printf("\n");
                    printf("\t\tMasukkan Nama Root   ==> ");
                    scanf(" %s", &Nama);
                    printf("\n");
                    printf("\t\tMasukkan Status Root ==> ");
                    scanf(" %s", &Status);
                    printf("\n");
                    printf("\t\tMasukkan Umur Root   ==> ");
                    scanf("%d",&Umur);
                    FamKingdom = CreateTree(FamKingdom,Nama,Status,Umur);
                    printf("\n\t\tIsi ==> %s",FamKingdom->nama);
                    break;
                case 2:
                    printf("\n\n");
                    printf("\n\t\t==== Input Tree ====");
                    printf("\n\t\tMasukkan Nama   ==> ");
                    scanf("%s",&Nama);
                    printf("\n\t\tMasukkan Status ==> ");
                    scanf("%s",&Status);
                    printf("\n\t\tMasukkan Umur   ==> ");
                    scanf("%d",&Umur);
//                    IsiTree(FamKingdom,Nama,Status,Umur);
                    break;

                case 3:
                    printf("\n\t\tCOBA");
                    printf("=> ");
                    scanf("%s",&Nama);
                    sapi = Search(FamKingdom,Nama);
                    printf("%s",sapi->nama);
                    break;

                case 7:
                    exit(1);
                    break;

                default:
                    printf("\nWrong Input");
        }


                    system("pause");
                    system("cls");


    }

    return 0;
}
