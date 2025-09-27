#include <cstdio>

int main() {
    long long x;
    int n;

    printf("Введіть x: ");
    scanf_s("%lld", &x);
    printf("Введіть n: ");
    scanf_s("%d", &n);

    long long y = 1;

    long long term = x;

    if (n >= 1) {
        term = x * x * x;
        y += term;

        for (int k = 2; k <= n; k++) {
            term = term * term * term;
            y += term;
        }
    }

    printf("y = %lld\n", y);
}