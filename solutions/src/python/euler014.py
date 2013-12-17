#compute Collatz chain length form starting number
def Collatz(number):
	m = 0
	while number != 1:
		#print number
		if number % 2 == 0:
			number /= 2
		else:
			number = 3*number +1
		m += 1
	return m + 1

#compute highest chain possible
def find_highest(highest):
	running = [0,0]
	for starting in range(highest/2,highest)[::-1]:
		number = starting
		chain = Collatz(number)
		if chain > running[1]:
			running = [starting,chain]
	return running

print find_highest(1000000)