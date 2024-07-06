#include <stdio.h>
#include <math.h>
#include <Windows.h>

int main() {
    SetConsoleCP ( 1251 );
    SetConsoleOutputCP ( 1251 );
    int x1, y1, x2, y2;
    printf("¬вед≥ть координати x1, y1, x2, y2: ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    double length = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    printf("%.6f\n", length);

    return 0;
}
