def check_prime(a):
	m = True
	for i in range(1,int(a**0.5)):
		if(a % i == 0 and i != 1):
			m = False	
	return m

def get_factors(a):
	factors = []
	for i in range(2,a):
		if a % i == 0:
			while a % i == 0:
				factors.append(i)	
				a /= i 
	return factors

print check_prime(66)