#include <stdio.h>
#include <stdlib.h>

int main ()
{
    long long int fibonacci[90];
    long long int ehFibonacci;

    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for (int i = 2; i <= 89; i++)
    {
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
    }

    scanf("%lld", &ehFibonacci);

    if (ehFibonacci > fibonacci[90] || ehFibonacci < 0)
        printf ("%lld nao pertence a sequencia de Fibonacci\n", ehFibonacci);
    else
    {
        if (ehFibonacci < fibonacci[45])
        {
            for (int i = 0; i <= 45; i++)
            {
                if (ehFibonacci == fibonacci[i])
                {
                    printf ("%lld pertence a sequencia de Fibonacci\n", ehFibonacci);
                    exit(EXIT_SUCCESS);
                }
            }
        }
        else{
            for (int i = 46; i < 90; i++)
            {
                if (ehFibonacci == fibonacci[i]){
                    printf ("%lld pertence a sequencia de Fibonacci\n", ehFibonacci);
                    exit(EXIT_SUCCESS);

                }
            }
        }
        printf ("%lld nao pertence a sequencia de Fibonacci\n", ehFibonacci);
    }


    return 0;
}
