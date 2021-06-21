#include "header.h"


int GlavniIzbornik()
{
	printf("=============================");
	printf("Pocetni izbornik:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: Odabir vozila\n");
	printf("\t\t\tOpcija 2: Automehanicari\n");
	printf("\t\t\tOpcija 3: Odaberi nacin servisa\n");
	printf("\t\t\tOpcija 4: Napravi servis\n");
	printf("\t\t\tOpcija 5: Prikazi sve racune\n");
	printf("\t\t\tOpcija 6: Pretrazivanje servisiranog vozila\n");
	printf("\t\t\tOpcija 0: izlaz iz programa!\n");
	printf("======================================\
======================================\n");
	if (strlen(PokNaAutomobil->motor) != 0)
	{
		printf("Odabrano vozilo je: %s %s %s %s\n", PokNaAutomobil->proizvodac, PokNaAutomobil->model, PokNaAutomobil->godiste, PokNaAutomobil->motor);
	}
	if (OdabraniAutomehanicar->id != NULL)
	{
		printf("Odabrani automehanicar je: %s %s %d\n", OdabraniAutomehanicar->ime, OdabraniAutomehanicar->prezime, OdabraniAutomehanicar->id);
	}
	if (nacinservisa != NULL)
	{
		printf("%s ", nacinservisa);
	}
	if (paketservisa != NULL)
	{
		printf("%s\n", paketservisa);
	}
	
	int uvjet = 0;
	do
	{
		uvjet = _getch() - 48;
	} while (uvjet < 0 || uvjet>10 || uvjet==7 || uvjet==8 || uvjet==9 );
	switch (uvjet)
	{
	case 1:
		system("cls");
		OdabirMarke();
		break;
	case 2:
		system("cls");
		AutomehanicariGlavniIzbornik();
		break;
	case 3:
		system("cls");
		NacinServisa();
		break;
	case 4:
		system("cls");
		if (strlen(PokNaAutomobil->motor) == 0)
		{
			printf("Niste odabrali automobil\n");
		}
		if (OdabraniAutomehanicar->ime == NULL)
		{
			printf("Niste odabrali automehanicara\n");
		}
		if (paketservisa == NULL)
		{
			printf("Niste odabrali servisni paket\n");
		}
		else if (strlen(PokNaAutomobil->motor) != 0 && OdabraniAutomehanicar->ime != NULL && paketservisa != NULL)
		{
			fileracun = fopen("racun.txt", "a+");
			if (fileracun == NULL)
			{
				printf("Neuspjelo otvaranje datoteke racun\n");
				return NULL;
			}
			TrenutnoVrijeme();
			fprintf(fileracun, "Servisirano vozilo je: %s %s %s %s\n", PokNaAutomobil->proizvodac, PokNaAutomobil->model, PokNaAutomobil->godiste, PokNaAutomobil->motor);
			fprintf(fileracun, "Automehanicar koji je servisirao: %s %s %d\n", OdabraniAutomehanicar->ime, OdabraniAutomehanicar->prezime, OdabraniAutomehanicar->id);
			fprintf(fileracun, "Odabrani servis je %s  %s \n", nacinservisa, paketservisa);

			if (strcmp(nacinservisa, "Mali servis") == 0)
			{
				if (strcmp(paketservisa, "Budget") == 0)
				{
					printf("asdasd");
					malibudget();
				}
				else if (strcmp(paketservisa, "Regular") == 0)
				{
					maliregular();
				}
				else if (strcmp(paketservisa, "Premium") == 0)
				{
					malipremium();
				}
			}
			else if (strcmp(nacinservisa, "Veliki servis") == 0)
			{
				if (strcmp(paketservisa, "Budget") == 0)
				{
					velikibudget();
				}
				else if (strcmp(paketservisa, "Regular") == 0)
				{
					velikiregular();
				}
				else if (strcmp(paketservisa, "Premium") == 0)
				{
					velikipremium();
				}
			}
			fprintf(fileracun, "\n");
			fclose(fileracun);
			free(PokNaAutomobil);
			PokNaAutomobil = ZauzimanjeAuta();
			free(OdabraniAutomehanicar);
			OdabraniAutomehanicar = ZauzimanjeAutomehanicara();
			free(nacinservisa);
			nacinservisa = NULL;
			free(paketservisa);
			paketservisa = NULL;
			system("cls");
			printf("Uspjesno napravljen servis\n");
		}
		GlavniIzbornik();
		break;
	case 5:
		system("cls");
		printf("%d", uvjet);
		znk = 0;
		ispisracuna = fopen("racun.txt", "r");
		if (ispisracuna)
		{
			while ((znk = getc(ispisracuna)) != EOF)
				putchar(znk);
			fclose(ispisracuna);
		}
		maliizbornik();
		break;
	case 6:
		system("cls");
		pretrazivanjepodanu();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int OdabirMarke()
{
	printf("=====================");
	printf("Odaberite proizvodaca automobila:");
	printf("======================\n");
	printf("\t\t\tOpcija 1: VW\n");
	printf("\t\t\tOpcija 2: Audi\n");
	printf("\t\t\tOpcija 3: Seat\n");
	printf("\t\t\tOpcija 4: Skoda\n");
	printf("\t\t\tOpcija 9: Nazad\n");
	printf("\t\t\tOpcija 0: izlaz iz programa!\n");
	printf("======================================\
======================================\n");
	int uvjet = 0;
	do
	{
		uvjet = _getch() - 48;
	} while (uvjet < 0 || uvjet>10 || uvjet==5 || uvjet == 6 || uvjet == 7 || uvjet == 8);
	switch (uvjet)
	{
	case 1:
		strcpy(PokNaAutomobil->proizvodac, "Volkswagen");
		system("cls");
		VwModeli();
		break;
	case 2:
		strcpy(PokNaAutomobil->proizvodac, "Audi");
		system("cls");
		AudiModeli();
		break;
	case 3:		
		strcpy(PokNaAutomobil->proizvodac, "Seat");
		system("cls");
		SeatModeli();
		break;
	case 4:
		strcpy(PokNaAutomobil->proizvodac, "Skoda");
		system("cls");
		SkodaModeli();
		break;
	case 8:
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
