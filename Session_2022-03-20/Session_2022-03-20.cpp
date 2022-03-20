// Session_2022-03-20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

void checkPalindrome(vector<int> col);

int main()
{
	vector<int> collection1 = { 1, 2, 3, 4, 3, 2, 21 };

	checkPalindrome(collection1);
}

void checkPalindrome(vector<int> col) {

	int colLenght = col.size();
	bool isPalindrome = true;

	for (size_t i = 0; i < colLenght; i++)
	{
		if (col[i] != col[colLenght - 1 - i])
		{
			isPalindrome = false;
			break;
		}
	}

	cout << (isPalindrome ? "It is a palindrome" : "It is not a palindrome");
};


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
