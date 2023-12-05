#include <iostream>
#include <cstring>
using namespace std;
class Monitor 
{
public:
int size;
char company[50];
int quantity;
float cost;
};
class CPU {
public:
char processor[50];
char company[50];
int quantity;
float cost;
};
class PC 
{
public:
Monitor monitor;
CPU cpu;
int ram_size;
int hard_disk_size;
int quantity;
float cost;
};
int main() 
{

Monitor monitors[] = {
{15, "LG", 10, 100000.0},
{17, "Sony", 15, 20000.0},
{20, "Samsung", 8, 300000.0}
};
CPU cpus[] = {
{"i5", "Intel", 12, 12000.0},
{"i7", "Intel", 8, 18000.0},
{"i9", "Intel", 10, 300000.0}
};
PC pcs[] = {
{{15, "LG", 10, 10000.0}, {"i5", "Intel", 12, 12000.0}, 8, 512, 5, 
35000.0},
{{17, "Sony", 15, 20000.0}, {"i7", "Intel", 8, 18000.0}, 16, 1000, 
3, 55000.0},
{{20, "Samsung", 8, 30000.0}, {"i9", "Intel", 10, 30000.0}, 32, 
2000, 7, 80000.0}
};
int choice, size;
char processor[50];
float monitorCost = 0, cpuCost = 0;
cout << "1. Display quantity and cost of available monitors\n";
cout << "2. Display quantity and cost of available CPUs\n";
cout << "3. Display quantity and cost of available PCs\n";
cout << "4. Display cost of a monitor by size\n";
cout << "5. Display cost of a CPU by processor information\n";
cout << "Enter your choice: ";
cin >> choice;
switch (choice) {
case 1:
cout << "Available Monitors:\n";
for (const auto& monitor : monitors) 
{

cout << "Size: " << monitor.size << " inches, Quantity: "
<< monitor.quantity << ", Cost: Rs." << monitor.cost << endl;
}
break;
case 2:
cout << "Available CPUs:\n";
for (const auto& cpu : cpus) {
cout << "Processor: " << cpu.processor << ", Quantity: "
<< cpu.quantity << ", Cost: Rs." << cpu.cost << endl;
}
break;
case 3:
std::cout << "Available PCs:\n";
for (const auto& pc : pcs) {
cout << "PC\n";
cout << "Monitor: Size: " << pc.monitor.size << " inches, Quantity: " << pc.monitor.quantity << ", Cost: Rs." << pc.monitor.cost <<endl;
cout << "CPU: Processor: " << pc.cpu.processor << ", Quantity: " << pc.cpu.quantity << ", Cost: Rs." << pc.cpu.cost << endl;
cout << "RAM Size: " << pc.ram_size << " GB, Hard Disk Size: " << pc.hard_disk_size << " GB, Quantity: " << pc.quantity << ", Cost: Rs." << pc.cost << endl;
cout << "Total Cost: Rs." << pc.cost << endl;
}
break;
case 4:
cout << "Enter the size of the monitor: ";
std::cin >> size;
for (const auto& monitor : monitors) {
if (monitor.size == size) {
monitorCost = monitor.cost;
cout << "Cost of a " << size << "-inch monitor: Rs."<< monitorCost << endl;
break;
}
}
if (monitorCost == 0) {
cout << "Monitor of size " << size << " inches not found."
<< endl;
}
break;
case 5:
cout << "Enter the processor information: ";
cin >> processor;
for (const auto& cpu : cpus) {
if (strcmp(cpu.processor, processor) == 0) {
cpuCost = cpu.cost;
cout << "Cost of a " << processor << " processor: Rs."<< cpuCost << endl;
break;
}
}
if (cpuCost == 0) {
cout << "CPU with processor " << processor << " not found." << endl;
}
break;
default:
cout << "Invalid choice\n";
}
return 0;
}