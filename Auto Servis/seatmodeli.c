#include "header.h"


int SeatModeli()
{
	printf("============================");
	printf("Odaberite seat model:");
	printf("===========================\n");
	printf("\t\t\tOpcija 1: Ateca\n");
	printf("\t\t\tOpcija 2: Ibiza\n");
	printf("\t\t\tOpcija 3: Leon\n");
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
		strcpy(PokNaAutomobil->model, "Ateca");
		system("cls");
		Ateca();
		break;
	case 2:
		strcpy(PokNaAutomobil->model, "Ibiza");
		system("cls");
		Ibiza();
		break;
	case 3:
		strcpy(PokNaAutomobil->model, "Leon");
		system("cls");
		Leon();
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

int Ateca()
{
	printf("==========================");
	printf("Odaberite godiste ateca:");
	printf("==========================\n");
	printf("\t\t\tOpcija 1: Ateca 2016-2020\n");
	printf("\t\t\tOpcija 2: Ateca Facelift 2020+\n");
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
		strcpy(PokNaAutomobil->godiste, "2016-2020");
		system("cls");
		Ateca2016();
		break;
	case 2:
		strcpy(PokNaAutomobil->godiste, "Facelift 2020+");
		system("cls");
		Ateca2020();
		break;
	case 9:
		system("cls");
		SeatModeli();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Ateca2016()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 1.4 TSI\n");
	printf("\t\t\tOpcija 2: 1.5 TSI\n");
	printf("\t\t\tOpcija 3: 2.0 TSI\n");
	printf("\t\t\tOpcija 4: 2.0 TSI Cupra\n");
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
		strcpy(PokNaAutomobil->motor, "1.4 TSI");
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
		strcpy(PokNaAutomobil->motor, "2.0 TSI Cupra");
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
		Ateca();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Ateca2020()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 1.0 TSI\n");
	printf("\t\t\tOpcija 2: 1.5 TSI\n");
	printf("\t\t\tOpcija 3: 2.0 TSI\n");
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
		strcpy(PokNaAutomobil->motor, "2.0 TDI");
		system("cls");
		GlavniIzbornik();
		break;
	case 9:
		system("cls");
		Ateca();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Ibiza()
{
	printf("==========================");
	printf("Odaberite godiste ibiza:");
	printf("==========================\n");
	printf("\t\t\tOpcija 1: Ibiza 1 1984-1993\n");
	printf("\t\t\tOpcija 2: Ibiza 2 1993-2002\n");
	printf("\t\t\tOpcija 3: Ibiza 3 2002-2008\n");
	printf("\t\t\tOpcija 4: Ibiza 4 2008-2017\n");
	printf("\t\t\tOpcija 5: Ibiza 5 2017+\n");
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
		strcpy(PokNaAutomobil->godiste, "1 1984-1993");
		system("cls");
		Ibiza1984();
		break;
	case 2:
		strcpy(PokNaAutomobil->godiste, "2 1993-2002");
		system("cls");
		Ibiza1993();
		break;
	case 3:
		strcpy(PokNaAutomobil->godiste, "3 2002-2008");
		system("cls");
		Ibiza2002();
		break;
	case 4:
		strcpy(PokNaAutomobil->godiste, "4 2008-2017");
		system("cls");
		Ibiza2008();
		break;
	case 5:
		strcpy(PokNaAutomobil->godiste, "5 2017+");
		system("cls");
		Ibiza2017();
		break;
	case 9:
		system("cls");
		SeatModeli();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Ibiza1984()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 1.2 Benzin\n");
	printf("\t\t\tOpcija 2: 1.5 Benzin\n");
	printf("\t\t\tOpcija 3: 1.7 Benzin\n");
	printf("\t\t\tOpcija 4: 1.7 D\n");
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
		strcpy(PokNaAutomobil->motor, "1.2 Benzin");
		system("cls");
		GlavniIzbornik();
		break;
	case 2:
		strcpy(PokNaAutomobil->motor, "1.5 Benzin");
		system("cls");
		GlavniIzbornik();
		break;
	case 3:
		strcpy(PokNaAutomobil->motor, "1.7 Benzin");
		system("cls");
		GlavniIzbornik();
		break;
	case 4:
		strcpy(PokNaAutomobil->motor, "1.7 D");
		system("cls");
		GlavniIzbornik();
		break;
	case 9:
		system("cls");
		Ibiza();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Ibiza1993()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 1.0 Benzin\n");
	printf("\t\t\tOpcija 2: 1.4 Benzin\n");
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
		Ibiza();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Ibiza2002()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 1.2 Benzin\n");
	printf("\t\t\tOpcija 2: 1.4 Benzin\n");
	printf("\t\t\tOpcija 3: 1.8 Benzin\n");
	printf("\t\t\tOpcija 4: 2.0 GTI\n");
	printf("\t\t\tOpcija 5: 1.4 TDI\n");
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
		strcpy(PokNaAutomobil->motor, "1.4 TDI");
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
		Ibiza();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Ibiza2008()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 1.2 TSI\n");
	printf("\t\t\tOpcija 2: 1.4 TSI\n");
	printf("\t\t\tOpcija 3: 1.6 TSI\n");
	printf("\t\t\tOpcija 4: 1.2 TDI\n");
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
		strcpy(PokNaAutomobil->motor, "1.6 TSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 4:
		strcpy(PokNaAutomobil->motor, "1.2 TDI");
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
		Ibiza();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Ibiza2017()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 1.2 TSI\n");
	printf("\t\t\tOpcija 2: 1.5 TSI\n");
	printf("\t\t\tOpcija 3: 1.6 TDI\n");
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
		strcpy(PokNaAutomobil->motor, "1.2 TSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 2:
		strcpy(PokNaAutomobil->motor, "1.5 TSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 3:
		strcpy(PokNaAutomobil->motor, "1.6 TDI");
		system("cls");
		GlavniIzbornik();
		break;
	case 9:
		system("cls");
		Ibiza();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}


int Leon()
{
	printf("===========================");
	printf("Odaberite godiste leon:");
	printf("==========================\n");
	printf("\t\t\tOpcija 1: Leon 1 1999-2004\n");
	printf("\t\t\tOpcija 2: Leon 2 2005-2013\n");
	printf("\t\t\tOpcija 3: Leon 3 2013-2017\n");
	printf("\t\t\tOpcija 4: Leon 4 2020+\n");
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
		strcpy(PokNaAutomobil->godiste, "1 1999-2004");
		system("cls");
		Leon1999();
		break;
	case 2:
		strcpy(PokNaAutomobil->godiste, "2 2005-2013");
		system("cls");
		Leon2005();
		break;
	case 3:
		strcpy(PokNaAutomobil->godiste, "Leon 3 2013-2017");
		system("cls");
		Leon2013();
		break;
	case 4:
		strcpy(PokNaAutomobil->godiste, "4 2020+");
		system("cls");
		Leon2020();
		break;
	case 9:
		system("cls");
		SeatModeli();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Leon1999()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 1.6 Benzin\n");
	printf("\t\t\tOpcija 2: 1.8 Benzin\n");
	printf("\t\t\tOpcija 3: 2.8 VR6 Cupra\n");
	printf("\t\t\tOpcija 4: 1.9 SDI\n");
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
		strcpy(PokNaAutomobil->motor, "2.8 VR6 Cupra");
		system("cls");
		GlavniIzbornik();
		break;
	case 4:
		strcpy(PokNaAutomobil->motor, "1.9 SDI");
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
		Leon();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Leon2005()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 1.8 TFSI\n");
	printf("\t\t\tOpcija 2: 2.0 TFSI\n");
	printf("\t\t\tOpcija 3: 2.0 TFSI Cupra\n");
	printf("\t\t\tOpcija 4: 1.9 TDI\n");
	printf("\t\t\tOpcija 5: 2.0 TDI\n");
	printf("\t\t\tOpcija 6: 2.0 TDI FR \n");
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
		strcpy(PokNaAutomobil->motor, "1.8 TFSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 2:
		strcpy(PokNaAutomobil->motor, "2.0 TFSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 3:
		strcpy(PokNaAutomobil->motor, "2.0 TFSI Cupra");
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
	case 6:
		strcpy(PokNaAutomobil->motor, "2.0 TDI FR");
		system("cls");
		GlavniIzbornik();
		break;
	case 9:
		system("cls");
		Leon();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Leon2013()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 1.0 TSI\n");
	printf("\t\t\tOpcija 2: 1.4 TSI\n");
	printf("\t\t\tOpcija 3: 2.0 TSI\n");
	printf("\t\t\tOpcija 4: 2.0 TSI Cupra\n");
	printf("\t\t\tOpcija 5: 1.6 TDI\n");
	printf("\t\t\tOpcija 6: 2.0 TDI\n");
	printf("\t\t\tOpcija 7: 2.0 TDI FR \n");
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
		strcpy(PokNaAutomobil->motor, "2.0 TSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 4:
		strcpy(PokNaAutomobil->motor, "2.0 TSI Cupra");
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
	case 7:
		strcpy(PokNaAutomobil->motor, "2.0 TDI FR");
		system("cls");
		GlavniIzbornik();
		break;
	case 9:
		system("cls");
		Leon();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}

int Leon2020()
{
	printf("==============================");
	printf("Odaberite motor:");
	printf("==============================\n");
	printf("\t\t\tOpcija 1: 1.0 eTSI\n");
	printf("\t\t\tOpcija 2: 1.0 TSI\n");
	printf("\t\t\tOpcija 3: 1.5 eTSI\n");
	printf("\t\t\tOpcija 4: 1.5 TSI\n");
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
		strcpy(PokNaAutomobil->motor, "1.0 eTSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 2:
		strcpy(PokNaAutomobil->motor, "1.0 TSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 3:
		strcpy(PokNaAutomobil->motor, "1.5 eTSI");
		system("cls");
		GlavniIzbornik();
		break;
	case 4:
		strcpy(PokNaAutomobil->motor, "1.5 TSI");
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
		Leon();
		break;
	case 0:
		break;
	default:
		uvjet = 0;
	}
	return uvjet;
}