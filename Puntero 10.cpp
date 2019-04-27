//
#include <stdio.h>
#include <stdlib.h> //Malloc
using namespace std;
int main(){
    int salir;
    char *lista[3];//El puntero es para indicar que serán 3 punteros (como declarar *lista1)
    
    lista[0]= (char *)malloc(8*sizeof(char));//8 porque son Melchor + el espacio final.
    lista[1]= (char *)malloc(7*sizeof(char));
    lista[2]= (char *)malloc(9*sizeof(char));
    
    printf("Primer rey mago(Melchor):  ");
    scanf("%s",lista[0]);
    printf("Primer rey mago(Gaspar):  ");
    scanf("%s",lista[1]);
    printf("Primer rey mago(Baltasar):  ");
    scanf("%s",lista[2]);
    
    printf("%s",lista[0]);
    printf("%s",lista[0]);
    printf("%s",lista[0]);
    
    
    //Malloc(8*sizeof(char)) te da una posición de memoria
    //sizeof(char) te dice lo que ocupa un char
    //(char *) conversión forzada. Lo que hace es: En caso de error de malloc, lo corrige. Le pides espacio par CHAR. Si fuera Float, seria (float *)
    //Lista[0]=posición de memoria. Esto hace que *Lista(0) esté guardado en ese sitio buscado, en el espacio guardado en Lista[0]
    
    
    
    scanf("%i",salir);
    return 0;
}
