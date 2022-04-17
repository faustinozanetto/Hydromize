#pragma once

#include "Core.h"

namespace Hydromize {
	struct PlantDetails {
		std::string m_Variety;
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