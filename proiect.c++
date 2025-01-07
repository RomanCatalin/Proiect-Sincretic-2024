#include <iostream>
#include <cstdlib>
#include <ctime>

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

void interfata()
{
    cout << endl;
    cout << endl;
    cout << "Program dedicat rezolvarii problemei celor 8 turnuri" << endl;
    cout << endl;

    /* 
    cout << "Realizarea si afisarea tuturor solutiilor" << endl;
    solutii = 0;
    initializare_tabla();
    plasare(0, 0);
    cout << endl;
    cout << endl;
    cout << endl; */



    //cout << "Realizarea si afisarea unei solutii aleatorie" << endl;
    cout << endl;
    plasare_aleatorie();

    solutii = 0;
    initializare_tabla();
    plasare(0, 1);
    cout << "Numarul total de solutii: " << solutii << endl;

}

int main()
{
    srand(time(0));

    interfata();

    return 0;
}