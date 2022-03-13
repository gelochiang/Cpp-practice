#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Watch{
	public:
		string brand;
		string color;
		double price;
		double weight;
		void print(){
			cout << brand << " " << color << " " << fixed << setprecision(2) << price/weight << endl;
		}
};

int main(){
	Watch obj1, obj2;
    cin >> obj1.brand >> obj1.color >> obj1.price >> obj1.weight;
    cin >> obj2.brand >> obj2.color >> obj2.price >> obj2.weight;
    
    obj1.print();
    obj2.print();
}