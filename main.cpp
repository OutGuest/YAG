#include <iostream>
#include <vector>
#include <string>
#include <unistd.h>
#include <fstream>

#include "headers/graphics.h"
#include "headers/main.h"
#include "headers/commands.h"

using namespace std;

int main() {
  title();
  cout << "\nType 'slow' for it to print slowly\nType nothing to fast print > ";
  inpu();
  message();
  slow();
  return 0;
}
