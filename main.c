#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int t1, t2, t3;
    printf("Введіть три значення:\n");
    scanf("%d %d %d", &t1, &t2, &t3);

    double total_time = 1.0 / t1 + 1.0 / t2 + 1.0 / t3;

    double time_to_eat_cake = 1.0 / total_time;

    printf("Час, необхідний для з'їдання пирога: %.2f годин\n", time_to_eat_cake);

    return 0;
}
