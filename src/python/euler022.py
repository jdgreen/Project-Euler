#sort list alphabetically
def sort_names(file):
	Names = []
	with open(file) as names:
		for each_name in names:
			for element in each_name.split(","):
				Names.append(element.strip().strip('"'))
	names.close()
	Names.sort()
	return Names

#define alphabet
alphabet = ['A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z']

#get value of a name
def get_value(name):
	sum = 0
	for letter in name.strip():
		i = 1
		for character in alphabet:
			if letter == character:
				sum += i
			i += 1
	return sum

#fine total values of name in a list
def get_total(name_list):
	i = 1
	total = 0
	for word in name_list:
		total += get_value(word)*i
		i += 1
	return total

Names = sort_names("/home/jonny/documents/computing/mathematics/euler_problems/data022.data")

print get_total(Names)