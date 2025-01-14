# Map_project
# Traversarea Arborilor Binari


## Prezentare generala

Aceste proiect implementeaza o structura simpla de arbora binar in C, oferind metode pentru inserarea elementelor si traversarea arborelui folosind diferite strategii. Metodele de traversare sunt:
- pre-ordine
- in-ordine
- post-ordine
- pe niveluri

## Functionalitati

Inserare dinamica a elementelor in arborele binar ordonat si implementarea a patru tehnici de traversare pentru afisarea elementelor arborelui.

## Structura fisierelor

proiect.c:
  Contine implementarea arborelui binar, inclusiv metode de inserare si traversare

## Utilizare

### Compilare
Pentru a compila programul, folositi un compilator C precum GCC:

`gcc -o proiect proiect.c`

### Executie
Rulati programul compilat:

`./proiect`

### Output
Programul afiseaza eleementele arborelui binar in ordinea traversarilor specificate. De exemplu:

Traversare pre-ordine: 50 30 20 40 70 60 80 
Traversare in-ordine: 20 30 40 50 60 70 80 
Traversare post-ordine: 20 40 30 60 80 70 50 
Traversare pe niveluri: 50 30 70 20 40 60 80 

## Explicatia codului

### Definitia Structurii
Structura Node reprezinta fiecare nod din arbore. 
Fiecare nod contine: key (valoarea stovata in nod), left(pointer catre copilul din stanga) si right (pointer catre copilul din dreapta).

### Functii
1. `createNode`: aloca memorie pentru un nod nou si initializeaza campurile acestuia.
2.` insert`: insereaza un nou element in arbore, respectand proprietatea de arbore binar de cautare (BST).
3. Metode de traversare:
- `pre-ordine`: proceseaza nodul curent, apoi traverseaza recursiv subarboriii stang si drept.
- `in-ordine`: traverseaza recursiv subarborele stang, proceseaza nodul curent, apoi subarborele drept.
- `post-ordine`: traverseaza recursiv subarborii stang si drept, apoi proceseaza nodul curent.
- `pe niveluri`: foloseste o coada pentru a procesa nicel cu nivel.

### Functia principala
Functia `main` : initializraza un arbore gol, insereaza un sir predefinit de elemente, efectueaza si afiseaza rezultateale velor patru traversari

## Exemplu de Intrare și Ieșire

Programul folosește un șir predefinit de elemente pentru a popula arborele:

int elements[] = {50, 30, 20, 40, 70, 60, 80};

Structura rezultată a arborelui binar este:
               50
           /         \
        30          70
      /    \         /  \
   20   40    60   80


### Rezultatele Traversării

-   **Pre-ordine**: `50 30 20 40 70 60 80`
    
-   **In-ordine**: `20 30 40 50 60 70 80`
    
-   **Post-ordine**: `20 40 30 60 80 70 50`
    
-   **Pe niveluri**: `50 30 70 20 40 60 80`

# Cum Funcționează

1.  Elementele sunt inserate în arbore unul câte unul folosind funcția `insert`.
    
2.  Fiecare metodă de traversare este apelată pentru a explora și afișa structura arborelui.

# Cerințe

-   Un compilator C precum GCC.