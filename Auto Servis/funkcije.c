#include "header.h"

AUTOMOBIL* ZauzimanjeAuta(void)
{
    AUTOMOBIL* tempauto = NULL;
    tempauto = (AUTOMOBIL*)calloc(1, sizeof(AUTOMOBIL));
    if (tempauto == NULL)
    {
        return NULL;
    }
    return tempauto;
}
AUTOMEHANICAR* ZauzimanjeAutomehanicara(void)
{
    AUTOMEHANICAR* tempautomehanicar = NULL;
    tempautomehanicar = (AUTOMEHANICAR*)calloc(1, sizeof(AUTOMEHANICAR));
    if (tempautomehanicar == NULL)
    {
        return NULL;
    }
    return tempautomehanicar;
}

AUTOMEHANICAR* NapraviListu(void)
{

    AUTOMEHANICAR* Glava = (AUTOMEHANICAR*)calloc(1, sizeof(AUTOMEHANICAR));
    if (Glava == NULL) {
        perror("Kreiranje");
        return NULL;
    }
    unos(&Glava->ime);
    unos(&Glava->prezime);
    fscanf(fileautomehanicar, "%d", &Glava->id);
    Glava->SljedecaGlava = NULL;
    return Glava;
}

void unos(char** pok)
{
    char pomocnoPolje[50] = { 0 };
    int duljina = 0;
    fscanf(fileautomehanicar, "%49s", pomocnoPolje);
    duljina = strlen(pomocnoPolje);
    *pok = (char*)calloc(duljina + 1, sizeof(char));
    if (*pok == NULL)
    {
        return;
    }
    strcpy(*pok, pomocnoPolje);
}

AUTOMEHANICAR* UnesiUGlavu(AUTOMEHANICAR* Glava)
{
    AUTOMEHANICAR* NovaGlava = (AUTOMEHANICAR*)calloc(1, sizeof(AUTOMEHANICAR));
    if (NovaGlava == NULL)
    {
        perror("Kreiranje");
        return Glava;
    }
    unos(&NovaGlava->ime);
    unos(&NovaGlava->prezime);
    fscanf(fileautomehanicar, "%d", &NovaGlava->id);
    NovaGlava->SljedecaGlava = Glava;

    return NovaGlava;
}

void ZaposliAutohemanicara(void)
{
    fileautomehanicar = fopen("zaposleniautomehanicari.txt", "a+");
    if (fileautomehanicar == NULL)
    {
        printf("Neuspjelo otvaranje datoteke\n");
		return NULL;
    }
    AUTOMEHANICAR* NoviRadnik = (AUTOMEHANICAR*)calloc(1, sizeof(AUTOMEHANICAR));
    if (NoviRadnik == NULL)
    {
        perror("kreiranje liste na pocetku");
        return NULL;
    }
    printf("Unesi ime: ");
    manualniunos(&NoviRadnik->ime);
    printf("Unesi prezime: ");
    manualniunos(&NoviRadnik->prezime);
    
    char nptr[100];
    char* errptr;
    do
    {
        printf("Unesi ID: ");
		getchar();
        fgets(nptr, sizeof nptr, stdin);
        NoviRadnik->id = strtol(nptr, &errptr, 10);
        CiljanaLista = ZauzimanjeAutomehanicara();
        CiljanaLista = PretrazivanjeListe(Glava, NoviRadnik->id);
    } while ((*errptr != '\n' && *errptr != '\0') || NoviRadnik->id <= 0 || NoviRadnik->id > 100 || CiljanaLista !=NULL);
    fprintf(fileautomehanicar,"%s %s %d\n", NoviRadnik->ime, NoviRadnik->prezime, NoviRadnik->id);
    free(CiljanaLista);
    fclose(fileautomehanicar);
}

void manualniunos(char** pok)
{
    char pomocnoPolje[50] = { 0 };
    int duljina = 0;
    scanf("%49s",pomocnoPolje);
    duljina = strlen(pomocnoPolje);
    *pok = (char*)calloc(duljina + 1, sizeof(char));
    if (*pok == NULL)
    {
        return;
    }
    pomocnoPolje[0] = toupper(pomocnoPolje[0]);
    strcpy(*pok, pomocnoPolje);
}

int ProlazKrozListu(AUTOMEHANICAR* GlavaProlaza)
{
    int brojac = 0;
    if (GlavaProlaza == NULL) 
    {
        return -1;
    }
    else 
    {
        while (GlavaProlaza)
        {
            brojac++;
            printf("%s %s %d\t\n", GlavaProlaza->ime, GlavaProlaza->prezime, GlavaProlaza->id);
            GlavaProlaza = GlavaProlaza->SljedecaGlava;
        }
    }
    return brojac;
}

AUTOMEHANICAR* PretrazivanjeListe(AUTOMEHANICAR* GlavaProlaza, int uvjet)
{
    while (GlavaProlaza)
    {
        if (GlavaProlaza->id == uvjet)
        {
            return GlavaProlaza;
        }
        else
        {
            GlavaProlaza = GlavaProlaza->SljedecaGlava;
        }
    }
    return NULL;

}

void ObrisiClana(AUTOMEHANICAR** Glava, AUTOMEHANICAR* CiljanaLista)
{

    if (*Glava == CiljanaLista)
    {
        *Glava = (*Glava)->SljedecaGlava;
        free(CiljanaLista);
    }
    else
    {
        AUTOMEHANICAR* GlavaProlaza = *Glava;
        while (GlavaProlaza->SljedecaGlava)
        {
            if (GlavaProlaza->SljedecaGlava == CiljanaLista)
            {
                GlavaProlaza->SljedecaGlava = CiljanaLista->SljedecaGlava;

                printf("Obrisan %s %s\n", CiljanaLista->ime, CiljanaLista->prezime);
                free(CiljanaLista->ime);
                free(CiljanaLista->prezime);
                break;
            }
            GlavaProlaza = GlavaProlaza->SljedecaGlava;

        }

    }

}

AUTOMEHANICAR* ObrisiCjeluListu(AUTOMEHANICAR* GlavaProlaza)
{
    AUTOMEHANICAR* ObrisiListu = NULL;
    while (GlavaProlaza)
    {
        ObrisiListu = GlavaProlaza;
        GlavaProlaza = GlavaProlaza->SljedecaGlava;

        free(ObrisiListu->ime);
        free(ObrisiListu->prezime);
        free(ObrisiListu->id);
 
    }
    return NULL;

}

void ZapisUFile(AUTOMEHANICAR* GlavaProlaza)
{
    int brojac = 0;
    if (GlavaProlaza == NULL)
    {
        return NULL;
    }
    ///remove("zaposleniautomehanicari.txt");
    fclose(fileautomehanicar);
    fileautomehanicar = fopen("zaposleniautomehanicari.txt", "w");
    if (fileautomehanicar == NULL)
    {
        printf("Neuspjelo otvaranje datoteke\n");
        return NULL;
    }
    fclose(fileautomehanicar);
    fileautomehanicar = fopen("zaposleniautomehanicari.txt", "a+");
    if (fileautomehanicar == NULL)
    {
        printf("Neuspjelo otvaranje datoteke\n");
        return NULL;
    }

    fseek(fileautomehanicar, 0, SEEK_END);
    size = ftell(fileautomehanicar);
    if (size != 0)
    {
        printf("Neuspjelo brisanje datoteke\n");
    }
    fseek(fileautomehanicar, 0, SEEK_SET);

    while (GlavaProlaza)
    {
        fprintf(fileautomehanicar,"%s %s %d\t\n", GlavaProlaza->ime, GlavaProlaza->prezime, GlavaProlaza->id);
        GlavaProlaza = GlavaProlaza->SljedecaGlava;
    }  
}

void BrojacZaposlenihAutomehanicara()
{
    char c;
    brojzaposlenihautomehanicra = 0;
    for (c = getc(fileautomehanicar); c != EOF; c = getc(fileautomehanicar))
        if (c == '\n')
        {
            brojzaposlenihautomehanicra++;  
        }
    fseek(fileautomehanicar, 0, SEEK_SET);
}

void TrenutnoVrijeme(void)
{
    char* dan = NULL;
    dan = malloc(20 * sizeof * dan);
    if (!dan) 
    {  
        fputs("error: zauzimanje memorije za dan neuspjesno", stderr);
        return NULL;
    }
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    if (tm.tm_wday == 0)
    {
        strcpy(dan, "Nedjelja");
    }
    else if (tm.tm_wday == 1)
    {
        strcpy(dan, "Ponedjeljak");
    }
    else if (tm.tm_wday == 2)
    {
        strcpy(dan, "Utorak");
    }
    else if (tm.tm_wday == 3)
    {
        strcpy(dan, "Srijeda");
    }
    else if (tm.tm_wday == 4)
    {
        strcpy(dan, "Cetvrtak");
    }
    else if (tm.tm_wday == 5)
    {
        strcpy(dan, "Petak");
    }
    else if (tm.tm_wday == 6)
    {
        strcpy(dan, "Subota");
    }
    fprintf(fileracun,"%s %d-%02d-%02d %02d:%02d:%02d\n", dan, tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900, tm.tm_hour, tm.tm_min, tm.tm_sec);
    free(dan);

}

void malibudget(void)
{
    fprintf(fileracun, "%s", "5W30 PEMCO IDRIVE 345 5L 162.90 HRK\n");
    fprintf(fileracun, "%s", "KAMOKA Filter ulja 30.82 HRK\n");
    fprintf(fileracun, "%s", "KAMOKA Filter kabine  43.55 HRK\n");
    fprintf(fileracun, "%s", "KAMOKA Filter zraka  54.27 HRK\n");
    fprintf(fileracun, "%s", "Ruke 150 HRK\n");
    fprintf(fileracun, "%s", "Ukupna cijena 414.54 HRK\n");
}

void maliregular(void)
{
    fprintf(fileracun, "%s", "5W30 Castrol Edge Titanium LL FST 4L 290.64 HRK\n");
    fprintf(fileracun, "%s", "5W30 Castrol Edge Titanium LL FST 1L  69.36 HRK\n");
    fprintf(fileracun, "%s", "Bosch Filtar ulja 52.93 HRK\n");
    fprintf(fileracun, "%s", "Bosch Filtar kabine 71.02 HRK\n");
    fprintf(fileracun, "%s", "Bosch Filtar zraka 84.42 HRK\n");
    fprintf(fileracun, "%s", "Ruke 200 HRK\n");
    fprintf(fileracun, "%s", "Ukupna cijena 768.37 HRK\n");
}

void malipremium(void)
{
    fprintf(fileracun, "%s", "5W30 Castrol Edge Titanium LL FST 4L 290.64 HRK\n");
    fprintf(fileracun, "%s", "5W30 Castrol Edge Titanium LL FST 1L  69.36 HRK\n");
    fprintf(fileracun, "%s", "Filter za ulje K&N HP-1006 95 HRK\n");
    fprintf(fileracun, "%s", "CoopersFiaam Filtar kabine 150.08 HRK\n");
    fprintf(fileracun, "%s", "Sportski Filtar za zrak K&N RU-4960 388 HRK\n");
    fprintf(fileracun, "%s", "Ruke 250 HRK\n");
    fprintf(fileracun, "%s", "Ukupna cijena 1243.08 HRK\n");
}

void velikibudget(void)
{
    fprintf(fileracun, "%s", "5W30 PEMCO IDRIVE 345 5L 162.90 HRK\n");
    fprintf(fileracun, "%s", "KAMOKA Filter ulja 30.82 HRK\n");
    fprintf(fileracun, "%s", "KAMOKA Filter kabine  43.55 HRK\n");
    fprintf(fileracun, "%s", "KAMOKA Filter zraka  54.27 HRK\n");
    fprintf(fileracun, "%s", "Dayco Pumpa vode + sklop zupcastog remena 741.60 HRK\n");
    fprintf(fileracun, "%s", "Antifriz al extra crveni G12 + 3L 65.66 HRK\n");
    fprintf(fileracun, "%s", "Antifriz al extra crveni G12 + 1L 21.44 HRK\n");
    fprintf(fileracun, "%s", "AS-PL Remenica alternatora  168.17 HRK\n");
    fprintf(fileracun, "%s", "Febi Klinasti orebreni remen  45.57 HRK\n");
    fprintf(fileracun, "%s", "Ruke 250 HRK\n");
    fprintf(fileracun, "%s", "Ukupna cijena 1538.85 HRK\n");
}

void velikiregular(void)
{
    fprintf(fileracun, "%s", "5W30 Castrol Edge Titanium LL FST 4L 290.64 HRK\n");
    fprintf(fileracun, "%s", "5W30 Castrol Edge Titanium LL FST 1L  69.36 HRK\n");
    fprintf(fileracun, "%s", "Bosch Filtar ulja 52.93 HRK\n");
    fprintf(fileracun, "%s", "Bosch Filtar kabine 71.02 HRK\n");
    fprintf(fileracun, "%s", "Bosch Filtar zraka 84.42 HRK\n");
    fprintf(fileracun, "%s", "Bosch Vodena pumpa + sklop zupcastog remena  853.80 HRK\n");
    fprintf(fileracun, "%s", "Antifriz al extra crveni G12 + 3L 65.66 HRK\n");
    fprintf(fileracun, "%s", "Antifriz al extra crveni G12 + 1L 21.44 HRK\n");
    fprintf(fileracun, "%s", "Bosch Slobodni hod generatora  306.19 HRK\n");
    fprintf(fileracun, "%s", "Bosch Klinasti orebreni remen  95.14 HRK\n");
    fprintf(fileracun, "%s", "Ruke 300 HRK\n");
    fprintf(fileracun, "%s", "Ukupna cijena 2205.6 HRK\n");
}

void velikipremium(void)
{
    fprintf(fileracun, "%s", "5W30 Castrol Edge Titanium LL FST 4L 290.64 HRK\n");
    fprintf(fileracun, "%s", "5W30 Castrol Edge Titanium LL FST 1L  69.36 HRK\n");
    fprintf(fileracun, "%s", "Filter za ulje K&N HP-1006 95 HRK\n");
    fprintf(fileracun, "%s", "CoopersFiaam Filtar kabine 150.08 HRK\n");
    fprintf(fileracun, "%s", "Sportski Filtar za zrak K&N RU-4960 388 HRK\n");
    fprintf(fileracun, "%s", "Bosch Vodena pumpa + sklop zupcastog remena  853.80 HRK\n");
    fprintf(fileracun, "%s", "Antifriz al extra crveni G12 + 3L 65.66 HRK\n");
    fprintf(fileracun, "%s", "Antifriz al extra crveni G12 + 1L 21.44 HRK\n");;
    fprintf(fileracun, "%s", "Bosch Slobodni hod generatora  306.19 HRK\n");
    fprintf(fileracun, "%s", "Bosch Klinasti orebreni remen  95.14 HRK\n");
    fprintf(fileracun, "%s", "Ruke 350 HRK\n");
    fprintf(fileracun, "%s", "Ukupna cijena 2655.31 HRK\n");
}

void pretrazivanjeracuna(void)
{
    char string[150] = "";
    char novalinija[3] = "";
    int rezultat = 0;
    int izlaz = 0;
    FILE* filepretracun = NULL;

    filepretracun = fopen("racun.txt", "r");
    if (filepretracun == NULL)
    {
        perror("racun.txt");
        return;
    }
    do
    {
        string[0] = 0;
        if (1 == (rezultat = fscanf(filepretracun, "%2[\n]", novalinija)))
        {
            if (izlaz)
            {
                printf("%s", novalinija);
            }
            if ('\n' == novalinija[1]) 
            {
                izlaz = 0;
            }
        }
        else 
        {
            rezultat = fscanf(filepretracun, "%149s", string);
            if (strstr(string, odabranidan))
            {
                izlaz = 1;
            }
        }
        if (izlaz && string[0]) 
        {
            printf("%s ", string);
        }
    } while (EOF != rezultat);

    fclose(filepretracun);
    char odabranidan[15] = {0};

}

void maliizbornik(void)
{
    printf("\n\nZa vracanje na pocetni izbornik pritisni 1: ");
    printf("\nZa izlaz iz programa pritisni 0: ");
    int uvjet = 0;
    do
    {
        uvjet = _getch() - 48;
    } while (uvjet != 1 && uvjet != 0);
    switch (uvjet)
    {
    case 1:
        system("cls");
        GlavniIzbornik();
        break;
    default:
        uvjet = 0;
    case 0:
        break;
    }
}