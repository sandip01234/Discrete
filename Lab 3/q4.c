/*Test the validity of the following argument using truth table.
Premise: If I go to the mall, I will buy new jeans
Premise: If I buy new jeans, I will buy a shirt to go with it.
Conclusion: If I go to the mall, I will buy a shirt.*/
#include <stdio.h>

int main()
{
    int values[] = {0, 1};
    printf("Truth Table for the Argument:\n");
    printf("  p  |  q  |  r  | p -> q | q -> r | p -> r | Validity\n");
    for (int i = 0; i < 2; i++)
    {
        int p = values[i];
        for (int j = 0; j < 2; j++)
        {
            int q = values[j];
            for (int k = 0; k < 2; k++)
            {
                int r = values[k];
                int pImpliesQ = (p == 0 || q == 1) ? 1 : 0;
                int qImpliesR = (q == 0 || r == 1) ? 1 : 0;
                int pImpliesR = (p == 0 || r == 1) ? 1 : 0;
                int validity = (pImpliesQ == 1 && qImpliesR == 1 && pImpliesR == 1) ? 1 : 0;
                printf("  %d  |  %d  |  %d  |   %d   |   %d   |   %d   |     %d \n", p, q, r, pImpliesQ, qImpliesR, pImpliesR, validity);
            }
        }
    }
    return 0;
}