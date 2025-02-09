#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstdlib>

using namespace std;

int tabla_sah[8];
int solutii = 0;

void initializare_tabla()
{
    for (int i = 0; i < 8; i++)
    {
        tabla_sah[i] = -1;
    }
}

int verificare(int linie, int coloana)
{
    for (int i = 0; i < linie; ++i)
    {
        if (tabla_sah[i] == coloana)
        {
            return 0;
        }
    }
    return 1;
}

void afisare_tabla()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (tabla_sah[i] == j)
            {
                cout << "T ";
            }
            else
            {
                cout << "_ ";
            }
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;
}

void plasare(int linie, int tip)
{
    if (linie == 8 && tip == 0)
    {
        afisare_tabla();
        solutii++;
        return;
    }
    else if (linie == 8 && tip == 1)
    {
        solutii++;
        return;
    }

    for (int coloana = 0; coloana < 8; coloana++)
    {
        if (verificare(linie, coloana))
        {
            tabla_sah[linie] = coloana;
            plasare(linie + 1, tip);
            tabla_sah[linie] = -1;
        }
    }
}

void plasare_aleatorie()
{
    initializare_tabla();

    for (int i = 0; i < 8; i++)
    {
        int j;
        do
        {
            j = rand() % 8;
        } while (!verificare(i, j));
        tabla_sah[i] = j;
    }
    afisare_tabla();
}

void meniu()
{
    int opt = 0;
    do
    {
        cout << endl
             << "Program dedicat rezolvarii problemei celor 8 turnuri" << endl;
        cout << "--- Alegeti o optiune ---" << endl;
        cout << "1. Realizarea si afisarea tuturor solutiilor" << endl;
        cout << "2. Realizarea si afisarea unei solutii aleatorie" << endl;
        cout << "3. Afisarea numarului de solutii posibile" << endl;
        cout << "0. Iesire" << endl;
        cout << endl;

        cin >> opt;

        switch (opt)
        {
        case 1:
            solutii = 0;
            system("clear");
            cout << "Ati ales realizarea si afisarea tuturor solutiilor" << endl;
            initializare_tabla();
            plasare(0, 0);
            break;

        case 2:
            system("clear");
            cout << "Ati ales realizarea si afisarea unei solutii aleatorie" << endl;
            plasare_aleatorie();

            break;

        case 3:
            solutii = 0;
            system("clear");
            cout << "Ati ales afisarea numarului de solutii posibile" << endl;
            cout << endl;
            initializare_tabla();
            plasare(0, 1);
            cout << "Numarul total de solutii: " << solutii << endl;
            cout << endl;

            break;

        case 0:
            system("clear");
            cout << "Ati ales iesire! La revedere!";
            cout << endl;

            break;

        default:
            system("clear");
            cout << "Ati ales o optiune invalida!" << endl;
            break;
        }

    } while (opt != 0);
}

int main()
{
    srand(time(0));

    meniu();

    return 0;
}