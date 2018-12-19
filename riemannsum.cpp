#include <iostream>

using namespace std;

double f(double);
double RiemannSum(double, double, int);

int main() {
	double a;
	double b;
	int n;
	
	cout << "left bound: ";
	cin >> a;
	
	cout << "right bound: ";
	cin >> b;
	
	cout << "number of rectangles: ";
	cin >> n;
	
	cout << "Riemann Sum: " << RiemannSum(a, b, n);
}

double RiemannSum(double a, double b, int n) {
	double sum = 0.0;
	
	const double x = (b - a) / n;
	double y = 0.0;
	
	for(int i = 0; i < n; i++) {
		y = a + (x * i);
		
		sum += x * y;
	}
	
	return sum;
}

double f(double x) {
	return(x * x);
}