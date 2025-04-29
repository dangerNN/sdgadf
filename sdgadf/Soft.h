#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Soft
{
protected:
	string name;
	string company;
public:
	Soft();
	Soft(string name, string company);
	virtual ~Soft();

	void setName(string name);
	void setCompany(string company);

	string getName()const;
	string getCompany()const;

	virtual void showInfo()const;

	virtual bool isAvaible()const = 0;

	virtual void load(ifstream&file);










};