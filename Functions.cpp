//
/*
 * Functions.cpp
 *
 *  Created on: Nov 5, 2017
 *      Author: keith
 */
#include <iostream>
#include <memory>

#include "./includes/Functions.h"
#include "./includes/Smalltalk_American.h"
#include "./includes/ST_American_DonutEnthusiest.h"
#include "./includes/Smalltalk_Brit.h"
#include "./includes/Watch.h"
#include "./includes/constants.h"

//create a vector with appropriate numbers of Smalltalk_Brit,Smalltalk_American and ST_American_DonutEnthusiest
//objects using unique pointers.  Since we are using c++11 returning this vector by value is fine since the 
//compiler will move the vector on return rather than recreate it (this means there is no copy penalty)
std::vector<std::unique_ptr<Smalltalk>> getPeople(int numBrit,
		int numAmerican, int numbAmericanDonutEnthusiest,
		int numWatches) {
	
	//create a vector to hold SmallTalk unique pointers
	std::vector<Smalltalk> people;

	//add brits to vector
	for (int i = 0; i < numBrit; i++){
		Smalltalk_Brit brit;
		people.push_back(brit);
	}

	//add americans  to vector
	for (int i = 0; i < numAmerican; i++){
		Smalltalk_Brit american;
		people.push_back(american);
	}

	//add american donut enthusiest  to vector
	for (int i = 0; i < numbAmericanDonutEnthusiest; i++){
		Smalltalk_Brit americanDonut;
		people.push_back(americanDonut);
	}

	//create some watches (as long as number watches <= numb people)
	int numPeople = numBrit + numAmerican + numbAmericanDonutEnthusiest;

	//then give the watches away to first NUM_WATCHES people in the vector
	// when you are finished using the vector you return
	//from this function(see Smalltalk header for hints)
	//return your vector
	return people;

}
