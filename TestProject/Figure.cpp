#include "Figure.h"

void test(Figure** figures, int size){
	for (int i = 0; i < size; i++)
	{
		figures[i]->draw();

		Triangle* triangle = dynamic_cast<Triangle*>(figures[i]);
		if (triangle) {
			triangle->power();
		}
	}
}

int main() {
	const int size = 5;
	//Figure* figure = new Figure();
	Romb* romb = new Romb();
	Triangle* triangle = new Triangle();
	Circle* circle = new Circle();

	Figure** figures = new Figure*[size];

	figures[0] = circle;
	figures[1] = romb;
	figures[2] = triangle;
	figures[3] = circle;
	figures[4] = triangle;

	test(figures, size); 


	return 0;
}