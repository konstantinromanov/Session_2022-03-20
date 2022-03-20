// Session_2022-03-20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Invoice.h"
#include <iomanip>
using namespace std;

template<typename T>
void checkPalindrome(vector<T> col);
void printInvoiceTable(vector<Invoice> invoices);
void printLine(int width);

int main()
{
	/*vector<int> collection1 = { 1, 2, 3, 4, 3, 2, 21 };
	vector<string> collection2 = { "a", "b", "c", "b", "a" };

	checkPalindrome(collection1);
	checkPalindrome(collection2);*/

	vector<Invoice> invoices = {
		Invoice("01", "This is item 1", -1, 50),
		Invoice("02", "This is item 2", -6, 60),
		Invoice("03", "This is item 3", 55, 60),
		Invoice("04", "This is item 443", 6, 60),
		Invoice("05", "This is item 33", 33, 60)
	};

	printInvoiceTable(invoices);

	/*Invoice invoice1 = Invoice("01", "This is item 1", 2, 10);
	Invoice invoice2 = Invoice();
	invoice2.setDescription("This is item 2");
	invoice2.setPrice(2);
	invoice2.setQty(22);
	invoice2.setTypeNumber("02");
	Invoice invoice3 = Invoice("03", "This is item 3", -3, -30);
	Invoice invoice4 = Invoice("04", "This is item 4", -4, -40);
	Invoice invoice5 = Invoice("05", "This is item 5", -5, 50);
	Invoice invoice6 = Invoice("06", "This is item 6", -6, 60);*/


	//cout << invoice1.getDescription() << invoice1.getTypeNumber() << invoice1.getQty() << endl;

	//cout << invoice1.getInvoiceAmount();

	//cout << invoice2.getTypeNumber() << " " << invoice2.getDescription() << endl;
}

void printInvoiceTable(vector<Invoice> invoices) {
	cout
		<< left
		<< setw(5) << "Nr"
		<< setw(10) << "Type Nr"
		<< setw(20) << "Description"
		<< setw(10) << "Qty"
		<< setw(10) << "Price" << endl;

	printLine(50);

	for (size_t i = 0; i < invoices.size(); i++)
	{
		cout 
			//<< setfill('.') 
			<< left
			<< setw(5) << i + 1
			<< setw(10) << invoices[i].getTypeNumber()
			<< setw(20) << invoices[i].getDescription() << setw(10)
			<< setw(10) << invoices[i].getQty() 
			<< setw(10) << invoices[i].getPrice() << endl;
	}
}

void printLine(int width) {
	for (size_t i = 0; i < width; i++)
	{
		cout << "-";
	}
	cout << endl;
}

template<typename T>
void checkPalindrome(vector<T> col) {

	int colLenght = col.size();
	bool isPalindrome = true;

	for (size_t i = 0; i < colLenght / 2; i++)
	{
		if (col[i] != col[colLenght - 1 - i])
		{
			isPalindrome = false;
			break;
		}
	}

	cout << (isPalindrome ? "It is a palindrome\n" : "It is not a palindrome\n");
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
