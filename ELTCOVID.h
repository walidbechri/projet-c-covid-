#ifndef ELTCOVID_H_INCLUDED
#define ELTCOVID_H_INCLUDED
typedef struct{
    int jj;
    int mm;
    int aa;
} date , *DATE;

typedef struct{
    DATE datee;
    int casPositifs;
    int guerisons;
    int decees;
    int nbVaccines;
} elemCovid , *ELEMENT;


#endif // ELTCOVID_H_INCLUDED
