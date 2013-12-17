#factorial function
def factorial(number):
	product = 1
	sum = 0
	for number in range(1,number+1):
		product *= number
	for digits in str(product):
		sum += int(digits)
	return sum

print factorial(100)
