#include <CppUTest/CommandLineTestRunner.h>
#include "Partie.hpp"
#include <string>

TEST_GROUP(GroupPartie){};
TEST(GroupPartie,Test_1)
{
  std::string result=Resultat("rock","scissor");
CHECK_EQUAL(Resultat("rock","scissor"),"win");
}
/*
TEST(GroupPartie,Test_2)
{
  std::string result=Resultat("rock","rock");
CHECK_EQUAL(Resultat("rock","rock"),"draw");
}

TEST(GroupPartie,Test_3)
{
  std::string result=Resultat("scissor","rock");
CHECK_EQUAL(Resultat("scissor","rock"),"loos");
}
*/
