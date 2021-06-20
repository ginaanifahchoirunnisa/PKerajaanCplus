#include"kingdom.h"
#include<string.h>
#include<iostream>
#include<stdlib.h>
using namespace std;


void CreateEmptyTree(Tree *tree){
	(*tree) = NULL;
}

bool IsEmpty(Tree Tree)
{
    if(Tree == NULL )return NULL;
}

address CreateTree(address Root, infotype Nama,infotype Status, int Umur)
{
    if(Root == NULL)
    {
        address NewTree;
        NewTree = (address)malloc(sizeof(Kingdom));
        strcpy(NewTree->nama,Nama);
        strcpy(NewTree->status,Status);
        NewTree->umur = Umur;
        NewTree->FS = NULL;
        NewTree->NB = NULL;
        NewTree->PR = NULL;
        Root = NewTree;
    }else{
        printf("\n\t\t(Root sudah ada !!!)\n");
    }

    return Root;

}

address CreateNode(Tree *Root, infotype Nama, infotype Status, int Umur)
{
    address NodeBaru;
    NodeBaru = (address)malloc(sizeof(NodeBaru));
    strcpy(NodeBaru->nama,Nama);
    strcpy(NodeBaru->status,Status);
    NodeBaru->umur = Umur;
    return NodeBaru;

}

void IsiTree(Tree Root,infotype Nama, infotype Status, int Umur)
{

    if(Root==NULL)
    {
        printf("\nSilahkan buat root terlebih dahulu !!! (Root empty)");
        return;
    }
    //variabel temp sebagai penyimpan alamat dari Root dan ptr sebagai penyimpan alamat dari pengalokasian data baru
    address temp,ptr;


}


address Search(Tree Root, infotype Data)
{
    address temp;

    temp = Root;

    if(Root == NULL)
    {
        printf("\nTidak ada isi dalam tree");
        return NULL;
    }


    while(Root != NULL)
    {
        //Kondisi ketika data nama dari Root sama dengan yang dicari
        if(temp->nama == Data)
        {
            printf("%s",temp->nama);
            return temp;
        }
        //ketika FirstSon dari temp tidak kosong
        while(temp->FS != NULL)
        {
            //maka temp diisi dengan temp->FirstSon
            temp = temp->FS;
            if(temp->nama == Data)
            {
                return temp;
            }else if(temp->NB != NULL){
                while(temp->NB != NULL)
                {
                    temp = temp->NB;
                    if(temp->nama == Data)
                    {
                        return temp;
                    }
                }

            }
            temp = temp->PR->FS;
        }
        return temp;

    }
    return NULL;

}


/*
void IsiTree(Tree Root,infotype Nama, infotype Status, int Umur)
{
     infotype parent;
    address newNode, Temp;
    if(Root == NULL)
    {
        printf("Root belum dibuat , silahkan buat Root terlebih dahulu\n");
        return;
    }

    newNode = CreateNode(&Root,Nama,Status,Umur);
    if(Root != NULL)
    {
        do{
            printf("\nMasukkan Parent ==> ");
            fflush(stdin);
            scanf("%s",&parent);
        }while(Search(Root,parent)==NULL);

        Temp = Search(Root,parent);

        if(parent != NULL)
        {
            newNode->PR = Temp;
            if(Temp->FS==NULL)
            {
                //sambung ke new node langsung
                Temp->FS = newNode;
            }
            else{
                Temp = Temp->FS;
                while(Temp->NB != NULL)
                {
                    Temp = Temp->NB;
                }
                //insert new node disini
                Temp->NB = newNode;
            }
        }
        else{
            printf("Parent berisi NULL\n");
        }
    }
    else{
        Root = newNode;
        printf("\nNode akan menjadi root karena tree kosong");
    }


}
*/



//address

