def check_prime(a):
	m = True
	for i in range(1,int(a)):
		if(a % i == 0 and i != 1):
			m = False	
	return m

#more elegant method (approx 6 times quicker!)

def get_prime(max):
	i = 3
	m = 0
	j = 0
	list = [2]
	while j < max-1:
		m = 0 
		for factor in list:
			if i % factor == 0:
				m = 1
		if m == 0:
			list.append(i)
			print j
			j += 1
		i += 1
	return list[-1]

#brute force

def get_prime_brute(max):
	i = 2
	m = 0
	while m < max:
		if check_prime(i) == True:
			m += 1
			print m
		i += 1
	return i-1

print get_prime(10001)