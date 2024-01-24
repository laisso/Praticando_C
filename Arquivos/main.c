#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415
int main()
{
    float f = PI+1;
    printf("PI = %f \n", f);
    /*PI = 12.4; essa definição jamais pode acontecer neste código porque uma vez que eu defini que PI
    é 3.1415 com o comando define, não tem como ser alterado.*/

    return 0;
}
