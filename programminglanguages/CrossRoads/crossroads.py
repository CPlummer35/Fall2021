import time
## c, r, o, s, a, d, n, g, e

def solution():
    allsolutions = list()
    for c in range(1, 10):
        for r in range(1,10):
            for o in range(0,10):
                for s in range(0,10):
                    for a in range(0,10):
                        for d in range(1,10):
                            for n in range(0,10):
                                for g in range(0,10):
                                    for e in range(0,10):
                                        if distinct(c, r, o, s, a, d, n, g, e):
                                            #digitizing
                                            cross = c * 10000 + r * 1000 * o * 100 + s * 10 + s
                                            roads = r * 10000 + o * 1000 * a * 100 + d * 10 + s
                                            danger = d * 1000000 + a * 10000 + n * 1000 * g * 100 + e * 10 + r
                                            if cross + roads == danger:
                                                allsolutions.append((cross, roads, danger))
    return allsolutions



def distinct(*args):
    #checks to make sure all are distinct
    return len(set(args)) == len(args)

start = time.time()

for x in range(0, 1):
    print(solution())

end = time.time()

print("Time taken to execute:  {}s".format(end-start))

## Time taken to execute: going to take way too long so estimate is 376,555 seconds.
