#include <iostream>
#include <stirng>
#include <iomanip>

string reciept (string,string,string,string,string);


string reciept(string cust_name,string item_numb,string prod_name,string quantity, string total)
{
  cout << "__________________________________________" << endl;
  cout << "B2B Shopping Cart" << endl;
  cout << "_________________________________________" << endl << endl;
  cout << "Order Number: " << endl;
  cout << "Associate: " << endl;
  cout << "Customer Number: " << endl;
  cout << "Customer: " << endl;
  cout << "Address: " << endl << endl;


  cout << "_______________________________________________" << endl;
  cout << "Item No     " << "Description       " << "Qty   " << "  Total " <<endl;
  cout << "_______________________________________________" << endl;
  cout << item_numb <<setw()<< prod_name << "       " << quantity << "   " << total << endl;

  return "hello";
}
