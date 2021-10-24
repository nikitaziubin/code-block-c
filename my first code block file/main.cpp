#include <iostream>
using namespace std;


int main()
{
    //ifstream cin("input.main.cpp.txt");
    //ofstream cout("output.main.cpp.txt");
    int N,M,y,P;
    cin >> P >> M;
    N = P;
    y = P;
    int a[N];
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        a[i] = x;
    }
    //N = N / 2;
    while (M != -101)
    {
        if ((a[0] <= M) && (M <= a[1]))
        {
            break;
        }
        else
        {
            if (a[N/2] < M)
            {   if ((a[2] <= M) && (M <= a[3]))
                {
                    a[2] = a[0];
                    a[3] = a[1];
                    break;
                }
                else
                {
                    N /= 2;
                    if (y % 2 == 0)
                    {
                        for (int k = 0; k < N; k++)
                        {
                        a[k] = a[N+k];
                        }
                    }
                }
            else
                {
                    for (int k = 0; k < N+1; k++)
                    {
                        //a[N / 2];
                        a[k] = a[N+k];
                    }
                }
            }

            else
            {
                N /= 2;
            }

        }
    }
    cout << a[0] << " " << a[1];
    return 0;
}
