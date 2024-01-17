#include <iostream>
using namespace std;
int main()
{
	float A;
	float B;
	float X;
	cout << "Hello, my name is Kiki and I'm going to solve the equation:" << endl;
	cout << "Ax + B = 0" << endl;
	cout << "for x" << endl;
	cout << endl;
	cout << "Please enter a value for A: ";
	cin >> A;
	cout << "Please enter a value for B: ";
	cin >> B;
	cout << endl;
	cout << "Solving "<< A <<"+"<< B <<"=0 for x...";
	cout << endl;

	X = (0 - B) / A;
	cout << "The answer is:" << endl;
	cout << "x=" << X << endl;
}