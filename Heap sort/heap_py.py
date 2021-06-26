import time
from numpy.random import seed
from numpy.random import randint
import matplotlib.pyplot as plt

def heapify(arr, n, i):
      
      largest = i
      l = 2 * i + 1
      r = 2 * i + 2
  
      if l < n and arr[i] < arr[l]:
          largest = l
  
      if r < n and arr[largest] < arr[r]:
          largest = r
  
      
      if largest != i:
          arr[i], arr[largest] = arr[largest], arr[i]
          heapify(arr, n, largest)
  
  
def heapSort(arr):
      n = len(arr)
  
      
      for i in range(n//2, -1, -1):
          heapify(arr, n, i)
  
      for i in range(n-1, 0, -1):
          
          arr[i], arr[0] = arr[0], arr[i]
  
          
          heapify(arr, i, 0)


def readFile(filename, l):
    with open(filename, "r") as f:
        for line in f:
            l.append(int(line))

    if f.closed == False:
        f.close()


arr=[]
readFile("random.txt", arr)
    
start = time.perf_counter()
heapSort(arr)
end = time.perf_counter()
print(len(arr), "Elements Sorted by HeapSort in ", end-start)

n = len(arr)
print("Sorted array is")

print("Sorted array: " + str(arr))