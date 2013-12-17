def palin(a):
	num = []
	for digit in str(a):
		num.append(digit)
	if num == num[::-1]:return True
	else:return False

def quicker(num_digit=3):
	for total in range(1,10**(2*num_digit))[::-1]:
		if palin(total):
			for factor in range(1,10**num_digit)[::-1]:
				if total % factor == 0:
					if len(str(total/factor)) != num_digit:
						break
					else:
						return total
print quicker()
