#include "shareware.h"

Shareware::Shareware()
{
	installationDate = Date();
	term = 0;
}

Shareware::Shareware(string name, string producer, Date installationDate, int term) : Soft(name, producer)
{
	this->installationDate = installationDate;
	this->term = term;
{

Shareware::~Shareware()
{
}

void Shareware::setDate(Date installationDate)
{
	this->installationDate = installationDate;
}

void Shareware::setTerm(int term)
{
	this->term = term;
}

Date Shareware::getDate() const
{
	return installationDate;
}

int Shareware::getTerm() const
{
	return term;
}

void Shareware::showInfo() const
{
	cout << "\tShareware " << endl;
	Soft::showInfo();
	cout << "Installation date: " << installationDate << endl;
	cout << "Term: " << term << endl;
	cout << "finish date" << installationDate + term << endl;
}

bool Shareware::isAvaible() const
{
	return Date()<=installationDate+term;

}

void Shareware::load(ifstream& file)
{
	Soft::load(file);
	int day, month, year;
	file >> day >> month >> year;
	installationDate.setDay(day);
	installationDate.setMonth(month);
	installationDate.setYear(year);
	file >> term;
};