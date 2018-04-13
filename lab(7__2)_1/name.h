#ifndef name_h
#define name_h

#include <iostream>

class Vector {
	float* arr;
	int size;
public:
	Vector();
	Vector(const Vector & obj);
	~Vector();
	friend std::istream &operator>>(std::istream& mi, Vector &a);
	friend std::ostream &operator<<(std::ostream &, Vector &);
	int Vector ::  operator[](int n);
	void Length(Vector obj);
};


#endif