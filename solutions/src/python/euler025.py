#get fibonnaci
def fib(number):
	fib = [1,1]
	term = 2
	while len(str(fib[1]+fib[0])) < number:
		current = fib[0] + fib[1]
		fib.pop(0)
		fib.append(current)
		term += 1
	return term

print fib(1000)