//I do not know java

public class eatthatapple 
{

    static void solution()
    {
        int apple, that, eat;
        int E, A, T, H, P, L;

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
                                        System.out.println(eat);
                                        System.out.println(that);
                                        System.out.println(apple);

                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    
    public static void main(String[] args) 
    {
        long startTime = System.nanoTime();
        for(int i = 0; i < 2000; i++)
        {
            solution();
        }
        long endTime = System.nanoTime();
        long duration = (endTime - startTime);  //divide by 1000000 to get milliseconds.
        duration = duration / 1000000;
        System.out.println("Time to Exexcute function: " + duration + " milliseconds");

        // Time to Execute Function: 1935 milliseconds
    }
}

        
    
