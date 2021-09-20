import time
## S, E, N, D, M, O, R, Y

def solution():
    allsolutions = list()
    for s in range(1, 10):
        for e in range(0,10):
            for n in range(1,10):
                for d in range(0,10):
                    for m in range(1,10):
                        for o in range(0,10):
                            for r in range(0,10):
                                for y in range(0,10):
                                    if distinct(s, e, n, d, m, o, r, y):
                                        #digitizing
                                        send = s * 1000 + e * 100 + n * 10 + d
                                        more = m * 1000 + o * 100 + r * 10 + e
                                        money = m * 10000 + o * 1000 + n * 100 + e * 10 + y

                                        if send + more == money:
                                            allsolutions.append((send, more, money))
    return allsolutions



def distinct(*args):
    #checks to make sure all are distinct
    return len(set(args)) == len(args)

start = time.time()

for x in range(0, 1000):
    solution()

end = time.time()

print("Time taken to execute:  {}s".format(end-start))

## Time taken to execute: 39,491.84s jesus christ
