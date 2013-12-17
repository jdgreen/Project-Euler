def find_prod():
	sum = 0
	with open('/home/jonny/documents/computing/mathematics/euler_problems/data013.data','r') as file:
		for number in file:
			sum += int(number)/10**39
		print sum
find_prod()

hello = 1
hi = 1
allo = 1