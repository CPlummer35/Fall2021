#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int solution()
{
    int apple, that, eat;
    int E, A, T, H, P, L;
    int i;


    for(E = 1; E < 10; E++)
    {
        for(A = 1; A < 10; A++)
        {
            for(T = 1; T < 10; T++)
            {
                for(H = 0; H < 10; H++)
                {
                    for(P = 0; P < 10; P++)
                    {
                        for(L = 0; L < 10; L++)
                        {
                            if(E != A || E != T || E != H || E != P || E != L || A != T || A != H || A != P || A != L || T != H || T != P || 
                            T != L || H != P || H != L || P != L)
                            {
                                eat = E * 100 + A * 10 + T;
                                that = T * 1000 + H * 100 + A * 10 + T;
                                apple = A * 10000 + P * 1000 + P * 100 + L * 10 + E;
                                if(eat + that == apple)
                                {
                                    //cout << eat << " + " << that << " = " << apple << endl; // outputs 819 + 9219 = 100038
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

    for(int i = 0; i < 2000; i++)
    {
        solution();
    }

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    cout << "Time taken by function: " << duration.count() << " milliseconds" << endl;

    //Time taken by function: 6471ms
}

