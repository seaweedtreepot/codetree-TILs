a = int(input())
b = input()
b = b.split()

b,c,d,e = int(b[0]),int(b[1]),int(b[2]),int(b[3])

print(1 if a>b else 0)
print(1 if a>c else 0)
print(1 if a>d else 0)
print(1 if a>e else 0)