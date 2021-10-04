#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int solution()
{
    int cross, roads, danger;
    int c, r, o, s, a, d, n, g, e;
    int i;

    for(c = 1; c < 10; c++)
    {
        for(r = 1; r < 10; r++)
        {
            for(o = 0; o < 10; o++)
            {
                for(s = 0; s < 10; s++)
                {
                    for(a = 0; a < 10; a++)
                    {
                        for(d = 1; d < 10; d++)
                        {
                            for(n = 0; n < 10; n++)
                            {
                                for(g = 0; g < 10; g++)
                                {
                                    for(e = 0; e < 10; e++)
                                    {
                                        // c r o s a d n g e
                                        if(c != r || c != o || c != s || c != a || c != d || c != n || c != g || c != e ||
                                        r != o || r != s || r != a || r != d || r != n || r != g || r != e ||
                                        o != s || o != a || o != d || o != n || o != g || o != e ||
                                        s != a || s != d || s != n || s != g || s != e ||
                                        a != d || a != n || a != g || a != e ||
                                        d != n || d != g || d != e ||
                                        n != g || n != e ||
                                        g != e)
                                        {
        
                                            cross = c * 10000 + r * 1000 * o * 100 + s * 10 + s;
                                            roads = r * 10000 + o * 1000 * a * 100 + d * 10 + s;
                                            danger = d * 1000000 + a * 10000 + n * 1000 * g * 100 + e * 10 + r;
                                            if(cross + roads == danger)
                                            {
                                                cout << cross << " + " << roads << " = " << danger << endl;
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

    //Time taken by function: 32,400 seconds
}

