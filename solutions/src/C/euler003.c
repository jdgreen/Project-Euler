#include <stdio.h>
#include <math.h>

#define NUMBER 600851475143

int isPrime(int test)
{
    int i=0;
    int calculateTo=( (int) sqrt(test) );

    for(i = 3; i <= calculateTo; i+=2)
    {
        if(test % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int highest=0;
    int i=0;

    while(1)
    {
        for(i=3; ; i+=2)
        {
            if(isPrime(i))
            {
                if(NUMBER%i==0)
                    highest=i;
                if(i>=(sqrt(NUMBER)))
                    goto END;
            }
        }
    }
    END:
    printf("%d", highest);
    return 0;
}
