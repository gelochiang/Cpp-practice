#include <iostream> 
#include <string>
using namespace std;

class Foo {
    int hash = 0;
    mutable int hash2 = 0; // 想要 hash2 還是能在第 10 行的 function 裡面更改 --> 利用 mutable

public:
    int hashCode() const {
        // hash++; // 這行要是沒註解就會錯，因為第 10 行的 const
        hash2++; // 因為有了 mutable 就可以進行更改了！
        return hash2;
    }
};

int main() {
    Foo foo;
    for(int i = 0; i < 3; i++)
    {
        cout << foo.hashCode() << endl;
    }

    return 0;
}