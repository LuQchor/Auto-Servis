#include "header.h"

int AutomehanicariGlavniIzbornik()
{
	printf("=========================");
	printf("Automehanicari izbornik:");
	printf("===========================\n");
	printf("\t\t\tOpcija 1: Odabir automehanicara.\n");
	printf("\t\t\tOpcija 2: Dodavanje automehanicara.\n");
	printf("\t\t\tOpcija 3: Brisanje automehanicara.\n");
	printf("\t\t\tOpcija 9: Nazad\n");
	printf("\t\t\tOpcija 0: izlaz iz programa!\n");
	printf("======================================\
======================================\n");

	int uvjet = 0;
	do
	{
		uvjet = _getch() - 48;
	} while (uvjet < 0 || uvjet==4 || uvjet==5 || uvjet==6 || uvjet ==7  || uvjet==8 || uvjet>10);
	switch (uvjet)
	{
	case 1:
		fileautomehanicar = fopen("zaposleniautomehanicari.txt", "a+");
		if (fileautomehanicar == NULL)
		{
			printf("Neuspjelo otvaranje datoteke\n");
			return NULL;
		}

		BrojacZaposlenihAutomehanicara();
		n = 0;
		Glava = NapraviListu();
		if (Glava == NULL)
		{
			return 1;
		}
		while (n < brojzaposlenihautomehanicra - 1)
		{
			Glava = UnesiUGlavu(Glava);
			n++;
		}
		printf("\n");
		ProlazKrozListu(Glava);
		char nptr[100];
		char* errptr;
		printf("\n");
		do
		{
			printf("Unesi ID radnika kojeg zelis odabrati ");
			fgets(nptr, sizeof nptr, stdin);
			uvjet = strtol(nptr, &errptr, 10);
			OdabraniAutomehanicar = PretrazivanjeListe(Glava, uvjet);
		} while ((*errptr != '\n' && *errptr != '\0') || uvjet <= 0 || uvjet > 100 || OdabraniAutomehanicar == NULL);
		system("cls");
		GlavniIzbornik();
		break;
	case 2:
		fileautomehanicar = fopen("zaposleniautomehanicari.txt", "a+");
		if (fileautomehanicar == NULL)
		{
			printf("Neuspjelo otvaranje datoteke\n");
			return NULL;
		}
		BrojacZaposlenihAutomehanicara();
		n = 0;
		Glava = NapraviListu();
		if (Glava == NULL)
		{
			return 1;
		}
		while (n < brojzaposlenihautomehanicra - 1)
		{
			Glava = UnesiUGlavu(Glava);
			n++;
		}

		printf("\nTrenutno zaposleni automehanicari su:\n");
		ProlazKrozListu(Glava);
		printf("\n");
		printf("Unesi podatke o novome automehanicaru:\n");
		ZaposliAutohemanicara();
		system("cls");
		AutomehanicariGlavniIzbornik();
		break;
	case 3:
		fileautomehanicar = fopen("zaposleniautomehanicari.txt", "a+");
		if (fileautomehanicar == NULL)
		{
			printf("Neuspjelo otvaranje datoteke\n");
			return NULL;
		}
		BrojacZaposlenihAutomehanicara();
		n = 0;
		Glava = NapraviListu();
		if (Glava == NULL)
		{
			return 1;
		}
		while (n < brojzaposlenihautomehanicra - 1)
		{
			Glava = UnesiUGlavu(Glava);
			n++;
		}
		printf("\n");
		ProlazKrozListu(Glava);
		printf("\n");
		memset(nptr, 0, 100);
		errptr = NULL;
		printf("\n");
		do
		{
			printf("Unesi ID radnika kojeg zelis obrisati ");
			fgets(nptr, sizeof nptr, stdin);
			uvjet = strtol(nptr, &errptr, 10);
			CiljanaLista = ZauzimanjeAutomehanicara();
			CiljanaLista = PretrazivanjeListe(Glava, uvjet);
		} while ((*errptr != '\n' && *errptr != '\0') || uvjet <= 0 || uvjet >= 100 || CiljanaLista == NULL);
		ObrisiClana(&Glava, CiljanaLista);
		ZapisUFile(Glava);
		system("cls");
		AutomehanicariGlavniIzbornik();
		break;
	case 9:
		system("cls");
		GlavniIzbornik();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

