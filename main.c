#ifdef TDD

#define TDD 1
#include "main.h"
#include "unity.h"
#include "unity_fixture.h"


extern void RunAllTests(void);

#endif /* TDD */

int main(int argc, char const * argv[])
{
  
#if TDD
  UnityMain(argc,argv,RunAllTests);
#endif
  
  int i = 0;
  
  return 0 ; //UNITY_END();

}
