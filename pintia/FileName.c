#include <stdio.h>

int main() {
    int year, month, day;
    scanf("%d/%d/%d", &year, &month, &day);
    int _31 = 31, _30 = 30, _29 = 29, _28 = 28;

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        switch (month) {
            case 1: printf("%d", day); break;
            case 2: printf("%d", _31 + day); break;
            case 3: printf("%d", _31 + _29 + day); break;
            case 4: printf("%d", _31 * 2 + _29 + day); break;
            case 5: printf("%d", _31 * 2 + _30 + _29 + day); break;
            case 6: printf("%d", _31 * 3 + _30 + _29 + day); break;
            case 7: printf("%d", _31 * 3 + _30 * 2 + _29 + day); break;
            case 8: printf("%d", _31 * 4 + _30 * 2 + _29 + day); break;
            case 9: printf("%d", _31 * 4 + _30 * 2 + _29 + day); break;
            case 10: printf("%d", _31 * 4 + _30 * 3 + _29 + day); break;
            case 11: printf("%d", _31 * 5 + _30 * 3 + _29 + day); break;
            case 12: printf("%d", _31 * 5 + _30 * 4 + _29 + day); break;
        }
    } else {
        switch (month) {
            case 1: printf("%d", day); break;
            case 2: printf("%d", _31 + day); break;
            case 3: printf("%d", _31 + _28 + day); break;
            case 4: printf("%d", _31 * 2 + _28 + day); break;
            case 5: printf("%d", _31 * 2 + _30 + _28 + day); break;
            case 6: printf("%d", _31 * 3 + _30 + _28 + day); break;
            case 7: printf("%d", _31 * 3 + _30 * 2 + _28 + day); break;
            case 8: printf("%d", _31 * 4 + _30 * 2 + _28 + day); break;
            case 9: printf("%d", _31 * 4 + _30 * 2 + _28 + day); break;
            case 10: printf("%d", _31 * 4 + _30 * 3 + _28 + day); break;
            case 11: printf("%d", _31 * 5 + _30 * 3 + _28 + day); break;
            case 12: printf("%d", _31 * 5 + _30 * 4 + _28 + day); break;
        }
    }
    return 0;
}