#include <cstdio>

int main() {
    int n;
    printf("Введіть n: ");
    scanf_s("%d", &n);

    double sum = 0;

    for (int i = 0; i < n; i++) {
        double y_i;
        printf("y[%d] = ", i + 1);
        scanf_s("%lf", &y_i);

        if (y_i < 10) {
            sum += y_i;
        }
        else {
            sum += 1;
        }
    }

    printf("z1 + z2 + ... + zn = %.6f\n", sum);
}