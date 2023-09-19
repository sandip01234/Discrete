/*Use a truth table to test the validity of the following argument using truth table.
If you are a hound dog, then you howl at the moon.
You don't howl at the moon.
Therefore, you aren't a hound dog.*/
#include <stdio.h>

int main()
{
    int values[] = {0, 1};
    printf("Truth Table for the Argument:\n");
    printf("  p  |  q  |  r  | p -> q | !q  | !p | Validity\n");
    for (int i = 0; i < 2; i++)
    {
        int p = values[i];
        for (int j = 0; j < 2; j++)
        {
            int q = values[j];
            for (int k = 0; k < 2; k++)
            {
                int r = values[k];
                int implication = (p == 1 && q == 0) ? 0 : 1;
                int notQ = (q == 0) ? 1 : 0;
                int notP = (p == 0) ? 1 : 0;
                int validity = (implication == 1 && notQ == 1 && notP == 1) ? 1 : 0;
                printf("  %d  |  %d  |  %d  |   %d   |  %d  |  %d |     %d\n", p, q, r, implication, notQ, notP, validity);
            }
        }
    }
    return 0;
}
