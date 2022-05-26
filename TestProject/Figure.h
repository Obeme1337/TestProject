#pragma once
#include "Header.h"
class Figure
{
public:
	virtual void draw() = 0;
};


class Romb : public Figure {
public:
	void draw() override {
		cout << "Romb is being drawing..." << endl;
	}
};

class Circle : public Figure {
public:
	void draw() override {
		cout << "Circle is being drawing..." << endl;
	}
};

class Triangle : public Figure {
public:
	void draw() override {
		cout << "Triangle is drawing..." << endl;
	}

	void power() {
		cout << "I am real triangle!!!" << endl;
	}
};

