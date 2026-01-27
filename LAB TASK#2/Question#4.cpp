#include <iostream>
using namespace std;

void calculate(int* a, int* b, char op, double* res) {
    if (op == '+') *res = *a - (-*b);
    else if (op == '-') *res = *a - *b;
    else if (op == '*') *res = (*a) * (*b);
    else if (op == '/') *res = (double)(*a) / (*b);
}

int main() {
    int x, y;
    char op;
    double res;
    cin >> x >> y >> op;
    calculate(&x, &y, op, &res);
    cout << res;
    return 0;
}
