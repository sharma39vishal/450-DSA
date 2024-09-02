import sys
sys.stdin = open("./iofiles/input.txt", "r")
sys.stdout = open("./iofiles/output.txt", "w")
sys.stderr = open("./iofiles/error.txt", "w")
# your remaining code

input = lambda: sys.stdin.readline().rstrip()

n=int(input())
arr=[int(a) for a in input().split()]
k=int(input())
arr.sort()
print(arr[k-1])
