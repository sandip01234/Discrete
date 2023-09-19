/*Generate truth tables for following compound propositions.
a. (p ᴧ ⌐q ᴠ r) → (⌐p ᴠ r)
b. (p ᴧ ⌐q ᴠ r) ↔ (⌐p ᴠ r)*/
#include <stdio.h>

int main()
{
    int a[] = {0, 1};
    printf("a. (p ᴧ ¬q ∨ r) → (¬p ∨ r)\n");
    printf("  p  |  q  |  r  | ¬q  | p ᴧ ¬q ∨ r | ¬p ∨ r | (p ᴧ ¬q ∨ r) → (¬p ∨ r)\n");
    for (int i = 0; i < 2; i++)
    {
        int p = a[i];
        for (int j = 0; j < 2; j++)
        {
            int q = a[j];
            for (int k = 0; k < 2; k++)
            {
                int r = a[k];
                int notQ = q == 0 ? 1 : 0;
                int pandnotQOrR = (p & notQ) | r;
                int notPOrR = (p == 0 ? 1 : 0) | r;
                int result = pandnotQOrR == notPOrR ? 1 : 0;
                printf("  %d  |  %d  |  %d  |  %d  |      %d     |   %d    |           %d\n", p, q, r, notQ, pandnotQOrR, notPOrR, result);
            }
        }
    }
    printf("\nb. (p ᴧ ¬q ∨ r) ↔ (¬p ∨ r)\n");
    printf("  p  |  q  |  r  | ¬q  | p ᴧ ¬q ∨ r | ¬p ∨ r | (p ᴧ ¬q ∨ r) ↔ (¬p ∨ r)\n");
    for (int i = 0; i < 2; i++)
    {
        int p = a[i];
        for (int j = 0; j < 2; j++)
        {
            int q = a[j];
            for (int k = 0; k < 2; k++)
            {
                int r = a[k];
                int notQ = q == 0 ? 1 : 0;
                int pandnotQOrR = (p & notQ) | r;
                int notPOrR = (p == 0 ? 1 : 0) | r;
                int result = pandnotQOrR == notPOrR ? 1 : 0;
                printf("  %d  |  %d  |  %d  |  %d  |      %d     |   %d    |           %d \n", p, q, r, notQ, pandnotQOrR, notPOrR, result);
            }
        }
    }
    return 0;
}