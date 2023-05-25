#include <iostream>
#include <cmath>

using namespace std;

// Function to be integrated
double f(double x) {
    return 1/(1+x*x); // Example function: e^x
}

// Simpson's 1/3 rule for numerical integration
double integrateSimpson(double a, double b, int n) {
    double h = (b - a) / n;
    double sum = f(a) + f(b);

    for (int i = 1; i < n; i++) {
        double x = a + i * h;
        if(i%2==0){
        sum+=2*f(x);}
        else{
        sum+=4*f(x);}
    }

    return (h/3)*sum;
}

int main() {
    double a, b;
    int n;

    // Input the interval [a, b] and the number of subintervals (must be even)
    cout << "Enter the interval [a, b]: "<<endl;
    cout<<"enter a:"<<endl;
    cin >> a;
    cout<<"enter b"<<endl;
    cin >> b;
    cout << "Enter the number of subintervals (must be even): ";
    cin >> n;

    // Perform Simpson's 1/3 rule for numerical integration
    double result = integrateSimpson(a, b, n);

    // Output the result
    cout << "Numerical integration result: " << result << endl;

    return 0;
}
