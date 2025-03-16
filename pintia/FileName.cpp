#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, R;
    cin >> N >> R;
    vector<int> allPlayers(N);
    for (int i = 0; i < N; ++i) {
        cin >> allPlayers[i];
    }

    vector<int> aTeam, bTeam;
    for (int p : allPlayers) {
        if (p > 0) {
            aTeam.push_back(p);
        } else {
            bTeam.push_back(p);
        }
    }

    // 按绝对值从大到小排序
    sort(aTeam.begin(), aTeam.end(), [](int a, int b) {
        return abs(a) > abs(b);
    });
    sort(bTeam.begin(), bTeam.end(), [](int a, int b) {
        return abs(a) > abs(b);
    });

    // 输出排序后的结果
    vector<int> output;
    output.insert(output.end(), aTeam.begin(), aTeam.end());
    output.insert(output.end(), bTeam.begin(), bTeam.end());
    for (int i = 0; i < output.size(); ++i) {
        if (i > 0) {
            cout << " ";
        }
        cout << output[i];
    }
    cout << endl;

    int aIndex = 0, bIndex = 0;
    for (int round = 0; round < R; ++round) {
        bool aHas = (aIndex < aTeam.size());
        bool bHas = (bIndex < bTeam.size());

        // 如果两队都无队员，提前结束比赛
        if (!aHas && !bHas) {
            break;
        }

        if (aHas && bHas) {
            int a = aTeam[aIndex];
            int b = bTeam[bIndex];
            int absA = abs(a);
            int absB = abs(b);

            if (absA > absB) {
                cout << "A Wins!" << endl;
            } else if (absA < absB) {
                cout << "B Wins!" << endl;
            } else {
                cout << "Draw!" << endl;
            }
            aIndex++;
            bIndex++;
        } else if (aHas) {
            cout << "A Wins!" << endl;
            aIndex++;
        } else if (bHas) {
            cout << "B Wins!" << endl;
            bIndex++;
        }
    }

    return 0;
}