l=[]

max=5
top=0
bottom=0

def pushstack(n):
    global top
    global max

    if top >= max:
        print("stack is overflow")
        return
    print("pushed element is ",n,"at",top)
    l.append(n)
    top=top+1
def popstack():
    global bottom
    global top
    global max

    if top==bottom:
        print("stack underflow")
        return
    print("pop element:-",l[top-1])
    l.pop()
    top=top-1

def dispaly():
    global top
    global bottom
    if top==bottom:
        print("stack is empty")
        return
    for i in range(0,len(l)):
        print("stack element at",i,"is :",l[i])


pushstack(45)
pushstack(40)
pushstack(30)

popstack()
popstack()
popstack()
popstack()


dispaly()

# pushstack(30)
# pushstack(45)
# pushstack(23)
# pushstack(23)
# pushstack(45)

