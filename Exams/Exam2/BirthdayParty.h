#ifndef _BIRTHDAY_PARTY_H_
#define _BIRTHDAY_PARTY_H_

#include <iostream>
#include <list>
#include <vector>
#include <string>
#include "Party.h"
#include "BirthdayPartyTicket.h"

// FIXME 2: Create BirthdayParty and BirthdayPartyTicket to host birthday parties!
// FIXME 3: Update PartyFactory::factory() to allow it to be the ONLY method for creating a BirthdayParty
/**
* BirthdayParty is derived from Party
*/
class BirthdayParty : public Party
{

private:
	std::list<std::string> roomsie;
	BirthdayParty() {}
	friend class PartyFactory;

public:
	PartyTicket * add(std::string name) {
		roomsie.push_front(name);
		return new BirthdayPartyTicket(this, roomsie.begin());
	}

	void list() {
		
		std::list<std::string>::iterator iter = roomsie.begin();
		while (iter != roomsie.end())
		{
			std::cout << *iter + " ";
			++iter;
		}
	}

	void remove(std::list<std::string>::iterator it) {
		roomsie.erase(it);
	}
};

#endif