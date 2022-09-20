
#---task1
arr = []
for i in range(-9,10,1):
    arr.append(i)
#print (arr)
for i in range(len(arr)):
    arr[i]='Python'
#print (arr)
n = input("Give value: ")
#print (n)
for i,v in enumerate(arr):
    arr[i]=n
#print (arr)

#---task2
#---task3
import arracrobatics
n=arracrobatics.getAboveZero(arr=[-1,])
print(n)

n=arracrobatics.getAboveNum(arr=[1,2,3],int=5)
print(n)

n=arracrobatics.delAboveZero(list=[-2,-6])
print(n)

#---task4
n=0
while(len(str(n)) != 4):
    n= input("Insert 4-digit number: ")
series=[]
for s in str(n):
   # print(s)
   series.append(int(s))
#print(series)
