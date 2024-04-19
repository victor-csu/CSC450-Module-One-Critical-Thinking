/*
 * FictionalPerson.h
 * Class header
 *
 * Created on: 13 Apr 2024
 * Author: victorenogwe
 */
#ifndef FICTIONALPERSON_H_
#define FICTIONALPERSON_H_

#include <iostream>

using std::string;

class FictionalPerson {
	const char* firstName;
	const char* lastName;
	const char* streetAddress;
	const char* city;
	const char* zipCode;
	void setFirstName(const char* firstName);
	void setLastName(const char* lastName);
	void setStreetAddress(const char* streetAddress);
	void setCity(const char* city);
	void setZipCode(const char* zipCode);
public:
	FictionalPerson(const char* firstName, const char* lastName, const char* streetAddress, const char* city, const char* zipCode);
	virtual ~FictionalPerson();

	const char* getFirstName() const;

	const char* getLastName() const;

	const char* getStreetAddress() const;

	const char* getCity() const;

	const char* getZipCode() const;

	const string toString() const;
};

#endif /* FICTIONALPERSON_H_ */
