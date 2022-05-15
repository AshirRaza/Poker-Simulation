#pragma once
#include<iostream>
#include<string>

class Player
{
private:
	std::string name;
	float ballance;
public:
	Player()
	{
		name = "No User";
		ballance = 0;
	}
	void setballance(float);
	void modifyballance(float);
	void setname(std::string);
	float getballance();
	std::string getname();
};

void Player::setname(std::string name)
{
	this->name = name;
}

std::string Player::getname()
{
	return name;
}

float Player::getballance()
{
	return ballance;
}

void Player::setballance(float ballance)
{
	this->ballance = ballance;
}

void Player::modifyballance(float ballance)
{
	this->ballance += ballance;
}