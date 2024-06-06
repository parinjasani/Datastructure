def cards(arr):
    dtotal=0
    dhiraj=[]
    mansi=[]
    mtotal=0
    j=len(arr)
    while len(arr)>0:
        if len(arr)==1:
            add = max(arr[0], arr[len(arr) - 1])
            dhiraj.append(add)
            arr.remove(add)

        else:
            add=max(arr[0],arr[len(arr)-1])
            dhiraj.append(add)
            arr.remove(add)

            add2 =max(arr[0],arr[len(arr)-1])
            mansi.append(add2)
            arr.remove(add2)

    for i in dhiraj:
        dtotal+=i
    for i in mansi:
        mtotal+=i
    if dtotal>mtotal:
        //dfdsfds
        print("Dhiraj win by",dtotal-mtotal,"card!")
    elif dtotal==mtotal:
        print("cxfdsfhsf")
    else:
        print("Mansi win by",mtotal-dtotal,"card!")
arr=list(map(int,input().strip().split()))
cards(arr)