#include "Player.h"
//#include <string>



Player::Player(string name,int score)
{
	this->name = name;
	this->score = score;
	next = NULL;
}

Player *Player::getNext(){
	return next;
}

void Player::setNext(Player *next){
	this->next=next;
}

int Player::getScore(){
	return score;
}

string Player::getName(){
	return name;
}