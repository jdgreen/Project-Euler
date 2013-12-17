#check prime number
def prime(number):
	for fact in range(2,int(number**0.5)+1):
		if number % fact == 0:
			return False
	return True