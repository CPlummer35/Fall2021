import time

def solution():
    allsolutions = list()
    for e in range(1, 10):
        for a in range(1,10):
            for t in range(1,10):
                for h in range(0,10):
                    for p in range(0,10):
                        for l in range(0,10):
                            if distinct(e, a, t, h, p, l):
                                #digitizing
                                eat = e * 100 + a * 10 + t
                                that = t * 1000 + h * 100 + a * 10 + t
                                apple = a * 10000 + p * 1000 + p * 100 + l * 10 + e
                                if eat + that == apple:
                                    allsolutions.append((eat, that, apple))
    return allsolutions



def distinct(*args):
    #checks to make sure all are distinct
    return len(set(args)) == len(args)

start = time.time()

for x in range(0, 1000):
    solution()

end = time.time()

print("Time taken to execute:  {}s".format(end-start))

## Time taken to execute: 400s
