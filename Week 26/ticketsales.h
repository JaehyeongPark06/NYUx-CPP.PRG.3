/*
You then add a new class called TicketSales. This new class can print either a ShowTicket or a SportsTicket. You should include the header file sportticket.h in your header

Include the following new member functions

A function to print either a ShowTicket or a SportTicket with this signature:string print_ticket(ShowTicket *myticket);

An example use of your class follows:

int main () {
  TicketSales ts;
  ShowTicket myticket1(“AA”,”101”);
  SportTicket myticket2(“AA”,”102”);
  myticket1.sell_seat();
  myticket2.sell_seat();
  myticket2.sell_beer();
  cout << ts.print_ticket(&myticket1);
  cout << ts.print_ticket(&myticket2);
  return 0;
}

The output from this sample would be:

AA 101 sold

AA 102 sold beer*/

#include "showticket.h"
#include "sportticket.h"
#include <iostream>
#include <string>
#include <map>

using namespace std;

class TicketSales
{
public:
  string print_ticket(ShowTicket *myticket)
  {
    return myticket->print_ticket();
  }
};

int main()
{
  TicketSales ts;
  ShowTicket myticket1("AA", "101");
  SportTicket myticket2("AA", "102");
  myticket1.sell_seat();
  myticket2.sell_seat();
  myticket2.sell_beer();
  cout << ts.print_ticket(&myticket1);
  cout << ts.print_ticket(&myticket2);
  return 0;
}