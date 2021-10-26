#include <iostream>
using namespace std;

int main()
{
    //ifstream cin("input.main.cpp.txt");
    //ofstream cout("output.main.cpp.txt");
    float M;
    int N,y, P;
    cin >> P >> M;
    N = P;
    y = P;
    float a[N];
    for (int i = 0; i < N; i++)
    {
        float x;
        cin >> x;
        a[i] = x;
    }

    while (true)
    {
        if (P == 0)
        {
            cout << "error";
            break;
        }
        else
        {

            if ((a[0] <= M) && (M <= a[1]) )
            {
            break;
            }
        else if ((a[N/2-1] <= M) && (M <= a[N/2]))
        {
            a[0] = a[N/2-1];
            a[1] = a[N/2];
            break;

        }
        else
        {
            if (a[N/2] < M)
            {
                if ((a[2] <= M) && (M <= a[3]))
                {
                    a[0] = a[2];
                    a[1] = a[3];
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

                    else
                    {
                        for (int k = 0; k < N+1; k++)
                        {
                            a[k] = a[N+k];
                        }
                    }
                }
            }
            else
            {
                N /= 2;

            }
        }

    }
    }
   cout << a[0] << " " << a[1];
    return 0;
}

