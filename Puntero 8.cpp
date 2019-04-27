#include <stdio.h>
using namespace std;
int main(){
    int salir;
    char p1[5];
    char p2[5];
    printf("Dime algo: ");
    scanf("%s",p1);//En p1 estará el lugar de memoria donde la palabra está guardada. En *palabra1 estará la palabra en si
    printf("Dime algo mas: ");
    scanf("%s",&p2);//En p estará la palabra en si
    
    printf("direccion palabra1 = %x en decimal %i\n",p1,p1);//Dirá la dirección en hexadecimal y decimal.   
    printf("palabra1 = %s\n",p1);//Dirá la palabra en sí
    printf("direccion palabra2 = %x\n",p2);//Dirá la dirección   
    printf("palabra2 = %s\n",p2);//Dirá la palabra en sí
    
    printf("direccion palabra1 = %x\n",p1);
    printf("palabra1 = %c\n",*(p1+0));     //Dirá la letra en la posición 0
    printf("direccion palabra2 = %x\n",p2);
    printf("palabra2 = %c\n",*(p2+2));     //Dirá la letra en la posición 2
    
    printf("%x,%i,%c,%s",p1,p1,*p1,p1);
    printf("\n%x,%i,%c,%s",p2,p2,*p2,p2);
    
    /*Resumen:
              %x - p1  //Posición en hexa
              %i - p1  //Posición en décimal
              %c - *p1 //Primera posición palabra
              %s - p1  //Palabra entera
              */
    
    scanf("%i",salir);
    return 0;
}
