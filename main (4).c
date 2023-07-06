#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    unsigned int n;
    int count = 0;

    printf("Введіть натуральне число n (1 < n < 150): ");
    scanf("%u", &n);

    for (unsigned int m = 1; m < n; m++) {

        if (n % m == n / m) {
            count++;
        }
    }

    printf("Кількість рівних дільників числа %u: %d\n", n, count);

    return 0;
}

