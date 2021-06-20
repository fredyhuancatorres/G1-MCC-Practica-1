
import os

RANDBYTES = 1
NUM = [100, 500, 1000, 2000, 3000, 10000, 20000, 30000, 100000]

for i in range(0,len(NUM)):
    dist = open('random_'+str(NUM[i])+'.txt', 'w+')

    for j in range(0,NUM[i]):
        ran = int.from_bytes(os.urandom(RANDBYTES), byteorder='little')
        dist.write(str(ran) + '\n')
    dist.close()
