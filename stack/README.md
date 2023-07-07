## Stack

### ```Stack.js```

```js
class Stack {
  constructor() {
    // creating empty array
    this.stack = [];
   
  }
  push(item) {
    this.stack.push(item);
    return item;
  }
  pop() {
    return this.stack.pop();
  }
  isEmpty() {
    if (!this.stack.length) return true;
    else return false;
  }
  peek() {
   return this.stack[this.stack.length - 1];
  }
  print() {
    this.stack.forEach((elem) => {
      console.log(elem);
    });
  }
}

const stack = new Stack();

stack.push(24);
stack.push(38);
stack.push(45);
stack.push(56);
console.log("All pushed element");
stack.print();
console.log("After Poping element");
stack.pop();
stack.pop();
stack.print();
console.log("isEmpty:", stack.isEmpty());
console.log("Peek element :", stack.peek());

```

### ```Stack.py```

```py
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
```

### ```Stack.cpp```

```cpp
#include <iostream>

using namespace std;

class Stack
{
private:
    static const int capacity = 100;
    int container[capacity];
    int top = -1;

public:
    Stack();
    int push(int);
    int pop();
    int peek();
    bool isEmpty();
    void print();
    ~Stack();
};

Stack::Stack()
{
    // intialize with zero
    this->container[0] = 0;
}

int Stack::push(int item)
{
    if (this->top != -1)
    {
        // empty stack
        ++this->top;
        this->container[this->top] = item;
        return item;
    }
    else
    {
        if (this->top >= this->capacity)
        {
            cout << "Overflow" << endl;
            return -1;
        }
        else
        {
            ++this->top;
            this->container[this->top] = item;
            return item;
        }
    }
}

int Stack::pop()
{
    int deletedItem = -1;
    if (this->top == -1)
    {
        cout << "Nothing to pop already empty" << endl;
    }
    else
    {
        deletedItem = this->container[this->top];
        this->container[this->top] = 0;
        --this->top;
    }
    return deletedItem;
}

int Stack::peek()
{
    return this->container[this->top];
}
bool Stack::isEmpty()
{
    if (this->top == -1)
        return true;
    return false;
}
void Stack::print()
{
    for (int i = 0; i <= top; ++i)
    {
        cout << this->container[i] << endl;
    }
}
Stack::~Stack()
{
}

int main(int argc, char const *argv[])
{
    Stack stack = Stack();

    stack.push(20);
    stack.push(56);
    stack.push(67);
    stack.push(34);
    stack.push(24);
    stack.push(2);
    stack.print();
    cout << "After POP" << endl;
    stack.pop();
    stack.pop();
    stack.print();
    cout << "Peek" << stack.peek() << endl;
    cout << "isEmpty:" << stack.isEmpty() << endl;
    return 0;
}


```