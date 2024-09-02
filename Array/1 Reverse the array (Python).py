import sys
sys.stdin = open("input.txt", "r")
sys.stdout = open("output.txt", "w")
sys.stderr = open("error.txt", "w")
# your remaining code

input = lambda: sys.stdin.readline().rstrip()
 
T = int(input())
for _ in range(T):
    n=int(input())
    # print(input().split())
    # pass

    # n, l, r = map(int, input().split())
    arr = [int(a) for a in input().split()]
    print("ARR",arr)

    for x in range(int(len(arr)/2)):
        print(x,len(arr)-x-1)
        t=arr[x]
        arr[x]=arr[int(len(arr)-x-1)]
        arr[int(len(arr)-x-1)]=t
    
    print("ARR",arr)
