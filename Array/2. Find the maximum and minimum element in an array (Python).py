import sys
sys.stdin = open("./iofiles/input.txt", "r")
sys.stdout = open("./iofiles/output.txt", "w")
sys.stderr = open("./iofiles/error.txt", "w")
# your remaining code

input = lambda: sys.stdin.readline().rstrip()

print("Hello, World!")
T = int(input())
for _ in range(T):
    n=int(input())
    arr = [int(a) for a in input().split()]
    print("ARR",arr)
    
    print("MIN",min(arr))
    mn=arr[0]
    for i in range(n):
        if arr[i] < mn:
            mn = arr[i]
    print("MIN",mn)
