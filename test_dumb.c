#include "unity.h"
#include "dumb.h"

void test_shouldbethree(void)
{
  TEST_ASSERT_EQUAL(4,test());

}

int main2(void)
{
 // UNTIY_BEGIN();
  
  RUN_TEST(test_shouldbethree);
  return UNITY_END();
  
}