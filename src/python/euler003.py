def factors(a):
	list = []
	for i in range(2,int(a**0.5)):
		if a % i == 0 :
			a /= i
			list.append(i)
	return list[-1]

def is_prime(a):
    return all(a % i for i in range(2, a))

def highest(number):
    for num in range(2,int(number**0.5))[::-1]:
        if number % num == 0 and is_prime(num) == True:
            return num

print highest(600851475143)
