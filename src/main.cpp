#include <iostream>
#include <glog/logging.h>
#include "Partie.hpp"

int main(int argc, char ** argv){
  google::InitGoogleLogging(argv[0]);
  google::SetLogDestination(google::GLOG_INFO, "log_chifoumi");
  Partie p;
  int i=0;
  while(i<3){
    std::string joue;
    std::cout << "paper,scissor,rock\n";
    std::cin >> joue;
    p.play("Remy",joue);
    i++;
  }
  return 0;
}
