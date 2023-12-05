#include <iostream>
#include <string>
using namespace std;
class Parent 
{
private:
double salary;
public:
string name;
Parent(string n, double s) : name(n), salary(s) {}
double getSalary() {
return salary;
}
};
int main() {
Parent father("Suresh", 120000.0);
Parent mother("Maya", 100000.0);
cout << "Father: " << father.name << ", Salary: " <<
father.getSalary() << endl;
cout << "Mother: " << mother.name << ", Salary: " <<
mother.getSalary() << endl;
double totalIncome = father.getSalary() + mother.getSalary();
cout << "Total Family Income: " << totalIncome << endl;
return 0;

}