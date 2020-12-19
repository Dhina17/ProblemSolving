#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int G, I, N, Q;
        cin >> G;
        while (G--)
        {
            int I, N, Q;
            cin >> I >> N >> Q;
            if (N % 2 == 0)
            {
                cout << N / 2 << endl;
            }
            else
            {
                if (Q == I)
                {
                    cout << N / 2 << endl;
                }
                else
                {
                    cout << (N / 2) + 1 << endl;
                }
            }
        }
    }
}