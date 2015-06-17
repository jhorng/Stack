#include "test.h"
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

Stack *stackCreate(){
  Stack *stack = malloc(sizeof(Stack));
  stack -> head = NULL;
  stack -> tail = NULL;
  return stack;
}

StackElement *stackElementCreate(int data){
  StackElement *elem = malloc(sizeof(StackElement));
  elem -> next = NULL;
  elem -> data = data;
  return elem;
}

void *stackAdd(Stack *stack, StackElement *elem){
  if(stack -> head == NULL && stack -> tail == NULL){
    stack -> head = elem;
    stack -> tail = elem;
  }
  else{
    elem -> next = stack -> head;
    stack -> head = elem;
    stack -> length++;
  }
}

StackElement *stackRemove(Stack *stack){
  StackElement *del = malloc(sizeof(StackElement));
  del = stack -> head;
  if (stack -> head -> next == NULL){
    stack -> head = NULL;
    stack -> tail = NULL;
  }
  else{
    stack -> head = stack -> head -> next;
  }
  stack -> length--;
  free(del); 
}