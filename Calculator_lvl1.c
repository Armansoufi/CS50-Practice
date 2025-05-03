#include <cs50.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    float n1 = get_float( "number1: " );
    char op = get_char( "operator: " );
    float n2 = get_float( "number2: " );
    if(op ==  '/')
    {
        if(n2 == 0)
        {
            printf("Cannot divide by zero!\n");
            return 1;
        }
        printf( "result: %f\n", n1 / n2 );
        return 0;
    }
    else if( op == '*' )
    {
        printf( "result: %f\n", n1 * n2 );
        return 0;
    }
    else if( op == '-' )
    {
        printf( "result: %f\n", n1 - n2 );
        return 0;
    }
    else if( op == '+' )
    {
        printf( "result: %f\n", n1 + n2 );
        return 0;
    }
    else
    {
        printf( "invalid operator!\n" );
        return 1;
    }

}

