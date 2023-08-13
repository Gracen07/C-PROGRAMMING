#include <stdio.h>

struct poly
{
    int coeff;
    int exp;
};

int main()
{
    struct poly p1[10], p2[10], p3[10];
    int t1, t2, i, j, k;
    printf("Enter the Number of elements in P1: ");
    scanf("%d", &t1);
    for (i = 0; i < t1; i++)
    {
        printf("Enter the coefficient and exponent for %d term of P1: ", i + 1);
        scanf("%d^%d", &p1[i].coeff, &p1[i].exp);
    }
    printf("Enter the Number of elements in P2: ");
    scanf("%d", &t2);
    for (i = 0; i < t2; i++)
    {
        printf("Enter the coefficient and exponent for %d term of P2: ", i + 1);
        scanf("%d^%d", &p2[i].coeff, &p2[i].exp);
    }

    i = 0;
    j = 0;
    k = 0;

    while (i < t1 && j < t2)
    {
        if (p1[i].exp == p2[j].exp)
        {
            p3[k].coeff = p1[i].coeff - p2[j].coeff; // Subtract coefficients
            p3[k].exp = p1[i].exp;
            k++;
            i++;
            j++;
        }
        else if (p1[i].exp > p2[j].exp)
        {
            p3[k].coeff = p1[i].coeff;
            p3[k].exp = p1[i].exp;
            k++;
            i++;
        }
        else
        {
            p3[k].coeff = -p2[j].coeff; // Negate the coefficient for subtraction
            p3[k].exp = p2[j].exp;
            k++;
            j++;
        }
    }
    while (i < t1)
    {
        p3[k].coeff = p1[i].coeff;
        p3[k].exp = p1[i].exp;
        k++;
        i++;
    }
    while (j < t2)
    {
        p3[k].coeff = -p2[j].coeff; 
        p3[k].exp = p2[j].exp;
        k++;
        j++;
    }

    printf("======POLYNOMIAL SUBTRACTION=====\n");

    #include <stdio.h>

int main() {
    int p1[100], p2[100], p3[100], i, j, k, t1, t2;

    printf("Enter the total number of terms in the first polynomial: ");
    scanf("%d", &t1);
    printf("Enter the coefficient and exponent of each term in the first polynomial:\n");
    for (i = 0; i < t1; i++) {
        scanf("%dx^%d", &p1[i], &j);
    }

    printf("\nEnter the total number of terms in the second polynomial: ");
    scanf("%d", &t2);
    printf("Enter the coefficient and exponent of each term in the second polynomial:\n");
    for (i = 0; i < t2; i++) {
        scanf("%dx^%d", &p2[i], &j);
    }

    i = 0;
    j = 0;
    k = 0;

    while (i < t1 && j < t2) {
        if (p1[i + 1] == p2[j + 1]) {
            p3[k] = p1[i] + p2[j];
            p3[k + 1] = p1[i + 1];
            i += 2;
            j += 2;
        } else if (p1[i + 1] > p2[j + 1]) {
            p3[k] = p1[i];
            p3[k + 1] = p1[i + 1];
            i += 2;
        } else {
            p3[k] = p2[j];
            p3[k + 1] = p2[j + 1];
            j += 2;
        }
        k += 2;
    }

    while (i < t1) {
        p3[k] = p1[i];
        p3[k + 1] = p1[i + 1];
        i += 2;
        k += 2;
    }

    while (j < t2) {
        p3[k] = p2[j];
        p3[k + 1] = p2[j + 1];
        j += 2;
        k += 2;
    }

    printf("\nThe sum of the two polynomials is:\n");
   for (i = 0; i < k; i++) {
    if (p3[i].coeff != 0) {
        printf("%dx^%d", p3[i].coeff, i);
        if (i != k - 1 && p3[i + 1].coeff >= 0) {
            printf(" + ");
        }
    }
}
}


    printf("\n");

    return 0;
}
