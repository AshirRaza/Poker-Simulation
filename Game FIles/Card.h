#pragma once
#include<string>
#include<time.h>
using namespace System;

class Card
{
private:
	int value;
	int family;
public:
	Card()
	{
		value = 0;
		family = 0;
	}
	void setvalue();
	int getvalue();
	void setfamily();
	int getfamily();
	int getcard();
	String^ get_string_value();
	String^ get_string_family();
};

void Card::setvalue()
{
	srand(time(NULL));
	value = rand() % 13 + 1;
}

int Card::getvalue()
{
	return value;
}

void Card::setfamily()
{
	srand(time(NULL));
	family = rand() % 4 + 1;
}

int Card::getfamily()
{
	return family;
}

String^ Card::get_string_value()
{
	String^ x;
	switch (getvalue())
	{
	case 1:
		x = "Ace"; break;
	case 2:
		x = "Two"; break;
	case 3:
		x = "Three"; break;
	case 4:
		x = "Four"; break;
	case 5:
		x = "Five"; break;
	case 6:
		x = "Six"; break;
	case 7:
		x = "Seven"; break;
	case 8:
		x = "Eight"; break;
	case 9:
		x = "Nine"; break;
	case 10:
		x = "Ten"; break;
	case 11:
		x = "Jack"; break;
	case 12:
		x = "Queen"; break;
	case 13:
		x = "King"; break;
	}
	return x;
}

String^ Card::get_string_family()
{
	String^ x;
	switch (getfamily())
	{
	case 1:
		x = "Spades"; break;
	case 2:
		x = "Hearts"; break;
	case 3:
		x = "Clubs"; break;
	case 4:
		x = "Diamond"; break;
	}
	return x;
}

int Card::getcard()
{
	setvalue();
	setfamily();
	if (getvalue() == 1 && getfamily() == 1)
		return 1;
	else if (getvalue() == 2 && getfamily() == 1)
		return 2;
	else if (getvalue() == 3 && getfamily() == 1)
		return 3;
	else if (getvalue() == 4 && getfamily() == 1)
		return 4;
	else if (getvalue() == 5 && getfamily() == 1)
		return 5;
	else if (getvalue() == 6 && getfamily() == 1)
		return 6;
	else if (getvalue() == 7 && getfamily() == 1)
		return 7;
	else if (getvalue() == 8 && getfamily() == 1)
		return 8;
	else if (getvalue() == 9 && getfamily() == 1)
		return 9;
	else if (getvalue() == 10 && getfamily() == 1)
		return 10;
	else if (getvalue() == 11 && getfamily() == 1)
		return 11;
	else if (getvalue() == 12 && getfamily() == 1)
		return 12;
	else if (getvalue() == 13 && getfamily() == 1)
		return 13;
	else if (getvalue() == 1 && getfamily() == 2)
		return 14;
	else if (getvalue() == 2 && getfamily() == 2)
		return 15;
	else if (getvalue() == 3 && getfamily() == 2)
		return 16;
	else if (getvalue() == 4 && getfamily() == 2)
		return 17;
	else if (getvalue() == 5 && getfamily() == 2)
		return 18;
	else if (getvalue() == 6 && getfamily() == 2)
		return 19;
	else if (getvalue() == 7 && getfamily() == 2)
		return 20;
	else if (getvalue() == 8 && getfamily() == 2)
		return 21;
	else if (getvalue() == 9 && getfamily() == 2)
		return 22;
	else if (getvalue() == 10 && getfamily() == 2)
		return 23;
	else if (getvalue() == 11 && getfamily() == 2)
		return 24;
	else if (getvalue() == 12 && getfamily() == 2)
		return 25;
	else if (getvalue() == 13 && getfamily() == 2)
		return 26;
	else if (getvalue() == 1 && getfamily() == 3)
		return 27;
	else if (getvalue() == 2 && getfamily() == 3)
		return 28;
	else if (getvalue() == 3 && getfamily() == 3)
		return 29;
	else if (getvalue() == 4 && getfamily() == 3)
		return 30;
	else if (getvalue() == 5 && getfamily() == 3)
		return 31;
	else if (getvalue() == 6 && getfamily() == 3)
		return 32;
	else if (getvalue() == 7 && getfamily() == 3)
		return 33;
	else if (getvalue() == 8 && getfamily() == 3)
		return 34;
	else if (getvalue() == 9 && getfamily() == 3)
		return 35;
	else if (getvalue() == 10 && getfamily() == 3)
		return 36;
	else if (getvalue() == 11 && getfamily() == 3)
		return 37;
	else if (getvalue() == 12 && getfamily() == 3)
		return 38;
	else if (getvalue() == 13 && getfamily() == 3)
		return 39;
	else if (getvalue() == 1 && getfamily() == 4)
		return 40;
	else if (getvalue() == 2 && getfamily() == 4)
		return 41;
	else if (getvalue() == 3 && getfamily() == 4)
		return 42;
	else if (getvalue() == 4 && getfamily() == 4)
		return 43;
	else if (getvalue() == 5 && getfamily() == 4)
		return 44;
	else if (getvalue() == 6 && getfamily() == 4)
		return 45;
	else if (getvalue() == 7 && getfamily() == 4)
		return 46;
	else if (getvalue() == 8 && getfamily() == 4)
		return 47;
	else if (getvalue() == 9 && getfamily() == 4)
		return 48;
	else if (getvalue() == 10 && getfamily() == 4)
		return 49;
	else if (getvalue() == 11 && getfamily() == 4)
		return 50;
	else if (getvalue() == 12 && getfamily() == 4)
		return 51;
	else if (getvalue() == 13 && getfamily() == 4)
		return 52;
}