#include <iostream>
#include <fstream>
#include <vector>

class Shape {
public:
    double x,y,z;
    Shape(double x, double y, double z){}
};

class Cylinder : public Shape{
private:
	double r, h;
	int facets;
public:
	Cylinder(double x, double y, double z, double r, double h, int facets):Shape(x,y,z),r(r),h(h),facets(facets){}
};

class Cube: public Shape {
private:
	double Size;
public:
	Cube(double x, double y, double z, double Size) : Shape(x,y,z),Size(Size) {}
};

class CAD {
private:
	vector<Shape*> shapes;
public:
};

//https://www.stratasysdirect.com/resources/how-to-prepare-stl-files/
//https://www.viewstl.com/
int main() {
	CAD c;
	c.add(new Cube(0,0,0,   5));
	c.add(new Cylinder(100,0,0,3, 10, 10));
  c.write("test.stl");
}
