#include <iostream>
const int depth = 100;

struct Stack
{
  int stack[depth];
  int index;
  int minstack[depth];
  int minindex;
  
};

void push (Stack&, int);
int pop (Stack&);
int get_minimum(Stack&);
int
main ()
{
  Stack _stack;
  _stack.index = 0;
  push(_stack, 10);
  push(_stack, 20);
  push(_stack, 36);
  push(_stack, 42);
  push(_stack, 100);
  push(_stack, 12);
  push(_stack, 200);
  push(_stack, 368);
  pop(_stack);
  pop(_stack);
  push(_stack, 424);
  push(_stack, 125);
  pop(_stack);
  pop(_stack);
  push(_stack, 4);
  std::cout<<"Your Stack content is: "<<std::endl;
  for( int i = 1; i <= _stack.index; ++i)
     std::cout<<_stack.stack[i]<<std::endl;
  std::cout<<get_minimum(_stack)<<std::endl;
  return 0;
}
void push (Stack& s, int element)
{
  if(s.index > depth){
        std::cout<<"Stack Overflow.";
        return;
  } else if(s.index <= 0 )
        s.minstack[++s.minindex] = element;
  else if( element < s.minstack[s.minindex] )
        s.minstack[++s.minindex]=element;
  s.stack[++s.index]= element;
}
int pop (Stack& s)
{
  if(s.index <= 0){
     std::cout<<"Stack Underflow.";
     return -1;
  }
  int element = s.stack[s.index];
  --s.index;
  return element;
  
}
int get_minimum(Stack& s)
{
  if(s.index <= 0){
     std::cout<<"Stack is empty.";
     return -1;
  }
  return s.minstack[s.minindex];
}
