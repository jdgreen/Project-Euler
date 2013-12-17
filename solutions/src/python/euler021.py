#get amiciable numbers
#
#Let d(n) be defined as the sum of proper divisors of n (numbers less than n which divide evenly into n).
#
# use a dynamic factor calculator so number/2 goes to/3 to /4 etc so gets smaller and smaller until matches it! Boom

def factors(number):
	total = 0
	for factor in range(2,int(number**0.5)+1):
		if number % factor == 0:
			total += factor
			total += number/factor
	return total+1

#find amicable numbers
def amicable(highest):
	numbers = [1]
	summation = 0
	for tests in range(2,highest+1):
		i = 0
		total = factors(tests)
		for element in numbers:
			if total == element and tests == factors(numbers[i]):
				summation += tests + numbers[i]
				numbers.pop(i)
				break
			if i == len(numbers)-1:
				numbers.append(tests)
				break
			i += 1
	return summation

print amicable(10000)