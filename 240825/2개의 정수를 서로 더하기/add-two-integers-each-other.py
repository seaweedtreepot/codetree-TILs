a = input()

a = a.split()

a,b = int(a[0]),int(a[1])

a+=b
b+=a

print(a,b,sep=" ")