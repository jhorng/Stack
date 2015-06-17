#include "unity.h"
#include "test.h"

/* Arthur : Chu Jaan Horng
 * Date   : 17-6-2015
 * Title  : Test_Stack
 */

void setUp(void){}

void tearDown(void){}

/*
 *    --------
 *    | head | -----> NULL
 *    --------         ^
 *    --------         |
 *    | tail | --------
 *    --------
 *
 *
 */
void test(){
  Stack *stack = stackCreate();
  TEST_ASSERT_NOT_NULL(stack);
  TEST_ASSERT_NULL(stack -> head);
  TEST_ASSERT_NULL(stack -> tail);
}

/*
 *    --------
 *    | next | -----> NULL
 *    --------         ^
 *    --------         |
 *    | data | --------
 *    --------
 *
 *
 */
void test1(){
  struct StackElement *elem = stackElementCreate(0);
  TEST_ASSERT_EQUAL(0, elem -> next);
  TEST_ASSERT_EQUAL(0, elem -> data);
}

/*
 *    --------                            --------         -----
 *    | head | -----> NULL                | head | ----->  | 1 |
 *    --------         ^     ADD 1 ===>   --------         -----
                       |                                     ^
 *    --------         |                  --------           |
 *    | tail | --------                   | tail | ----------
 *    --------                            --------
 *
 *
 */
void test2(){
  Stack *stack = stackCreate();
  StackElement *elem1 = stackElementCreate(1);
  stackAdd(stack, elem1);

  TEST_ASSERT_NOT_NULL(stack);
  TEST_ASSERT_NOT_NULL(elem1);
  TEST_ASSERT_EQUAL(1, stack -> head -> data);
  TEST_ASSERT_EQUAL(1, stack -> tail -> data);
}

void test3(){
  Stack *stack = stackCreate();
  StackElement *elem1 = stackElementCreate(1);
  StackElement *elem2 = stackElementCreate(2);
  stackAdd(stack, elem1);
  stackAdd(stack, elem2);

  TEST_ASSERT_NOT_NULL(stack);
  TEST_ASSERT_NOT_NULL(elem1);
  TEST_ASSERT_NOT_NULL(elem2);
  TEST_ASSERT_EQUAL(2, stack -> head -> data);
  TEST_ASSERT_EQUAL(1, stack -> tail -> data);
}

void test4(){
  Stack *stack = stackCreate();
  StackElement *elem1 = stackElementCreate(1);
  StackElement *elem2 = stackElementCreate(2);
  StackElement *elem3 = stackElementCreate(3);
  stackAdd(stack, elem1);
  stackAdd(stack, elem2);
  stackAdd(stack, elem3);

  TEST_ASSERT_NOT_NULL(stack);
  TEST_ASSERT_NOT_NULL(elem1);
  TEST_ASSERT_NOT_NULL(elem2);
  TEST_ASSERT_NOT_NULL(elem3);
  TEST_ASSERT_EQUAL(3, stack -> head -> data);
  TEST_ASSERT_EQUAL(1, stack -> tail -> data);
}

void test5(){
  Stack *stack = stackCreate();
  StackElement *elem1 = stackElementCreate(1);
  StackElement *elem2 = stackElementCreate(2);
  StackElement *elem3 = stackElementCreate(3);
  stackAdd(stack, elem1);
  stackAdd(stack, elem2);
  stackAdd(stack, elem3);

  TEST_ASSERT_NOT_NULL(stack);
  TEST_ASSERT_NOT_NULL(elem1);
  TEST_ASSERT_NOT_NULL(elem2);
  TEST_ASSERT_NOT_NULL(elem3);
  stackRemove(stack);
  TEST_ASSERT_EQUAL(2, stack -> head -> data);
  TEST_ASSERT_EQUAL(1, stack -> tail -> data);
}
void test6(){
  Stack *stack = stackCreate();
  StackElement *elem1 = stackElementCreate(1);
  StackElement *elem2 = stackElementCreate(2);
  StackElement *elem3 = stackElementCreate(3);
  stackAdd(stack, elem1);
  stackAdd(stack, elem2);
  stackAdd(stack, elem3);

  TEST_ASSERT_NOT_NULL(stack);
  TEST_ASSERT_NOT_NULL(elem1);
  TEST_ASSERT_NOT_NULL(elem2);
  TEST_ASSERT_NOT_NULL(elem3);
  stackRemove(stack);
  stackRemove(stack);
  TEST_ASSERT_EQUAL(1, stack -> head -> data);
  TEST_ASSERT_EQUAL(1, stack -> tail -> data);
}
