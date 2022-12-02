#include <iostream>
using namespace std;

int main()
{
  int price, quantity;
  cout << " Enter Price : ";
  cin >> price;

  cout << " Enter quantity : ";
  cin >> quantity;

  if (price >= 1000)
  {

    cout << " You are getting discount of 10%" << endl;
    cout << price - ((price * 10) / 100) << endl;
    cout << "With " << quantity << "quantity" << endl;
  }
  else
  {
    cout << "Your price is " << price << endl;
    cout << "And Quantity is " << quantity << endl;
  }
  return 0;
}