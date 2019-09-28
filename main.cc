#include "itensor/all.h"
#include "infrastructure/factory.h"
#include <iostream>
#include <cstdlib>
#include "infrastructure/util.h"
#include "infrastructure/factory.h"

using namespace itensor;
using namespace std;

int 
main(int argc, char** argv)
{
	Args* args = getArgs(argc,argv);
	auto s1 = spectralWeightsFactory();
	auto s2 = spectralBroadeningFactory();
	s1->calculate(args);
	s2->calculate(args);
}


