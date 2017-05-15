#include <iostream>
#include <glog/logging.h>
#include "Partie.hpp"
#include "Console.hpp"

int main(int argc, char ** argv){
  Console c;
  c.run(argc,argv);
  return 0;
}
