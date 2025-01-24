#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <fstream>
#include <stack>
#include <iomanip>
#include <queue>
using namespace std;

const int N = 20;

struct pole {
    int w, k;
};

void wczytajlabirynt(int lab[][N]) {
    string s;
    ifstream we("labirynt.txt");
    if (!we) {
        cerr << "Blad otwarcia pliku labirynt.txt" << endl;
        exit(1);
    }
    for (int i = 0; i < N; i++) {
        we >> s;
        for (int j = 0; j < N; j++) {
            if (s[j] == 'X') lab[i][j] = -1;
            else lab[i][j] = 0;
        }
    }
    we.close();
}

void wypiszlabirynt(int lab[][N]) {
    cout << "   ";
    for (int j = 0; j < N; j++) {
        cout << setw(3) << j;
    }
    cout << endl;
    for (int i = 0; i < N; i++) {
        cout << setw(3) << i;
        for (int j = 0; j < N; j++) {
            if (lab[i][j] == -1) cout << "  X";
            else if (lab[i][j] == -2) cout << "  D";
            else cout << "   ";
        }
        cout << endl;
    }
}

bool droga(int lab[][N], pole p1, pole &p2) {
    int w, k;
    bool wyjscie = false;
    queue<pole> q;
    q.push(p1);
    lab[p1.w][p1.k] = 1;

    while (!wyjscie && !q.empty()) {
        p2 = q.front();
        q.pop();
        w = p2.w;
        k = p2.k;

        if (w == 0 || w == N - 1 || k == 0 || k == N - 1) {
            wyjscie = true;
        } else {
            if (w > 0 && lab[w - 1][k] == 0) {
                lab[w - 1][k] = lab[w][k] + 1;
                q.push({w - 1, k});
            }
            if (w < N - 1 && lab[w + 1][k] == 0) {
                lab[w + 1][k] = lab[w][k] + 1;
                q.push({w + 1, k});
            }
            if (k > 0 && lab[w][k - 1] == 0) {
                lab[w][k - 1] = lab[w][k] + 1;
                q.push({w, k - 1});
            }
            if (k < N - 1 && lab[w][k + 1] == 0) {
                lab[w][k + 1] = lab[w][k] + 1;
                q.push({w, k + 1});
            }
        }
    }
    return wyjscie;
}

void oznaczdroge(int lab[][N], int w, int k) {
    int x = lab[w][k];
    lab[w][k] = -2;
    while (x > 1) {
        x--;
        if (w > 0 && lab[w - 1][k] == x) w--;
        else if (w < N - 1 && lab[w + 1][k] == x) w++;
        else if (k > 0 && lab[w][k - 1] == x) k--;
        else if (k < N - 1 && lab[w][k + 1] == x) k++;
        lab[w][k] = -2;
    }
}

int main() {
    int a, b;
    cin >> a >> b;
    
    if (a < 0 || a >= N || b < 0 || b >= N) {
        cerr << "Nieprawidlowe wspolrzedne punktu startowego." << endl;
        return 1;
    }

    int lab[N][N];
    pole start = {a, b}, koniec;

    wczytajlabirynt(lab);
    
    if (lab[start.w][start.k] == -1) {
        cerr << "Punkt startowy znajduje sie na scianie." << endl;
        return 1;
    }

    if (droga(lab, start, koniec)) {
        oznaczdroge(lab, koniec.w, koniec.k);
        wypiszlabirynt(lab);
    } else {
        cout << "Brak drogi do wyjscia." << endl;
    }

    return 0;
}
