#include <cassert>
#include <gtest/gtest.h>

#include <console_bridge/console.h>

//////////////////////////////////////////////////
TEST(ConsoleTest, MacroExpansionTest_ItShouldCompile)
{
  int ERROR = 0;
  if (true)
    logDebug("Testing Log");

  if (true)
    logDebug("Testing Log");
  else
  {
      assert(true);
  }

  if (true)
  {
    logDebug("Testing Log");
  }
  else
  {
    logDebug("Testing Log");
  }
}
