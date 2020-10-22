min_len=5
max_len=7
min_wid=3
max_wid=4
a=[]
sum_of_child=0
for i in range(min_len,max_len+1):
	for j in range(min_wid,max_wid+1):
		a.append([i,j])

row=0
width=0
for i in range(len(a)):
	row=a[i][0]
	width=a[i][1]	
	if row==width and row%2==1 and width%2==1:
		sum_of_child+=1
		continue
	while row!=0 and width!=0:
		sum_of_child+=1
		if row>width:
			row=row-width
		else:
			width=width-row
	


print(sum_of_child)
