def diff(number):
	tot = 0
	sqr = 0
	for numbers in range(1,number +1):
		tot += numbers**2
		sqr += numbers
	sqr = sqr**2
	diff = abs(sqr - tot)
	return diff

print diff(100)