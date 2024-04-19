/* Fictional Person Program
 * ============================================================================
 * Name        : CSC450_CT1_mod1-0.cpp
 * Author      : victor Enogwe
 * Version     :
 * Copyright   :
 * Description : Hello World in C++, Ansi-style
 * ============================================================================
 *
 * To run within the same directory
 * Please ensure to rename the main functions for other CPP files
 * As there can only be one main function in this project configuration
 */

#include <iostream>
#include "FictionalPerson.h"

using std::cout;
using std::endl;
using std::printf;

int main() {
	FictionalPerson person("Victor", "Enogwe", "1234 Clover field Lane", "London", "E1 1AA");

	cout << person.toString() << endl;

	return 0;
}
