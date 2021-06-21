#include "header.h"


int SkodaModeli()
{
	printf("===========================");
	printf("Odaberite skoda model:");
	printf("===========================\n");
	printf("\t\t\tOpcija 1: Fabia\n");
	printf("\t\t\tOpcija 2: Octavia\n");
	printf("\t\t\tOpcija 9: Nazad\n");
	printf("\t\t\tOpcija 0: izlaz iz programa!\n");
	printf("======================================\
======================================\n");
	int uvjet = 0;
	do
	{
		uvjet = _getch() - 48;
	} while (uvjet < 0 || uvjet>10 || uvjet == 3 || uvjet == 4 || uvjet == 5 || uvjet == 6 || uvjet == 7 || uvjet == 8);
	switch (uvjet)
	{
	case 1:
		strcpy(PokNaAutomobil->model, "Fabia");
		system("cls");
		Fabia();
		break;
	case 2:
		strcpy(PokNaAutomobil->model, "Octavia");
		system("cls");
		Octavia();
		break;
	case 9:
		system("cls");
		OdabirMarke();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Fabia()
{
	printf("==========================");
	printf("Odaberite godiste fabie:");
	printf("==========================\n");
	printf("\t\t\tOpcija 1: Fabia 1 1999-2007\n");
	printf("\t\t\tOpcija 2: Fabia 2 2007-2014\n");
	printf("\t\t\tOpcija 3: Fabia 3 2014-2018\n");
	printf("\t\t\tOpcija 4: Fabia 4 2018+\n");
	printf("\t\t\tOpcija 9: Nazad\n");
	printf("\t\t\tOpcija 0: izlaz iz programa!\n");
	printf("======================================\
======================================\n");
	int uvjet = 0;
	do
	{
		uvjet = _getch() - 48;
	} while (uvjet < 0 || uvjet>10 || uvjet == 5 || uvjet == 6 || uvjet == 7 || uvjet == 8);
	switch (uvjet)
	{
	case 1:
		strcpy(PokNaAutomobil->godiste, "1 1999-2007");
		system("cls");
		Fabia1999();
		break;
	case 2:
		strcpy(PokNaAutomobil->godiste, "2 2007-2014");
		system("cls");
		Fabia2007();
		break;
	case 3:
		strcpy(PokNaAutomobil->godiste, "3 2014-2018");
		system("cls");
		Fabia2014();
		break;
	case 4:
		strcpy(PokNaAutomobil->godiste, "4 2018+");
		system("cls");
		Fabia2020();
		break;
	case 9:
		system("cls");
		SkodaModeli();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Fabia1999()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 1.0 Benzin\n");
	printf("\t\t\tOpcija 2: 1.4 Benzin\n");
	printf("\t\t\tOpcija 3: 2.0 Benzin\n");
	printf("\t\t\tOpcija 4: 1.4 TDI\n");
	printf("\t\t\tOpcija 5: 1.9 SDI\n");
	printf("\t\t\tOpcija 6: 1.9 TDI\n");
	printf("\t\t\tOpcija 9: Nazad\n");
	printf("\t\t\tOpcija 0: izlaz iz programa!\n");
	printf("======================================\
======================================\n");
	int uvjet = 0;
	do
	{
		uvjet = _getch() - 48;
	} while (uvjet < 0 || uvjet>10 || uvjet == 7 || uvjet == 8);
	switch (uvjet)
	{
	case 1:
		strcpy(PokNaAutomobil->motor, "1.0 Benzin");
		system("cls");
		GlavniIzbornik();
		break;
	case 2:
		strcpy(PokNaAutomobil->motor, "1.4 Benzin");
		system("cls");
		GlavniIzbornik();
		break;
	case 3:
		strcpy(PokNaAutomobil->motor, "2.0 Benzin");
		system("cls");
		GlavniIzbornik();
		break;
	case 4:
		strcpy(PokNaAutomobil->motor, "1.4 TDI");
		system("cls");
		GlavniIzbornik();
		break;
	case 5:
		strcpy(PokNaAutomobil->motor, "1.9 SDI");
		system("cls");
		GlavniIzbornik();
		break;
	case 6:
		strcpy(PokNaAutomobil->motor, "1.9 TDI");
		system("cls");
		GlavniIzbornik();
		break;
	case 9:
		Fabia();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Fabia2007()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 1.2 TSI\n");
	printf("\t\t\tOpcija 2: 1.6 TSI\n");
	printf("\t\t\tOpcija 3: 2.0 TSI\n");
	printf("\t\t\tOpcija 4: 1.4 TDI\n");
	printf("\t\t\tOpcija 5: 1.6 TDI\n");
	printf("\t\t\tOpcija 6: 1.9 TDI\n");
	printf("\t\t\tOpcija 9: Nazad\n");
	printf("\t\t\tOpcija 0: izlaz iz programa!\n");
	printf("======================================\
======================================\n");
	int uvjet = 0;
	do
	{
		uvjet = _getch() - 48;
	} while (uvjet < 0 || uvjet>10 || uvjet == 7 || uvjet == 8);
	switch (uvjet)
	{
	case 1:
		strcpy(PokNaAutomobil->motor, "1.2 TSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 2:
		strcpy(PokNaAutomobil->motor, "1.6 TSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 3:
		strcpy(PokNaAutomobil->motor, "2.0 TSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 4:
		strcpy(PokNaAutomobil->motor, "1.4 TDI");
		system("cls");
		GlavniIzbornik();
		break;
	case 5:
		strcpy(PokNaAutomobil->motor, "1.6 TDI");
		system("cls");
		GlavniIzbornik();
		break;
	case 6:
		strcpy(PokNaAutomobil->motor, "1.9 TDI");
		system("cls");
		GlavniIzbornik();
		break;
	case 9:
		system("cls");
		Fabia();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Fabia2014()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 1.0 TSI\n");
	printf("\t\t\tOpcija 2: 1.2 TSI\n");
	printf("\t\t\tOpcija 3: 1.4 TDI\n");
	printf("\t\t\tOpcija 9: Nazad\n");
	printf("\t\t\tOpcija 0: izlaz iz programa!\n");
	printf("======================================\
======================================\n");
	int uvjet = 0;
	do
	{
		uvjet = _getch() - 48;
	} while (uvjet < 0 || uvjet>10 || uvjet == 4 || uvjet == 5 || uvjet == 6 || uvjet == 7 || uvjet == 8);
	switch (uvjet)
	{
	case 1:
		strcpy(PokNaAutomobil->motor, "1.0 TSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 2:
		strcpy(PokNaAutomobil->motor, "1.2 TSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 3:
		strcpy(PokNaAutomobil->motor, "1.4 TDI");
		system("cls");
		GlavniIzbornik();
		break;
	case 9:
		system("cls");
		Fabia();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Fabia2020()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 1.0 TSI\n");
	printf("\t\t\tOpcija 9: Nazad\n");
	printf("\t\t\tOpcija 0: izlaz iz programa!\n");
	printf("======================================\
======================================\n");
	int uvjet = 0;
	do
	{
		uvjet = _getch() - 48;
	} while (uvjet < 0 || uvjet>10 || uvjet == 2 || uvjet == 3 || uvjet == 4 || uvjet == 5 || uvjet == 6 || uvjet == 7 || uvjet == 8);
	switch (uvjet)
	{
	case 1:
		strcpy(PokNaAutomobil->motor, "1.0 TSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 9:
		system("cls");
		Fabia();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Octavia()
{
	printf("=========================");
	printf("Odaberite godiste octavie:");
	printf("=========================\n");
	printf("\t\t\tOpcija 1: Octavia 1 1996-2004\n");
	printf("\t\t\tOpcija 2: Octavia 2 2004-2013\n");
	printf("\t\t\tOpcija 3: Octavia 3 2013-2016\n");
	printf("\t\t\tOpcija 4: Octavia 3 Facelift 2017-2020\n");
	printf("\t\t\tOpcija 5: Octavia 4 2020+\n");
	printf("\t\t\tOpcija 9: Nazad\n");
	printf("\t\t\tOpcija 0: izlaz iz programa!\n");
	printf("======================================\
======================================\n");
	int uvjet = 0;
	do
	{
		uvjet = _getch() - 48;
	} while (uvjet < 0 || uvjet>10 || uvjet == 6 || uvjet == 7 || uvjet == 8);
	switch (uvjet)
	{
	case 1:
		strcpy(PokNaAutomobil->godiste, "1 1996-2004");
		system("cls");
		Octavia1996();
		break;
	case 2:
		strcpy(PokNaAutomobil->godiste, "2 2004-2013");
		system("cls");
		Octavia2004();
		break;
	case 3:
		strcpy(PokNaAutomobil->godiste, "3 2013-2016");
		system("cls");
		Octavia2013();
		break;
	case 4:
		strcpy(PokNaAutomobil->godiste, "3 Facelift 2017-2020");
		system("cls");
		Octavia2017();
		break;
	case 5:
		strcpy(PokNaAutomobil->godiste, "4 2020+");
		system("cls");
		Octavia2020();
		break;
	case 9:
		system("cls");
		SkodaModeli();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Octavia1996()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 1.4 Benzin\n");
	printf("\t\t\tOpcija 2: 1.6 Benzin\n");
	printf("\t\t\tOpcija 3: 1.8 Benzin\n");
	printf("\t\t\tOpcija 4: 2.0 Benzin\n");
	printf("\t\t\tOpcija 5: 1.9 SDI\n");
	printf("\t\t\tOpcija 6: 1.9 TDI\n");
	printf("\t\t\tOpcija 9: Nazad\n");
	printf("\t\t\tOpcija 0: izlaz iz programa!\n");
	printf("======================================\
======================================\n");
	int uvjet = 0;
	do
	{
		uvjet = _getch() - 48;
	} while (uvjet < 0 || uvjet>10 || uvjet == 7 || uvjet == 8);
	switch (uvjet)
	{
	case 1:
		strcpy(PokNaAutomobil->motor, "1.4 Benzin");
		system("cls");
		GlavniIzbornik();
		break;
	case 2:
		strcpy(PokNaAutomobil->motor, "1.6 Benzin");
		system("cls");
		GlavniIzbornik();
		break;
	case 3:
		strcpy(PokNaAutomobil->motor, "1.8 Benzin");
		system("cls");
		GlavniIzbornik();
		break;
	case 4:
		strcpy(PokNaAutomobil->motor, "2.0 Benzin");
		system("cls");
		GlavniIzbornik();
		break;
	case 5:
		strcpy(PokNaAutomobil->motor, "1.9 SDI");
		system("cls");
		GlavniIzbornik();
		break;
	case 6:
		strcpy(PokNaAutomobil->motor, "1.9 TDI");
		system("cls");
		GlavniIzbornik();
		break;
	case 9:
		system("cls");
		Octavia();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Octavia2004()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 1.6 Benzin\n");
	printf("\t\t\tOpcija 2: 1.8 Benzin\n");
	printf("\t\t\tOpcija 3: 2.0 Benzin\n");
	printf("\t\t\tOpcija 4: 1.9 TDI\n");
	printf("\t\t\tOpcija 5: 2.0 TDI\n");
	printf("\t\t\tOpcija 9: Nazad\n");
	printf("\t\t\tOpcija 0: izlaz iz programa!\n");
	printf("======================================\
======================================\n");
	int uvjet = 0;
	do
	{
		uvjet = _getch() - 48;
	} while (uvjet < 0 || uvjet>10 || uvjet == 6 || uvjet == 7 || uvjet == 8);
	switch (uvjet)
	{
	case 1:
		strcpy(PokNaAutomobil->motor, "1.6 Benzin");
		system("cls");
		GlavniIzbornik();
		break;
	case 2:
		strcpy(PokNaAutomobil->motor, "1.8 Benzin");
		system("cls");
		GlavniIzbornik();
		break;
	case 3:
		strcpy(PokNaAutomobil->motor, "2.0 Benzin");
		system("cls");
		GlavniIzbornik();
		break;
	case 4:
		strcpy(PokNaAutomobil->motor, "1.9 TDI");
		system("cls");
		GlavniIzbornik();
		break;
	case 5:
		strcpy(PokNaAutomobil->motor, "2.0 TDI");
		system("cls");
		GlavniIzbornik();
		break;
	case 9:
		system("cls");
		Octavia();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Octavia2013()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 1.4 TSI\n");
	printf("\t\t\tOpcija 2: 1.8 TSI\n");
	printf("\t\t\tOpcija 3: 2.0 TSI\n");
	printf("\t\t\tOpcija 4: 1.6 TDI\n");
	printf("\t\t\tOpcija 5: 2.0 TDI\n");
	printf("\t\t\tOpcija 9: Nazad\n");
	printf("\t\t\tOpcija 0: izlaz iz programa!\n");
	printf("======================================\
======================================\n");
	int uvjet = 0;
	do
	{
		uvjet = _getch() - 48;
	} while (uvjet < 0 || uvjet>10 || uvjet == 6 || uvjet == 7 || uvjet == 8);
	switch (uvjet)
	{
	case 1:
		strcpy(PokNaAutomobil->motor, "1.4 TSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 2:
		strcpy(PokNaAutomobil->motor, "1.8 TSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 3:
		strcpy(PokNaAutomobil->motor, "2.0 TSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 4:
		strcpy(PokNaAutomobil->motor, "1.6 TDI");
		system("cls");
		GlavniIzbornik();
		break;
	case 5:
		strcpy(PokNaAutomobil->motor, "2.0 TDI");
		system("cls");
		GlavniIzbornik();
		break;
	case 9:
		system("cls");
		Octavia();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Octavia2017()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 1.0 TSI\n");
	printf("\t\t\tOpcija 2: 1.4 TSI\n");
	printf("\t\t\tOpcija 3: 1.8 TSI\n");
	printf("\t\t\tOpcija 4: 2.0 TSI\n");
	printf("\t\t\tOpcija 5: 1.6 TDI\n");
	printf("\t\t\tOpcija 6: 2.0 TDI\n");
	printf("\t\t\tOpcija 9: Nazad\n");
	printf("\t\t\tOpcija 0: izlaz iz programa!\n");
	printf("======================================\
======================================\n");
	int uvjet = 0;
	do
	{
		uvjet = _getch() - 48;
	} while (uvjet < 0 || uvjet>10 || uvjet == 7 || uvjet == 8);
	switch (uvjet)
	{
	case 1:
		strcpy(PokNaAutomobil->motor, "1.0 TSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 2:
		strcpy(PokNaAutomobil->motor, "1.4 TSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 3:
		strcpy(PokNaAutomobil->motor, "1.8 TSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 4:
		strcpy(PokNaAutomobil->motor, "2.0 TDI");
		system("cls");
		GlavniIzbornik();
		break;
	case 5:
		strcpy(PokNaAutomobil->motor, "1.6 TDI");
		system("cls");
		GlavniIzbornik();
		break;
	case 6:
		strcpy(PokNaAutomobil->motor, "2.0 TDI");
		system("cls");
		GlavniIzbornik();
		break;
	case 9:
		system("cls");
		Octavia();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Octavia2020()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 1.0 TSI\n");
	printf("\t\t\tOpcija 2: 1.4 TSI\n");
	printf("\t\t\tOpcija 3: 1.5 TSI\n");
	printf("\t\t\tOpcija 9: Nazad\n");
	printf("\t\t\tOpcija 0: izlaz iz programa!\n");
	printf("======================================\
======================================\n");
	int uvjet = 0;
	do
	{
		uvjet = _getch() - 48;
	} while (uvjet < 0 || uvjet>10 || uvjet == 4 || uvjet == 5 || uvjet == 6 || uvjet == 7 || uvjet == 8);
	switch (uvjet)
	{
	case 1:
		strcpy(PokNaAutomobil->motor, "1.0 TSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 2:
		strcpy(PokNaAutomobil->motor, "1.4 TSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 3:
		break;
		strcpy(PokNaAutomobil->motor, "1.5 TSI");
		system("cls");
		GlavniIzbornik();
	case 9:
		system("cls");
		Octavia();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}