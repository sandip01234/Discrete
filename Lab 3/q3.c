/*Test the validity of the following argument using truth table.
I will buy a new goat or a used Yugo.
If I buy both a new goat and a used Yugo, I will need a loan.
I bought a used Yugo and I don't need a loan.
Therefore, I didn't buy a new goat.*/
#include <stdio.h>

int main()
{
    int values[] = {0, 1};
    printf("Truth Table for the Argument:\n");
    printf("  p  |  q  |  r  |  s  | p ∨ q | (p ∧ q) → r |  q ∧ ¬r |  s  | Validity\n");
    for (int p = 0; p < 2; p++)
    {
        for (int q = 0; q < 2; q++)
        {
            for (int r = 0; r < 2; r++)
            {
                for (int s = 0; s < 2; s++)
                {
                    int pOrQ = (p == 1 || q == 1) ? 1 : 0;
                    int pAndQImpliesR = ((p == 1 && q == 1) ? r : 1);
                    int qAndNotR = (q == 1 && r == 0) ? 1 : 0;
                    int validity = (pOrQ == 1 && pAndQImpliesR == 1 && qAndNotR == 1 && s == 1) ? 1 : 0;
                    printf("  %d  |  %d  |  %d  |  %d  |   %d   |      %d      |    %d    |  %d  |     %d\n", p, q, r, s, pOrQ, pAndQImpliesR, qAndNotR, s, validity);
                }
            }
        }
    }
    return 0;
}
