# **Proiect-Sincretic 2024**

  

### Tema proiectului: Implementarea unui program care rezolvă problema celor 8 turnuri

  

Proiectul a fost realizat în cadrul anului universitar 2024-2025, pentru materia opțională Metode avansate de programare.

  

### 1. Introducere

  

**Scopul:** Plasarea a 8 turnuri pe o tablă de șah 8x8 astfel încât niciunul să nu se atace reciproc. Mai exact, turnurile nu pot fi plasate pe aceeași linie sau coloană.

  

**Mediu de programare folosit:** Visual Studio Code

  

**Sistemul de operare folosit:** Windows 10 x64

### 2. Implementare

  

Conceptul pe care se bazează programul este Backtracking,

  

Backtracking-ul se referă la cautarea tuturor soluțiilor posibile, și selectarea soluțiilor care respectă un set de parametri sau cerințe.

  

**Librării folosite:**

  

-  **iostream** : permite folosirea funcțiilor 'cin' 'cout', în scopul citirii opțiunii dorite, respectiv afișării soluțiilor

-  **cstdlib** : permite folosirea funcțiilor 'rand()' si 'srand()', in scopul plasării aleatoare

-  **ctime** : folosită pentru inițializarea generatorului de nume aleatoare

-  **using namespace std** : permite utilizarea directă a funcțiilor, fără a avea nevoie de prefixul 'std::'


**Variabile globale:**

-  **int tabla_sah[8]** : reprezintă tabla de șah, fiecare index reprezintă o linie iar valoarea de pe acel index reprezintă coloana pe care este plasată turnul

-  **int solutii** : un contor care numără câte soluții corecte au fost găsite în total


**Funcții:**

 - void initializare_tabla():
 Această funcție inițializează tabla de șah prin setarea tuturor pozițiilor la valoarea '-1', indicând faptul că niciun turn nu este plasat pe tablă.

![MAP5](https://github.com/user-attachments/assets/1b2a0ae2-b951-447b-83ed-874069bf955a)

 
 - int verificare(int linie, int coloana):
  Această funcție verifică dacă un turn poate fi plasat pe poziția indicată de parametrul 'coloana' de pe rândul 'linie`.

![MAP4](https://github.com/user-attachments/assets/e66f9748-5d57-43d4-8799-ed3d001f0a74)

  
 - void afisare_tabla():
 Această funcție afișează o reprezentarea vizuală a tablei de șah în consolă.

![MAP3](https://github.com/user-attachments/assets/bdaf47be-39f5-4651-9be9-96494180b5f2)


 - void plasare(int linie, int tip):
 Această funcție plasează turnurile pe tablă utilizând o abordare recursivă iar apoi generează toate soluțiile posibile. Funcția are posibilitate de afișare a soluțiilor pe care le generează, în cazul în care parametrul 'tip' are valoarea '0'.

![MAP1](https://github.com/user-attachments/assets/5c919796-8082-4b16-93e9-1170757c79b4)

 
 - void plasare_aleatorie():
 Această funcție plasează într-un mod aleatoriu turnurile pe tablă, asigurându-se că fiecare turn plasat nu se intersectează cu traiectoria altui turn.
 
![MAP2](https://github.com/user-attachments/assets/d908dd2d-6080-4b9e-8d3a-a0c0478eb8b7)

- void meniu():
Această funcție afișează un meniu interactiv cu 3 optiuni(Afișarea tuturor soluțiilor, afișarea unei soluții aleatorie, afișarea numărului de soluții), și facilitează funcționarea acestuia printr-un switch.

![MAPM](https://github.com/user-attachments/assets/f62542b1-3daa-4306-9d35-0abd430aa18f)

- int main():

![mapmn](https://github.com/user-attachments/assets/9a69f362-f9a1-445f-8120-f631d7cf7437)

&nbsp;
&nbsp;
&nbsp;

### 3. Rezultate

Exemplu de rulare pentru generarea unei soluții aleatorie:

![ex](https://github.com/user-attachments/assets/5bb5ed14-cebd-4ee2-97f1-b137f4a1ef5b)

Exemplu de rulare pentru generarea și afișarea numărului de soluții:

![ex2](https://github.com/user-attachments/assets/3c47a4b6-9972-4a1b-98e1-4135854a65ba)






