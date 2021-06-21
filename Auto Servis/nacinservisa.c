#include "header.h"

int NacinServisa()
{
	printf("==============================");
	printf("Nacin servisa:");
	printf("================================\n");
	printf("\t\t\tOpcija 1: Mali servis\n");
	printf("\t\t\tOpcija 2: Veliki servis\n");
	printf("\t\t\tOpcija 9: Nazad\n");
	printf("\t\t\tOpcija 0: izlaz iz programa!\n");
	printf("======================================\
======================================\n");
	int uvjet = 0;
	nacinservisa = NULL;
	nacinservisa = malloc(20 * sizeof * nacinservisa);
	if (!nacinservisa)
	{
		fputs("error: zauzimanje memorije za nacinservisa neuspjesno", stderr);
		return NULL;
	}

	do
	{
		uvjet = _getch() - 48;
	} while (uvjet < 0 || uvjet>10 || uvjet==3 || uvjet == 4 || uvjet == 5 || uvjet == 6 || uvjet == 7 || uvjet == 8);
	switch (uvjet)
	{
	case 1:
		strcpy(nacinservisa, "Mali servis");
		system("cls");
		MaliServis();
		break;
	case 2:
		strcpy(nacinservisa, "Veliki servis");
		system("cls");
		VelikiServis();
		break;
	case 9:
		nacinservisa = NULL;
		paketservisa = NULL;
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

int MaliServis()
{
	printf("=================================");
	printf("Nacin servisa:");
	printf("==================================\n");
	printf("\t\t\tOpcija 1: Budget \n");
	printf("\t\t\tOpcija 2: Regular\n");
	printf("\t\t\tOpcija 3: Premium\n");
	printf("\t\t\tOpcija 9: Nazad\n");
	printf("\t\t\tOpcija 0: izlaz iz programa!\n");
	printf("======================================\
======================================\n");
	int uvjet = 0;
	paketservisa = NULL;
	paketservisa = malloc(20 * sizeof * paketservisa);
	if (!paketservisa)
	{
		fputs("error: zauzimanje memorije za paketservisa neuspjesno", stderr);
		return NULL;
	}

	do
	{
		uvjet = _getch() - 48;
	} while (uvjet < 0 || uvjet>10 || uvjet == 4 || uvjet == 5 || uvjet == 6 || uvjet == 7 || uvjet == 8);
	switch (uvjet)
	{
	case 1:
		strcpy(paketservisa, "Budget");
		system("cls");
		GlavniIzbornik();
		break;
	case 2:
		strcpy(paketservisa, "Regular");
		system("cls");
		GlavniIzbornik();
		break;
	case 3:
		strcpy(paketservisa, "Premium");
		system("cls");
		GlavniIzbornik();
		break;
	case 9:
		system("cls");
		NacinServisa();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int VelikiServis()
{
	printf("=================================");
	printf("Nacin servisa:");
	printf("==================================\n");
	printf("\t\t\tOpcija 1: Budget \n");
	printf("\t\t\tOpcija 2: Regular\n");
	printf("\t\t\tOpcija 3: Premium\n");
	printf("\t\t\tOpcija 9: Nazad\n");
	printf("\t\t\tOpcija 0: izlaz iz programa!\n");
	printf("======================================\
======================================\n");
	int uvjet = 0;
	paketservisa = NULL;
	paketservisa = malloc(20 * sizeof * paketservisa);
	if (!paketservisa)
	{
		fputs("error: zauzimanje memorije za paketservisa neuspjesno", stderr);
		return NULL;
	}

	do
	{
		uvjet = _getch() - 48;
	} while (uvjet < 0 || uvjet>10 || uvjet == 4 || uvjet == 5 || uvjet == 6 || uvjet == 7 || uvjet == 8);
	switch (uvjet)
	{
	case 1:
		strcpy(paketservisa, "Budget");
		system("cls");
		GlavniIzbornik();
		break;
	case 2:
		strcpy(paketservisa, "Regular");
		system("cls");
		GlavniIzbornik();
		break;
	case 3:
		strcpy(paketservisa, "Premium");
		system("cls");
		GlavniIzbornik();
		break;
	case 9:
		system("cls");
		NacinServisa();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

