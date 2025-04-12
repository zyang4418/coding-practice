#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int i = 0;
    while (i < s.length()) {
        if (s.at(i) != '6') {
            cout << s.at(i);
            i++;
        } else {
            int count = 0;
            while (i < s.length() && s.at(i) == '6') {
                count++;
                i++;
            }
            if (count > 9) {
                cout << "27";
            } else if (count > 3) {
                cout << "9";
            } else {
                for (int j = 0; j < count; j++) {
                    cout << '6';
                }
            }
        }
    }
    return 0;
}