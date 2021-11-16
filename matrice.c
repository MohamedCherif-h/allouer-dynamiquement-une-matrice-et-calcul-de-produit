#include <stdio.h>
#include <stdlib.h>
int**  allocation(int ligne , int colonne);
void lecture (int **tab , int ligne , int colonne) ;
void Afficher (int **tab , int ligne , int colonne);
void  produit (int **tab , int ligne , int colonne , int nombre);

//Main
int main (void) {
   int **tableau ;
   tableau = allocation(2, 2) ;
    lecture (tableau, 2 , 2) ;
   Afficher (tableau, 2 , 2);
   printf("\n");
   produit (tableau, 2 , 2 , 3);


}

//Allocation
int**  allocation(int ligne , int colonne) {
    int **tab ;
    tab = (int**) malloc(sizeof(int*)*ligne);
    for (int i = 0 ; i< ligne ; i++) {
        tab[i] = (int*) malloc(sizeof(int)*colonne);
    }

    return tab ;
  
}

// Lecture 

void lecture (int **tab , int ligne , int colonne) {
    for (int i = 0 ; i<ligne ; i++) {
        for (int j = 0 ; j<colonne ; j++) {
            printf("element %d/%d : " , i , j) ;
            scanf("%d" , (*(tab + i )+j));
        }
    }
}

// Afficher 

void Afficher (int **tab , int ligne , int colonne) {
    for (int i = 0 ; i<ligne ; i++) {
        for (int j = 0 ; j<colonne ; j++) {

            printf("%4d",*(j + *(tab+i)) );
        }
        printf("\n");
    }
}

//Produit 

void  produit (int **tab , int ligne , int colonne , int nombre) {
    
    for (int i = 0 ; i<ligne ; i++) {
        for (int j = 0 ; j<colonne ; j++) {
            *(*(tab+i)+j) = *(*(tab+i)+j) * nombre;
            printf("%4d" , *(*(tab+i)+j));
        }
        printf("\n");
    }
}
