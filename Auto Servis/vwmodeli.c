#include "header.h"


int VwModeli()
{
	printf("=============================");
	printf("Odaberite vw model:");
	printf("============================\n");
	printf("\t\t\tOpcija 1: Arteon\n");
	printf("\t\t\tOpcija 2: CC\n");
	printf("\t\t\tOpcija 3: Golf\n");
	printf("\t\t\tOpcija 4: Jetta\n");
	printf("\t\t\tOpcija 5: Passat\n");
	printf("\t\t\tOpcija 6: Phaeton\n");
	printf("\t\t\tOpcija 7: Polo\n");
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
		strcpy(PokNaAutomobil->model, "Arteon");
		system("cls");
		Arteon();
		break;
	case 2:
		strcpy(PokNaAutomobil->model, "CC");
		system("cls");
		Cc();
		break;
	case 3:
		strcpy(PokNaAutomobil->model, "Golf");
		system("cls");
		printf("%s", PokNaAutomobil->model);
		Golf();
		break;
	case 4:
		strcpy(PokNaAutomobil->model, "Jetta");
		system("cls");
		Jetta();
		break;
	case 5:
		strcpy(PokNaAutomobil->model, "Passat");
		system("cls");
		Passat();
		break;
	case 6:
		strcpy(PokNaAutomobil->model, "Phaeton");
		system("cls");
		Phaeton();
		break;
	case 7:
		strcpy(PokNaAutomobil->model, "Polo");
		system("cls");
		Polo();
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

int Arteon()
{
	printf("==========================");
	printf("Odaberite godiste arteona:");
	printf("========================\n");
	printf("\t\t\tOpcija 1: Arteon 1 2017-2020\n");
	printf("\t\t\tOpcija 2: Arteon 1 Facelift 2020+\n");
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
		strcpy(PokNaAutomobil->godiste, "1 2017-2020");
		system("cls");
		Arteon2017_2020();
		break;
	case 2:
		strcpy(PokNaAutomobil->godiste, "1 Facelift 2020+");
		system("cls");
		Arteon2020();
		break;
	case 8:
		break;
	case 9:
		system("cls");
		VwModeli();
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Arteon2017_2020()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 1.5TSI\n");
	printf("\t\t\tOpcija 2: 2.0 TSI\n");
	printf("\t\t\tOpcija 3: 2.0 TDI\n");
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
		strcpy(PokNaAutomobil->motor, "1.5 TSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 2:
		strcpy(PokNaAutomobil->motor, "2.0 TSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 3:
		strcpy(PokNaAutomobil->motor, "2.0 TDI");
		system("cls");
		GlavniIzbornik();
		break;
	case 8:
		break;
	case 9:
		system("cls");
		Arteon();
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}
int Arteon2020()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 2.0 TSI\n");
	printf("\t\t\tOpcija 2: 2.0 TDI\n");
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
		strcpy(PokNaAutomobil->motor, "2.0 TSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 2:
		strcpy(PokNaAutomobil->motor, "2.0 TDI");
		system("cls");
		GlavniIzbornik();
		break;
	case 9:
		system("cls");
		Arteon();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Cc()
{
	printf("===========================");
	printf("Odaberite godiste cc-a:");
	printf("==========================\n");
	printf("\t\t\tOpcija 1: CC 2009\n");
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
		strcpy(PokNaAutomobil->godiste, "2009");
		system("cls");
		CC2009();
		break;
	case 9:
		system("cls");
		VwModeli();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int CC2009()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 1.8 TSI\n");
	printf("\t\t\tOpcija 2: 2.0 TSI\n");
	printf("\t\t\tOpcija 3: 2.0 TDI\n");
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
		strcpy(PokNaAutomobil->motor, "1.8 TSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 2:
		strcpy(PokNaAutomobil->motor, "2.0 TSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 3:
		strcpy(PokNaAutomobil->motor, "2.0 TDI");
		system("cls");
		GlavniIzbornik();
		break;
	case 9:
		system("cls");
		Cc();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Golf()
{
	printf("==========================");
	printf("Odaberite godiste golfa:");
	printf("==========================\n");
	printf("\t\t\tOpcija 1: Golf 1 1974-1983\n");
	printf("\t\t\tOpcija 2: Golf 2 1983-1992\n");
	printf("\t\t\tOpcija 3: Golf 3 1991-1997\n");
	printf("\t\t\tOpcija 4: Golf 4 1997-2003\n");
	printf("\t\t\tOpcija 5: Golf 5 2003-2008\n");
	printf("\t\t\tOpcija 6: Golf 6 2008-2012\n");
	printf("\t\t\tOpcija 7: Golf 7 2012-2017\n");
	printf("\t\t\tOpcija 8: Golf 8 2020+\n");
	printf("\t\t\tOpcija 9: Nazad\n");
	printf("\t\t\tOpcija 0: izlaz iz programa!\n");
	printf("======================================\
======================================\n");
	int uvjet = 0;
	do
	{
		uvjet = _getch() - 48;
	} while (uvjet < 0 || uvjet>10);
	switch (uvjet)
	{
	case 1:
		strcpy(PokNaAutomobil->godiste, "1 1974-1983");
		system("cls");
		Golf1974();
		break;
	case 2:
		strcpy(PokNaAutomobil->godiste, "2 1983-1992");
		system("cls");
		Golf1983();
		break;
	case 3:
		strcpy(PokNaAutomobil->godiste, "3 1991-1997");
		system("cls");
		Golf1991();
		break;
	case 4:
		strcpy(PokNaAutomobil->godiste, "4 1997-2003");
		system("cls");
		Golf1997();
		break;
	case 5:
		strcpy(PokNaAutomobil->godiste, "5 2003-2008");
		system("cls");
		Golf2003();
		break;
	case 6:
		strcpy(PokNaAutomobil->godiste, "6 2008-2012");
		system("cls");
		Golf2008();
		break;
	case 7:
		strcpy(PokNaAutomobil->godiste, "7 2012-2017");
		system("cls");
		Golf2012();
		break;
	case 8:
		strcpy(PokNaAutomobil->godiste, "8 2020+");
		system("cls");
		Golf2020();
		break;
	case 9:
		system("cls");
		VwModeli();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Golf1974()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 1.5 Benzin\n");
	printf("\t\t\tOpcija 2: 1.6 Benzin\n");
	printf("\t\t\tOpcija 3: 1.8 Benzin\n");
	printf("\t\t\tOpcija 4: 1.6 D\n");
	printf("\t\t\tOpcija 5: 1.6 TD\n");
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
		strcpy(PokNaAutomobil->motor, "1.5 Benzin");
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
		strcpy(PokNaAutomobil->motor, "1.6 D");
		system("cls");
		GlavniIzbornik();
		break;
	case 5:
		strcpy(PokNaAutomobil->motor, "1.6 TD");
		system("cls");
		GlavniIzbornik();
		break;
	case 9:
		system("cls");
		Golf();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Golf1983()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 1.3 Benzin\n");
	printf("\t\t\tOpcija 2: 1.6 Benzin\n");
	printf("\t\t\tOpcija 3: 1.8 Benzin\n");
	printf("\t\t\tOpcija 4: 1.6 D\n");
	printf("\t\t\tOpcija 5: 1.6 TD\n");
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
		strcpy(PokNaAutomobil->motor, "1.3 Benzin");
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
		strcpy(PokNaAutomobil->motor, "1.6 D");
		system("cls");
		GlavniIzbornik();
		break;
	case 5:
		strcpy(PokNaAutomobil->motor, "1.6 TD");
		system("cls");
		GlavniIzbornik();
		break;
	case 9:
		system("cls");
		Golf();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Golf1991()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 1.4 Benzin\n");
	printf("\t\t\tOpcija 2: 1.6 Benzin\n");
	printf("\t\t\tOpcija 3: 1.8 Benzin\n");
	printf("\t\t\tOpcija 4: 2.0 GTI\n");
	printf("\t\t\tOpcija 5: 1.9 D\n");
	printf("\t\t\tOpcija 6: 1.9 SDI\n");
	printf("\t\t\tOpcija 7: 1.9 TDI\n");
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
		strcpy(PokNaAutomobil->motor, "2.0 GTI");
		system("cls");
		GlavniIzbornik();
		break;
	case 5:
		strcpy(PokNaAutomobil->motor, "1.9 D");
		system("cls");
		GlavniIzbornik();
		break;
	case 6:
		strcpy(PokNaAutomobil->motor, "1.9 SDI");
		system("cls");
		GlavniIzbornik();
		break;
	case 7:
		strcpy(PokNaAutomobil->motor, "1.9 TDI");
		system("cls");
		GlavniIzbornik();
		break;
	case 9:
		system("cls");
		Golf();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Golf1997()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 1.6 FSI\n");
	printf("\t\t\tOpcija 2: 1.8 FSI\n");
	printf("\t\t\tOpcija 3: 2.0 FSI\n");
	printf("\t\t\tOpcija 4: 2.3 GTI\n");
	printf("\t\t\tOpcija 5: 2.8 GTI\n");
	printf("\t\t\tOpcija 6: 1.9 TDI\n");
	printf("\t\t\tOpcija 7: 2.0 TDI\n");
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
		strcpy(PokNaAutomobil->motor, "1.9 FSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 2:
		strcpy(PokNaAutomobil->motor, "1.8 FSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 3:
		strcpy(PokNaAutomobil->motor, "2.0 FSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 4:
		strcpy(PokNaAutomobil->motor, "2.3 GTI");
		system("cls");
		GlavniIzbornik();
		break;
	case 5:
		strcpy(PokNaAutomobil->motor, "2.8 GTI");
		system("cls");
		GlavniIzbornik();
		break;
	case 6:
		strcpy(PokNaAutomobil->motor, "1.9 TDI");
		system("cls");
		GlavniIzbornik();
		break;
	case 7:
		strcpy(PokNaAutomobil->motor, "2.9 TDI");
		system("cls");
		GlavniIzbornik();
		break;
	case 9:
		Golf();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Golf2003()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 1.4 FSI\n");
	printf("\t\t\tOpcija 2: 1.6 FSI\n");
	printf("\t\t\tOpcija 3: 2.0 FSI\n");
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
		strcpy(PokNaAutomobil->motor, "1.4 FSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 2:
		strcpy(PokNaAutomobil->motor, "1.6 FSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 3:
		strcpy(PokNaAutomobil->motor, "2.0 FSI");
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
		Golf();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Golf2008()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 1.4 TSI\n");
	printf("\t\t\tOpcija 2: 2.0 TSI\n");
	printf("\t\t\tOpcija 3: 2.0 GTI\n");
	printf("\t\t\tOpcija 4: 1.6 TDI\n");
	printf("\t\t\tOpcija 5: 2.0 TDI\n");
	printf("\t\t\tOpcija 6: 2.0 GTD\n");
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
		strcpy(PokNaAutomobil->motor, "1.4 TSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 2:
		strcpy(PokNaAutomobil->motor, "2.0 TSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 3:
		strcpy(PokNaAutomobil->motor, "2.0 GTI");
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
	case 6:
		strcpy(PokNaAutomobil->motor, "2.0 GTD");
		system("cls");
		GlavniIzbornik();
		break;
	case 9:
		system("cls");
		Golf();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Golf2012()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 1.2 TSI\n");
	printf("\t\t\tOpcija 2: 1.4 TSI\n");
	printf("\t\t\tOpcija 3: 2.0 GTI\n");
	printf("\t\t\tOpcija 4: 2.0 R\n");
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
		strcpy(PokNaAutomobil->motor, "1.2 TSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 2:
		strcpy(PokNaAutomobil->motor, "1.4 TSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 3:
		strcpy(PokNaAutomobil->motor, "2.0 GTI");
		system("cls");
		GlavniIzbornik();
		break;
	case 4:
		strcpy(PokNaAutomobil->motor, "2.0 R");
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
		Golf();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Golf2020()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 1.5 TSI\n");
	printf("\t\t\tOpcija 2: 1.5 eTSI\n");
	printf("\t\t\tOpcija 3: 2.0 GTI\n");
	printf("\t\t\tOpcija 4: 2.0 TDI\n");
	printf("\t\t\tOpcija 9: Nazad\n");
	printf("\t\t\tOpcija 0: izlaz iz programa!\n");
	printf("======================================\
======================================\n");
	int uvjet = 0;
	do
	{
		uvjet = _getch() - 48;
	} while (uvjet < 0 || uvjet>10 || uvjet == 4 || uvjet == 6 || uvjet == 7 || uvjet == 8);
	switch (uvjet)
	{
	case 1:
		strcpy(PokNaAutomobil->motor, "1.5 TSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 2:
		strcpy(PokNaAutomobil->motor, "1.5 eTSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 3:
		strcpy(PokNaAutomobil->motor, "2.0 GTI");
		system("cls");
		GlavniIzbornik();
		break;
	case 4:
		strcpy(PokNaAutomobil->motor, "2.0 TDI");
		system("cls");
		GlavniIzbornik();
		break;
	case 9:
		system("cls");
		Golf();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Jetta()
{
	printf("==========================");
	printf("Odaberite godiste jette:");
	printf("==========================\n");
	printf("\t\t\tOpcija 1: Jetta 1 1979-1984\n");
	printf("\t\t\tOpcija 2: Jetta 2 1984-1992\n");
	printf("\t\t\tOpcija 3: Jetta/Vento 3 1991-1998\n");
	printf("\t\t\tOpcija 4: Jetta/Bora 4 1998-2005\n");
	printf("\t\t\tOpcija 5: Jetta 5 2005-2010\n");
	printf("\t\t\tOpcija 6: Jetta 6 2010+\n");
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
		strcpy(PokNaAutomobil->godiste, "1 1979-1984");
		system("cls");
		Jetta1974();
		break;
	case 2:
		strcpy(PokNaAutomobil->godiste, "2 1984-1992");
		system("cls");
		Jetta1984();
		break;
	case 3:
		strcpy(PokNaAutomobil->godiste, "3 1991-1998");
		system("cls");
		Jetta1992();
		break;
	case 4:
		strcpy(PokNaAutomobil->godiste, "4 1998-2005");
		system("cls");
		Jetta1998();
		break;
	case 5:
		strcpy(PokNaAutomobil->godiste, "5 2005-2010");
		system("cls");
		Jetta2005();
		break;
	case 6:
		strcpy(PokNaAutomobil->godiste, "6 2010+");
		system("cls");
		Jetta2010();
		break;
	case 9:
		system("cls");
		VwModeli();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Jetta1974()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 1.5 Benzin\n");
	printf("\t\t\tOpcija 2: 1.6 Benzin\n");
	printf("\t\t\tOpcija 3: 1.8 Benzin\n");
	printf("\t\t\tOpcija 4: 1.6 D\n");
	printf("\t\t\tOpcija 5: 1.6 TD\n");
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
		strcpy(PokNaAutomobil->motor, "1.5 Benzin");
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
		strcpy(PokNaAutomobil->motor, "1.6 D");
		system("cls");
		GlavniIzbornik();
		break;
	case 5:
		strcpy(PokNaAutomobil->motor, "1.6 TD");
		system("cls");
		GlavniIzbornik();
		break;
	case 9:
		system("cls");
		Jetta();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Jetta1984()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 1.5 Benzin\n");
	printf("\t\t\tOpcija 2: 1.8 Benzin\n");
	printf("\t\t\tOpcija 3: 1.8 GTX\n");
	printf("\t\t\tOpcija 4: 1.6 D\n");
	printf("\t\t\tOpcija 5: 1.6 TD\n");
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
		strcpy(PokNaAutomobil->motor, "1.5 Benzin");
		system("cls");
		GlavniIzbornik();
		break;
	case 2:
		strcpy(PokNaAutomobil->motor, "1.8 Benzin");
		system("cls");
		GlavniIzbornik();
		break;
	case 3:
		strcpy(PokNaAutomobil->motor, "1.8 GTX");
		system("cls");
		GlavniIzbornik();
		break;
	case 4:
		strcpy(PokNaAutomobil->motor, "1.6 D");
		system("cls");
		GlavniIzbornik();
		break;
	case 5:
		strcpy(PokNaAutomobil->motor, "1.5 TD");
		system("cls");
		GlavniIzbornik();
		break;
	case 9:
		system("cls");
		Jetta();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Jetta1992()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 1.6 Benzin\n");
	printf("\t\t\tOpcija 2: 1.8 Benzin\n");
	printf("\t\t\tOpcija 3: 2.0 Benzin\n");
	printf("\t\t\tOpcija 4: 2.8 VR6\n");
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
		strcpy(PokNaAutomobil->motor, "2.8 VR6");
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
		Jetta();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Jetta1998()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 1.6 Benzin\n");
	printf("\t\t\tOpcija 2: 1.8 Benzin\n");
	printf("\t\t\tOpcija 3: 2.0 Benzin\n");
	printf("\t\t\tOpcija 4: 2.3 V5\n");
	printf("\t\t\tOpcija 5: 2.8 V6\n");
	printf("\t\t\tOpcija 6: 1.9 SDI\n");
	printf("\t\t\tOpcija 7: 1.9 TDI\n");
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
		strcpy(PokNaAutomobil->motor, "2.3 V5");
		system("cls");
		GlavniIzbornik();
		break;
	case 5:
		strcpy(PokNaAutomobil->motor, "2.8 V6");
		system("cls");
		GlavniIzbornik();
		break;
	case 6:
		strcpy(PokNaAutomobil->motor, "1.9 SDI");
		system("cls");
		GlavniIzbornik();
		break;
	case 7:
		strcpy(PokNaAutomobil->motor, "1.9 TDI");
		system("cls");
		GlavniIzbornik();
		break;
	case 9:
		system("cls");
		Jetta();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Jetta2005()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 1.4 TSI\n");
	printf("\t\t\tOpcija 2: 1.6 TSI\n");
	printf("\t\t\tOpcija 3: 1.9 TDI\n");
	printf("\t\t\tOpcija 4: 2.0 TDI\n");
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
		strcpy(PokNaAutomobil->motor, "1.4 TSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 2:
		strcpy(PokNaAutomobil->motor, "1.6 TSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 3:
		strcpy(PokNaAutomobil->motor, "1.9 TDI");
		system("cls");
		GlavniIzbornik();
		break;
	case 4:
		strcpy(PokNaAutomobil->motor, "2.0 TDI");
		system("cls");
		GlavniIzbornik();
		break;
	case 9:
		system("cls");
		Jetta();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Jetta2010()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 1.4 TSI\n");
	printf("\t\t\tOpcija 2: 1.6 TSI\n");
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
		Jetta();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Passat()
{
	printf("=========================");
	printf("Odaberite godiste passata:");
	printf("=========================\n");
	printf("\t\t\tOpcija 1: Passat B2 1980-1988\n");
	printf("\t\t\tOpcija 2: Passat B3 1988-1993\n");
	printf("\t\t\tOpcija 3: Passat B4 1993-1997\n");
	printf("\t\t\tOpcija 4: Passat B5 i B5.5 1996-2005\n");
	printf("\t\t\tOpcija 5: Passat B6 2005-2010\n");
	printf("\t\t\tOpcija 6: Passat B7 2010-2014\n");
	printf("\t\t\tOpcija 7: Passat B8 2014-2019\n");
	printf("\t\t\tOpcija 8: Passat B8 Facelift 2020+\n");
	printf("\t\t\tOpcija 9: Nazad\n");
	printf("\t\t\tOpcija 0: izlaz iz programa!\n");
	printf("======================================\
======================================\n");
	int uvjet = 0;
	do
	{
		uvjet = _getch() - 48;
	} while (uvjet < 0 || uvjet>10);
	switch (uvjet)
	{
	case 1:
		strcpy(PokNaAutomobil->godiste, "B2 1980-1988");
		system("cls");
		Passat1980();
		break;
	case 2:
		strcpy(PokNaAutomobil->godiste, "B3 1988-1993");
		system("cls");
		Passat1988();
		break;
	case 3:
		strcpy(PokNaAutomobil->godiste, "B4 1993-1997");
		system("cls");
		Passat1993();
		break;
	case 4:
		strcpy(PokNaAutomobil->godiste, "B5 i B5.5 1996-2005");
		system("cls");
		Passat1996();
		break;
	case 5:
		strcpy(PokNaAutomobil->godiste, "B6 2005-2010");
		system("cls");
		Passat2005();
		break;
	case 6:
		strcpy(PokNaAutomobil->godiste, "B7 2010-2014");
		system("cls");
		Passat2010();
		break;
	case 7:
		strcpy(PokNaAutomobil->godiste, "B8 2014-2019");
		system("cls");
		Passat2014();
		break;
	case 8:
		strcpy(PokNaAutomobil->godiste, "B8 Facelift 2020+");
		system("cls");
		Passat2020();
		break;
	case 9:
		system("cls");
		VwModeli();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Passat1980()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 1.6 Benzin\n");
	printf("\t\t\tOpcija 2: 1.8 Benzin\n");
	printf("\t\t\tOpcija 3: 2.0 Benzin\n");
	printf("\t\t\tOpcija 4: 1.6 D\n");
	printf("\t\t\tOpcija 5: 1.6 TD\n");
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
		strcpy(PokNaAutomobil->motor, "1.6 D");
		system("cls");
		GlavniIzbornik();
		break;
	case 5:
		strcpy(PokNaAutomobil->motor, "1.6 TD");
		system("cls");
		GlavniIzbornik();
		break;
	case 9:
		system("cls");
		Passat();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Passat1988()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 1.6 Benzin\n");
	printf("\t\t\tOpcija 2: 1.8 Benzin\n");
	printf("\t\t\tOpcija 3: 2.0 Benzin\n");
	printf("\t\t\tOpcija 4: 2.8 VR6\n");
	printf("\t\t\tOpcija 5: 1.6 TD\n");
	printf("\t\t\tOpcija 6: 1.9 D\n");
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
		strcpy(PokNaAutomobil->motor, "2.8 VR6");
		system("cls");
		GlavniIzbornik();
		break;
	case 5:
		strcpy(PokNaAutomobil->motor, "1.6 TD");
		system("cls");
		GlavniIzbornik();
		break;
	case 6:
		strcpy(PokNaAutomobil->motor, "1.9 D");
		system("cls");
		GlavniIzbornik();
		break;
	case 9:
		system("cls");
		Passat();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Passat1993()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 1.8 Benzin\n");
	printf("\t\t\tOpcija 2: 2.0 Benzin\n");
	printf("\t\t\tOpcija 3: 2.8 VR6\n");
	printf("\t\t\tOpcija 4: 1.9 TD\n");
	printf("\t\t\tOpcija 5: 1.9 TDI\n");
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
		strcpy(PokNaAutomobil->motor, "2.8 VR6");
		system("cls");
		GlavniIzbornik();
		break;
	case 4:
		strcpy(PokNaAutomobil->motor, "1.9 TD");
		system("cls");
		GlavniIzbornik();
		break;
	case 5:
		strcpy(PokNaAutomobil->motor, "1.9 TDI");
		system("cls");
		GlavniIzbornik();
		break;
	case 9:
		system("cls");
		Passat();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Passat1996()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 1.6 Benzin\n");
	printf("\t\t\tOpcija 2: 1.8 Benzin\n");
	printf("\t\t\tOpcija 3: 2.3 VR5\n");
	printf("\t\t\tOpcija 4: 2.8 VR6\n");
	printf("\t\t\tOpcija 5: 4.0 W8\n");
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
		strcpy(PokNaAutomobil->motor, "2.3 VR5");
		system("cls");
		GlavniIzbornik();
		break;
	case 4:
		strcpy(PokNaAutomobil->motor, "2.8 VR6");
		system("cls");
		GlavniIzbornik();
		break;
	case 5:
		strcpy(PokNaAutomobil->motor, "4.0 W8");
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
		Passat();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Passat2005()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 1.6 FSI\n");
	printf("\t\t\tOpcija 2: 2.0 TFSI\n");
	printf("\t\t\tOpcija 3: 3.2 VR6\n");
	printf("\t\t\tOpcija 4: 3.6 R32\n");
	printf("\t\t\tOpcija 5: 1.9 TDI\n");
	printf("\t\t\tOpcija 6: 2.0 TDI\n");
	printf("\t\t\tOpcija 9: Nazad\n");
	printf("\t\t\tOpcija 0: izlaz iz programa!\n");
	printf("======================================\
======================================\n");
	int uvjet = 0;
	do
	{
		uvjet = _getch() - 48;
	} while (uvjet < 0 || uvjet>10 || uvjet==7 || uvjet == 8);
	switch (uvjet)
	{
	case 1:
		strcpy(PokNaAutomobil->motor, "1.6 FSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 2:
		strcpy(PokNaAutomobil->motor, "2.0 TFSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 3:
		strcpy(PokNaAutomobil->motor, "3.2 VR6");
		system("cls");
		GlavniIzbornik();
		break;
	case 4:
		strcpy(PokNaAutomobil->motor, "3.6 R32");
		system("cls");
		GlavniIzbornik();
		break;
	case 5:
		strcpy(PokNaAutomobil->motor, "1.9 TDI");
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
		Passat();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Passat2010()
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
		Passat();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Passat2014()
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
		Passat();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Passat2020()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 1.6 TSI\n");
	printf("\t\t\tOpcija 2: 2.0 TSI\n");
	printf("\t\t\tOpcija 3: 1.6 TDI\n");
	printf("\t\t\tOpcija 4: 2.0 TDI\n");
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
		strcpy(PokNaAutomobil->motor, "1.6 TSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 2:
		strcpy(PokNaAutomobil->motor, "2.0 TSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 3:
		strcpy(PokNaAutomobil->motor, "1.6 TDI");
		system("cls");
		GlavniIzbornik();
		break;
	case 4:
		strcpy(PokNaAutomobil->motor, "2.0 TDI");
		system("cls");
		GlavniIzbornik();
		break;
	case 9:
		system("cls");
		Passat();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Phaeton()
{
	printf("=========================");
	printf("Odaberite godiste phaetona:");
	printf("========================\n");
	printf("\t\t\tOpcija 1: Phaeton 2004-2010\n");
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
		strcpy(PokNaAutomobil->godiste, "2004-2010");
		system("cls");
		Phaeton2004();
		break;
	case 9:
		system("cls");
		VwModeli();
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Phaeton2004()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 3.2 V6\n");
	printf("\t\t\tOpcija 2: 4.2 V8\n");
	printf("\t\t\tOpcija 3: 6.0 W12.\n");
	printf("\t\t\tOpcija 4: 3.0 V6 TDI\n");
	printf("\t\t\tOpcija 5: 5.0 V8 TDI\n");
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
		strcpy(PokNaAutomobil->motor, "3.2 V6");
		system("cls");
		GlavniIzbornik();
		break;
	case 2:
		strcpy(PokNaAutomobil->motor, "4.2 V8");
		system("cls");
		GlavniIzbornik();
		break;
	case 3:
		strcpy(PokNaAutomobil->motor, "6.0 W12");
		system("cls");
		GlavniIzbornik();
		break;
	case 4:
		strcpy(PokNaAutomobil->motor, "3.0 TDI V6");
		system("cls");
		GlavniIzbornik();
		break;
	case 5:
		strcpy(PokNaAutomobil->motor, "5.0 TDI V8");
		system("cls");
		GlavniIzbornik();
		break;
	case 9:
		system("cls");
		Phaeton();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Polo()
{
	printf("===========================");
	printf("Odaberite godiste pola:");
	printf("==========================\n");
	printf("\t\t\tOpcija 1: Polo 1 1975-1981\n");
	printf("\t\t\tOpcija 2: Polo 2 1981-1994\n");
	printf("\t\t\tOpcija 3: Polo 3 1994-2001\n");
	printf("\t\t\tOpcija 4: Polo 4 2001-2009\n");
	printf("\t\t\tOpcija 5: Polo 5 2009-2017\n");
	printf("\t\t\tOpcija 6: Polo 6 2017+\n");
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
		strcpy(PokNaAutomobil->godiste, "1 1975-1981");
		system("cls");
		Polo1975();
		break;
	case 2:
		strcpy(PokNaAutomobil->godiste, "2 1981-1994");
		system("cls");
		Polo1981();
		break;
	case 3:
		strcpy(PokNaAutomobil->godiste, "3 1994-2001");
		system("cls");
		Polo1994();
		break;
	case 4:
		strcpy(PokNaAutomobil->godiste, "4 2001-2009");
		system("cls");
		Polo2001();
		break;
	case 5:
		strcpy(PokNaAutomobil->godiste, "5 2009-2017");
		system("cls");
		Polo2009();
		break;
	case 6:
		strcpy(PokNaAutomobil->godiste, "6 2017+");
		system("cls");
		Polo2017();
		break;
	case 9:
		system("cls");
		VwModeli();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Polo1975()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 0.9 Benzin\n");
	printf("\t\t\tOpcija 2: 1.1 Benzin\n");
	printf("\t\t\tOpcija 3: 1.3 Benzin\n");
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
		strcpy(PokNaAutomobil->motor, "0.9 Benzin");
		system("cls");
		GlavniIzbornik();
		break;
	case 2:
		strcpy(PokNaAutomobil->motor, "1.1 Benzin");
		system("cls");
		GlavniIzbornik();
		break;
	case 3:
		strcpy(PokNaAutomobil->motor, "1.3 Benzin");
		system("cls");
		GlavniIzbornik();
		break;
	case 9:
		system("cls");
		Polo();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Polo1981()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 1.0 Benzin\n");
	printf("\t\t\tOpcija 2: 1.3 Benzin\n");
	printf("\t\t\tOpcija 3: 1.4 Dizel\n");
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
		strcpy(PokNaAutomobil->motor, "1.0 Benzin");
		system("cls");
		GlavniIzbornik();
		break;
	case 2:
		strcpy(PokNaAutomobil->motor, "1.3 Benzin");
		system("cls");
		GlavniIzbornik();
		break;
	case 3:
		strcpy(PokNaAutomobil->motor, "1.4 Dizel");
		system("cls");
		GlavniIzbornik();
		break;
	case 9:
		Polo();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Polo1994()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 1.0 Benzin\n");
	printf("\t\t\tOpcija 2: 1.4 Benzin\n");
	printf("\t\t\tOpcija 3: 1.6 Benzin\n");
	printf("\t\t\tOpcija 4: 1.4 TDI\n");
	printf("\t\t\tOpcija 5: 1.9 D\n");
	printf("\t\t\tOpcija 6: 1.9 SDI\n");
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
		break;
		strcpy(PokNaAutomobil->motor, "1.4 Benzin");
		system("cls");
		GlavniIzbornik();
	case 3:
		strcpy(PokNaAutomobil->motor, "1.6 Benzin");
		system("cls");
		GlavniIzbornik();
		break;
	case 4:
		strcpy(PokNaAutomobil->motor, "1.4 TDI");
		system("cls");
		GlavniIzbornik();
		break;
	case 5:
		strcpy(PokNaAutomobil->motor, "1.9 D");
		system("cls");
		GlavniIzbornik();
		break;
	case 6:
		strcpy(PokNaAutomobil->motor, "1.0 SDI");
		system("cls");
		GlavniIzbornik();
		break;
	case 9:
		system("cls");
		Polo();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Polo2001()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 1.2 Benzin\n");
	printf("\t\t\tOpcija 2: 1.4 Benzin\n");
	printf("\t\t\tOpcija 3: 1.6 Benzin\n");
	printf("\t\t\tOpcija 4: 1.4 TDI\n");
	printf("\t\t\tOpcija 5: 1.9 TDI\n");
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
		strcpy(PokNaAutomobil->motor, "1.2 Benzin");
		system("cls");
		GlavniIzbornik();
		break;
	case 2:
		strcpy(PokNaAutomobil->motor, "1.4 Benzin");
		system("cls");
		GlavniIzbornik();
		break;
	case 3:
		strcpy(PokNaAutomobil->motor, "1.6 Benzin");
		system("cls");
		GlavniIzbornik();
		break;
	case 4:
		strcpy(PokNaAutomobil->motor, "1.4 TDI");
		system("cls");
		GlavniIzbornik();
		break;
	case 5:
		strcpy(PokNaAutomobil->motor, "1.9 TDI");
		system("cls");
		GlavniIzbornik();
		break;
	case 9:
		system("cls");
		Polo();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Polo2009()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 1.0 TSI\n");
	printf("\t\t\tOpcija 2: 1.2 TSI\n");
	printf("\t\t\tOpcija 3: 1.4 TSI\n");
	printf("\t\t\tOpcija 4: 1.8 TSI\n");
	printf("\t\t\tOpcija 5: 1.4 TDI\n");
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
		strcpy(PokNaAutomobil->motor, "1.4 TSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 4:
		strcpy(PokNaAutomobil->motor, "1.8 TSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 5:
		strcpy(PokNaAutomobil->motor, "1.0 TDI");
		system("cls");
		GlavniIzbornik();
		break;
	case 9:
		system("cls");
		Polo();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Polo2017()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 1.0 TSI\n");
	printf("\t\t\tOpcija 2: 1.5 TSI\n");
	printf("\t\t\tOpcija 3: 2.0 TSI\n");
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
		strcpy(PokNaAutomobil->motor, "1.0 TSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 2:
		strcpy(PokNaAutomobil->motor, "1.5 TSI");
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
	case 9:
		system("cls");
		Polo();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}