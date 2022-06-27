// Write a program to create class books with member variable bookid and static member variable totalbooks that is initialized to 0. The constructor should assign bookid and should increment totalbooks. The class should have display functions to display static member variables and non-static member variables. It should also have destructor that decrements the totalbooks. Write a main method which creates 4 objects. Analyze the output and justify your answer.
#include <iostream>
using namespace std;

class books
{
    int bookId;
    static int totalbooks;

public:
    books()
    {
        totalbooks++;
        cout << "The total number of books is: " << totalbooks << endl;
    }

    books(int bId)
    {
        bookId = bId;
        totalbooks++;
        cout << "The total number of books is: " << totalbooks << endl;
    }
    ~books()
    {
        totalbooks--;
        cout << "The total number of books is: " << totalbooks << endl;
    };

    void display()
    {
        cout << "Books ID: " << bookId << endl;
    }

    static void displayStat()
    {
        cout << "Book Count: " << totalbooks << endl;
    }
};
int books::totalbooks = 0;

int main()
{
    books b1(1), b2(2), b3(3), b4(4);
    b1.display();
    b1.displayStat();
    b2.display();
    b2.displayStat();
    b3.display();
    b3.displayStat();
    b4.display();
    b4.displayStat();
}