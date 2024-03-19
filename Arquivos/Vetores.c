#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    exemplo menos apropriado e mais complexo de se usar vetores
    float v[5];

    float m;

    v[0] = 50;
    v[1] = 40;
    v[2] = 30;
    v[3] = 20;
    v[4] = 10;

    m = (v[0] + v[1] + v[2] + v[3] + v[4])/5;

    printf("%.2f", m);*/

    // exemplo mais prático de trabalhar com muitas informações

    int v[5] = {10,20,30,40,50};

    float s = 0;

    for( int i = 0 ; i < 5 ; i++){
        s = s + v[i];
    }

    printf("Resultado: %f\n", s/5);


    return 0;
}
