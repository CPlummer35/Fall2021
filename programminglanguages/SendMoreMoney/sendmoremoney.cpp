#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int solution()
{
    int send, more, money;
    int s, e, n, d, m, o, r, y;
    int i;

    for(s = 1; s < 10; s++)
    {
        for(e = 0; e < 10; e++)
        {
            for(n = 0; n < 10; n++)
            {
                for(d = 0; d < 10; d++)
                {
                    for(m = 1; m < 10; m++)
                    {
                        for(o = 0; o < 10; o++)
                        {
                            for(r = 0; r < 10; r++)
                            {
                                for(y = 0; y < 10; y++)
                                {
                                    if(s != e || s != n || s != d || s != m || s != o || s != r ||
                                    s != y || e != n || e != d || e != m || e != o || e != r ||
                                    e != y || n != d || n != m || n != o || n != r || n != y ||
                                    d != m || d != o || d != r || d != y || m != o || m != r || 
                                    m != y || o != r || o != y || r != y)
                                    {
                                        send = s * 1000 + e * 100 + n * 10 + d;
                                        more = m * 1000 + o * 100 + r * 10 + e;
                                        money = m * 10000 + o * 1000 + n * 100 + e * 10 + y;
                                        if(send + more == money)
                                        {
                                            //cout << send << " + " << more << " = " << money << endl;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }  
}


int main()
{
    auto start = high_resolution_clock::now();

    for(int i = 0; i < 1000; i++)
    {
        solution();
    }

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<seconds>(stop - start);
    cout << "Time taken by function: " << duration.count() << " seconds" << endl;

    //Time taken by function: 337 seconds
}

