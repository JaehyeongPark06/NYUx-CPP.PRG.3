#include <iostream>
#include <string>
using namespace std;

class ShowTicket
{
private:
  string row;
  string seat;
  bool sold;

public:
  ShowTicket(string r, string s) : row(r), seat(s), sold(false) {}
  bool is_sold() { return sold; }
  void sell_seat() { sold = true; }
  string print_ticket() { return row + " " + seat + " " + (sold ? "sold" : "available"); }
};

int main()
{
  ShowTicket myticket1("AA", "101");
  ShowTicket myticket2("AA", "102");
  if (!myticket1.is_sold())
    myticket1.sell_seat();
  cout << myticket1.print_ticket() << endl;
  cout << myticket2.print_ticket() << endl;
  return 0;
}
