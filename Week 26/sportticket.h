/*A football club needs a system to keep track of the seats they have sold tickets for. Define a class for a type called SportTicket that inherits from the ShowTicket class you defined earlier. You should include the showticket.h file in your code but not upload the file.

The class should add a new boolean field to store if beer has been purchased at that seat. Define a constructor which accepts as arguments the row and seat number and sets the sold status and beer sold fields to false in the constructor initialization section.

The showticket class has the following protected members:

string row;
string seat;


Include the following new member functions:

A function to check if the ticket has been sold with this signature:bool beer_sold();
A function to update the beer sold status to sold with this signature:  void sell_beer();
override the print_ticket method to add if beer has been sold or not.
An example use of your class follows:

int main () {
  SportTicket myticket1(“AA”,”101”);
  SportTicket myticket2(“AA”,”102”);
  myticket1.sell_seat();
  myticket2.sell_seat();
  myticket2.sell_beer();
  cout << myticket1.print_ticket() << endl;
  cout << myticket2.print_ticket() << endl;
  return 0;
}

The output from this sample would be:

AA 101 sold nobeer
AA 102 sold beer

*/

#include "showticket.h"
#include <iostream>
#include <string>
#include <map>

using namespace std;

class SportTicket : public ShowTicket
{
private:
  bool beer_sold;

public:
  SportTicket(string row, string seat) : ShowTicket(row, seat)
  {
    beer_sold = false;
  }
  bool beer_sold()
  {
    return beer_sold;
  }
  void sell_beer()
  {
    beer_sold = true;
  }
  string print_ticket()
  {
    string sold = "sold";
    string nobeer = "nobeer";
    string beer = "beer";
    if (ShowTicket::is_sold())
    {
      if (beer_sold)
      {
        return ShowTicket::print_ticket() + " " + sold + " " + beer;
      }
      else
      {
        return ShowTicket::print_ticket() + " " + sold + " " + nobeer;
      }
    }
    else
    {
      return ShowTicket::print_ticket() + " " + nobeer;
    }
  }
};

int main()
{
  SportTicket myticket1("AA", "101");
  SportTicket myticket2("AA", "102");
  myticket1.sell_seat();
  myticket2.sell_seat();
  myticket2.sell_beer();
  cout << myticket1.print_ticket() << endl;
  cout << myticket2.print_ticket() << endl;
  return 0;
}
