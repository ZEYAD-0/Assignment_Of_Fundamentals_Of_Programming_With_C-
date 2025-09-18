#include <iostream>

int main(void) /* Hint from yt:: Divide And Conquer */
{
  int a = 10;
  int b = 20;

  std::cout << ((a + b) * (a + b) + a * a) * a << "\n"; // 10000

  return 0;
  /* Hint For Help
  cout << 10 + 5 * 20 << "\n";   // 5 * 20 = 100 + 10 = 110
  cout << (10 + 5) * 20 << "\n"; // 10 + 5 = 15 * 20 = 300*/
}
