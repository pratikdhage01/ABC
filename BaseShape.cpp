#include <iostream>
using namespace std;
class Shape {
public:
virtual void shape() 
{
cout << "This is a generic shape." << std::endl;
}
};
class Triangle : public Shape {
public:
void shape() override
{
cout << "This is a triangle." << std::endl;
}
};
class Rectangle : public Shape {
public:
void shape() override
{
cout << "This is a rectangle." << std::endl;
}
};
int main() {
Shape genericShape;
Triangle triangle;
Rectangle rectangle;
Shape* shapePtr;
shapePtr = &genericShape;
shapePtr->shape();
shapePtr = &triangle;
shapePtr->shape();
shapePtr = &rectangle;
shapePtr->shape();
return 0;
}
