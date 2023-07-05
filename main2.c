#include <stdio.h>
#include <windows.h>

int findGCD(int a, int b) {

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int findLCM(int arr[], int n) {
    int lcm = arr[0];
    for (int i = 1; i < n; i++) {
        lcm = (lcm * arr[i]) / findGCD(lcm, arr[i]);
    }

    return lcm;
}

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    int p;
    scanf("%d", &p);
    int numbers[p];
    for (int i = 0; i < p; i++) {
        scanf("%d", &numbers[i]);
    }
    int lcm = findLCM(numbers, p);
    printf("%d\n", lcm);

    return 0;
}
