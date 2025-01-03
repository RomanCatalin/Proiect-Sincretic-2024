#include <iostream>

using namespace std;

int tabla_sah[8];

void initializare_tabla()
{
    for(int i = 0; i < 8; i++)
    {
        tabla_sah[i]=-1;
    }
}

int verificare(int linie, int coloana)
{
    for(int i = 0; i < linie; ++i)
    {
        if(tabla_sah[i]==coloana)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}

void afisare_tabla()
{
    for(int i = 0 ; i < 8;i++)
    {
        for(int j = 0; j < 8;j++)
        {
            if(tabla_sah[i]==j)
            {
                cout << "T ";
            }
            else
            {
                cout <<"_ ";
            }
        }
        cout << endl;
    }
}

void plasare(int linie)
{
    if(linie == 8)
    {
        afisare_tabla();
        return;
    }

    for(int coloana = 0; coloana < 8; coloana++)
    {
        if(verificare(linie,coloana))
        {
            tabla_sah[linie] = coloana;
            plasare(linie++);
        }
    }

}


int main()
{
    initializare_tabla();

    plasare(0);





    return 0;
}