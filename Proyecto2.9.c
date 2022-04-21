#include<stdio.h>
#include<stdlib.h>

int main()
{
//    int Kib;
    float Kib,Mib,Gib,Tib;

    printf("Ingrese un valor en (Kibibyte)KiB: ");
    scanf("%f", &Kib);
//    scanf("%d", &Kib);

    Mib= (float) Kib/1024;
    Gib= (float) Mib/1024;
    Tib= (float) Gib/1024;

    printf("Su valor en Mebibyte es de :%0.3fMiB\n", Mib);
    printf("Su valor en Gibibyte es de :%0.3fGiB\n", Gib);
    printf("Su valor en Tebibyte es de :%0.3fTiB\n", Tib);

    return 0;
}
