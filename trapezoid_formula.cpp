#include<iostream>

using namespace std;

int main() {
    int n = 8;
    double a = 0.0;
    double b = 2.0;
    double I0 = 0;
    while (n <= 50) {
        cout << "Значения на промежутке: ";
        double h = (b - a) / n;
        double sum = 0;
        for (double x = a; x <= b; x += h) {
            double y = x / ((x + 1) * (x + 1));
            cout << y << "\n";
            if (x == a || x == b) {
                sum += y / 2;
            }
            else {
                sum += y;
            }
        }
        cout << "\n";
        double I = h * sum;
        cout << "n = " << n << "I = " << I << ", I - I0 = " << I - I0;
        I0 = I;
        n *= 2;
    }
    return 0;
}
