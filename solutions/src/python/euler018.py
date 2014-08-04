#dynamic program to find highest path through a tree data file
def best_path1(file):
	i = 0
	#read in data points
	for line in reversed(list(open(file))):
		row = map(int,line.rstrip().split(" "))
		#print row		
		m = 0
		for element in range(len(row)):
			if i == 0:
				i = 1
				break
			elif sum[element] > sum[element+1]:
				row[element] += sum[element]
			else:
				row[element] += sum[element+1]
		sum = row
	print line
	return sum[0]

def best_path(file):
	i = 0
	#read in data points
	with open(file) as data:
		for line in reversed(list(data)):
			row = map(int,line.strip().split())
			m = 0
			for element in range(len(row)):
				if i == 0:
					i = 1
					break
				elif sum[element] > sum[element+1]:
					row[element] += sum[element]
				else:
					row[element] += sum[element+1]
			sum = row
	return sum[0]
    		

print best_path("/home/jonathan/Documents/computing/project_euler/data/euler018.data")
