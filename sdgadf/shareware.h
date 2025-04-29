#pragma once
#include "Soft.h"
#include "Date.h"


class Shareware
	: public Soft
{
protected:
	Date installationDate;
    int term;
public:
    Shareware();
    Shareware(string name, string producer,Date installationDate,int term);
    virtual ~Shareware();

    void setDate(Date installationDate);
    void setTerm(int term);

    Date getDate() const;
    int getTerm() const;

    virtual void showInfo() const override;
    virtual bool isAvaible() const override;
    virtual void load(ifstream& file) override;
};

