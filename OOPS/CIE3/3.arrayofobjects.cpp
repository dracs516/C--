#include <iostream>
using namespace std;

class shopItem
{
    int item_id;
    float item_price;

public:
    void getData()
    {
        cout << "The item id is: " << item_id << endl;
        cout << "The item price is: " << item_price << endl;
    }
    void setData(int id, float price)
    {
        item_id = id;
        item_price = price;
    }
};

int main()
{
    int size = 5;
    shopItem *p = new shopItem[size];
    int id;
    float price;
    shopItem *p1 = p;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the item id: ";
        cin >> id;
        cout << "Enter the item price: ";
        cin >> price;
        p->setData(id, price);
        p++;
    }
    for (int i = 0; i < size; i++)
    {
        cout << "Item no.: " << i + 1 << endl;
        p1->getData();
        p1++;
    }
    return 0;
}