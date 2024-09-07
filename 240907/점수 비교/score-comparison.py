a = input()
b = input()

a = a.split()
b = b.split()

if int(a[0]) > int(b[0]) and int(a[1])>int(b[1]):
    print(1)
else:
    print(0)