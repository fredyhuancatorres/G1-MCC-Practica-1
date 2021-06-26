import time
def insertionSort(arr):
 
    for i in range(1, len(arr)):
 
        key = arr[i]
 
        j = i-1
        while j >= 0 and key < arr[j] :
                arr[j + 1] = arr[j]
                j -= 1
        arr[j + 1] = key
 
def readFile(filename, l):
    with open(filename, "r") as f:
        for line in f:
            l.append(int(line))

    if f.closed == False:
        f.close()

arr=[]
readFile("random.txt", arr)
    
start = time.perf_counter()
insertionSort(arr)
end = time.perf_counter()
print(len(arr), "Elements Sorted by InsertSort in ", end-start)

n = len(arr)
print("Sorted array is")

print("Sorted array: " + str(arr))