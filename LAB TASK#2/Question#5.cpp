#include <iostream>
#include <vector>

using namespace std;

void matrixWizard() {
    int r, c;
    cin >> r >> c;
    vector<vector<int>> m1(r, vector<int>(c)), m2(r, vector<int>(c)), res(r, vector<int>(c));

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) cin >> m1[i][j];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) cin >> m2[i][j];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            res[i][j] = m1[i][j] + m2[i][j];
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}
