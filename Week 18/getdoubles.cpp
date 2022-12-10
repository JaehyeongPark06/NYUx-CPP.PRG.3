#include <iostream>
using namespace std;

double *getDoubles(int numDoubles)
{
    double *doubles = new double[numDoubles];
    for (int i = 0; i < numDoubles; i++)
    {
        doubles[i] = (i + 1) / 3.0;
    }
    return doubles;
}

int main()
{
    int numDoubles = 0;
    double *doubles = NULL;

    cin >> numDoubles;

    doubles = getDoubles(numDoubles);

    for (int i = 0; i < numDoubles; i++)
    {
        cout << doubles[i] << " ";
    }
    cout << endl;

    delete[] doubles;
    doubles = NULL;

    return 0;
}
