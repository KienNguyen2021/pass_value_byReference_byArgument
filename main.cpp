#include<iostream>
#include <string>

using namespace std;

void swap1(int num1, int num2)  // Pass the value by Argument------> NOT CHANGE !
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}
void swap2(int &num1, int &num2)    //// Pass the value by Reference ------> CHANGE !
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

int main()
{
	int x = 2;
	int y = 5;

	swap1(x,y);
   cout << x << "  " << y << endl;

	swap2(x, y);
	cout << x << "  " << y << endl;

	return 0;
}