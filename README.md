# **Proiect-Sincretic 2024**

  

### Tema proiectului: Implementarea unui program care rezolva problema celor 8 turnuri

  

Proiectul a fost realizat in cadrul anului universitar 2024-2025, pentru materia optionala Metode avansate de programare.

  

### 1. Introducere

  

**Scopul:** Plasarea a 8 turnuri pe o tabla de sah 8x8 astfel incat niciunul sa nu se atace reciproc. Mai exact, turnurile nu pot fi plasate pe aceeasi linie sau coloana.

  

**Mediu de programare folosit:** Visual Studio Code

  

**Sistemul de operare folosit pentru dezvoltare:** Windows 10 x64

### 2. Implementare

  

Conceptul pe care se bazeaza programul este Backtracking,

  

Backtracking-ul se refera la cautarea tuturor solutiilor posibile, si selectarea solutiilor care respecta un set de parametri sau cerinte.

  

**Librarii folosite:**

  

-  **iostream** : permite folosirea functiilor 'cin' 'cout', in scopul citirii optiunii dorite, respectiv afisarii solutiilor

-  **cstdlib** : permite folosirea functiilor 'rand()' si 'srand()', in scopul plasarii aleatoare

-  **ctime** : folosita pentru initializarea generatorului de nume aleatoare

-  **using namespace std** : permite utilizarea directa a functiilor, fara a avea nevoie de prefixul 'std::'

  

**Variabile globale:**

-  **int tabla_sah[8]** : reprezinta tabloul de sah, fiecare index reprezinta o linie iar valoarea de pe acel index reprezinta coloana pe care este plasata turnul

-  **int solutii** : un contor care numara cate solutii corecte au fost gasite in total

**Functii:**

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



### 3. Rezultate

Exemplu pentru generarea unei soluții aleatorie:

![ex](https://github.com/user-attachments/assets/5bb5ed14-cebd-4ee2-97f1-b137f4a1ef5b)





