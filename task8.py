#---task1
l=[1, 53, -35, 94, 2, 0, -6, 24, -4]
print(l)
l.sort(reverse=True )
print(l)
def sortAsIWant(list,bool):
    if bool == True:
        l.sort(reverse=True )
    return l.sort(reverse=False )
sortAsIWant(l,False)
print(l)

#---task2
dictionary={"C++": 8000 , "Python": 9000, "Java": 7000 }
print(dictionary)  

dictionary_new={}
for l,s in dictionary.items():
    dictionary_new[l]={"salary": s}
print(dictionary_new)
'''
for l,s in dictionary.items():  
     print(f"\n{l.title()} salary: {s}")
'''
#---task3
dictionary_one={'Monday': 10, 'Tuesday': 20, 'Wednesday': 30}
dictionary_two={'Thursday': 30, 'Friday': 40, 'Saturday': 50, "Sunday" : 40}
dictionary_one.update(dictionary_two)
print(dictionary_one)