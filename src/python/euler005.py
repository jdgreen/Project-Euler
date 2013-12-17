def get_factors(a):
	factors = []
	for i in range(2,a+1):
		if a % i == 0:
			factors.append(i)
	return factors[::-1]

def get_mult(max):
	running = 1
	stack = 1
	for number in range (2,max+1):
		for factor in get_factors(number):
			if running % factor != 0:
				#work out remainder to multiply by
				running *= remain(running,factor)
	return running

def remain(running,number):
	i = 1
	first = number
	prev = number
	for factor in get_factors(first):
		if running % factor == 0 and factor == first: 
			number = 1
			break
		elif running % factor == 0 and prev % factor != 0:
			number /= factor
		elif running % factor == 0 and running % prev != 0 and running % first!= 0:
			number /= factor
		i += 1
		prev = factor
	return number
	
print get_mult(20)