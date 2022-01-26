#include <iostream>

class Entity {
public : 
	void GetName() {
		std::cout << "Entity" << std::endl;
	}

};


class Player : public Entity {

private : 
	std::string m_name;

public : 

	Player(std::string name) {

		m_name = name; 
	};

	void GetName() {
		std::cout << m_name << std::endl;
	}

};


int main() {

	Entity* e = new Entity();

	e->GetName();

	Player* p = new Player("Maza");

	p->GetName();

	Entity* e1 = &p;

	e1->GetName();


}