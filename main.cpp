#include <cstdarg>
#include <iostream>

void afficherArguments(int count, ...)

{
  va_list args;
  va_start(args, count);
  for (int i = 0; i < count; ++i) {
    int arg = va_arg(args, int);
    // std::cout << "Argument " << i + 1 << ": " << arg << std::endl;
  }
  va_end(args);
}
int main() {
  afficherArguments(2000);
  return 0;
}
