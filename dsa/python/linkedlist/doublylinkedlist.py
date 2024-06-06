class node:
    def __init__(self,data):
        self.data=data
        self.prev=None
        self.next=None
class DoublyLinkedlist:
    def __init__(self):
        self.head=None
        self.size=0
    def insertAtFirst(self,data):
        newnode=node(data)
        if self.head == None:
            self.head=newnode
            self.size+=1
            return
        else:
            self.head.prev=newnode
            newnode.next = self.head
            self.head=newnode
            self.size+=1
    def insertAtLast(self,data):
        newnode=node(data)
        if self.head==None:
            self.head=newnode
            self.size+=1
            return
        else:
            current_node=self.head
            while current_node.next:
                current_node=current_node.next
            newnode.prev = current_node
            current_node.next=newnode
            self.size+=1


    def insertAtany(self,data,index):
        newnode=node(data)
        x=0
        if self.head==None:
            self.head=newnode
            self.size+=1
            return
        else:
            current_node=self.head
            while current_node:
                x+=1
                if(x==index):
                    newnode.prev=current_node
                    newnode.next=current_node.next
                    current_node.next=newnode
                    self.size += 1
                    return
                current_node=current_node.next

            print("can't insert")

    def removeFirst(self):
        if self.head is None:
            print("empty")

        elif self.head.next==None:
            self.head=None
            self.size-=1
        else:
            self.head=self.head.next
            self.head.prev=None
            self.size-=1
    def removelast(self):
        if self.head is None:
            print("empty")
        else:
            current_node=self.head
            while current_node.next.next:
                current_node=current_node.next
            current_node.next=None
            self.size-=1
    def removeAtAny(self,index):
        x=0
        if self.head is None:
            print("empty")
        elif self.head.next==None:
            self.head=self.head.next
            self.size-=1
        else :
            current_node=self.head
            while current_node:
                x+=1
                if index==1:
                    self.removeFirst()
                    return
                elif index==self.size:
                    self.removelast()
                    return
                elif x==index:
                    current_node.prev.next=current_node.next
                    current_node.next=current_node.prev
                    self.size-=1
                    return
                current_node=current_node.next

    def printDoubltlinkedlisrt(self):
        if self.head==None:
            print("Empty list")
            return
        else:
            current_node=self.head
            while (current_node):
                print(current_node.data,end="-->")
                current_node = current_node.next
            print()

obj=DoublyLinkedlist()
obj.insertAtFirst(40)
obj.insertAtFirst(50)
obj.insertAtFirst(45)
obj.insertAtFirst(45)
obj.printDoubltlinkedlisrt()
obj.removeFirst()
obj.printDoubltlinkedlisrt()
print(obj.size)
obj.removeAtAny(1)
obj.printDoubltlinkedlisrt()
print(obj.size)

