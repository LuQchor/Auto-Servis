#include "header.h"

extern AUTOMOBIL* PokNaAutomobil;
extern AUTOMEHANICAR* Glava;
extern FILE* fileautomehanicar;
extern int n=0;
extern AUTOMEHANICAR* CiljanaLista;
extern long size;
extern int brojzaposlenihautomehanicra;
extern int uvjet;
extern AUTOMEHANICAR* OdabraniAutomehanicar;
extern char* nacinservisa;
extern char* paketservisa;
extern FILE* fileracun;
extern int znk;
extern FILE* ispisracuna;
extern char odabranidan[15];

int main(void)
{
	PokNaAutomobil = ZauzimanjeAuta();
	OdabraniAutomehanicar = ZauzimanjeAutomehanicara();

	if (PokNaAutomobil == NULL)
	{
		return 1;
	}

	fileautomehanicar = fopen("zaposleniautomehanicari.txt", "a+");
	if (fileautomehanicar == NULL)
	{
		printf("Neuspjelo otvaranje datoteke\n");
		return 1;
	}

	fseek(fileautomehanicar, 0, SEEK_END);
	size = ftell(fileautomehanicar);
	if (size == 0)
	{
		printf("Trenutno nema zaposlenog niti jednog automehanicara,zaposli jednog\n");
		ZaposliAutohemanicara();
	}
	fseek(fileautomehanicar, 0, SEEK_SET);
	
	GlavniIzbornik();

	free(PokNaAutomobil);
	free(OdabraniAutomehanicar);
	free(nacinservisa);
	free(paketservisa);
	fclose(fileautomehanicar);
}