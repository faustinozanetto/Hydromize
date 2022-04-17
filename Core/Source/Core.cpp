#include <iostream>

#include "Core.h"
#include <Entity/Plants/Plant.h>

int main()
{
	std::cout << "Hello, World!" << std::endl;
	Hydromize::Entity entity = Hydromize::Entity();
	auto Manager = Hydromize::EntityManager<Hydromize::Entity>();
	Manager.AddEntity(entity);

	Hydromize::PlantDetails details = { "Grand Green" };
	auto lettuce = Hydromize::Plant(details);
	auto plantsManager = Hydromize::EntityManager<Hydromize::Plant>();

	plantsManager.AddEntity(lettuce);
	for (auto plant : plantsManager.GetEntities()) {
		std::cout << "Plant UUID: " + uuids::to_string(plant.GetUUID()) << std::endl;
		std::cout << "Plant Variety: " + plant.GetPlantDetails().m_Variety << std::endl;
	}
  return 0;
}