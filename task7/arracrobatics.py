def getAboveZero(arr):
    for i,v in enumerate(arr):
        if arr[i] >0 :
            return arr[i]
    return -1

def getAboveNum(arr, int):
    for i,v in enumerate(arr):
        if arr[i] >int :
            return arr[i]
    return -1

def delAboveZero(list):
    #print(list)
    for i in list:   
      #  print(i)
        if i>0:
            list.remove(i)
            #del[i]
            return (i)
    return None