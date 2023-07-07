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
