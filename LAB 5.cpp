#include<iostream>
using namespace std;

//Task1
int main()
{
	/*
	int marks1 = 0, marks2 = 0, marks3 = 0;
	cout << "Enter marks of first Subject:";
	cin >> marks1 ;
	cout << "Enter marks of second Subject:";
	cin >> marks2;
	cout << "Enter marks of third Subject:";
	cin >> marks3;
	int average = (marks1 + marks2 + marks3 / 3);
	if (average > 80)
	{
		cout << "You`re above standard!" << endl;
		cout << "Admission granted!" << endl;
	}

	//Task2
	char ch = 0;
	cout << "Enter a Letter:";
	cin >> ch;
	if (ch >= 'A' && ch <='Z')
	{
		cout << "Letter is capital Letter: " <<endl;
	}
	else
	{
		cout << "It is not capitalized letter.It is a small Letter" << endl;
	}

	//Task3
	int n1 = 0, n2 = 0, n3 = 0;
	cout << "Enter first number:";
	cin >> n1;
	cout << "Enter Second number:";
    cin>> n2;
	cout << "Enter Third number:";
	cin >> n3;
	if (n1>n2&&n3)
	{
		cout << "Highest Number is " << n1 << endl;
	}
	if (n2 > n1&&n3)
	{
		cout << "Highest Number is " << n2 << endl;
	}
	if (n3 > n2&&n3)
	{
		cout << "Highest Number is " << n3 << endl;
	}
	*/
	//Task4
	int no = 0;
	cout << "enter yopur number ";
	cin >> no;
	if (no > 0)
	{
		cout << "nnumber is positive" << endl;

	}
	if (no < 0)
	{
		cout << "nnumber is negative" << endl;

	}
	if (no == 0)
	{
		cout << "nnumber is zero" << endl;

	}

	//Task5
	int score = 0;
	cout << "Enter your score: " << endl;
	cin >> score;
	if(score>50)
	{
		cout << "You passed.";
	}
	else
	{
		cout << "You failed.";
	}

	//task6
	int int1 = 0, int2 = 0;
	cout << "Enter first Integer:";
	cin >> int1;
	cout << "Enter second Integer:";
	cin >> int2;
	if (int1 % int2==0)
	{
		cout << int1 << " is multiple of " << int2 << endl;

	}
	else
	{
		cout << int1 << " is not multiple of " << int2 << endl;
	}


	//task7

	int integer1 = 0, integer2 = 0;
	char op;
	cout << "Enter two integers: ";
	cin >> integer1 >> integer2;
	cout << "Enter an operation `+`, `-`, `*`, `/`, and `%`. ";
	cin >> op;
	if (op == '+')
	{
		cout << "sum: " << integer1 + integer2 << endl;
	}

	else if(op == '-')
	{
		cout << "difference: " << integer1 - integer2 << endl;
	}
	else if (op == '*')
	{
		cout << "product: " << integer1 * integer2 << endl;
	}
	 if (op == '/' && integer2 > 0)
	{
		cout << "quotient: " << integer1 / integer2 << endl;
	}
	else
	{
		cout << "invalid operation or division by zero";
	}
	 if (op == '%' && integer2 > 0)
	 {
		 cout << "remainder: " << integer1 % integer2 << endl;
	 }

	 else
	 {
		 cout << "invalid operation or division by zero";
	 }

 







	return 0;

}