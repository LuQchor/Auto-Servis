#pragma once
#ifndef HEADER_H
#define HEADER_H

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <time.h>


typedef struct automobil
{
    char proizvodac[31];
    char model[31];
    char godiste[31];
    char motor[15];

}AUTOMOBIL;

typedef struct listaautomehanicar
{
    char* ime;
    char* prezime;
    int id;
    struct listaautomehanicar* SljedecaGlava;
}AUTOMEHANICAR;

AUTOMOBIL* ZauzimanjeAuta(void);
AUTOMEHANICAR* ZauzimanjeAutomehanicara(void);

AUTOMOBIL* PokNaAutomobil;
AUTOMEHANICAR* Glava;
FILE* fileautomehanicar;
AUTOMEHANICAR* CiljanaLista;
int n;
long size;
int brojzaposlenihautomehanicra;
int uvjet;
AUTOMEHANICAR* OdabraniAutomehanicar;
FILE* fileracun;
int znk;
FILE* ispisracuna;


AUTOMEHANICAR* NapraviListu();
void unos(char**);
AUTOMEHANICAR* UnesiUGlavu(AUTOMEHANICAR*);
void ZaposliAutohemanicara(void);
void manualniunos(char** pok);
int ProlazKrozListu(AUTOMEHANICAR*);
AUTOMEHANICAR* PretrazivanjeListe(AUTOMEHANICAR*, int);
void ObrisiClana(AUTOMEHANICAR** Glava, AUTOMEHANICAR*);
AUTOMEHANICAR* ObrisiCjeluListu(AUTOMEHANICAR*);
void ZapisUFile(AUTOMEHANICAR* GlavaProlaza);
void BrojacZaposlenihAutomehanicara();
void TrenutnoVrijeme(void);
char odabranidan[15];

int AutomehanicariGlavniIzbornik();
int OdabirAutomehanicara();

int GlavniIzbornik();
int OdabirMarke();

int NacinServisa();
int MaliServis();
int VelikiServis();

char* nacinservisa;
char* paketservisa;

void malibudget(void);
void maliregular(void);
void malipremium(void);
void velikibudget(void);
void velikiregular(void);
void velikipremium(void);

void pretrazivanjeracuna(void);
void maliizbornik(void);

int VwModeli();
int Arteon();
int Arteon2017_2020();
int Arteon2020();
int Cc();
int CC2009();
int Golf();
int Golf1974();
int Golf1983();
int Golf1991();
int Golf1997();
int Golf2003();
int Golf2008();
int Golf2012();
int Golf2020();
int Jetta();
int Jetta1974();
int Jetta1984();
int Jetta1992();
int Jetta1998();
int Jetta2005();
int Jetta2010();
int Passat();
int Passat1980();
int Passat1988();
int Passat1993();
int Passat1996();
int Passat2005();
int Passat2010();
int Passat2014();
int Passat2020();
int Phaeton();
int Phaeton2004();
int Polo();
int Polo1975();
int Polo1981();
int Polo1994();
int Polo2001();
int Polo2009();
int Polo2017();

int AudiModeli();
int A1();
int A12010();
int A12015();
int A12019();
int A3();
int A31996();
int A32003();
int A32012();
int A32020();
int A6();
int A61994();
int A61997();
int A62004();
int A62011();
int A62018();

int SeatModeli();
int Ateca();
int Ateca2016();
int Ateca2020();
int Ibiza();
int Ibiza1984();
int Ibiza1993();
int Ibiza2002();
int Ibiza2008();
int Ibiza2017();
int Leon();
int Leon1999();
int Leon2005();
int Leon2013();
int Leon2020();

int SkodaModeli();
int Fabia();
int Fabia1999();
int Fabia2007();
int Fabia2014();
int Fabia2020();
int Octavia();
int Octavia1996();
int Octavia2004();
int Octavia2013();
int Octavia2017();
int Octavia2020();

#endif