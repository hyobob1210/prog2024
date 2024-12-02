﻿#include <iostream>
using namespace std;

class Point {
private:
	int x, y;
public:
	Point() {
		x = 0;
		y = 0;
	}
	Point(int x, int y) {
		this->x = x;
		this->y = y;
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

class Rectangle {
private:
	Point p1, p2;
public:
	Rectangle() {
		p1 = Point();
		p2 = Point();
	}

	Rectangle(Point p1, Point p2) {
		this->p1 = p1;
		this->p2 = p2;
	}
	int GetArea() {
		return abs(p2.getX() - p1.getX()) * abs(p2.getY() - p1.getY());
	}

};

int main()
{
	int x, y;

	cout << "p1의 좌표를 입력 : ";
	cin >> x >> y;

	Point p1(x, y);

	cout << "p2의 좌표를 입력 : ";
	cin >> x >> y;

	Point p2(x, y);

	Rectangle r(p1, p2);

	cout << "사각형의 면적은 : " << r.GetArea() << endl;

}
