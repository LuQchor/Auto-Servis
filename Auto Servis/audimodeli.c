#include "header.h"


int AudiModeli()
{
	printf("============================");
	printf("Odaberite audi model:");
	printf("===========================\n");
	printf("\t\t\tOpcija 1: A1\n");
	printf("\t\t\tOpcija 2: A3\n");
	printf("\t\t\tOpcija 3: A6\n");
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
		strcpy(PokNaAutomobil->model, "A1");
		system("cls");
		A1();
		break;
	case 2:
		strcpy(PokNaAutomobil->model, "A3");
		system("cls");
		A3();
		break;
	case 3:
		strcpy(PokNaAutomobil->model, "A6");
		system("cls");
		A6();
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

int A1()
{
	printf("============================");
	printf("Odaberite godiste a1:");
	printf("===========================\n");
	printf("\t\t\tOpcija 1: A1 2010-2014\n");
	printf("\t\t\tOpcija 2: A1 8X 2015+\n");
	printf("\t\t\tOpcija 3: A1 GB 2019+\n");
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
		strcpy(PokNaAutomobil->godiste, "2010-2014");
		system("cls");
		A12010();
		break;
	case 2:
		strcpy(PokNaAutomobil->godiste, "8X 2015+");
		system("cls");
		A12015();
		break;
	case 3:
		strcpy(PokNaAutomobil->godiste, "GB 2019+");
		system("cls");
		A12019();
		break;
	case 9:
		system("cls");
		AudiModeli();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int A12010()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 1.2 TFSI\n");
	printf("\t\t\tOpcija 2: 1.4 TFSI\n");
	printf("\t\t\tOpcija 3: 2.0 TFSI\n");
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
		strcpy(PokNaAutomobil->motor, "1.2 TFSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 2:
		strcpy(PokNaAutomobil->motor, "1.4 TFSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 3:
		strcpy(PokNaAutomobil->motor, "2.0 TFSI");
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
		A1();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int A12015()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 1.4 TFSI\n");
	printf("\t\t\tOpcija 2: 2.0 TFSI\n");
	printf("\t\t\tOpcija 3: 1.4 TDI\n");
	printf("\t\t\tOpcija 4: 1.6 TDI\n");
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
		strcpy(PokNaAutomobil->motor, "1.4 TFSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 2:
		strcpy(PokNaAutomobil->motor, "2.0 TFSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 3:
		strcpy(PokNaAutomobil->motor, "1.4 TDI");
		system("cls");
		GlavniIzbornik();
		break;
	case 4:
		strcpy(PokNaAutomobil->motor, "1.6 TDI");
		system("cls");
		GlavniIzbornik();
		break;
	case 9:
		system("cls");
		A1();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int A12019()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 30 TFSI(1.0)\n");
	printf("\t\t\tOpcija 2: 35 TFSI(1.5)\n");
	printf("\t\t\tOpcija 3: 40 TFSI(2.0)\n");;
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
		strcpy(PokNaAutomobil->motor, "30 TFSI(1.0)");
		system("cls");
		GlavniIzbornik();
		break;
	case 2:
		strcpy(PokNaAutomobil->motor, "35 TFSI(1.5)");
		system("cls");
		GlavniIzbornik();
		break;
	case 3:
		strcpy(PokNaAutomobil->motor, "40 TFSI(2.0)");
		system("cls");
		GlavniIzbornik();
		break;
	case 9:
		system("cls");
		A1();
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int A3()
{
	printf("============================");
	printf("Odaberite godiste a3:");
	printf("===========================\n");
	printf("\t\t\tOpcija 1: A3 1996-2003\n");
	printf("\t\t\tOpcija 2: A3 8P 2003-2013\n");
	printf("\t\t\tOpcija 3: A3 8V 2012+\n");
	printf("\t\t\tOpcija 4: A3 8Y 2020+\n");
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
		strcpy(PokNaAutomobil->godiste, "1996-2003");
		system("cls");
		A31996();
		break;
	case 2:
		strcpy(PokNaAutomobil->godiste, "8P 2003-2013");
		system("cls");
		A32003();
		break;
	case 3:
		strcpy(PokNaAutomobil->godiste, "8V 2012+");
		system("cls");
		A32012();
		break;
	case 4:
		strcpy(PokNaAutomobil->godiste, "8Y 2020+");
		system("cls");
		A32020();
		break;
	case 9:
		system("cls");
		AudiModeli();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int A31996()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 1.6 Benzin\n");
	printf("\t\t\tOpcija 2: 1.8 Benzin\n");
	printf("\t\t\tOpcija 3: 1.9 TDI\n");
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
		strcpy(PokNaAutomobil->motor, "1.9 TDI");
		system("cls");
		GlavniIzbornik();
		break;
	case 9:
		system("cls");
		A3();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int A32003()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 1.6 TFSI\n");
	printf("\t\t\tOpcija 2: 1.8 TFSI\n");
	printf("\t\t\tOpcija 3: 2.0 TFSI\n");
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
		strcpy(PokNaAutomobil->motor, "1.6 TFSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 2:
		strcpy(PokNaAutomobil->motor, "1.8 TFSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 3:
		strcpy(PokNaAutomobil->motor, "2.0 TFSI");
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
		A3();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int A32012()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 1.0 TFSI\n");
	printf("\t\t\tOpcija 2: 1.4 TFSI\n");
	printf("\t\t\tOpcija 3: 2.0 TFSI\n");
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
		strcpy(PokNaAutomobil->motor, "1.0 TFSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 2:
		strcpy(PokNaAutomobil->motor, "1.4 TFSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 3:
		strcpy(PokNaAutomobil->motor, "2.0 TFDI");
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
		A3();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int A32020()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 30 TFSI(1.0)\n");
	printf("\t\t\tOpcija 2: 35 TFSI(1.5)\n");
	printf("\t\t\tOpcija 3: S3 TFSI(2.0)\n");
	printf("\t\t\tOpcija 4: 30 TDI(2.0)\n");
	printf("\t\t\tOpcija 5: 35 TDI(2.0)\n");
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
		strcpy(PokNaAutomobil->motor, "30 TFSI(1.0)");
		system("cls");
		GlavniIzbornik();
		break;
	case 2:
		strcpy(PokNaAutomobil->motor, "35 TFSI(1.5)");
		system("cls");
		GlavniIzbornik();
		break;
	case 3:
		strcpy(PokNaAutomobil->motor, "S3 TFSI(2.0)");
		system("cls");
		GlavniIzbornik();
		break;
	case 4:
		strcpy(PokNaAutomobil->motor, "30 TDI(2.0)");
		system("cls");
		GlavniIzbornik();
		break;
	case 5:
		strcpy(PokNaAutomobil->motor, "35 TDI(2.0)");
		system("cls");
		GlavniIzbornik();
		break;
	case 9:
		system("cls");
		A3();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int A6()
{
	printf("============================");
	printf("Odaberite godiste a6:");
	printf("===========================\n");
	printf("\t\t\tOpcija 1: A6 C4 1994-1997\n");
	printf("\t\t\tOpcija 2: A6 C5 1997-2005\n");
	printf("\t\t\tOpcija 3: A6 C6 2004-2011\n");
	printf("\t\t\tOpcija 4: A6 C7 2011+\n");
	printf("\t\t\tOpcija 5: A6 C8 2018+\n");
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
		strcpy(PokNaAutomobil->godiste, "C4 1994-1997");
		system("cls");
		A61994();
		break;
	case 2:
		strcpy(PokNaAutomobil->godiste, "C5 1997-2005");
		system("cls");
		A61997();
		break;
	case 3:
		strcpy(PokNaAutomobil->godiste, "C6 2004-2011");
		system("cls");
		A62004();
		break;
	case 4:
		strcpy(PokNaAutomobil->godiste, "C7 2011+");
		system("cls");
		A62011();
		break;
	case 5:
		strcpy(PokNaAutomobil->godiste, "A6 C8 2018+");
		system("cls");
		A62018();
		break;
	case 9:
		system("cls");
		AudiModeli();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int A61994()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 1.8 Benzin\n");
	printf("\t\t\tOpcija 2: 2.0 Benzin\n");
	printf("\t\t\tOpcija 3: 2.6 Benzin\n");
	printf("\t\t\tOpcija 4: 2.8 Benzin\n");
	printf("\t\t\tOpcija 5: 4.2 V8 Benzin\n");
	printf("\t\t\tOpcija 6: 1.9 TDI\n");
	printf("\t\t\tOpcija 7: 2.5 TDI\n");
	printf("\t\t\tOpcija 9: Nazad\n");
	printf("\t\t\tOpcija 0: izlaz iz programa!\n");
	printf("======================================\
======================================\n");
	int uvjet = 0;
	do
	{
		uvjet = _getch() - 48;
	} while (uvjet < 0 || uvjet>10 || uvjet == 8);
	switch (uvjet)
	{
	case 1:
		strcpy(PokNaAutomobil->motor, "1.8 Benzin");
		system("cls");
		GlavniIzbornik();
		break;
	case 2:
		strcpy(PokNaAutomobil->motor, "2.0 Benzin");
		system("cls");
		GlavniIzbornik();
		break;
	case 3:
		strcpy(PokNaAutomobil->motor, "2.6 Benzin");
		system("cls");
		GlavniIzbornik();
		break;
	case 4:
		strcpy(PokNaAutomobil->motor, "2.8 Benzin");
		system("cls");
		GlavniIzbornik();
		break;
	case 5:
		strcpy(PokNaAutomobil->motor, "4.2 V8");
		system("cls");
		GlavniIzbornik();
		break;
	case 6:
		strcpy(PokNaAutomobil->motor, "1.9 TDI");
		system("cls");
		GlavniIzbornik();
		break;
	case 7:
		strcpy(PokNaAutomobil->motor, "2.5 TDI");
		system("cls");
		GlavniIzbornik();
		break;
	case 9:
		system("cls");
		A6();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int A61997()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 1.8 Benzin\n");
	printf("\t\t\tOpcija 2: 2.0 Benzin\n");
	printf("\t\t\tOpcija 3: 2.4 Benzin\n");
	printf("\t\t\tOpcija 4: 3.0 Benzin\n");
	printf("\t\t\tOpcija 5: 4.2 V8\n");
	printf("\t\t\tOpcija 6: 1.9 TDI\n");
	printf("\t\t\tOpcija 7: 2.5 TDI\n");
	printf("\t\t\tOpcija 9: Nazad\n");
	printf("\t\t\tOpcija 0: izlaz iz programa!\n");
	printf("======================================\
======================================\n");
	int uvjet = 0;
	do
	{
		uvjet = _getch() - 48;
	} while (uvjet < 0 || uvjet>10 || uvjet == 8);
	switch (uvjet)
	{
	case 1:
		strcpy(PokNaAutomobil->motor, "1.8 Benzin");
		system("cls");
		GlavniIzbornik();
		break;
	case 2:
		strcpy(PokNaAutomobil->motor, "2.0 Benzin");
		system("cls");
		GlavniIzbornik();
		break;
	case 3:
		strcpy(PokNaAutomobil->motor, "2.4 Benzin");
		system("cls");
		GlavniIzbornik();
		break;
	case 4:
		strcpy(PokNaAutomobil->motor, "3.0 Benzin");
		system("cls");
		GlavniIzbornik();
		break;
	case 5:
		strcpy(PokNaAutomobil->motor, "4.2 V8");
		system("cls");
		GlavniIzbornik();
		break;
	case 6:
		strcpy(PokNaAutomobil->motor, "1.9 TDI");
		system("cls");
		GlavniIzbornik();
		break;
	case 7:
		strcpy(PokNaAutomobil->motor, "2.5 TDI");
		system("cls");
		GlavniIzbornik();
		break;
	case 9:
		A6();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int A62004()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 2.0 TFSI\n");
	printf("\t\t\tOpcija 2: 2.8 FSI\n");
	printf("\t\t\tOpcija 3: 3.2 FSI V6\n");
	printf("\t\t\tOpcija 4: 4.2 FSI V8\n");
	printf("\t\t\tOpcija 5: 2.0 TDI\n");
	printf("\t\t\tOpcija 6: 2.7 TDI V6\n");
	printf("\t\t\tOpcija 7: 3.0 TDI V6\n");
	printf("\t\t\tOpcija 9: Nazad\n");
	printf("\t\t\tOpcija 0: izlaz iz programa!\n");
	printf("======================================\
======================================\n");
	int uvjet = 0;
	do
	{
		uvjet = _getch() - 48;
	} while (uvjet < 0 || uvjet>10 || uvjet == 8);
	switch (uvjet)
	{
	case 1:
		strcpy(PokNaAutomobil->motor, "2.0 TFSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 2:
		strcpy(PokNaAutomobil->motor, "2.8 FSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 3:
		strcpy(PokNaAutomobil->motor, "3.2 FSI V6");
		system("cls");
		GlavniIzbornik();
		break;
	case 4:
		strcpy(PokNaAutomobil->motor, "4.2 FSI V8");
		system("cls");
		GlavniIzbornik();
		break;
	case 5:
		strcpy(PokNaAutomobil->motor, "2.0 TDI");
		system("cls");
		GlavniIzbornik();
		break;
	case 6:
		strcpy(PokNaAutomobil->motor, "2.7 TDI V6");
		system("cls");
		GlavniIzbornik();
		break;
	case 7:
		strcpy(PokNaAutomobil->motor, "3.0 TDI V6");
		system("cls");
		GlavniIzbornik();
		break;
	case 9:
		system("cls");
		A6();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int A62011()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 2.0 TFSI\n");
	printf("\t\t\tOpcija 2: 3.0 TFSI\n");
	printf("\t\t\tOpcija 3: 4.0 FSI S6\n");
	printf("\t\t\tOpcija 4: 2.0 TDI\n");
	printf("\t\t\tOpcija 5: 3.0 TDI V6\n");
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
		strcpy(PokNaAutomobil->motor, "2.0 TFSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 2:
		strcpy(PokNaAutomobil->motor, "3.0 TFSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 3:
		strcpy(PokNaAutomobil->motor, "4.0 FSI S6");
		system("cls");
		GlavniIzbornik();
		break;
	case 4:
		strcpy(PokNaAutomobil->motor, "2.0 TDI");
		system("cls");
		GlavniIzbornik();
		break;
	case 5:
		strcpy(PokNaAutomobil->motor, "3.0 TDI V6");
		system("cls");
		GlavniIzbornik();
		break;
	case 9:
		system("cls");
		A6();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int A62018()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 40 TFSI(2.0)\n");
	printf("\t\t\tOpcija 2: 45 TFSI(2.0)\n");
	printf("\t\t\tOpcija 3: 55 FSI (3.0)\n");
	printf("\t\t\tOpcija 4: 35 TDI(2.0)\n");
	printf("\t\t\tOpcija 5: 40 TDI(2.0)\n");
	printf("\t\t\tOpcija 6: 45 TDI(3.0)\n");
	printf("\t\t\tOpcija 7: 50 TDI(3.0)\n");
	printf("\t\t\tOpcija 9: Nazad\n");
	printf("\t\t\tOpcija 0: izlaz iz programa!\n");
	printf("======================================\
======================================\n");
	int uvjet = 0;
	do
	{
		uvjet = _getch() - 48;
	} while (uvjet < 0 || uvjet>10 || uvjet == 8);
	switch (uvjet)
	{
	case 1:
		strcpy(PokNaAutomobil->motor, "40 TFSI(2.0)");
		system("cls");
		GlavniIzbornik();
		break;
	case 2:
		strcpy(PokNaAutomobil->motor, "45 TFSI(2.0)");
		system("cls");
		GlavniIzbornik();
		break;
	case 3:
		strcpy(PokNaAutomobil->motor, "55 FSI (3.0)");
		system("cls");
		GlavniIzbornik();
		break;
	case 4:
		strcpy(PokNaAutomobil->motor, "35 TDI(2.0)");
		system("cls");
		GlavniIzbornik();
		break;
	case 5:
		strcpy(PokNaAutomobil->motor, "40 TDI(2.0)");
		system("cls");
		GlavniIzbornik();
		break;
	case 6:
		strcpy(PokNaAutomobil->motor, "45 TDI(3.0)");
		system("cls");
		GlavniIzbornik();
		break;
	case 7:
		strcpy(PokNaAutomobil->motor, "50 TDI(3.0)");
		system("cls");
		GlavniIzbornik();
		break;
	case 9:
		system("cls");
		A6();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}