#include "shell.h"


int main(int argc, char **argv)
{
  /*Load config files, if any*/

  /*Run command loop*/
  loop();

  /*Perform any shutdown/cleanup*/.

  return EXIT_SUCCESS;
}
