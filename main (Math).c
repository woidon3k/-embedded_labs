#include <stdio.h>
#include <math.h>

int main() {
    double m, n;
    
    printf("Введіть значення m: ");
    scanf("%lf", &m);
    printf("Введіть значення n: ");
    scanf("%lf", &n);

    // Розрахунок z1
    double numerator = (m - 1) * sqrt(m) - (n - 1) * sqrt(n);
    double denominator = sqrt(pow(m, 3) * n) + n * m + pow(m, 2) - m;
    
    if (denominator == 0) {
        printf("Помилка: ділення на нуль у z1\n");
    } else {
        double z1 = numerator / denominator;
        printf("z1 = %f\n", z1);
    }

    // Розрахунок z2
    if (m == 0) {
        printf("Помилка: ділення на нуль у z2\n");
    } else {
        double z2 = (sqrt(m) - sqrt(n)) / m;
        printf("z2 = %f\n", z2);
    }

    return 0;
}