#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int t1, t2, t3;
    printf("������ ��� ��������:\n");
    scanf("%d %d %d", &t1, &t2, &t3);

    double total_time = 1.0 / t1 + 1.0 / t2 + 1.0 / t3;

    double time_to_eat_cake = 1.0 / total_time;

    printf("���, ���������� ��� �'������ ������: %.2f �����\n", time_to_eat_cake);

    return 0;
}
