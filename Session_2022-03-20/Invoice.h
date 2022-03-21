#pragma once

#include <iostream>
#include <vector>
using namespace std;


class Invoice {
private:
	string mTypeNumber;
	string mDescription;
	int mQty;
	int mPrice;

public:
	Invoice() {}

	Invoice(string typeNumber, string description, int qty, int price);

	string getTypeNumber() {
		return mTypeNumber;
	}

	string getDescription() {
		return mDescription;
	}

	int getQty() {
		return mQty;
	}

	int getPrice() {
		return mPrice;
	}

	void setTypeNumber(string typeNumber) {
		mTypeNumber = typeNumber;
	}

	void setDescription(string description) {
		mDescription = description;
	}

	void setQty(int qty) {
		mQty = (qty >= 0) ? qty : 0;
	}

	void setPrice(int price) {
		mPrice = (price >= 0) ? price : 0;
	}

	int getInvoiceAmount();
};

Invoice::Invoice(string typeNumber, string description, int qty, int price) {
	mTypeNumber = typeNumber;
	mDescription = description;
	setQty(qty);
	setPrice(price);
}

int Invoice::getInvoiceAmount() {
	return getQty() * getPrice();
}

