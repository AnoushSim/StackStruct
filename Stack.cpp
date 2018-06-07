#include <iostream>
const int depth = 5;

struct Stack
{
  int stack[depth];
  int index;
};

void push (Stack &, int);
int pop (Stack &);
int
main ()
{
  Stack _stack;
  _stack.index = 0;
  push(_stack, 1);
  push(_stack, 2);
  push(_stack, 3);
  pop(_stack);
  pop(_stack);
  pop(_stack);
  push(_stack, 4);
  push(_stack, 5);
  std::cout<<"Your Stack content is: "<<std::endl;
  for( int i = 1; i <= _stack.index; ++i)
     std::cout<<_stack.stack[i]<<std::endl;
  return 0;
}
void push (Stack& s, int element)
{
  if(s.index > depth){
     std::cout<<"Stack Overflow.";
     return;
  }
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
