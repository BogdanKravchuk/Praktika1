#include <stdio.h>
#include <windows.h>

int countNumbers(int n) {

    if (n <= 0)
        return 0;

    if (n == 1) {
        return 2;
    }
    int count = 0;
    int prevCount = 1;
    for (int i = 2; i <= n; i++) {
        count = 2 * prevCount;
        prevCount = count;
    }

    return count;
}

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n;
    printf("Введіть кількість розрядів n: ");
    scanf("%d", &n);
    int result = countNumbers(n);
    printf("Кількість чисел із %d розрядів: %d\n", n, result);

    return 0;
}
