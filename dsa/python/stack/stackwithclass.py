class Stack:


    def __init__(self):
        self.top=0
        self.maxs=5
        self.bottom=0
        self.l=[]

    def pushstack(self,n):
        if self.top >= self.maxs:
            print("stack is overflow")
            return
        print("pushed element is ", n, "at", self.top)
        self.l.append(n)
        self.top = self.top + 1
    def popstack(self):

        if self.top==self.bottom:
            print("stack underflow")
            return
        print("pop element:-",l[top-1])
        self.l.pop()
        self.top=self.top-1

    def dispaly(self):

        if self.top==self.bottom:
            print("stack is empty")
            return
        for i in range(0,len(self.l)):
            print("stack element at",i,"is :",self.l[i])


obj=Stack()
obj.pushstack(40)
obj.pushstack(45)
obj.dispaly()