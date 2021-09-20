public class sendmoremoney 
{

    static void solution()
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
                                                System.out.println(send);
                                                System.out.println(more);
                                                System.out.println(money);
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

        // Time to Execute Function: 127.7 seconds milliseconds
    }
}

        
    
