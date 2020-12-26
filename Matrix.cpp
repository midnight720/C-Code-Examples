/**
 * Program to Implement Matrices in C++.
 */

#include <iostream>
#include <vector>
using namespace std;

#define MATRIX  vector<vector<double>>

class Matrix {

    MATRIX matrix;
    int rows;
    int columns;

public:

    Matrix() {
        rows = 0;
        columns = 0;
    }

    Matrix(MATRIX ar) {
        matrix = ar;
        rows = matrix.size();
        columns = matrix[0].size();
    }

    int getRowsCount()  { return rows; }
    int getColumnsCount()   { return columns; }
    double getValue(int i, int j)   { return matrix[i][j]; }
    MATRIX toMATRIX()   { return matrix; }

    void operator=(MATRIX ar) {
        matrix = ar;
        rows = matrix.size();
        columns = matrix[0].size();
    }

    void show() {
        for (int i=0; i<rows; i++) {
            for (int j=0; j<columns; j++)
                cout << matrix[i][j] << ' ';
            cout << endl;
        }
    }

    MATRIX operator+(Matrix ar) {
        if ((rows == ar.getRowsCount()) && (columns = ar.getColumnsCount())) {
            MATRIX m;

            m.resize(rows);
            for (int i=0; i<rows; i++)
                m[i].resize(columns);

            for (int i=0; i<rows; i++) {
                for (int j=0; j<columns; j++) {
                    m[i][j] = matrix[i][j] + ar.getValue(i, j);
                }
            }

            return m;
        }
        return {{}};
    }

    MATRIX operator-(Matrix ar) {
        if ((rows == ar.getRowsCount()) && (columns = ar.getColumnsCount())) {
            MATRIX m;

            m.resize(rows);
            for (int i=0; i<rows; i++)
                m[i].resize(columns);

            for (int i=0; i<rows; i++) {
                for (int j=0; j<columns; j++) {
                    m[i][j] = matrix[i][j] - ar.getValue(i, j);
                }
            }

            return m;
        }
        return {{}};
    }

    MATRIX operator*(Matrix ar) {
        int ar_r = ar.getRowsCount();
        int ar_c = ar.getColumnsCount();

        if (columns == ar_r) {
            MATRIX m;
            
            m.resize(rows);
            for (int i=0; i<rows; i++) {
                m[i].resize(ar_c);
            }

            for (int i=0; i<rows; i++) {
                for (int j=0; j<ar_c; j++) {
                    for (int k=0; k<columns; k++) {
                        m[i][j] += matrix[i][k] * ar.getValue(k, j);
                    }
                }
            }

            return m;
        }

        return {{}};
    }

};

int main() {
    Matrix m1 = MATRIX({{1, 2}, {3, 4}});
    Matrix m2({{5, 6}, {7, 8}});

    cout << "M1 = " << endl;
    m1.show();
    cout << "M2 = " << endl;
    m2.show();

    Matrix m3 = m1 + m2;
    cout << "M3 = " << endl;
    m3.show();

    Matrix m4 = m2 - m1;
    cout << "M4 = " << endl;
    m4.show();

    Matrix m5 = m1 * m2;
    cout << "M5 = " << endl;
    m5.show();

    Matrix m6 = m2 * m1;
    cout << "M6 = " << endl;
    m6.show();

    return 0;
}
