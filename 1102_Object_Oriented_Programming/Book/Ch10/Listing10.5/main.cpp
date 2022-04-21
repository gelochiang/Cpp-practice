#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
using namespace std;

const int NUMBER_OF_CARDS = 52;

void shuffle(int list[], int size)
{
    srand(time(0));
    for(int i = 0; i < size; i++)
    {
        int index = rand() % size;
        int temp = list[i];
        list[i] = list[index];
        list[index] = temp;
    }
}

int main()
{
    int deck[NUMBER_OF_CARDS];
    const string suits[4] = {"Diamonds", "Clubs", "Hearts", "Spades"};
    const string ranks[13] = {"Ace", "2", "3", "4", "5", "6", "7", "8",
        "9", "10", "Jack", "Queen", "King"};

    for(int i = 0; i < NUMBER_OF_CARDS; i++)
    {
        deck[i] = i;
    }

    shuffle(deck, NUMBER_OF_CARDS);

    for(int i = 0; i < NUMBER_OF_CARDS; i++)
    {
        cout << setw(5) << left << ranks[deck[i] % 13] << " of "
            << suits[deck[i] / 13] << endl;
    }

    return 0;
}