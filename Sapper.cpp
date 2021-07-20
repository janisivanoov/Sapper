#include <iostream>
using namespace std;

int main() {
    int n, m, bomb, count = 0;
    cin >> n >> m >> bomb;
    char A[34][34];
    int x, y;
    for (int i = 0; i < n + 2; i++) {
        for (int j = 0; j < m + 2; j++) {
            A[i][j] = '0';
        }
    }
    for (int i = 0; i < bomb; i++) {
        cin >> x >> y;
        A[x][y] = '*';
    }
    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < m + 1; j++) {
            if (A[i][j] != '*') {
                if (A[i - 1][j] == '*') count++;
                if (A[i - 1][j - 1] == '*') count++;
                if (A[i - 1][j + 1] == '*') count++;
                if (A[i + 1][j + 1] == '*') count++;
                if (A[i + 1][j - 1] == '*') count++;
                if (A[i + 1][j] == '*') count++;
                if (A[i][j - 1] == '*') count++;
                if (A[i][j + 1] == '*') count++;
                cout << count;
                count = 0;
            }
            else cout << A[i][j];
            if (j != m) cout << " ";
        }
        cout << endl;
    }
    return 0;
}