#include<stdio.h>
#include<malloc.h>
#include "ELTPRIM.h"
//#include"ELTSDD.h"
#include<stdlib.h>
#include<string.h>
#include<time.h>
ELEMENT elementDateCreer(){
    DATE d = (DATE)malloc(sizeof(date));
    d->jj = 0 ;//On peut initialiser e à 0 mais ce n'est pas important
	d->mm = 0;
	d->aa = 0;
	return d;

}
void elementLire(ELEMENT * e){
	do{
        printf("saisir le nombre de cas positifs \n");
        scanf("%d",&(*e)->casPositifs);
        if((*e)->casPositifs < 0)
            printf("le nombre doit etre superieur ou egale a 0 \n");
    }while((*e)->casPositifs < 0);
	do{
        printf("saisir les guerisons \n");
        scanf("%d",&(*e)->guerisons);
        if((*e)->guerisons < 0)
            printf("le nombre doit etre superieur ou egale a 0 \n");
    }while((*e)->guerisons < 0);
	do{
        printf("saisir le nombre de  decees \n");
        scanf("%d",&(*e)->decees);
        if((*e)->decees<0)
            printf("le nombre doit etre superieur ou egale a 0 \n");
    }while((*e)->decees<0);
	do{
        printf("saisir le nombre de vaccinees   \n");
        scanf("%d",&(*e)->nbVaccines);
        if((*e)->nbVaccines<0)
            printf("le nombre doit etre superieur ou egale a 0 \n");
    }while((*e)->nbVaccines<0);
}




int testDate(int jj, int mm, int aa){
    int testBiss = ((aa%4 == 0) && (aa%100 != 0) || (aa%400 == 0));
    int cas1 = ((mm == 1 || mm == 3 || mm == 5 || mm == 7 ||  mm == 8 || mm == 10 || mm == 12) && (jj >= 1 && jj <= 31));
    int cas2 =((mm == 4 || mm == 6 || mm == 9 || mm == 11) && (jj >= 1 && jj <= 30));
    int cas3 = ((mm == 2 && testBiss) && (jj >= 1 && jj <= 29));
    int cas4 = (mm == 2 && jj >= 1 && jj <= 28);

    if ((cas1 || cas2 || cas3 || cas4)&&(aa >= 2021))
        return 1;
    else
        return 0;
}


void elementDateLire(DATE *d){
    do{
        printf("Saisir le jour de votre date \n");
        scanf("%d",&(*d)->jj);
        printf("Saisir le mois de votre date \n");
        scanf("%d",&(*d)->mm);
        printf("Saisir l'annee de votre date \n");
        scanf("%d",&(*d)->aa);
        if(testDate((*d)->jj,(*d)->mm,(*d)->aa)==0)
            printf("votre date est invalide !! veuillez ressayer \n");
    }while(testDate((*d)->jj,(*d)->mm,(*d)->aa)==0);
}



ELEMENT elementCreer(){
	ELEMENT e = (ELEMENT)malloc(sizeof(elemCovid)); // Allocation dynamique (réservation) d'un octet dans la mémoire pour un caractère (ELEMENT)
    e->casPositifs = 0;
    e->guerisons = 0;
    e->decees= 0 ;
    e->nbVaccines = 0;
    e->datee = (DATE)malloc(sizeof(date));
    e->datee->jj = 0;// On peut initialiser e à '\0' mais ce n'est pas important
	e->datee->mm = 0;
	e->datee->aa = 0;
	return e;
}


void elementDetruire(ELEMENT e){
	free(e);
}

/*void elementLire(ELEMENT * e){

    printf("DOnner le jour de votre date \n");
    scanf("%d",&(*e)->datee->j);
	printf("Donner le mois de votre date \n");
	scanf("%d",&(*e)->datee->m);
	printf("Donner l'annee de votre date \n");
	scanf("%d",&(*e)->datee->a);
	printf("Donner le nombre de cas positfifs \n");
	scanf("%d",&(*e)->casPositifs);
	printf("Donner le nombre de guerisons \n");
	scanf("%d",&(*e)->guerison);
	printf("Donner le nombre de  decees \n");
	scanf("%d",&(*e)->decees);
	printf("saisir le nombre de vaccinees   \n");
    scanf("%d",&(*e)->nbVaccines);
}*/

void elementAfficher(ELEMENT e){
	printf(" date: %d/%d/%d \t cas positfifs: %d \t guerisons: %d \t decees: %d \t le nombres de vaccinees: %d   \n",e->datee->jj,e->datee->mm,e->datee->aa,e->casPositifs,e->guerisons,e->decees,e->nbVaccines);
}

void elementAffecter(ELEMENT * e1, ELEMENT e2){ // On va affecter l'adresse e2 dans e1
	*e1 = e2; // Ici, on affecte les adresses des deux élements en question
}

void elementCopier(ELEMENT * e1, ELEMENT e2){  // Ici, on affecte les contenus, celui de e2 dans e1
	memcpy(*e1,e2,sizeof(elemCovid));
}
int elementDateComparer(DATE d1,DATE d2){
    return((d1->jj == d2->jj)&&(d1->mm == d2->mm)&&(d1->aa == d2->aa));
}
int elementComparer(ELEMENT e1,ELEMENT e2){
    return ((e1->nbVaccines == e2->nbVaccines) && (e1->decees == e2->decees) && (e1->casPositifs == e2->casPositifs) &&(e1->guerisons == e2->guerisons));
}

int elementComparerCasPositif(ELEMENT e1, ELEMENT e2){
    if(e1->casPositifs == e2->casPositifs)
        return 1;
    else
        return 0;
}
int elementComparerGuerison(ELEMENT e1, ELEMENT e2){
    if(e1->guerisons == e2->guerisons)
        return 1;
    else
        return 0;
}
int elementComparerDecees(ELEMENT e1, ELEMENT e2){
    if(e1->decees == e2->decees)
        return 1;
    else
        return 0;
}
int elementComparerNbVaccinnes(ELEMENT e1, ELEMENT e2){
    if(e1->nbVaccines == e2->nbVaccines)
        return 1;
    else
        return 0;
}






