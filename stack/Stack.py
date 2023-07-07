class Stack:
    def __init__(self) -> None:
        self.container=[]
    
    def push(self,item):
        self.container.append(item)
        return item
    def pop(self):
        if(len(self.container) ==0):
            return -1
        else:
            lastIndex = len(self.container) -1
            self.container.remove(self.container[lastIndex])
    
    def isEmpty(self)->bool:
        if(len(self.container)!=0):
            return False
        else:
            return True 
     
    def peek(self):
        if(len(self.container)!=0):
            lastIndex = len(self.container)-1               
            return self.container[lastIndex]
    def print(self):
        for item in range(0,len(self.container)):
                print(self.container[item])
                
                
                
                
                
stack = Stack()
stack.push(20)                
stack.push(24)                
stack.push(38)                
stack.push(45)                     
stack.push(56)
print("All pushed element")
stack.print()
print("After Poping element")
stack.pop()
stack.pop()
stack.print()                
print("isEmpty:",stack.isEmpty())
print("Peek element :",stack.peek())