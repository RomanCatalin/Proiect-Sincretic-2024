# **Proiect-Sincretic 2024**

### Tema proiectului: Implementarea unui program care rezolva problema celor 8 turnuri

 
Proiectul a fost realizat in cadrul anului universitar 2024-2025, pentru materia optionala Metode avansate de programare.

### 1. Introducere

**Scopul:** Plasarea a 8 turnuri pe o tabla de sah 8x8 astfel incat niciunul sa nu se atace reciproc. Mai exact, turnurile nu pot fi plasate pe aceeasi linie sau coloana.

**Mediu de programare folosit:** Visual Studio Code

**Sistem de operare:** Windows 10 x64
  
  
### 2. Implementare

Conceptul pe care se bazeaza programul este Backtracking,

Backtracking-ul se refera la cautarea tuturor solutiilor posibile, si selectarea solutiilor care respecta un set de parametri sau cerinte.

**Librarii folosite:**

 - **iostream** : permite folosirea functiilor 'cin' 'cout', in scopul citirii optiunii dorite, respectiv afisarii solutiilor
 - **cstdlib** : permite folosirea functiilor 'rand()' si 'srand()', in scopul plasarii aleatoare
 - **ctime** : folosita pentru initializarea generatorului de nume aleatoare
 - **using namespace std** : permite utilizarea directa a functiilor, fara a avea nevoie de prefixul 'std::'

  **Variabile globale:**
 - **int tabla_sah[8]** : reprezinta tabloul de sah, fiecare index reprezinta o linie iar valoarea de pe acel index reprezinta coloana pe care este plasata turnul 
 - **int solutii** : un contor care numara cate solutii corecte au fost gasite in total
 
 **Functia: "int_verificare"**
 Aceasta functie verifica daca putem plasa un turn pe o anumita linie si coloana, se asigura ca nu exista un turn plasat pe aceeasi coloana in randurile anterioare.
 
 Tipul de date este int deoarece functia va returna:
 0 - daca plasarea nu este corecta;
 1 - daca plasarea este corecta;

**Functia: "void_plasare(int linie, int tip)"**

Aceasta functie primeste 2 parametri:

 - **int linie** : reprezinta linia tabloului de sah in care se va incerca plasarea turnului;
 - **int tip** : indica modul de functionare ( 0 - afisarea solutiilor / 1 - fara afisarea solutiilor )

  

### 3. Rezultate