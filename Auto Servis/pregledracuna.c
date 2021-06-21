#include "header.h"

void pretrazivanjepodanu(void)
{
    printf("================================");
    printf("Odaberi dan:");
    printf("================================\n");
    printf("\t\t\tOpcija 1: Ponedjeljak\n");
    printf("\t\t\tOpcija 2: Utorak\n");
    printf("\t\t\tOpcija 3: Srijeda\n");
    printf("\t\t\tOpcija 4: Cetvrtak\n");
    printf("\t\t\tOpcija 5: Petak\n");
    printf("\t\t\tOpcija 6: Subota\n");
    printf("\t\t\tOpcija 7: Nedjelja\n");
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
        strcpy(odabranidan, "Ponedjeljak");
        system("cls");
        pretrazivanjeracuna();
        maliizbornik();
        break;
    case 2:
        strcpy(odabranidan, "Utorak");
        system("cls");
        pretrazivanjeracuna();
        maliizbornik();
        break;
    case 3:
        strcpy(odabranidan, "Srijeda");
        system("cls");
        pretrazivanjeracuna();
        maliizbornik();
        break;
    case 4:
        strcpy(odabranidan, "Cetvrtak");
        system("cls");
        pretrazivanjeracuna();
        maliizbornik();
		break;
	case 5:
        strcpy(odabranidan, "Petak");
        system("cls");
        pretrazivanjeracuna();
        maliizbornik();
		break;
	case 6:
        strcpy(odabranidan, "Subota");
        system("cls");
        pretrazivanjeracuna();
        maliizbornik();
		break;
	case 7:
        strcpy(odabranidan, "Nedjelja");
        system("cls");
        pretrazivanjeracuna();
        maliizbornik();
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

