#include <stdio.h>

int main (void){

    printf("Size of :");
    printf("\nchar \t= %d\tByte",sizeof(char));
    printf("\nint \t= %d\tByte",sizeof(short));
    printf("\nint \t= %d\tByte",sizeof(int));
    printf("\nfloat \t= %d\tByte",sizeof(float));

    printf("\nsigned int   = %10d,\t0x%x",-1,-1);
    printf("\nunsigned int = %u,\t0x%X",-1U,-1U);

    printf("\n\nNormal Number :");
    printf("\nDecimal:\t %i, %d,%.6i, %.0i, %+i, %03d",1,2,4,5,5,2);
    printf("\nOctal  :\t 0%o, %#o, %#o",150,150,255);
    printf("\nHex    :\t 0x%x, 0X%X",150,255);

    printf("\n\nFloating Number:");
    printf("\nRounding  :\t%f,%.0f, %.15f",1.125,1.125,1.125);
    printf("\nPadding   :\t%09.2f, %.2f",1.125,1.125);
    printf("\nscientific:\t%e, %E", 1.125,1.125);

    printf("\nSpecial values: 1/0=%g",1.0/0.0);
    printf("\nSpecial values: 0/0=%G",0.0/0.0);

}
