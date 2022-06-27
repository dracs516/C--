#include <iostream>
#include <string>

class Shop
{
  string ShopID;
  string name;
  float profit;

public:
  Shop() : ShopID(“NULL”), name(“NULL”), profit(0.0) {}
  Shop(string s) : ShopID(“NULL”), name(s), profit(0.0) {}
  Shop(int IDs) : ShopID(IDs), name(“NULL), profit(0.0) {}

  // or Shop(){
  ShopID = 0;
  name = “NULL”;
  profit = 0.0
}

main()
{
  Shop s;
  Shop s1(“BookMart”);
  Shop s2(102);
}
