#include <stdio.h>
#include <math.h>
#include <windows.h>

double calculateVectorLength(int x1, int y1, int x2, int y2) {


    int dx = x2 - x1;
    int dy = y2 - y1;
    double length = sqrt(dx*dx + dy*dy);
    return length;
}

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int x1, y1, x2, y2;

    printf("Введіть координати точки початку вектора (x1, y1): ");
    scanf("%d %d", &x1, &y1);

    printf("Введіть координати точки кінця вектора (x2, y2): ");
    scanf("%d %d", &x2, &y2);

    double length = calculateVectorLength(x1, y1, x2, y2);

    printf("Довжина вектора: %.6f\n", length);

    return 0;
}

