class Stack:


    def __init__(self):
        self.top=0
        self.maxs=5
        self.bottom=0
        self.l=[]
        self.minl=[]
        self.min=0

    def pushstack(self,n):
        if self.top >= self.maxs:
            print("stack is overflow")
            return

        elif self.top==0:
            print("pushed element is ", n, "at", self.top)
            self.l.append(n)
            self.top += 1
            self.minl.append(n)
            self.min=n
        else:
            if (n <= self.min):
                self.min=n
            print("pushed element is ", n, "at", self.top)
            self.l.append(n)
            self.top = self.top + 1
            if(n<=self.min):
                self.minl.append(n)
            else:
                self.minl.append(self.min)
    def popstack(self):

        if self.top==self.bottom:
            print("stack underflow")
            return
        print("pop element:-",self.l[self.top-1])
        self.l.pop()
        self.minl.pop()
        self.top=self.top-1



    def dispaly(self):

        if self.top==self.bottom:
            print("stack is empty")
            return
        for i in range(0,len(self.l)):
            print("stack element at",i,"is :",self.l[i])
obj=Stack()
obj.pushstack(9)
obj.pushstack(3)
obj.pushstack(-2)
obj.pushstack(2)
obj.pushstack(10)
print(obj.l)
print(obj.minl)
obj.popstack()
obj.popstack()
print(obj.l)
print(obj.minl)
