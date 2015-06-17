#include "test.h"
#include "unity.h"












void setUp(void){}



void tearDown(void){}

void test(){

  Stack *stack = stackCreate();

  if ((((stack)) != ((void *)0))) {} else {UnityFail( (" Expected Non-NULL"), (_U_UINT)(_U_UINT)(_U_UINT)25);;};

  if ((((stack -> head)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)26);;};

  if ((((stack -> tail)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)27);;};

}

void test1(){

  struct StackElement *elem = stackElementCreate(0);

  UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((elem -> next)), (((void *)0)), (_U_UINT)42, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((elem -> data)), (((void *)0)), (_U_UINT)43, UNITY_DISPLAY_STYLE_INT);

}

void test2(){

  Stack *stack = stackCreate();

  StackElement *elem1 = stackElementCreate(1);

  stackAdd(stack, elem1);



  if ((((stack)) != ((void *)0))) {} else {UnityFail( (" Expected Non-NULL"), (_U_UINT)(_U_UINT)(_U_UINT)62);;};

  if ((((elem1)) != ((void *)0))) {} else {UnityFail( (" Expected Non-NULL"), (_U_UINT)(_U_UINT)(_U_UINT)63);;};

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((stack -> head -> data)), (((void *)0)), (_U_UINT)64, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((stack -> tail -> data)), (((void *)0)), (_U_UINT)65, UNITY_DISPLAY_STYLE_INT);

}



void test3(){

  Stack *stack = stackCreate();

  StackElement *elem1 = stackElementCreate(1);

  StackElement *elem2 = stackElementCreate(2);

  stackAdd(stack, elem1);

  stackAdd(stack, elem2);



  if ((((stack)) != ((void *)0))) {} else {UnityFail( (" Expected Non-NULL"), (_U_UINT)(_U_UINT)(_U_UINT)75);;};

  if ((((elem1)) != ((void *)0))) {} else {UnityFail( (" Expected Non-NULL"), (_U_UINT)(_U_UINT)(_U_UINT)76);;};

  if ((((elem2)) != ((void *)0))) {} else {UnityFail( (" Expected Non-NULL"), (_U_UINT)(_U_UINT)(_U_UINT)77);;};

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((stack -> head -> data)), (((void *)0)), (_U_UINT)78, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((stack -> tail -> data)), (((void *)0)), (_U_UINT)79, UNITY_DISPLAY_STYLE_INT);

}



void test4(){

  Stack *stack = stackCreate();

  StackElement *elem1 = stackElementCreate(1);

  StackElement *elem2 = stackElementCreate(2);

  StackElement *elem3 = stackElementCreate(3);

  stackAdd(stack, elem1);

  stackAdd(stack, elem2);

  stackAdd(stack, elem3);



  if ((((stack)) != ((void *)0))) {} else {UnityFail( (" Expected Non-NULL"), (_U_UINT)(_U_UINT)(_U_UINT)91);;};

  if ((((elem1)) != ((void *)0))) {} else {UnityFail( (" Expected Non-NULL"), (_U_UINT)(_U_UINT)(_U_UINT)92);;};

  if ((((elem2)) != ((void *)0))) {} else {UnityFail( (" Expected Non-NULL"), (_U_UINT)(_U_UINT)(_U_UINT)93);;};

  if ((((elem3)) != ((void *)0))) {} else {UnityFail( (" Expected Non-NULL"), (_U_UINT)(_U_UINT)(_U_UINT)94);;};

  UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((stack -> head -> data)), (((void *)0)), (_U_UINT)95, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((stack -> tail -> data)), (((void *)0)), (_U_UINT)96, UNITY_DISPLAY_STYLE_INT);

}



void test5(){

  Stack *stack = stackCreate();

  StackElement *elem1 = stackElementCreate(1);

  StackElement *elem2 = stackElementCreate(2);

  StackElement *elem3 = stackElementCreate(3);

  stackAdd(stack, elem1);

  stackAdd(stack, elem2);

  stackAdd(stack, elem3);



  if ((((stack)) != ((void *)0))) {} else {UnityFail( (" Expected Non-NULL"), (_U_UINT)(_U_UINT)(_U_UINT)108);;};

  if ((((elem1)) != ((void *)0))) {} else {UnityFail( (" Expected Non-NULL"), (_U_UINT)(_U_UINT)(_U_UINT)109);;};

  if ((((elem2)) != ((void *)0))) {} else {UnityFail( (" Expected Non-NULL"), (_U_UINT)(_U_UINT)(_U_UINT)110);;};

  if ((((elem3)) != ((void *)0))) {} else {UnityFail( (" Expected Non-NULL"), (_U_UINT)(_U_UINT)(_U_UINT)111);;};

  stackRemove(stack);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((stack -> head -> data)), (((void *)0)), (_U_UINT)113, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((stack -> tail -> data)), (((void *)0)), (_U_UINT)114, UNITY_DISPLAY_STYLE_INT);

}

void test6(){

  Stack *stack = stackCreate();

  StackElement *elem1 = stackElementCreate(1);

  StackElement *elem2 = stackElementCreate(2);

  StackElement *elem3 = stackElementCreate(3);

  stackAdd(stack, elem1);

  stackAdd(stack, elem2);

  stackAdd(stack, elem3);



  if ((((stack)) != ((void *)0))) {} else {UnityFail( (" Expected Non-NULL"), (_U_UINT)(_U_UINT)(_U_UINT)125);;};

  if ((((elem1)) != ((void *)0))) {} else {UnityFail( (" Expected Non-NULL"), (_U_UINT)(_U_UINT)(_U_UINT)126);;};

  if ((((elem2)) != ((void *)0))) {} else {UnityFail( (" Expected Non-NULL"), (_U_UINT)(_U_UINT)(_U_UINT)127);;};

  if ((((elem3)) != ((void *)0))) {} else {UnityFail( (" Expected Non-NULL"), (_U_UINT)(_U_UINT)(_U_UINT)128);;};

  stackRemove(stack);

  stackRemove(stack);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((stack -> head -> data)), (((void *)0)), (_U_UINT)131, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((stack -> tail -> data)), (((void *)0)), (_U_UINT)132, UNITY_DISPLAY_STYLE_INT);

}
