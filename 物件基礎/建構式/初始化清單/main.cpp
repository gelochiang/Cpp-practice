#include <iostream>
#include <string>
using namespace std;

class Account
{
private:
    const string id = "5487";
    const string name = "???";
    const double balance = 0.0;
public:
    Account() = default;

    /*
        // 以下會出現錯誤
        Account(string id, string name, double balance)
        {
            this->id = id;
            this->name = name;
            this->balance = balance;
        }
        // 會錯誤是因為 data fileds 是 const
    */

    // 以下就是初始化清單的用法，可以打破 const。他會先取得這裡面的初始值 assign 給 const data fields.
    Account(string id, string name, double balace) :
        id(id), name(name), balance(balace) {};

    Account(string id, double balance) :
        id(id), balance(balance) {};

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