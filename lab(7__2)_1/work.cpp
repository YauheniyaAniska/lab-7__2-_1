#include "stdafx.h"
#include "name.h"
#include <iostream>

using namespace std;

Vector::Vector() {
	cout << "������� ����� �������: ";
	cin >> size;
	try {
		arr = new float[size];
		if (!arr) throw 1;
	}
	catch (...) { cout << "������ ��������� ������ "; }
};

Vector::Vector(const Vector & obj) {
	size = obj.size;
	try{
		arr = new float[size];
		if (!arr) throw 1;
	}
	catch (...) { cout << "������ ��������� ������ "; }
	for (int i = 0; i < size; i++) {
		arr[i] = obj.arr[i];
	}
};

Vector :: ~Vector() {
	delete[] arr;
};

void Vector::Length(Vector obj) {
	float L = 0;
	for (int i = 0; i < size; i++)
		L += pow(arr[i], 2);
	L = sqrt(L);
	cout << "����� �������: " << L << "\n";
};

int Vector :: Vector :: operator[](int n) {
	try {
		return arr[n];
	}
	catch (...) { 
		cout << " ������ �������� ������.\n"; 
		return 0; 
	}
};

ostream &operator<< (ostream &fo, Vector &fp) {
	cout << "������: ";
	for (int i = 0; i<fp.size; i++)
		cout << fp.arr[i] << " ";
	cout << "\n";
	return fo;
}
istream&  operator>>(istream& mi, Vector &a)
{
	cout << "������� ������: \n";
	for (int i = 0; i < a.size; i++) {
		cout << "X[" << i << "]: ";
		cin >> a.arr[i];
		while (!cin.good()) {
			cout << "������ �����. ���������. ";
			cin.clear();
			cin.ignore();
			cin >> a.arr[i];
		}
	}
	return mi;
}