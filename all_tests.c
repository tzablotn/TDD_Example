#include "unity.h"
#include "dumb.h"

void test_shouldbethree(void)
{
  TEST_ASSERT_EQUAL(5,test());

}

int main(void)
{
  UNTIY_BEGIN();
  
  RUN_TEST(test_shouldbethree);
  UNITY_END();
  
}