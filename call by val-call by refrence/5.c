#include <stdio.h>
#include <stdlib.h>

// call_by_val will only pass the value of nummer to x in the main method
// so what ever changes in main method veriables won't effect the original value in the function
void call_by_val(int nummer){
   nummer = nummer + 1;
   printf("Ergebnis der Methode call_by_val: %d\n", nummer);

}

// call_by_ref will pass the adresses which are receveid by the pointers
// so the new value u will be changed after using the function
void call_by_ref(int* nummer){
   *nummer = *nummer + 1;
    printf("Ergebnis der Methode call_by_ref: %d\n", *nummer);
}

int main()
{
    int x = 4;
    int y = 9;

    printf("x vorher: %d\n", x);
    call_by_val(x);
    printf("x nachher: %d\n", x);
    //variable num in der Methode call_by_val hat sich veraendert, x aber nicht. x ist gleich geblieben. vor der Aufruf wie dananch !

    printf("========================================\n");

    printf("y vorher: %d\n", y);
    call_by_ref(&y);
    printf("y nachher: %d\n", y);
    //variable num in der Methode call_by_ref hat sich veraendert, und hat x beeinflusst und geaendert. x nach der Aufruf ist nicht gleich davor!

    return 0;
}
