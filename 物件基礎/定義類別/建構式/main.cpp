#include "family.h"

int main()
{
    Family member1 = {1, "Dad", "江文水", "02/10", 49};
    member1.riseAge(51);
    member1.printAll();

    Family member2 = {2, "Mom", "蒙娜", "12/24", 49};
    member2.dropAge(49);
    member2.printAll();

    Family *member3 = new Family{3, "Me", "江至揚", "02/18", 18};
    member3->dropAge(19);
    member3->printAll();
    delete member3; // The project use new need to delete.

    Family *member4 = new Family{4, "Sister", "江子安", "09/11", 8};
    member4->riseAge(93);
    member4->printAll();
    delete member4;

    cout << endl;
    member1.printAll();
    member3->printAll();

    return 0;
}