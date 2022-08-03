#ifndef RECORD_H
#define RECORD_H
#include "Player.cpp"


class Record
{
	Player *head;
	public:
		Record();
		~Record();
		void insert(string,int);
		void setHead(Player *);
		Player *getHead();
		void print();
		bool isEmpty();
	protected:
};

#endif
