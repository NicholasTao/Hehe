file = open('./test.txt')
for line in file:
	a=line.strip()
	print(a.split(' '))
