def strcnt (s,ch) :
	count = 0
	for i in s :
		if i == ch :
			count+=1
	return count
	
x = input("Enter string ")
y = input("Enter character ")
c = strcnt(x,y)
print("{0} occured in {1} , {2} times".format(y,x,c))
