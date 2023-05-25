#include <iostream>
#include <vector>

using namespace std;

// Function to calculate the interpolation polynomial
double interpolateLagrange(const vector<double>& x, const vector<double>& y, double targetX) {
    int n = x.size();
    double result = 0.0;

    for (int i = 0; i < n; i++) {
        double term = y[i];

        for (int j = 0; j < n; j++) {
            if (j != i) {
                term *= (targetX - x[j]) / (x[i] - x[j]);
            }
        }

        result += term;
    }

    return result;
}

int main() {
    // Sample data points
    vector<double> x = { 0,2,3,5,6 };
    vector<double> y = {5,7,8,10,12};

    // Target x value for interpolation
    double targetX = 4;

    // Perform Lagrange's interpolation
    double interpolatedValue = interpolateLagrange(x, y, targetX);

    // Output the interpolated value
    cout << "Interpolated value at x = " << targetX << ": " << interpolatedValue << endl;

    return 0;
}
