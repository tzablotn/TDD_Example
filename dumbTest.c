#include "dumb.h"
#include "unity_fixture.h"

TEST_GROUP(dumb);

TEST_SETUP(dumb)
{
}

TEST_TEAR_DOWN(dumb)
{
}


TEST(dumb,eqfour)
{
  TEST_ASSERT_EQUAL(5,test());
}

TEST_GROUP_RUNNER(dumb)
{
  RUN_TEST_CASE(dumb,eqfour);
}