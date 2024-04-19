/*
 * FictionalPerson.cpp
 * Class definitions
 *
 * Created on: 13 Apr 2024
 * Author: victorenogwe
 */
#include <iostream>
#include "FictionalPerson.h"

using std::string;

FictionalPerson::FictionalPerson(
  const char* firstName,
	const char* lastName,
	const char* streetAddress,
	const char* city,
	const char* zipCode
) {
	setFirstName(firstName);
	setLastName(lastName);
	setStreetAddress(streetAddress);
	setCity(city);
	setZipCode(zipCode);
}

FictionalPerson::~FictionalPerson() {
	// TODO Auto-generated destructor stub
}

void FictionalPerson::setFirstName(const char* name) {
	this->firstName = name;
}

const char* FictionalPerson::getFirstName() const {
	return firstName;
}

void FictionalPerson::setLastName(const char* name) {
	this->lastName = name;
}

const char* FictionalPerson::getLastName() const {
   return lastName;
}

void FictionalPerson::setStreetAddress(const char* street) {
	this->streetAddress = street;
}

const char* FictionalPerson::getStreetAddress() const {
    return streetAddress;
}

void FictionalPerson::setCity(const char* name) {
	this->city = name;
}

const char* FictionalPerson::getCity() const {
    return city;
}

void FictionalPerson::setZipCode(const char* code) {
	this->zipCode = code;
}

const char* FictionalPerson::getZipCode() const {
    return zipCode;
}

const string FictionalPerson::toString() const {
    const string prefix = "First Name: ";

    return prefix
		  + firstName
		  + "\nLast Name: " + lastName
			+ "\nStreet Address:" + streetAddress
			+ "\nCity: " + city
			+ "\nZip Code: " + zipCode;
}
