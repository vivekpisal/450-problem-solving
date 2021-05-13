mat=[[1,3,3,3,3,9],
     [1,6,9,2,3,9],
     [1,2,2,5,4,9],
     [2,2,4,5,7,9],
     [2,4,5,6,7,2],
     [1,1,1,1,5,6]]


s=set()
for i in range(len(mat)):
    for j in range(len(mat[i])):
        l=i
        m=j
        counter=1
        while l<len(mat)-1 and m<len(mat[0])-1:
            if mat[l][m] == mat[l+1][m+1]:
                counter+=1
            else:
                counter=1
            if counter == 4:
                s.add(mat[l][m])
            l+=1
            m+=1


for i in range(len(mat)):
    for j in range(len(mat[i])):
        l=i
        m=j
        counter=1
        while l<len(mat)-1 and m>0:
            if mat[l][m] == mat[l+1][m-1]:
                counter+=1
            else:
                counter=1
            if counter == 4:
                s.add(mat[l][m])
            l+=1
            m-=1
            

for i in range(len(mat)):
    counter=1
    for j in range(len(mat[i])-1):
        if mat[i][j] == mat[i][j+1]:
            counter+=1
        else:
            counter=1
        if counter == 4:
            s.add(mat[i][j])


for i in range(len(mat[0])):
    counter=1
    for j in range(len(mat)-1):
        if mat[j][i] == mat[j+1][i]:
            counter+=1
        else:
            counter=1
        if counter == 4:
            s.add(mat[j][i])
            
print(s)
