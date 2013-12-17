#finding the number of sundays at the start of a month in the given time frame	

def sundays():
	#define months during a normal year
	months = [31,28,31,30,31,30,31,31,30,31,30,31]

	#fast forward to 1 Jan 1901
	year = 1900
	days = 0
	for each_month in months:
		days += each_month
	year += 1

	#now proceed to 31 Dec 2000
	sundays = 0
	for year in range(1901,2001):
		for each_month in months:
			days += each_month
			if each_month == 28 and year % 4 == 0:
				if year % 100 == 0 and year % 400 != 0:
					continue
				days += 1
			if (days+1) % 7 == 0:
				sundays += 1
	return sundays

print sundays()
