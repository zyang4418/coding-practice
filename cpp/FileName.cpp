#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct book {
    string name;
    int price;
};

int main() {
    int n; // n is a number that > 0 and < 10
    cin >> n;

    string* books = new string[n];
    double* prices = new double[n];

    for (int i = 0; i < n; i++) {
        cin.ignore(); // 忽略换行符
        getline(cin, books[i]);
        cin >> prices[i];
    }

    int maxIndex = 0, minIndex = 0;
    for (int i = 1; i < n; i++) {
        if (prices[i] > prices[maxIndex]) {
            maxIndex = i;
        }
        if (prices[i] < prices[minIndex]) {
            minIndex = i;
        }
    }

    cout << fixed << setprecision(2);
    cout << prices[maxIndex] << ", " << books[maxIndex] << endl;
    cout << prices[minIndex] << ", " << books[minIndex] << endl;

    delete[] books;
    delete[] prices;
}