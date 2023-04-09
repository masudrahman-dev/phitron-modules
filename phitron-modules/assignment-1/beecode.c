#include <stdio.h>
int main()
{
    int k, m, n, o, p, q;
    float l, r, product, product2, total;
    scanf("%d%d%f", &k, &m, &l);
    scanf("%d%d%f", &p, &q, &r);
    product = m * l;
    product2 = q * r;
    total = product + product2;
    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}

// 12 1 5.30