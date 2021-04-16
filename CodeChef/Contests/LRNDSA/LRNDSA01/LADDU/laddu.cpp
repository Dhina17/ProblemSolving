#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int acitivities;
        string origin;
        cin >> acitivities >> origin;
        cin.ignore();
        int laddus = 0;
        int reedem = 0;
        string a;
        while(acitivities--)
        {
            cin >> a;
            if (a == "CONTEST_WON" )
            {
                int rank;
                cin >> rank;
                laddus += (rank < 20) ? 300 + (20 - rank) : 300;
            }
            else if (a == "TOP_CONTRIBUTOR")
            {
                laddus += 300;
            }
            else if (a == "BUG_FOUND")
            {
                int severity;
                cin >> severity;
                laddus += severity;
            }
            else if (a == "CONTEST_HOSTED")
            {
                laddus += 50;
            }
        }

        cout << laddus << endl;

        if (origin == "INDIAN")
        {
            reedem = laddus / 200;
        }
        else
        {
            reedem = laddus / 400;
        }
        cout << reedem << endl;
    }
}