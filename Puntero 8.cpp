#include <stdio.h>
using namespace std;
int main(){
    int salir;
    char p1[5];
    char p2[5];
    printf("Dime algo: ");
    scanf("%s",p1);//En p1 estar� el lugar de memoria donde la palabra est� guardada. En *palabra1 estar� la palabra en si
    printf("Dime algo mas: ");
    scanf("%s",&p2);//En p estar� la palabra en si
    
    printf("direccion palabra1 = %x en decimal %i\n",p1,p1);//Dir� la direcci�n en hexadecimal y decimal.   
    printf("palabra1 = %s\n",p1);//Dir� la palabra en s�
    printf("direccion palabra2 = %x\n",p2);//Dir� la direcci�n   
    printf("palabra2 = %s\n",p2);//Dir� la palabra en s�
    
    printf("direccion palabra1 = %x\n",p1);
    printf("palabra1 = %c\n",*(p1+0));     //Dir� la letra en la posici�n 0
    printf("direccion palabra2 = %x\n",p2);
    printf("palabra2 = %c\n",*(p2+2));     //Dir� la letra en la posici�n 2
    
    printf("%x,%i,%c,%s",p1,p1,*p1,p1);
    printf("\n%x,%i,%c,%s",p2,p2,*p2,p2);
    
    /*Resumen:
              %x - p1  //Posici�n en hexa
              %i - p1  //Posici�n en d�cimal
              %c - *p1 //Primera posici�n palabra
              %s - p1  //Palabra entera
              */
    
    scanf("%i",salir);
    return 0;
}
