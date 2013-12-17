def arrays():
	smallest = ["one","two","three","four","five","six","seven","eight","nine"]
	teens = ["ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"]
	tens = ["twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"]
	hundred = "hundred"
	join = "and"
	last = "thousand"
	sum = 0
	for each in tens:
		sum += 100*len(each)
	for each in teens:
		sum += 10*len(each)
	for each in smallest:
		sum += 190*len(each)
	sum += 900*len(hundred)
	sum += 891*len(join)
	sum += len(last)+len(smallest[0])
	#print len(smallest[2])+len(misc[0])+len(misc[1])+len(tens[3])+len(smallest[1])
	return sum

print arrays()