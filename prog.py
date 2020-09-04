def rev(str):	
	lst=list()
	lst1=list()
	lst=str.split()
	length=len(lst)
	x=length-1
	while x>-1:
		lst1.append(lst[x])
		x=x-1
	for i in range(len(lst1)):
		print(lst1[i], end=' ')

lst2=list()
print('input done once you entered')
while True:
	inp=input()
	if inp=='done' or inp=='Done' or inp=='DONE':
		break
	lst2.append(inp)
lenth=len(lst2)-1
while lenth>-1:
	rev(lst2[lenth])
	lenth=lenth-1
	print('\n')
