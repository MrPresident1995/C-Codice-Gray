#include <stdio.h>
#include <stdlib.h>

void gray(int *vett, int n);
void mirror(int *vett, int n);
int num_bit;
int i;

int main()
{
    int *vett;

    //INPUT + ALLOCAZIONE
    printf("Inserire un valore n: ");
    scanf("%d", &num_bit);
    vett= malloc((num_bit)*sizeof(int));

    //INIZIALIZZAZIONE
    gray(vett, num_bit);

    //CHIUSURA
    free(vett);
    return 0;
}

void gray(int *vett, int n) //FUNZIONE GRAY
{
    if(n==0)
    {
        for(i=0; i<num_bit; i++)
            printf("%d", vett[i]);
        printf("\n");
    }
    else
    {
        vett[num_bit-n]= 0;
        gray(vett, n-1);
        vett[num_bit-n]= 1;
        mirror(vett, n-1);
    }
}

void mirror(int *vett, int n) //FUNZIONE SPECCHIO
{
    if(n==0)
    {
        for(i=0; i<num_bit; i++)
            printf("%d", vett[i]);
        printf("\n");
    }
    else
    {
        vett[num_bit-n]= 1;
        gray(vett, n-1);
        vett[num_bit-n]= 0;
        mirror(vett, n-1);
    }
}
