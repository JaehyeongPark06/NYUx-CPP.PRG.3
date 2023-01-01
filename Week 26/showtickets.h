#include <iostream>
#include <string>
#include <map>

using namespace std;

class ShowTickets
{
private:
  map<string, map<string, bool>> tickets;

public:
  ShowTickets()
  {
    for (int i = 0; i < 10; i++)
    {
      string row = "AA";
      row[1] += i;
      for (int j = 0; j < 10; j++)
      {
        string seat = "101";
        seat[2] += j;
        tickets[row][seat] = false;
      }
    }
  }
  bool is_sold(string row, string seat)
  {
    return tickets[row][seat];
  }
  void sell_seat(string row, string seat)
  {
    tickets[row][seat] = true;
  }
  string print_ticket(string row, string seat)
  {
    string status = "available";
    if (tickets[row][seat])
    {
      status = "sold";
    }
    return row + " " + seat + " " + status;
  }
};

int main()
{
  ShowTickets myticket;
  if (!myticket.is_sold("AA", "101"))
    myticket.sell_seat("AA", "101");
  cout << myticket.print_ticket("AA", "101") << endl;
  cout << myticket.print_ticket("AA", "102") << endl;
  return 0;
}