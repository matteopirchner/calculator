#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fZahl1;
    float fZahl2;
    char c0perator;
    float fErgebnis;

    printf ("-------------------------------------\n");
    printf ("             Calculator              \n");
    printf ("    Made by Matteo Pirchner-Gratz    \n");
    printf ("-------------------------------------\n\n");

    printf ("Enter the operation you want to use:\n");
    printf ("(addition (+), subtraction (-), multiplication (*), division (/))\n\n");
    printf ("Operation: ");
    scanf ("%c", &c0perator);

    printf ("You selected %c\n\n", c0perator);
    printf("Enter your two numbers (max. two decimal places): ");
    scanf ("%f %f", &fZahl1, &fZahl2);
    printf ("You selected %.2f and %.2f\n\n", fZahl1, fZahl2);

    if (c0perator == '+'){
        fErgebnis = fZahl1 + fZahl2;
        printf ("Your result is: %.2f\n\n", fErgebnis);
    }

    else if (c0perator == '-'){
        fErgebnis = fZahl1 - fZahl2;
        printf ("Your result is: %.2f\n\n", fErgebnis);
    }

    else if (c0perator == '*'){
        fErgebnis = fZahl1 * fZahl2;
        printf ("Your result is: %.2f\n\n", fErgebnis);
    }

    else if (c0perator == '/'){
        if (fZahl2 == 0)
        {
            printf ("Error: You can't divide by zero.\n\n");
        }
            else
            {
                fErgebnis = fZahl1 / fZahl2;
                printf ("Your result is: %.2f\n\n", fErgebnis);
            }

    }

    else {
        printf ("Error: Invalid operation.\n\n");
    }

    return 0;
}
