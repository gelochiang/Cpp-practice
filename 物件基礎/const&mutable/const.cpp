#include <iostream> 
#include <string>
using namespace std;

class Foo {
    int hash = 0;

public:
    int hashCode() const { // 那個 const 代表值域無法改變（data fileds)
        if(hash == 0) {
            // hash++; // 這行要是沒註解就會錯，因為第 9 行的 const
            return hash;
        }

        return this->hash;
    }
};

int main() {
    Foo foo;
    for(int i = 0; i < 3; i++)
    {
        cout << foo.hashCode() << endl;
    }
}