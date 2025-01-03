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


int main()
{


    return 0;
}