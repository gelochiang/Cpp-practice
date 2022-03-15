#include <iostream>
#include <string>
using namespace std;

class Account
{
private:
    string id = "5487";
    string name = "???";
    double balance = 0.0;
public:
    Account() = default;

    Account(string id, string name, double balance)
    {
        this->id = id;
        this->name = name;
        this->balance = balance;
    }

    Account(string id, double balance)
    {
        this->id = id;
        this->balance = balance;
    }

    void print()
    {
        cout << "ID : " << id << endl;
        cout << "Name : " << name << endl;
        cout << "Balance : " << balance << endl;
    }
};

int main()
{  
    Account account1;
    account1.print();

    cout << endl;

    Account account2("0487", "GG", 888);
    account2.print();

    cout << endl;

    Account account3("666", 6666);
    account3.print();

    return 0;
}