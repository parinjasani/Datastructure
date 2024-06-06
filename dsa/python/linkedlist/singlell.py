class node:
    def __init__(self,data):
        self.data=data
        self.next=None
class Linkedlist:
    def __init__(self):
        self.head=None
        self.size=0

    def insertAtFirst(self,data):
        newNode=node(data)
        if self.head is None:
            self.head=newNode
            self.size+=1
            return
        else:
            newNode.next=self.head
            self.head=newNode
            self.size += 1

    def insertAtindex(self,data,index):
        x=0
        newnode=node(data)
        current_node=self.head
        while current_node:
            x+=1
            if x==index:
                newnode.next = current_node.next
                current_node.next=newnode
                self.size+=1
                return
            current_node=current_node.next
        print("can't find index")

    def insertAtlast(self,data):
        newNode=node(data)
        if self.head is None:
            self.head = newNode
            self.size += 1
            return
        else:
            current_node=self.head
            while current_node.next:
                current_node=current_node.next
            current_node.next=newNode
            self.size += 1

    def updateAt(self,data,index):
        x=0
        current_node=self.head
        while current_node:
            x+=1
            if x==index:
                current_node.data=data
                return
            current_node=current_node.next
        print("can't find index can't update")

    def deleteAtfirst(self):
        if self.head==None:
            print("cant delete")
            return
        else:
            self.head=self.head.next
            self.size-=1
            return

    def deleteAtlast(self):
        if self.head==None:
            print("cant't delete")

        elif self.head.next==None:
            self.head = self.head.next
            self.size-=1
            return
        else:
            current_node=self.head
            while current_node.next.next:
                current_node=current_node.next
            current_node.next=None
            self.size-=1
    def deleteAtany(self,index):
        x=1
        if self.head==None:
            print("cant't delete")
            return
        else:
            current_node=self.head
            while current_node:
                x+=1
                if x== index:
                    current_node.next=current_node.next.next
                    self.size-=1
                    return
                current_node=current_node.next
    def printlinkedlist(self):
        current_node=self.head
        if current_node is None:
            print("list is empty")
            return
        while(current_node):
            print(current_node.data,end="--->")
            current_node=current_node.next
        print()



obj=Linkedlist()
obj.insertAtFirst(20)
obj.insertAtFirst(45)
obj.insertAtlast('parin')
obj.insertAtindex(69,5)
obj.insertAtFirst(20)
obj.insertAtFirst(45)
obj.printlinkedlist()
obj.updateAt(45,5)
obj.printlinkedlist()
obj.deleteAtfirst()
obj.printlinkedlist()
obj.deleteAtany(2)
obj.printlinkedlist()
# obj.deleteAtlast()#1
# obj.printlinkedlist()
# obj.deleteAtlast()#2
# obj.printlinkedlist()
# obj.deleteAtlast()#3

print(obj.size)
