#include "entity.hpp"

void Entity::attack(Entity* target)
{
	target->setCurrHealth(target->getCurrHealth() - this->attack());
}
