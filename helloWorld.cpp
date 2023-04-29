#include <iostream>

using namespace std;

int count_x(char* p, char x)
{
  if (p == nullptr) return 0;

  int count = 0;
  for (; p !=nullptr ; ++p) {
    if (*p == x) {
      ++count;
    }
  }

  return count;
}

int main() {
  char my_array[] = "Hello world!";
  char my_char = 'l';

  int count = count_x(my_array, my_char);
  cout << "The character '" << my_char << "' appears " << count << " times." << endl;

  return 0;
}
