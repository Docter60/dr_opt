/*
test.cpp
*/

#include <iostream>

#include "dr_opt.h"

int main(int argc, char* args[]) {
	dr::setopt(argc, args);
	
	std::cout << "The lines printed below should comment about a, b, c, and d." << std::endl;

	if (dr::hasopt("a")) {
		std::cout << "a flag parameter: " << dr::getopt("a") << std::endl;
	}

	if (dr::hasopt("b")) {
		std::cout << "b option was found" << std::endl;
	}

	if (dr::hasopt("c")) {
		std::cout << "c flag parameter: " << dr::getopt("c") << std::endl;
	}

	if (!dr::hasopt("d")) {
		std::cout << "d flag intentionally not found" << std::endl;
	}

	std::cout << "Options count: " << dr::getoptc() << std::endl;

	return 0;
}
