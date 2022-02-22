#include <iostream>
#include "family.h"

using namespace std;

int main()
{
    Family member1; // Create object.
    member1.ID = 1;
    member1.appelation = "Dad";
    member1.name = "DadyShark";
    member1.birthday = "02/10";
    member1.age = 49;
    member1.printAll();

    Family member2;
    member2.ID = 2;
    member2.appelation = "Mom";
    member2.name = "MaterShark";
    member2.birthday = "12/24";
    member2.age = 49;
    member2.printAll();

    Family *member3 = new Family(); // Use "new" to create pointer object.
    member3->ID = 3;
    member3->appelation = "Me";
    member3->name = "BugShark";
    member3->birthday = "02/18";
    member3->age = 18;
    member3->printAll();
    delete member3; // The object created by "new" need to delete.

    Family *member4 = new Family();
    member4->ID = 4;
    member4->appelation = "Sister";
    member4->name = "SmallShark";
    member4->birthday = "09/11";
    member4->age = 8;
    member4->printAll();
    delete member4;

    cout << endl;
    member1.printAll(); // 會發現和第一行輸出是一樣的，畢竟記憶體還沒釋放出去
    member3->printAll(); // 會發現開始出現未預期的值，因為已經把記憶體空間釋放出去了

    return 0;
}