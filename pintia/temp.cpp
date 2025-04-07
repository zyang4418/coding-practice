#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")
using namespace std;

void english();
int sisterOrBrother();
void choosePath();
void eatHoney();
void baLaBaLa();
void dynamicLightWave();
void gameOver();

void chinese();
int sisterOrBrotherChi();
void choosePathChi();
void eatHoneyChi();
void baLaBaLaChi();
void dynamicLightWaveChi();
void gameOverChi();

int main() {
    mciSendString("open ./music.wma alias music", NULL, 0, NULL);
    mciSendString("play music repeat", NULL, 0, NULL);
    cout << "Supported Languages:" << endl;
    cout << "[1] English" << endl;
    cout << "[2] Chinese" << endl;
    int choice;
    cout << "Please select the language you want to use: ";
    while (1) {
        cin >> choice;
        if (choice == 1) {
            english();
        } else if (choice == 2) {
            chinese();
        } else {
            cout << "Please select a valid option. " << endl;
            cout << "Please try again: ";
        }
    }
}

void english() {
    system("cls");
    int protagonist = sisterOrBrother();
    choosePath();
    eatHoney();
    if (protagonist == 0) {
        baLaBaLa();
    } else if (protagonist == 1) {
        dynamicLightWave();
    }
    gameOver();
}

void chinese() {
    system("cls");
    int protagonist = sisterOrBrotherChi();
    choosePathChi();
    eatHoneyChi();
    if (protagonist == 0) {
        baLaBaLaChi();
    } else if (protagonist == 1) {
        dynamicLightWaveChi();
    }
    gameOverChi();
}

int sisterOrBrother() {
    cout << "You are a little bear who has come to Adventure land." << endl;
    system("sleep 1");
    cout << "After you enter the gate, ";
    system("sleep 1");
    cout << "you see a fog ";
    system("sleep 1");
    cout << "and a mysterious voice:" << endl;
    system("sleep 1");
    string str;
    cout << "Hello, are you a little sister or a little brother? [S/b] ";
    while (1) {
        cin >> str;
        if (str == "S" || str == "s" || str == "SISTER" || str == "Sister" || str == "sister") {
            return 0;
        }
        if (str == "B" || str == "b" || str == "BROTHER" || str == "Brother" || str == "brother") {
            return 1;
        }
        cout << "ERROR: Please type 'S' or 'B' to choose the main character." << endl;
        cout << "Please try again: ";
    }
}

void choosePath() {
    cout << "The mist clears, there are two roads ahead: " << endl;
    system("sleep 1");
    cout << "the left leads to the water, " << endl;
    system("sleep 1");
    cout << "the right leads to the land." << endl;
    system("sleep 1");
    string str;
    cout << "May I ask where you want to go? [L/r] ";
    while (1) {
        cin >> str;
        if (str == "L" || str == "l" || str == "LEFT" || str == "Left" || str == "left") {
            cout << "Little bear cannot swim. DROWNED" << endl;
            system("sleep 1");
            gameOver();
        } else if (str == "R" || str == "r" || str == "RIGHT" || str == "Right" || str == "right") {
            return;
        }
        cout << "ERROR: Please type 'L' or 'R' to choose the path." << endl;
        cout << "Please try again: ";
    }
}

void eatHoney() {
    cout << "Walk along the land, " << endl;
    system("sleep 1");
    cout << "there is a big tree ";
    system("sleep 1");
    cout << "with a beehive on it. " << endl;
    system("sleep 1");
    string str;
    cout << "Do you want to eat honey? [Y/n] ";
    while (1) {
        cin >> str;
        if (str == "Y" || str == "y" || str == "YES" || str == "Yes" || str == "yes") {
            cout << "You are being attacked by bees! " << endl;
            system("sleep 3");
            return;
        }
        if (str == "N" || str == "n" || str == "NO" || str == "No" || str == "no") {
            cout << "The little bear was too weak to move on. WASTED" << endl;
            system("sleep 1");
            gameOver();
        }
        cout << "ERROR: Please type 'Y' or 'N' to decide whether or not to eat honey." << endl;
        cout << "Please try again: ";
    }
}

void baLaBaLa() {
    cout << "Little Bear inadvertently activates Bala Bala energy, " << endl;
    system("sleep 1");
    cout << "dancing solves the problem and makes friends with the bee. " << endl;
    system("sleep 1");
    cout << "Happy ending!" << endl;
}

void dynamicLightWave() {
    cout << "Little Bear inadvertently activates the dynamic light wave, " << endl;
    system("sleep 1");
    cout << "destroys the beehive, " << endl;
    system("sleep 1");
    cout << "obtains the invincible dragon slayer suit, " << endl;
    system("sleep 1");
    cout << "and has been invincible in the adventure park ever since. " << endl;
    system("sleep 1");
    cout << "Happy ending!" << endl;
}

void gameOver() {
    cout << "Game over. Press enter to play again... ";
    getchar();
    getchar();
    system("cls");
    english();
}

int sisterOrBrotherChi() {
    cout << "你是一只小熊，来到了冒险乐园。" << endl;
    system("sleep 1");
    cout << "进入大门后，";
    system("sleep 1");
    cout << "看见一片迷雾，";
    system("sleep 1");
    cout << "一个神秘的声音响起：" << endl;
    system("sleep 1");
    string str;
    cout << "你好，请问你是小姐姐还是小哥哥? [S/b] ";
    while (1) {
        cin >> str;
        if (str == "S" || str == "s" || str == "SISTER" || str == "Sister" || str == "sister") {
            return 0;
        }
        if (str == "B" || str == "b" || str == "BROTHER" || str == "Brother" || str == "brother") {
            return 1;
        }
        cout << "错误: 键入 'S' 或 'B' 以选择主角。" << endl;
        cout << "请重试: ";
    }
}

void choosePathChi() {
    cout << "迷雾散去，前面有两条路：" << endl;
    system("sleep 1");
    cout << "左边通往水域，" << endl;
    system("sleep 1");
    cout << "右边通往陆地，" << endl;
    system("sleep 1");
    string str;
    cout << "请问你想去哪里？[L/r] ";
    while (1) {
        cin >> str;
        if (str == "L" || str == "l" || str == "LEFT" || str == "Left" || str == "left") {
            cout << "小熊不会游泳。溺水。" << endl;
            system("sleep 1");
            gameOverChi();
        } else if (str == "R" || str == "r" || str == "RIGHT" || str == "Right" || str == "right") {
            return;
        }
        cout << "错误: 键入 'L' 或 'R' 以选择道路。" << endl;
        cout << "请重试: ";
    }
}

void eatHoneyChi() {
    cout << "顺着陆地走，";
    system("sleep 1");
    cout << "有一颗大树，";
    system("sleep 1");
    cout << "上面有蜂巢。" << endl;
    system("sleep 1");
    string str;
    cout << "你想去吃蜂蜜么？[Y/n] ";
    while (1) {
        cin >> str;
        if (str == "Y" || str == "y" || str == "YES" || str == "Yes" || str == "yes") {
            cout << "你被蜜蜂围攻了！" << endl;
            system("sleep 3");
            return;
        }
        if (str == "N" || str == "n" || str == "NO" || str == "No" || str == "no") {
            cout << "小熊由于过度虚弱无法继续前进。" << endl;
            system("sleep 1");
            gameOverChi();
        }
        cout << "错误: 键入 'Y' 或 'N' 以决定是否吃蜂蜜。" << endl;
        cout << "请重试: ";
    }
}

void baLaBaLaChi() {
    cout << "小熊无意中激活巴拉巴拉能量，";
    system("sleep 1");
    cout << "跳舞解决了问题。" << endl;
    system("sleep 1");
    cout << "Happy ending!" << endl;
}

void dynamicLightWaveChi() {
    cout << "小熊无意中激活了动感光波，";
    system("sleep 1");
    cout << "击毁了蜂巢，";
    system("sleep 1");
    cout << "获得了无敌屠龙套装，" << endl;
    system("sleep 1");
    cout << "从此在冒险乐园中所向披靡。" << endl;
    system("sleep 1");
    cout << "Happy ending!" << endl;
}

void gameOverChi() {
    cout << "游戏结束。按下回车键再玩一局... ";
    getchar();
    getchar();
    system("cls");
    chinese();
}