a = input()

a = a.split()
c = int(a[2])
b = int(a[1])
a = int(a[0])

print(a+b+c, int((a+b+c)/3),int(a+b+c - (a+b+c)/3),sep="\n")