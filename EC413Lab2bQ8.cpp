#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> transpose(vector<vector<int>> mat) {
    vector<int> vec(10);
    vector<vector<int>> newMat(10, vec);
    for (int i = 0; i < mat.size(); ++i)
        for (int j = 0; j < mat.size(); ++j) {
            newMat[j][i] = mat[i][j];
        }
return newMat;
}

int main() {
    cout << "Hello, World!" << endl;

    vector<int> vec(10);
    vector<vector<int>> mat(10, vec);

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            mat[i][j] = rand() % 90 + 10;
        }
    }

    for (int i = 0; i < mat.size(); i++) {
        for (int j = 0; j < 10; ++j) {
            cout << " " << mat[i][j];
            if (j == 9)
                cout << endl;
        }
    }

    vector<vector<int>> transposed = transpose(mat);
    cout << "the transposed matrix is: " << endl;
    for (int i = 0; i < transposed.size(); i++) {
        for (int j = 0; j < 10; ++j) {
            cout << " " << transposed[i][j];
            if (j == 9)
                cout << endl;
        }
    }

    return 0;
}
