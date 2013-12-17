def sum_fact(a):
	sum = 0
	for element in range(1, a):
	    if element % 3 == 0 or element % 5 ==  0 :
	        sum += element
	return sum

print sum_fact(1000)
