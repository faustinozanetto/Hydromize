#include <iostream>

#include "Core.h"
#include <Entity/Plants/Plant.h>

using namespace Hydromize;

int main()
{
	std::cout << "Hello, World!" << std::endl;
	Entity entity = Entity();
	auto Manager = EntityManager<Entity>();
	Manager.AddEntity(entity);

	PlantDetails details = { "Grand Green", "lactuca-sativa", EPlantType::LETTUCE };
	auto lettuce = Plant(details);
	auto plantsManager = EntityManager<Plant>();

	plantsManager.AddEntity(lettuce);
	for (auto plant : plantsManager.GetEntities()) {
		auto plantDetails = plant.GetPlantDetails();
		std::cout << "========================================================" << std::endl;
		std::cout << "Plant UUID: " + uuids::to_string(plant.GetUUID()) << std::endl;
		std::cout << "Plant Variety: " + plantDetails.m_Variety << std::endl;
		std::cout << "Plant Scientific: " + plantDetails.m_ScientificName << std::endl;
		std::cout << "========================================================" << std::endl;
	}
  return 0;
}