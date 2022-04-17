#pragma once

#include "Core.h"

namespace Hydromize {

	enum EPlantType {
		NONE,
		LETTUCE,
		KALE,
	};

	struct PlantDetails {
		std::string m_Variety;
		std::string m_ScientificName;
		EPlantType m_Type;
	};

	class Plant : public Entity {
	public:
		Plant(PlantDetails plantDetails);
		Plant() = default;
		~Plant() = default;

		PlantDetails GetPlantDetails() const { return m_PlantDetails; }

	private:
		PlantDetails m_PlantDetails;
	};
}