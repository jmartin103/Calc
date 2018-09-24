#include <iostream>

using namespace std;

int add(int a, int b)
{
	return a + b;
}

int subtract(int a, int b)
{
	return a - b;
}

int multiply(int a, int b)
{
	return a * b;
}

float divide(int a, int b)
{
	return (float) (a / b);
}

int square(int a)
{
	return a * a;
}

int cube(int a)
{
	return a * a * a;
}

float sqroot(float a)
{
	float x = a;
	float y = 1;
	float e = 0.000001;
	while (x - y > e)
	{
		x = (x + y) / 2;
		y = a / x;
	}
	return x;
}

int factorial(int a)
{
	if (a == 0)
	{
		return 1;
	}
	else
	{
		return a * factorial(a - 1);
	}
}

int gcd(int a, int b)
{
	if (a == b)
		return a;
	else if (a > b)
		return gcd(a - b, b);
	return gcd(a, b - a);
}

int lcm(int a, int b)
{
	return (a * b) / gcd(a, b);
}

void menu()
{
	cout << "A - Add" << endl
	<< "S - Subtract" << endl
	<< "M - Multiply" << endl 
	<< "D - Divide" << endl 
	<< "Q - Square" << endl
	<< "C - Cube" << endl 
	<< "R - Square Root" << endl 
	<< "F - Factorial" << endl
	<< "G - Greatest Common Denominator" << endl
	<< "L - Least Common Multiple" << endl
	<< "E - Exit" << endl;
}

int main()
{
	char choice;
	int a, b, result;
	
	while (true) {
		menu();
		
		cout << "Please select an option from the menu: ";
		cin >> choice;
	
		if (choice == 'a' || choice == 'A') {
			cout << "Please enter two numbers, separated by spaces, to be added: ";
			cin >> a >> b;
		
			result = add(a, b);
		
			cout << "Sum is: " << result << endl;
		}
	
		else if (choice == 's' || choice == 'S') {
			cout << "Please enter two numbers, separated by spaces, to be subtracted: ";
			cin >> a >> b;
		
			result = subtract(a, b);
		
			cout << "Difference is: " << result << endl;
		}
	
		else if (choice == 'm' || choice == 'M') {
			cout << "Please enter two numbers, separated by spaces, to be multiplied: ";
			cin >> a >> b;
		
			result = multiply(a, b);
		
			cout << "Product is: " << result << endl;
		}
	
		else if (choice == 'd' || choice == 'D') {
			cout << "Please enter two numbers, separated by spaces, to be divided: ";
			cin >> a >> b;
		
			result = divide(a, b);
		
			cout << "Quotient is: " << result << endl;
		}
	
		else if (choice == 'q' || choice == 'Q') {
			cout << "Please enter number to be squared: ";
			cin >> a;
		
			result = square(a);
		
			cout << "Square of " << a << " is: " << result << endl;
		}
	
		else if (choice == 'c' || choice == 'C') {
			cout << "Please enter number to be cubed: ";
			cin >> a;
		
			result = cube(a);
		
			cout << "Cube of " << a << " is: " << result << endl;
		}
		
		else if (choice == 'r' || choice == 'R') {
			cout << "Please enter a number to find its square root: ";
			cin >> a;
			
			result = sqroot(a);
			
			cout << "The square root of " << a << " is: " << result << endl;
		}
		
		else if (choice == 'f' || choice == 'F') {
			cout << "Please enter a number to determine its factorial: ";
			cin >> a;
			
			result = factorial(a);
			
			cout << "Factorial of " << a << " is: " << result << endl;
		}
		
		else if (choice == 'g' || choice == 'G') {
			cout << "Please enter two numbers, separated by spaces, to find their GCD: ";
			cin >> a >> b;
		
			result = gcd(a, b);
		
			cout << "The greatest common denominator of " << a << " and " << b << " is: " << result << endl;
		}
		
		else if (choice == 'l' || choice == 'L') {
			cout << "Please enter two numbers, separated by spaces, to find their LCM: ";
			cin >> a >> b;
		
			result = lcm(a, b);
		
			cout << "The least common multiple of " << a << " and " << b << " is: " << result << endl;
		}
		
		else if (choice == 'e' || choice == 'E') {
			cout << "Goodbye!" << endl;
			break;
		}
		
		else {
			cout << "Invalid option. Please try again." << endl;
			continue;
		}
	}
	return 0;
}