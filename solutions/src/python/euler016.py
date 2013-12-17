#get number and sum digits
def digit_sum(index,power):
	number = str(index**power)
	sum = 0
	for character in number:
		sum += int(character)
	return sum

print digit_sum(2,1000)