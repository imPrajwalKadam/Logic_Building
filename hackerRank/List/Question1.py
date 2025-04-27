
# input:[['atharva',10],['viraj',20],['swaraj',30],['raju',20]]
# output :raju,viraj

"""
Explanation :Print the name(s) of any student(s) having the second lowest grade in. If there are multiple students, order their names alphabetically and print each one on a new line.
algo 
1. fetchScore in one array 
2. remove duplicates from list using set()
3. sort that score
4. Find second lowest score
5. fetch name of that score  in array
6. sort  that array print  
"""
mylist = [['atharva',10],['viraj',20],['swaraj',30],['raju',20]]
findScore = [x[1] for x in mylist]

sortScore = sorted(set(findScore))
findName =sorted([y[0] for y in mylist if (sortScore[1]== y[1])])
for z in findName:
    print(z)