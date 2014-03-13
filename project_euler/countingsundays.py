sundays=0
day=1
lisofmonths=[31,28,31,30,31,30,31,31,30,31,30,31]
lisofdays=['mon','tue','wed','thu','fri','sat','sun']

for year in range(1,101):
    for month in range(12):
        if lisofdays[(day%7)]=='sun':
            sundays=sundays+1
        if (year%4==0) and month==1:
            day=day+1
        else:
            day=day+lisofmonths[month]%7
        

print sundays
