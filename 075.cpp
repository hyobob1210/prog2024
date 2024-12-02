#include <iostream>
using namespace std;

class Point {
private:
	int x, y;
public:
	Point() : x(0), y(0) {}
	Point(int x, int y) : x(x), y(y) {}
	void Set(int x, int y) {
		this->x = x;
		this->y = y;
	}
	void Print() {
		cout << "(" << x << ", " << y << ")" << endl;
	}
	void setX(int x) {
		this->x = x;
	}
	int getX() {
		return x;
	}
	void setY(int y) {
		this->y = y;
	}
	int getY() {
		return y;
	}
};

int main()
{
	Point a(10, 20);
	Point b;

	b.Set(30, 30);
	a.Print();
	b.Print();
}
