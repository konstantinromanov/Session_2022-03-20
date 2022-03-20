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
	Invoice() {

	}

	Invoice(string typeNumber, string description, int qty) {
		mTypeNumber = typeNumber;
		mDescription = description;
		mQty = qty;
	};

	Invoice(string typeNumber, string description, int qty, int price) {
		mTypeNumber = typeNumber;
		mDescription = description;
		mQty = qty;
		mPrice = price;
	};

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
		mQty = qty;
	}

	void setPrice(int price) {
		mPrice = price;
	}

	int getInvoiceAmount();
};

int Invoice::getInvoiceAmount() {
	return getQty() * getPrice();
}

