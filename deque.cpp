#B17,bucketsort, topper
def selection_sort(arr):
    for i in range(len(arr)-1):
        min = i
        for j in range(i,len(arr)):
            if arr[j] < arr[i]:
                min = arr[j]
                temp = arr[i]
                arr[i] = arr[j]
                arr[j] = temp
    return arr

percent = []
sorted = []
#creating list
n = int(input("Enter number of students in class: "))
for i in range(n):
    per = float(input("Enter student percentage: "))
    percent.append(per)
#creating buckets(here we know that percent will be upto 100 so 10 buckets )
buck = []
for i in range(10):
    buck.append([])
#finding apropriate index to insert given element
for i in range(len(percent)):
    index =int(((percent[i]/100)*10))
    buck[index].append(percent[i])
print(buck)

#sorting each individual bucket using any stable selction technique
for i in range(len(buck)):
    print(selection_sort(buck[i]))

#inserting sorted elements of bucket into list
for i in range(len(buck)):
    if(len(buck[i])!= 0):
        for j in range(len(buck[i])):
            sorted.append(buck[i][j])
print(sorted)
print("Top five scores obtained are: ",end = " ")
for i in range(len(sorted)-1,len(sorted)-6,-1):
    print(sorted[i],end = " ")
