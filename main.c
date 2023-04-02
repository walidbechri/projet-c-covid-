#include <stdio.h>
#include <stdlib.h>
#include"LSTPRIM.h"
#include"ELTPRIM.h"
#include<string.h>
void permutation(ELEMENT e1,ELEMENT e2){
    ELEMENT aux=elementCreer();
    elementCopier(&aux,e1);
    elementCopier(&e1,e2);
    elementCopier(&e2,aux);
}
//tri par selection
void triGueDecroi(LISTE L){
    int i,j;
    ELEMENT e1=elementCreer();
    ELEMENT e2=elementCreer();
    for(i=1;i<=listeTaille(L);i++){
        e1=recuperer(L,i);
        for(j=i+1;j<=listeTaille(L);j++){
            e2=recuperer(L,j);
            if(e1->guerisons < e2->guerisons)
                permutation(e1,e2);
       }
    }
}

void triCasPosDecroi(LISTE L){
    int i,j;
    ELEMENT e1=elementCreer();
    ELEMENT e2=elementCreer();
    for(i=1;i<=listeTaille(L);i++){
        e1=recuperer(L,i);
        for(j=i+1;j<=listeTaille(L);j++){
            e2=recuperer(L,j);
            if(e1->casPositifs<e2->casPositifs)
                permutation(e1,e2);
       }
    }

}
void triDeceeDecroi(LISTE L){
    int i,j;
    ELEMENT e1=elementCreer();
    ELEMENT e2=elementCreer();
    for(i=1;i<=listeTaille(L);i++){
        e1=recuperer(L,i);
        for(j=i+1;j<=listeTaille(L);j++){
            e2=recuperer(L,j);
            if(e1->decees<e2->decees)
                permutation(e1,e2);
       }
    }

}
void triNbVaccDecoi(LISTE L){
    int i,j;
    ELEMENT e1=elementCreer();
    ELEMENT e2=elementCreer();
    for(i=1;i<=listeTaille(L);i++){
        e1=recuperer(L,i);
        for(j=i+1;j<=listeTaille(L);j++){
            e2=recuperer(L,j);
            if(e1->nbVaccines<e2->nbVaccines)
                permutation(e1,e2);
       }
    }

}
// TRi Croissant :
void triGuerCroi(LISTE L){
    int i,j;
    ELEMENT e1=elementCreer();
    ELEMENT e2=elementCreer();
    for(i=1;i<=listeTaille(L);i++){
        e1=recuperer(L,i);
        for(j=i+1;j<=listeTaille(L);j++){
            e2=recuperer(L,j);
            if(e1->guerisons>e2->guerisons){
                permutation(e1,e2);
            }
       }
    }

}

void triCasPosCroi(LISTE L){
    int i,j;
    ELEMENT e1=elementCreer();
    ELEMENT e2=elementCreer();
    for(i=1;i<=listeTaille(L);i++){
        e1=recuperer(L,i);
        for(j=i+1;j<=listeTaille(L);j++){
            e2=recuperer(L,j);
            if(e1->casPositifs>e2->casPositifs)
                permutation(e1,e2);
       }
    }

}
void triDeceeCroi(LISTE L){
    int i,j;
    ELEMENT e1=elementCreer();
    ELEMENT e2=elementCreer();
    for(i=1;i<=listeTaille(L);i++){
        e1=recuperer(L,i);
        for(j=i+1;j<=listeTaille(L);j++){
            e2=recuperer(L,j);
            if(e1->decees>e2->decees)
                permutation(e1,e2);
       }
    }
}
void triNbVaccCroi(LISTE L){
    int i,j;
    ELEMENT e1=elementCreer();
    ELEMENT e2=elementCreer();
    for(i=1;i<=listeTaille(L);i++){
        e1=recuperer(L,i);
        for(j=i+1;j<=listeTaille(L);j++){
            e2=recuperer(L,j);
            if(e1->nbVaccines>e2->nbVaccines)
                permutation(e1,e2);
       }
    }
}

void Tri_cas_positif_dec(ELEMENT e1,ELEMENT e2){
    if(e1->casPositifs < e2->casPositifs)
            permutation(e1,e2);
}
void Tri_cas_positif_croi(ELEMENT e1,ELEMENT e2){
    if(e1->casPositifs > e2->casPositifs)
            permutation(e1,e2);
}

void Tri_NB_Vaccinee_dec(ELEMENT e1,ELEMENT e2){
    if(e1->nbVaccines<e2->nbVaccines)
            permutation(e1,e2);
}
void Tri_NB_Vaccinee_croi(ELEMENT e1,ELEMENT e2){
    if(e1->nbVaccines>e2->nbVaccines)
            permutation(e1,e2);
}

void Tri_Decee_dec(ELEMENT e1,ELEMENT e2){
    if(e1->decees<e2->decees)
            permutation(e1,e2);
}
void Tri_Decee_croi(ELEMENT e1,ELEMENT e2){
    if(e1->decees>e2->decees)
        permutation(e1,e2);
}
void Tri_Guerison_dec(ELEMENT e1,ELEMENT e2){
    if(e1->guerisons<e2->guerisons)
            permutation(e1,e2);
}
void Tri_Guerison_croi(ELEMENT e1,ELEMENT e2){
    if(e1->guerisons>e2->guerisons)
            permutation(e1,e2);
}
void tri(LISTE tab[]){

    int cle1,cle2,cle3,cle4,ordre;
    printf("choisir l'ordre des cles de tris :\n");
    printf("les cles de tris sont ''1  Caspositifs'' ou ''2  guerisonss'' ou ''3  decees'' ou ''4  Nbvaccinees'' ");
    printf("\n\n");
    do{
        printf("choisir le 1ere  cle de tri:\t");
        scanf("%i",&cle1);
        printf("\n");
        if((cle1!=1)&&(cle1!=2)&&(cle1!=3)&&(cle1!=4))
            printf("ce clee est invalide !! veuillez ressayer \n");
    }while((cle1!=1)&&(cle1!=2)&&(cle1!=3)&&(cle1!=4));

    do{
        do{
            printf("choisir le 2eme cle de tri  :\t");
            scanf("%i",&cle2);
            printf("\n");
            if(((cle2!=1)&&(cle2!=2)&&(cle2!=3)&&(cle2!=4)))
                printf("ce clee est invalide ! \n");
        }while(((cle2!=1)&&(cle2!=2)&&(cle2!=3)&&(cle2!=4)));
        if(cle2==cle1)
            printf("ce clee est deja saisie ! \n");
    }while(cle2==cle1);

    do{
        do{
            printf("choisir le 3eme cle de tri  :\t");
            scanf("%i",&cle3);
            printf("\n");
            if((cle3!=1)&&(cle3!=2)&&(cle3!=3)&&(cle3!=4))
                printf("ce clee est invalide ! \n");
        }while((cle3!=1)&&(cle3!=2)&&(cle3!=3)&&(cle3!=4));
        if((cle3==cle1)||(cle3==cle2))
          printf("ce clee est deja saisie !\n");
    }while((cle3==cle1)||(cle3==cle2));
    do{
        do{
            printf("choisir le 4eme cle de tri  :\t");
            scanf("%i",&cle4);
            printf("\n\n");
            if((cle4!=1)&&(cle4!=2)&&(cle4!=3)&&(cle4!=4))
                printf("ce clee est invalide ! \n");
        }while((cle4!=1)&&(cle4!=2)&&(cle4!=3)&&(cle4!=4));
        if((cle4==cle1)||(cle4==cle2)||(cle4==cle3))
              printf("ce clee deja saisie\n");
    }while((cle4==cle1)||(cle4==cle2)||(cle4==cle3));
    do{
        printf("choisir l'ordre de tri '1  croissant'  ou   '-1  decroissant' : \t ");
        scanf("%i",&ordre);
        printf("\n\n");
        if((ordre!=1)&&(ordre!=-1))
            printf("Votre choix est invalide !! \n");
    }while((ordre!=1)&&(ordre!=-1));

    LISTE LInt=listeCreer();
    LISTE LInt2=listeCreer();
    int nb=0;
    DATE da=elementDateCreer();
    elementDateLire(&da);
    int x,k,stop;
    stop=0;
    for( x=0;x<=23;x++){
        for(k=1;k<=listeTaille(tab[x]);k++){
            ELEMENT en=elementCreer();
            en=recuperer(tab[x],k);
            if(elementDateComparer(da,en->datee)){
                nb++;
                inserer(LInt,en,nb);
                stop=1;
            }
        }
    }
    LInt2=listeCopier(LInt);
    if(stop==0)
        printf(" cette date n'est pas enregistrer  \n");
    else{
        printf("les informations concernant le %d/%d/%d :\n\n",da->jj,da->mm,da->aa);
        listeAfficher(LInt);
        printf("\n\n");
        printf("apres le tri :\n");
        printf("\n\n");
        ELEMENT e1=elementCreer();
        ELEMENT e2=elementCreer();
        if(cle1==1)
            for(int g=1;g<=listeTaille(LInt)-1;g++){
                e1=recuperer(LInt,g);
                e2=recuperer(LInt,g+1);
                if(!(elementComparerCasPositif(e1,e2)))
                    if(ordre==-1){triCasPosDecroi(LInt);}
                    else  {triCasPosCroi(LInt);}
            }
    else if(cle1==2)
        for(int g=1;g<=listeTaille(LInt)-1;g++){
            e1=recuperer(LInt,g);
            e2=recuperer(LInt,g+1);
            if(!(elementComparerGuerison(e1,e2)))
                if(ordre==-1){triGueDecroi(LInt);}
                else{triGuerCroi(LInt);}
        }
    else if(cle1==3)
        for(int g=1;g<=listeTaille(LInt)-1;g++){
            e1=recuperer(LInt,g);
            e2=recuperer(LInt,g+1);
            if(!(elementComparerDecees(e1,e2)))
                if(ordre==-1) {triDeceeDecroi(LInt);}
                else{triDeceeCroi(LInt);}
        }

    else
    if(cle1==4)
        for(int g=1;g<=listeTaille(LInt)-1;g++){
            e1=recuperer(LInt,g);
            e2=recuperer(LInt,g+1);
            if(!(elementComparerNbVaccinnes(e1,e2)))
                if(ordre==-1){triNbVaccDecoi(LInt);}
                else{triNbVaccCroi(LInt);}

        }

    if(cle1==1){
        for(int g=1;g<=listeTaille(LInt)-1;g++){
            e1=recuperer(LInt,g);
            for(int j=g+1;j<=listeTaille(LInt);j++){
                e2=recuperer(LInt,j);
                if((elementComparerCasPositif(e1,e2))){
                    if(cle2==2){
                        if(!(elementComparerGuerison(e1,e2)))
                            if(ordre==-1){Tri_Guerison_dec(e1,e2);}
                            else{Tri_Guerison_croi(e1,e2);}

                    }
                    if(cle2==2){
                        if((elementComparerGuerison(e1,e2))){
                            if(cle3==3)
                                if(!(elementComparerDecees(e1,e2)))
                                    if(ordre==-1)  {Tri_Decee_dec(e1,e2);}
                                    else{Tri_Decee_croi(e1,e2);}
                            if(cle3==3){
                            if((elementComparerDecees(e1,e2))){
                            if(cle4==4){
                            if(!(elementComparerNbVaccinnes(e1,e2)))
                            {if(ordre==-1)
                            {Tri_NB_Vaccinee_dec(e1,e2);}
                            else{Tri_NB_Vaccinee_croi(e1,e2);}
                             }
                            }
                            }
                            }
                            }
        }
        }}}}


     if(cle1==1){
    for(int g=1;g<=listeTaille(LInt)-1;g++)
    {
        e1=recuperer(LInt,g);
        for(int j=g+1;j<=listeTaille(LInt);j++)
        {
        e2=recuperer(LInt,j);
    if((elementComparerCasPositif(e1,e2))){
                                if(cle2==2){

                                if(!(elementComparerGuerison(e1,e2)))
                                { if(ordre==-1)
                                {Tri_Guerison_dec(e1,e2);}
                                else{Tri_Guerison_croi(e1,e2);}
                                }
                                }
                if(cle2==2){
                if((elementComparerGuerison(e1,e2))){
                                            if(cle3==4){

                                            if(!(elementComparerNbVaccinnes(e1,e2)))
                                            { if(ordre==-1)
                                            {Tri_NB_Vaccinee_dec(e1,e2);}
                                            else{Tri_NB_Vaccinee_croi(e1,e2);}
                                            }
                                            }
    if(cle3==4){
                if((elementComparerNbVaccinnes(e1,e2))){
                                            if(cle4==3){

                                            if(!(elementComparerDecees(e1,e2)))
                                            {if(ordre==-1)
                                            {Tri_Decee_dec(e1,e2);}
                                            else{Tri_Decee_croi(e1,e2);}
                                             }
                                            }
                                            }

    }
    }
    }
    }}}
    }
     if(cle1==1){
    for(int g=1;g<=listeTaille(LInt)-1;g++)
    {
        e1=recuperer(LInt,g);
        for(int j=g+1;j<=listeTaille(LInt);j++)
        {
        e2=recuperer(LInt,j);


    if((elementComparerCasPositif(e1,e2))){
                                if(cle2==3){
                                if(!(elementComparerDecees(e1,e2)))
                                { if(ordre==-1)
                                    {Tri_Decee_dec(e1,e2);}
                                else{Tri_Decee_croi(e1,e2);}
                                }
                                }
                if(cle2==3){

                if((elementComparerDecees(e1,e2))){
                                            if(cle3==2){

                                            if(!(elementComparerGuerison(e1,e2)))
                                            {if(ordre==-1)
                                            {Tri_Guerison_dec(e1,e2);}
                                            else{Tri_Guerison_croi(e1,e2);}
                                            }

                                            }
    if(cle3==2){

                if((elementComparerGuerison(e1,e2))){
                                            if(cle4==4){

                                            if(!(elementComparerNbVaccinnes(e1,e2)))
                                            {if(ordre==-1)
                                            {Tri_NB_Vaccinee_dec(e1,e2);}
                                            else{Tri_NB_Vaccinee_croi(e1,e2);}
                                            }


                                            }
                                            }
    }
    }
    }
    }}}
    }
    if(cle1==2){
    for(int g=1;g<=listeTaille(LInt)-1;g++)
    {
        e1=recuperer(LInt,g);
      for(int j=g+1;j<=listeTaille(LInt);j++)
        {
        e2=recuperer(LInt,j);
    if((elementComparerGuerison(e1,e2))){
                                if(cle2==1){
                                if(!(elementComparerCasPositif(e1,e2)))
                                { if(ordre==-1)
                                    {Tri_cas_positif_dec(e1,e2);}
                                else{Tri_cas_positif_croi(e1,e2);}
                                }
                                }
                if(cle2==1){
                if((elementComparerCasPositif(e1,e2))){
                                            if(cle3==3){
                                            if(!(elementComparerDecees(e1,e2)))
                                            {if(ordre==-1)
                                            {Tri_Decee_dec(e1,e2);}
                                            else{Tri_Decee_croi(e1,e2);}
                                            }
                                            }
    if(cle3==3){
                if((elementComparerDecees(e1,e2))){
                                            if(cle4==4){
                                            if(!(elementComparerNbVaccinnes(e1,e2)))
                                            {if(ordre==-1)
                                            {Tri_NB_Vaccinee_dec(e1,e2);}
                                            else{Tri_NB_Vaccinee_croi(e1,e2);}
                                            }
                                            }
                                            }
    }
    }
    }
    }}}
    }

     if(cle1==2){
    for(int g=1;g<=listeTaille(LInt)-1;g++)
    {
        e1=recuperer(LInt,g);
        for(int j=g+1;j<=listeTaille(LInt);j++)
        {
        e2=recuperer(LInt,j);
    if((elementComparerGuerison(e1,e2))){
                                if(cle2==1){
                                if(!(elementComparerCasPositif(e1,e2)))
                                { if(ordre==-1)
                                    {Tri_cas_positif_dec(e1,e2);}
                                else{Tri_cas_positif_croi(e1,e2);}
                                }
                                }
                if(cle2==1){
                if((elementComparerCasPositif(e1,e2))){
                                            if(cle3==4){
                                            if(!(elementComparerNbVaccinnes(e1,e2)))
                                            {if(ordre==-1)
                                            {Tri_NB_Vaccinee_dec(e1,e2);}
                                            else{Tri_NB_Vaccinee_croi(e1,e2);}
                                            }
                                            }
    if(cle3==4){
                if((elementComparerNbVaccinnes(e1,e2))){
                                            if(cle4==3){
                                            if(!(elementComparerDecees(e1,e2)))
                                            {if(ordre==-1)
                                            {Tri_Decee_dec(e1,e2);}
                                            else{Tri_Decee_croi(e1,e2);}
                                            }
                                            }
                                            }
    }
    }
    }
    }}}
    }
     if(cle1==2){
    for(int g=1;g<=listeTaille(LInt)-1;g++)
    {
        e1=recuperer(LInt,g);
        for(int j=g+1;j<=listeTaille(LInt);j++)
        {
        e2=recuperer(LInt,j);
    if((elementComparerGuerison(e1,e2))){
                                if(cle2==3){
                                if(!(elementComparerDecees(e1,e2)))
                                { if(ordre==-1)
                                    {Tri_Decee_dec(e1,e2);}
                                else{Tri_Decee_croi(e1,e2);}
                                }
                                }
                if(cle2==3){
                if((elementComparerDecees(e1,e2))){
                                            if(cle3==1){
                                            if(!(elementComparerCasPositif(e1,e2)))
                                            {if(ordre==-1)
                                            {Tri_cas_positif_dec(e1,e2);}
                                            else{Tri_cas_positif_croi(e1,e2);}
                                            }
                                            }
    if(cle3==1){
                if((elementComparerCasPositif(e1,e2))){
                                            if(cle4==4){
                                            if(!(elementComparerNbVaccinnes(e1,e2)))
                                            {if(ordre==-1)
                                            {Tri_NB_Vaccinee_dec(e1,e2);}
                                            else{Tri_NB_Vaccinee_croi(e1,e2);}
                                            }
                                            }
                                            }
    }
    }
    }
    }}}
    }
    if(cle1==3){
    for(int g=1;g<=listeTaille(LInt)-1;g++)
    {
        e1=recuperer(LInt,g);
        for(int j=g+1;j<=listeTaille(LInt);j++)
        {
        e2=recuperer(LInt,j);
    if((elementComparerDecees(e1,e2))){
                                if(cle2==2){
                                if(!(elementComparerGuerison(e1,e2)))
                                { if(ordre==-1)
                                    {Tri_Guerison_dec(e1,e2);}
                                else{Tri_Guerison_croi(e1,e2);}
                                }
                                }
                if(cle2==2){
                if((elementComparerGuerison(e1,e2))){
                                            if(cle3==1){
                                            if(!(elementComparerCasPositif(e1,e2)))
                                            {if(ordre==-1)
                                            {Tri_cas_positif_dec(e1,e2);}
                                            else{Tri_cas_positif_croi(e1,e2);}
                                            }
                                            }
    if(cle3==1){
                if((elementComparerCasPositif(e1,e2))){
                                            if(cle4==4){
                                            if(!(elementComparerNbVaccinnes(e1,e2)))
                                            {if(ordre==-1)
                                            {Tri_NB_Vaccinee_dec(e1,e2);}
                                            else{Tri_NB_Vaccinee_croi(e1,e2);}
                                            }
                                            }
                                            }
    }
    }
    }
    }}}
    }
    if(cle1==3){
    for(int g=1;g<=listeTaille(LInt)-1;g++)
    {
        e1=recuperer(LInt,g);
        for(int j=g+1;j<=listeTaille(LInt);j++)
        {
        e2=recuperer(LInt,j);
    if((elementComparerDecees(e1,e2))){
                                if(cle2==2){
                                if(!(elementComparerGuerison(e1,e2)))
                                { if(ordre==-1)
                                    {Tri_Guerison_dec(e1,e2);}
                                else{Tri_Guerison_croi(e1,e2);}
                                }
                                }
                if(cle2==2){
                if((elementComparerGuerison(e1,e2))){
                                            if(cle3==4){
                                            if(!(elementComparerNbVaccinnes(e1,e2)))
                                            {if(ordre==-1)
                                            {Tri_NB_Vaccinee_dec(e1,e2);}
                                            else{Tri_NB_Vaccinee_croi(e1,e2);}
                                            }
                                            }
    if(cle3==4){
                if((elementComparerNbVaccinnes(e1,e2))){
                                            if(cle4==1){
                                            if(!(elementComparerCasPositif(e1,e2)))
                                            {if(ordre==-1)
                                            {Tri_cas_positif_dec(e1,e2);}
                                            else{Tri_cas_positif_croi(e1,e2);}
                                            }
                                            }
                                            }
    }
    }
    }
    }}}
    }
    if(cle1==3){
    for(int g=1;g<=listeTaille(LInt)-1;g++)
    {
        e1=recuperer(LInt,g);
        for(int j=g+1;j<=listeTaille(LInt);j++)
        {
        e2=recuperer(LInt,j);
    if((elementComparerDecees(e1,e2))){
                                if(cle2==1){
                                if(!(elementComparerCasPositif(e1,e2)))
                                { if(ordre==-1)
                                    {Tri_cas_positif_dec(e1,e2);}
                                else{Tri_cas_positif_croi(e1,e2);}
                                }
                                }
                if(cle2==1){
                if((elementComparerCasPositif(e1,e2))){
                                            if(cle3==2){
                                            if(!(elementComparerGuerison(e1,e2)))
                                            {if(ordre==-1)
                                            {Tri_Guerison_dec(e1,e2);}
                                            else{Tri_Guerison_croi(e1,e2);}
                                            }
                                            }
    if(cle3==2){
                if((elementComparerGuerison(e1,e2))){
                                            if(cle4==4){
                                            if(!(elementComparerNbVaccinnes(e1,e2)))
                                            {if(ordre==-1)
                                            {Tri_NB_Vaccinee_dec(e1,e2);}
                                            else{Tri_NB_Vaccinee_croi(e1,e2);}
                                            }
                                            }
                                            }
    }
    }
    }
    }}}
    }
    if(cle1==4){
    for(int g=1;g<=listeTaille(LInt)-1;g++)
    {
        e1=recuperer(LInt,g);
        for(int j=g+1;j<=listeTaille(LInt);j++)
        {
        e2=recuperer(LInt,j);
    if((elementComparerNbVaccinnes(e1,e2))){
                                if(cle2==2){
                                if(!(elementComparerGuerison(e1,e2)))
                                { if(ordre==-1)
                                    {Tri_Guerison_dec(e1,e2);}
                                else{Tri_Guerison_croi(e1,e2);}
                                }
                                }
                if(cle2==2){
                if((elementComparerGuerison(e1,e2))){
                                            if(cle3==1){
                                            if(!(elementComparerCasPositif(e1,e2)))
                                            {if(ordre==-1)
                                            {Tri_cas_positif_dec(e1,e2);}
                                            else{Tri_cas_positif_croi(e1,e2);}
                                            }
                                            }
    if(cle3==1){
                if((elementComparerCasPositif(e1,e2))){
                                            if(cle4==3){
                                            if(!(elementComparerDecees(e1,e2)))
                                            {if(ordre==-1)
                                            {Tri_Decee_dec(e1,e2);}
                                            else{Tri_Decee_croi(e1,e2);}
                                            }
                                            }
                                            }
    }
    }
    }
    }}}
    }
    if(cle1==4){
    for(int g=1;g<=listeTaille(LInt)-1;g++)
    {
        e1=recuperer(LInt,g);
        for(int j=g+1;j<=listeTaille(LInt);j++)
        {
        e2=recuperer(LInt,j);
    if((elementComparerNbVaccinnes(e1,e2))){
                                if(cle2==2){
                                if(!(elementComparerGuerison(e1,e2)))
                                { if(ordre==-1)
                                    {Tri_Guerison_dec(e1,e2);}
                                else{Tri_Guerison_croi(e1,e2);}
                                }
                                }
                if(cle2==2){
                if((elementComparerGuerison(e1,e2))){
                                            if(cle3==3){
                                            if(!(elementComparerDecees(e1,e2)))
                                            {if(ordre==-1)
                                            {Tri_Decee_dec(e1,e2);}
                                            else{Tri_Decee_croi(e1,e2);}
                                            }
                                            }
    if(cle3==3){
                if((elementComparerDecees(e1,e2))){
                                            if(cle4==1){
                                            if(!(elementComparerCasPositif(e1,e2)))
                                            {if(ordre==-1)
                                            {Tri_cas_positif_dec(e1,e2);}
                                            else{Tri_cas_positif_croi(e1,e2);}
                                            }
                                            }
                                            }
    }
    }
    }
    }}}
    }
    if(cle1==4){
    for(int g=1;g<=listeTaille(LInt)-1;g++)
    {
        e1=recuperer(LInt,g);
        for(int j=g+1;j<=listeTaille(LInt);j++)
        {
        e2=recuperer(LInt,j);
    if((elementComparerNbVaccinnes(e1,e2))){
                                if(cle2==3){
                                if(!(elementComparerDecees(e1,e2)))
                                { if(ordre==-1)
                                    {Tri_Decee_dec(e1,e2);}
                                else{Tri_Decee_croi(e1,e2);}
                                }
                                }
                if(cle2==3){
                if((elementComparerDecees(e1,e2))){
                                            if(cle3==2){
                                            if(!(elementComparerGuerison(e1,e2)))
                                            {if(ordre==-1)
                                            {Tri_Guerison_dec(e1,e2);}
                                            else{Tri_Guerison_croi(e1,e2);}
                                            }
                                            }
    if(cle3==2){
                if((elementComparerGuerison(e1,e2))){
                                            if(cle4==1){
                                            if(!(elementComparerCasPositif(e1,e2)))
                                            {if(ordre==-1)
                                            {Tri_cas_positif_dec(e1,e2);}
                                            else{Tri_cas_positif_croi(e1,e2);}
                                            }
                                            }
                                            }
    }
    }
    }
    }}}
    }

        printf("\n\n");
        for(int a=1;a<=listeTaille(LInt);a++){
            ELEMENT ea=elementCreer();
            ea=recuperer(LInt,a);
            for(int k=1;k<=listeTaille(LInt);k++){
                ELEMENT ek=elementCreer();
                ek=recuperer(LInt2,k);
                if(elementComparer(ea,ek)){
                    if(k==1)
                        printf(" ARIANNA :\n");
                    if(k==2)
                        printf("BEJA :\n");
                    if(k==3)
                        printf("BEN AROUS :\n");
                    if(k==4)
                        printf("BIZERTE :\n");
                    if(k==5)
                        printf("GABES :\n");
                    if(k==6)
                        printf("GAFSA :\n");
                    if(k==7)
                        printf("JENDOUBA :\n");
                    if(k==8)
                        printf("KAIROUAN :\n");
                    if(k==9)
                        printf("KASSERINE :\n");
                    if(k==10)
                        printf("KEBILI :\n");
                    if(k==11)
                        printf("MANOUBA :\n");
                    if(k==12)
                        printf("KEF :\n");
                    if(k==13)
                        printf("MAHDIA :\n");
                    if(k==14)
                        printf("MEDENINE :\n");
                    if(k==15)
                        printf("MONASTIR :\n");
                    if(k==16)
                        printf("NABEUL :\n");
                    if(k==17)
                        printf("SFAX :\n");
                    if(k==18)
                        printf(" SIDI BOUZID :\n");
                    if(k==19)
                        printf("SILIANA :\n");
                    if(k==20)
                        printf("SOUSSE :\n");
                    if(k==21)
                        printf("TATAOUINE :\n");
                    if(k==22)
                        printf("TOZEUR :\n");
                    if(k==23)
                        printf("TUNIS :\n");
                    if(k==24)
                        printf("ZAGHOUAN :\n");
                    elementAfficher(ea);
                    printf("\n");
                }
            }
        }
        }
    Menu(tab);
}
void importation(LISTE tab[]){
    FILE* fichier = NULL;
    int inter[6];
    int p;
    int jour,mois,annee,casp,guer,dec,nbv;
    char ville[100];
    fichier = fopen("covid.txt", "r");
    if(fichier !=NULL){
        int nb=1;
        int i;
        fflush(stdin);
        while(fscanf(fichier,"%d %d %d %s %d %d %d %d ",&jour,&mois,&annee,ville,&casp,&guer,&dec,&nbv)!=EOF ){
            fflush(stdin);
            if(strcmp("Ariana",ville)==0)
                p=0;
            if(strcmp("Beja",ville)==0)
                p=1;
            if(strcmp("BenArous",ville)==0)
                p=2;
            if(strcmp("Bizerte",ville)==0)
                p=3;
            if(strcmp("Gabes",ville)==0)
                p=4;
            if(strcmp("Gafsa",ville)==0)
                p=5;
            if(strcmp("Jendouba",ville)==0)
                p=6;
            if(strcmp("Kairouan",ville)==0)
                p=7;
            if(strcmp("Kasserine",ville)==0)
                p=8;
            if(strcmp("Kebili",ville)==0)
                p=9;
            if(strcmp("Manouba",ville)==0)
                p=10;
            if(strcmp("Kef",ville)==0)
                p=11;
            if(strcmp("Mahdia",ville)==0)
                p=12;
            if(strcmp("Medenine",ville)==0)
                p=13;
            if(strcmp("Monastir",ville)==0)
                p=14;
            if(strcmp("Nabeul",ville)==0)
                p=15;
            if(strcmp("Sfax",ville)==0)
                p=16;
            if(strcmp("SidiBouzid",ville)==0)
                p=17;
            if(strcmp("Siliana",ville)==0)
                p=18;
            if(strcmp("Sousse",ville)==0)
                p=19;
            if(strcmp("Tataouine",ville)==0)
                p=20;
            if(strcmp("Tozeur",ville)==0)
                p=21;
            if(strcmp("Tunis",ville)==0)
                p=22;
            if(strcmp("Zaghouan",ville)==0)
                p=23;
            ELEMENT ef=elementCreer();
            ef->casPositifs=casp;
            ef->decees=dec;
            ef->guerisons=guer;
            ef->nbVaccines=nbv;
            ef->datee->jj=jour;
            ef->datee->mm=mois;
            ef->datee->aa=annee;
            int x;
            x=tab[p]->lg;
            inserer(tab[p],ef,x+1);
            fflush(stdin);
        }
    }
    fclose(fichier);
    int w;
    for(w=0;w<=23;w++){
        listeAfficher(tab[w]);
        printf("\n\n");
    }
    Menu(tab);
}
void saisir (LISTE tab[]){
   int p,z,k;
    DATE ds;
    printf("saisir la date pour l'infotmation que vous voulez ajouter:\n");
    ds = elementDateCreer();
    elementDateLire(&ds);
    for(p=0;p<=23;p++){
        ELEMENT ei=elementCreer();
        ei->datee->jj=ds->jj;
        ei->datee->mm=ds->mm;
        ei->datee->aa=ds->aa;
        if(p==0)
            printf("saisir les informations pour l' ARIANNA :\n");
        if(p==1)
            printf("saisir les informations pour BEJA :\n");
        if(p==2)
            printf("saisir les informations pour BEN AROUS :\n");
        if(p==3)
            printf("saisir les informations pour BIZERTE :\n");
        if(p==4)
            printf("saisir les informations pour GABES :\n");
        if(p==5)
            printf("saisir les informations pour GAFSA :\n");
        if(p==6)
            printf("saisir les informations pour JENDOUBA :\n");
        if(p==7)
            printf("saisir les informations pour KAIROUAN :\n");
        if(p==8)
            printf("saisir les informations pour KASSERINE :\n");
        if(p==9)
            printf("saisir les informations pour KEBILI:\n");
        if(p==10)
            printf("saisir les informations pour MANOUBA :\n");
        if(p==11)
            printf("saisir les informations pour KEF :\n");
        if(p==12)
            printf("saisir les informations pour MAHDIA:\n");
        if(p==13)
            printf("saisir les informations pour MEDENINE :\n");
        if(p==14)
            printf("saisir les informations pour MONASTIR :\n");
        if(p==15)
            printf("saisir les informations pour NABEUL:\n");
        if(p==16)
            printf("saisir les informations pour SFAX :\n");
        if(p==17)
            printf("saisir les informations pour SIDI BOUZID:\n");
        if(p==18)
            printf("saisir les informations pour SILIANA:\n");
        if(p==19)
            printf("saisir les informations pour SOUSSE :\n");
        if(p==20)
            printf("saisir les informations pour TATAOUINE:\n");
        if(p==21)
            printf("saisir les informations pour TOZEUR:\n");
        if(p==22)
            printf("saisir les informations pour TUNIS:\n");
        if(p==23)
            printf("saisir les informations pour ZAGHOUAN:\n");
        elementLire(&ei);
        inserer(tab[p],ei,(tab[p]->lg+1));

     }


    for(z=0;z<=23;z++){
        if(z==0)
            printf("les  informations de ARIANNA  :\n \n");
        if(z==1)
            printf("les  informations de BEJA  : \n \n");
        if(z==2)
            printf("les  informations de BENAROUS  : \n \n");
        if(z==3)
            printf("les  informations de BIZERTE  : \n \n");
        if(z==4)
            printf("les  informations de GABES  : \n \n");
        if(z==5)
            printf("les  informations de GAFSA : \n \n");
        if(z==6)
            printf("les  informations de JENDOUBA  : \n \n");
        if(z==7)
            printf("les  informations de KAIROUAN  : \n \n");
        if(z==8)
            printf("les  informations de KASSERINE  : \n \n");
        if(z==9)
            printf("les  informations de KEBILI  : \n \n");
        if(z==10)
            printf("les  informations de MANOUBA  : \n \n");
        if(z==11)
            printf("les  informations de KEF  : \n \n");
        if(z==12)
            printf("les  informations de MAHDIA: \n \n");
        if(z==13)
            printf("les  informations de MEDENINE : \n \n");
        if(z==14)
            printf("les  informations de MONASTIR  : \n \n");
        if(z==15)
            printf("les  informations de NABEUL  : \n \n");
        if(z==16)
            printf("les  informations de SFAX  : \n \n");
        if(z==17)
            printf("les  informations de SIDI BOUZID : \n \n");
        if(z==18)
            printf("les  informations de SILIANA  : \n \n");
        if(z==19)
            printf("les  informations de SOUSSE  : \n \n");
        if(z==20)
            printf("les  informations de TATAOUINE : \n \n");
        if(z==21)
            printf("les  informations de TOZEUR  : \n \n");
        if(z==22)
            printf("les  informations de TUNIS  : \n \n");
        if(z==23)
            printf("les  informations de ZAGHOUAN : \n \n");
        listeAfficher(tab[z]);
        printf("\n \n");
    }
    Menu(tab);

}

void modifier(LISTE tab[])
{
    printf(" 1 :  Ariana\n");
    printf(" 2 :  Beja\n");
    printf(" 3 :  Ben arous\n");
    printf(" 4 :  Bizerte\n");
    printf(" 5 :  Gabes\n");
    printf(" 6 :  Gafsa\n");
    printf(" 7 :  Jendouba\n");
    printf(" 8 :  Kairouan\n");
    printf(" 9 :  Kasserine\n");
    printf("10 :  Kebili\n");
    printf("11 :  Manouba\n");
    printf("12 :  Kef\n");
    printf("13 :  Mahdia\n");
    printf("14 :  Medenin\n");
    printf("15 :  Monastir\n");
    printf("16 :  Nabeul\n");
    printf("17 :  Sfax\n");
    printf("18 :  Sidi Bouzid\n");
    printf("19 :  Siliana\n");
    printf("20 :  Sousse\n");
    printf("21 :  Tataouine\n");
    printf("22 :  Tozeur\n");
    printf("23 :  Tunis\n");
    printf("24 :  Zaghouan\n");

    int g;
    int r;
    do{
        printf("Donnez le numero du gouvernorat :  \n");
        scanf("%d",&g);
        if((g<1) || (g>24))
            printf("Ce numero  de gouvernorat est invalide !  \n ");
    }while((g<1) || (g>24));
    g=g-1;
    DATE dt=elementDateCreer();
    printf("Donnez la date de l'informations que vous voulez modifier \n ");
    elementDateLire(&dt);
    int k,stop;
    stop=0;
    k=1;
    while((k<=listeTaille(tab[g]))&& (stop==0)){
        ELEMENT elm1=elementCreer();
        elm1=recuperer(tab[g],k);
        if(elementDateComparer(dt,elm1->datee)){
            supprimer(tab[g],k);
            ELEMENT elm2=elementCreer();
            elm2->datee->jj = dt->jj;
            elm2->datee->mm = dt->mm;
            elm2->datee->aa = dt->aa;
            elementLire(&elm2);
            inserer(tab[g],elm2,k);
            stop=1;
        }
        k++;
    }
    if(stop==1){

        switch (g)
        {
            case 0:
                printf("les  informations de  ARIANNA  apres la modification :\n \n");
                break;
            case 1:
                printf("les  informations de  BEJA  apres la modification :\n \n");
                break;
            case 2:
                printf("les  informations de  BEN AROUS  apres la modification :\n \n");
                break;
            case 3:
                printf("les  informations de  BIZERTE  apres la modification :\n \n");
                break;
            case 4:
                printf("les  informations de  GABES  apres la modification :\n \n");
                break;
            case 5:
                printf("les  informations de  GAFSA  apres la modification :\n \n");
                break;
            case 6:
                printf("les  informations de  JENDOUBA  apres la modification :\n \n");
                break;
            case 7:
                printf("les  informations de  KAIROUAN  apres la modification :\n \n");
                break;
            case 8:
                printf("les  informations de  KASSERINE  apres la modification :\n \n");
                break;
            case 9:
                printf("les  informations de  KEBILI  apres la modification :\n \n");
                break;
            case 10:
                printf("les  informations de  MANOUBA  apres la modification :\n \n");
                break;
            case 11:
                printf("les  informations de  KEF  apres la modification :\n \n");
                break;
            case 12:
                printf("les  informations de  MAHDIA  apres la modification :\n \n");
                break;
            case 13:
                printf("les  informations de  MEDENINE  apres la modification :\n \n");
                break;
            case 14:
                printf("les  informations de  MONASTIR  apres la modification :\n \n");
                break;
            case 15:
                printf("les  informations de  NABEUL  apres la modification :\n \n");
                break;
            case 16:
                printf("les  informations de  SFAX  apres la modification :\n \n");
                break;
            case 17:
                printf("les  informations de  SIDI BOUZID  apres la modification :\n \n");
                break;
            case 18:
                printf("les  informations de  SILIANA  apres la modification :\n \n");
                break;
            case 19:
                printf("les  informations de  SOUSSE  apres la modification :\n \n");
                break;
            case 20:
                printf("les  informations de  TATAOUINE  apres la modification :\n \n");
                break;
            case 21:
                printf("les  informations de  TOZEUR  apres la modification :\n \n");
                break;
            case 22:
                printf("les  informations de  TUNIS  apres la modification :\n \n");
                break;
            case 23:
                printf("les  informations de  ZAGHOUANE  apres la modification :\n \n");
                break;
        }
        listeAfficher(tab[g]);
        printf("\n \n");

    }
    else
        printf(" n'y a pas des donnees pour ce date \n");
    Menu(tab);
}
void suppression (LISTE tab[])
{
    printf(" 1 :  Ariana\n");
    printf(" 2 :  Beja\n");
    printf(" 3 :  Ben arous\n");
    printf(" 4 :  Bizerte\n");
    printf(" 5 :  Gabes\n");
    printf(" 6 :  Gafsa\n");
    printf(" 7 :  Jendouba\n");
    printf(" 8 :  Kairouan\n");
    printf(" 9 :  Kasserine\n");
    printf("10 :  Kebili\n");
    printf("11 :  Manouba\n");
    printf("12 :  Kef\n");
    printf("13 :  Mahdia\n");
    printf("14 :  Medenin\n");
    printf("15 :  Monastir\n");
    printf("16 :  Nabeul\n");
    printf("17 :  Sfax\n");
    printf("18 :  Sidi Bouzid\n");
    printf("19 :  Siliana\n");
    printf("20 :  Sousse\n");
    printf("21 :  Tataouine\n");
    printf("22 :  Tozeur\n");
    printf("23 :  Tunis\n");
    printf("24 :  Zaghouan\n");

    int g;
    int r;
    do{
        printf("Donnez le numero  gouvernorat :  \n");
        scanf("%d",&g);
        if((g<1) || (g>24))
            printf("Ce numero  de gouvernorat est invalide !  \n ");
    }while((g<1) || (g>24));
    g=g-1;
    DATE da=elementDateCreer();
    printf("Donnez la date de l'informations que vous voulez supprimer : \n ");
    elementDateLire(&da);
    int k,stop;
    k=1;
    stop=0;
    while((k<=listeTaille(tab[g]))&&(stop==0)){
        ELEMENT elm=elementCreer();
        elm=recuperer(tab[g],k);
        if(elementDateComparer(da,elm->datee)){
            supprimer(tab[g],k);
            stop=1;
        }
        k++;
    }

if(stop==1){

        switch (g)
        {
            case 0:
                printf("les  informations de  ARIANNA  apres la suppression  :\n \n");
                break;
            case 1:
                printf("les  informations de  BEJA  apres la suppression :\n \n");
                break;
            case 2:
                printf("les  informations de  BEN AROUS  apres la suppression :\n \n");
                break;
            case 3:
                printf("les  informations de  BIZERTE  apres la suppression :\n \n");
                break;
            case 4:
                printf("les  informations de  GABES  apres la suppression :\n \n");
                break;
            case 5:
                printf("les  informations de  GAFSA  apres la suppression :\n \n");
                break;
            case 6:
                printf("les  informations de  JENDOUBA  apres la suppression :\n \n");
                break;
            case 7:
                printf("les  informations de  KAIROUAN  apres la suppression :\n \n");
                break;
            case 8:
                printf("les  informations de  KASSERINE  apres la suppression :\n \n");
                break;
            case 9:
                printf("les  informations de  KEBILI  apres la suppression :\n \n");
                break;
            case 10:
                printf("les  informations de  MANOUBA  apres la suppression :\n \n");
                break;
            case 11:
                printf("les  informations de  KEF  apres la suppression :\n \n");
                break;
            case 12:
                printf("les  informations de  MAHDIA  apres la suppression :\n \n");
                break;
            case 13:
                printf("les  informations de  MEDENINE  apres la suppression :\n \n");
                break;
            case 14:
                printf("les  informations de  MONASTIR  apres la suppression :\n \n");
                break;
            case 15:
                printf("les  informations de  NABEUL  apres la suppression :\n \n");
                break;
            case 16:
                printf("les  informations de  SFAX  apres la suppression :\n \n");
                break;
            case 17:
                printf("les  informations de  SIDI BOUZID  apres la suppression :\n \n");
                break;
            case 18:
                printf("les  informations de  SILIANA  apres la suppression :\n \n");
                break;
            case 19:
                printf("les  informations de  SOUSSE  apres la suppression :\n \n");
                break;
            case 20:
                printf("les  informations de  TATAOUINE  apres la suppression :\n \n");
                break;
            case 21:
                printf("les  informations de  TOZEUR  apres la suppression :\n \n");
                break;
            case 22:
                printf("les  informations de  TUNIS  apres la suppression :\n \n");
                break;
            case 23:
                printf("les  informations de  ZAGHOUANE  apres la suppression :\n \n");
                break;
        }
        listeAfficher(tab[g]);
        printf("\n \n");
    }
    else
        printf(" n'y a pas de donnees pour ce date \n");
    Menu(tab);
}

char menu_evol(){
    printf("choisir votre critere d'evolution \n");
    printf("1 Cas positifs\n");
    printf("2 Guerisons\n");
    printf("3 Decees\n");
    printf("4 Nombres de vaccinees \n");
    char choix;
    fflush(stdin);
    do{
        scanf("%c",&choix);
        fflush(stdin);
        if(choix<'1' || choix>'5')
            printf("Donnez un choix valide entre '1,2,3,4,5' \n");
    }while (choix<'1' || choix>'5') ;
    fflush(stdin);
    system("cls");
    return choix;
}
void evolution(LISTE tab[])
{
    int p;
    printf(" 1:  Ariana\n");
    printf(" 2:  Beja\n");
    printf(" 3:  Ben arous\n");
    printf(" 4:  Bizerte\n");
    printf(" 5:  Gabes\n");
    printf(" 6:  Gafsa\n");
    printf(" 7:  Jendouba\n");
    printf(" 8:  Kairouan\n");
    printf(" 9:  Kasserine\n");
    printf("10:  Kebili\n");
    printf("11:  Manouba\n");
    printf("12:  Kef\n");
    printf("13:  Mahdia\n");
    printf("14:  Medenin\n");
    printf("15:  Monastir\n");
    printf("16:  Nabeul\n");
    printf("17:  Sfax\n");
    printf("18:  Sidi Bouzid\n");
    printf("19:  Siliana\n");
    printf("20:  Sousse\n");
    printf("21:   Tataouine\n");
    printf("22:   Tozeur\n");
    printf("23:   Tunis\n");
    printf("24:   Zaghouan\n");

    do{
        printf("Donnez le numero  gouvernorat :  \n");
        scanf("%d",&p);
        if((p<=0) || (p>24))
            printf("Ce numero  de gouvernorat est invalide ! \n ");
    }while((p<=0) || (p>24));
    p=p-1;
    if(estVide(tab[p]))
        printf("votre liste est vide \n");
    else{
        if(p==0)
            printf("ARIANNA  :\n \n");
        if(p==1)
            printf("BEJA : \n \n");
        if(p==2)
            printf("BENAROUS :\n \n");
        if(p==3)
            printf("BIZERTE  :\n \n");
        if(p==4)
            printf("GABES  :\n \n");
        if(p==5)
            printf("GAFSA :\n \n");
        if(p==6)
            printf("JENDOUBA  :\n \n");
        if(p==7)
            printf("KAIROUAN  :\n \n");
        if(p==8)
            printf("KASSERINE  :\n \n");
        if(p==9)
            printf("KEBILI  :\n \n");
        if(p==10)
            printf("MANOUBA  :\n \n");
        if(p==11)
            printf("KEF  :\n \n");
        if(p==12)
            printf("MAHDIA :\n \n");
        if(p==13)
            printf("MEDENINE :\n \n");
        if(p==14)
            printf("MONASTIR  :\n \n");
        if(p==15)
            printf("NABEUL  :\n \n");
        if(p==16)
            printf("SFAX  :\n \n");
        if(p==17)
            printf("SIDI BOUZID  :\n \n");
        if(p==18)
            printf("SILIANA  :\n \n");
        if(p==19)
            printf("SOUSSE  :\n \n");
        if(p==20)
            printf("TATAOUINE  :\n \n");
        if(p==21)
            printf("TOZEUR  :\n \n");
        if(p==22)
            printf("TUNIS  :\n \n");
        if(p==23)
            printf("ZAGHOUAN  :\n \n");
        int s1=0,s2=0,s3=0,s4=0;
        ELEMENT en=elementCreer();
        NOEUD n=noeudCreer(en);
        n=tab[p]->tete;
        int k;
        for(k=1;k<=listeTaille(tab[p]);k++){
            ELEMENT elt=elementCreer();
            elt=recuperer(tab[p],k);
            s1=s1+elt->casPositifs;
            s2=s2+elt->guerisons;
            s3=s3+elt->decees;
            s4=s4+elt->nbVaccines;
            n=n->suivant;
        }
        char choix;
        choix=menu_evol();
        if(choix=='1'){
            ELEMENT en2=elementCreer();
            NOEUD n2=noeudCreer(en2);
            n2=tab[p]->tete;
            printf("l'evolution pour les  cas positifs de cet gouvernorat : \n\n");
            printf(" Total de cas positifs pendant cette periode : %d  \n",s1);
            for(k=1;k<=listeTaille(tab[p]);k++){
                double pourc_cp=0;
                ELEMENT elt2=elementCreer();
                elt2=recuperer(tab[p],k);
                pourc_cp=(double)((elt2->casPositifs)*100)/s1;
                printf("date: %d/%d/%d \t\t nombre de cas positif: %d \t Le pourcentage  par rapport le total des cas positifs  pour cet gouvernorat :%.4f%c \n",elt2->datee->jj,elt2->datee->mm,elt2->datee->aa,elt2->casPositifs,pourc_cp,37);
                printf("\n");
                n2=n2->suivant;
            }

        }
        if(choix=='2'){
            ELEMENT en3=elementCreer();
            NOEUD n3=noeudCreer(en3);
            n3=tab[p]->tete;
            printf("l'evolution des nombres des guerisonss pour cet gouvernorat  \n");
            printf(" Total des guerisonss pendant cette periode : %d \n",s2);
            for(k=1;k<=listeTaille(tab[p]);k++){
                double pourc_guer=0;
                ELEMENT elt3=elementCreer();
                elt3=recuperer(tab[p],k);
                pourc_guer=(double)((elt3->guerisons)*100)/s2;
                printf("date: %d/%d/%d \t nombre de guerisonss: %d \t Le pourcentage  par rapport le total de guerisonss pour cet gouvernorat :%.4f%c \n",elt3->datee->jj,elt3->datee->mm,elt3->datee->aa,elt3->guerisons,pourc_guer,37);
                printf("\n");
                n3=n3->suivant;
            }
        }
        printf("\n\n");
        if(choix=='3'){
            ELEMENT en4=elementCreer();
            NOEUD n4=noeudCreer(en4);
            n4=tab[p]->tete;
            printf("l'evolution des nombres des decees:\n");
            printf("Total des decees pendant cette periode : %d  \n",s3);
            for(k=1;k<=listeTaille(tab[p]);k++){
                double pourc_dec=0;
                ELEMENT elt4=elementCreer();
                elt4=recuperer(tab[p],k);
                pourc_dec=(double)((elt4->decees)*100)/s3;
                printf("date: %d/%d/%d \t nombre de decees: %d \t le pourcentage par rapport le total des decees pour cet gouvernorat :%.4f%c \n",elt4->datee->jj,elt4->datee->mm,elt4->datee->aa,elt4->decees,pourc_dec,37);
                printf("\n");
                n4=n4->suivant;
            }
        }
        if(choix=='4'){
            ELEMENT en5=elementCreer();
            NOEUD n5=noeudCreer(en5);
            n5=tab[p]->tete;
            printf("l'evolution  des nombres de vaccinees:\n");
            printf("Total des nombres vaccinees pendant cette periode : %d \n",s4);
            for(k=1;k<=listeTaille(tab[p]);k++){
                double pourc_nbv=0;
                ELEMENT elt5=elementCreer();
                elt5=recuperer(tab[p],k);
                pourc_nbv=(double)((elt5->nbVaccines)*100)/s4;
                printf("date: %d/%d/%d \t nombre DE vaccinees: %d \t le pourcentage par rapport le total de nombre vaccinees pour cet gouvernorat :%.4f%c \n",elt5->datee->jj,elt5->datee->mm,elt5->datee->aa,elt5->nbVaccines,pourc_nbv,37);
                printf("\n");
                n5=n5->suivant;
            }
        }
        if(choix=='5')
            menu_evol();


    }
    Menu(tab);
}



void Menu(LISTE tab[])
{
   system ("color c0");
char choix;
printf("\n\n");
printf( "\t|            Bienvenue dans notre application            |\n");
printf( "\t| 1- Importation des donnees a partir d'un fichier texte |\n");
printf( "\t| 2- Ajouter une informations\t\t\t\t |\n");
printf( "\t| 3- Modifier une informations\t\t\t\t |\n");
printf( "\t| 4- Supprimer une informations\t\t\t\t |\n");
printf( "\t| 5- Affichage d'un gouvernorat\t\t\t\t |\n");
printf( "\t| 6- Trier\t\t\t\t\t\t |\n");
printf( "\t| 7- Exit\t\t\t\t\t\t |\n");

    fflush(stdin);
    do
    {  printf("\n");
       printf("\tTapez votre choix :"); scanf("%c",&choix);
        fflush(stdin);
        if(choix<'1' || choix>'7')
        {
            printf(" \n\tDonnez un choix valide entre (1,2,3,4,5,6,7) \n");
        }
    } while (choix<'1' || choix>'7') ;
    fflush(stdin);
    system("cls");
    switch (choix)
    {
        case '1': importation(tab);
        break;
        case '2': saisir(tab);
        break;
        case '3':  modifier(tab);
        break;
        case '4': suppression(tab);
        break;
        case '5': evolution(tab);
        break;
        case '6': tri(tab);
        default:exit(0);

    }
}






int main()
{
LISTE tab[23];
LISTE L1=listeCreer();
LISTE L2=listeCreer();
LISTE L3=listeCreer();
LISTE L4=listeCreer();
LISTE L5=listeCreer();
LISTE L6=listeCreer();
LISTE L7=listeCreer();
LISTE L8=listeCreer();
LISTE L9=listeCreer();
LISTE L10=listeCreer();
LISTE L11=listeCreer();
LISTE L12=listeCreer();
LISTE L13=listeCreer();
LISTE L14=listeCreer();
LISTE L15=listeCreer();
LISTE L16=listeCreer();
LISTE L17=listeCreer();
LISTE L18=listeCreer();
LISTE L19=listeCreer();
LISTE L20=listeCreer();
LISTE L21=listeCreer();
LISTE L22=listeCreer();
LISTE L23=listeCreer();
LISTE L24=listeCreer();
tab[0]=L1;
tab[1]=L2;
tab[2]=L3;
tab[3]=L4;
tab[4]=L5;
tab[5]=L6;
tab[6]=L7;
tab[7]=L8;
tab[8]=L9;
tab[9]=L10;
tab[10]=L11;
tab[11]=L12;
tab[12]=L13;
tab[13]=L14;
tab[14]=L15;
tab[15]=L16;
tab[16]=L17;
tab[17]=L18;
tab[18]=L19;
tab[19]=L20;
tab[20]=L21;
tab[21]=L22;
tab[22]=L23;
tab[23]=L24;
Menu(tab);
printf("\n\n");
}
