#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double eps;
    cin >> eps;
    double sum = 1.0, up = 1.0, down = 1.0;
    int i = 1;
    if (eps > 1) {
        cout << "2.00000";
        return 0;
    }
    while (1) {
        up *= i;
        down *= 2 * i + 1;
        double term = up / down;
        sum += term;
        if (term < eps) {
            break;
        }
        i++;
    }
    double pi = sum * 2;
    printf("PI = %.5f\n", pi);
    return 0;
}
