#include "Soft.h"

Soft::Soft()
{
	name = "undefined";
	company = "undefined";
}

Soft::Soft(string name, string company)
{
	this->name = name;
	this->company = company;
}

Soft::~Soft()
{
}

void Soft::setName(string name)
{
	this->name = name;
}

void Soft::setCompany(string company)
{
	this->company = company;
}

string Soft::getName() const
{
    return name;
}

string Soft::getCompany() const
{
    return company;
}

void Soft::showInfo() const
{
	cout << "Name: " << name << endl;
	cout << "Company: " << company << endl;
}



void Soft::load(ifstream& file)
{
	getline(file, name);
	getline(file, company);
}
