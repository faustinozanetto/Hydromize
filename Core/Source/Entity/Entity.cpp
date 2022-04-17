#include "Entity.h"

namespace Hydromize {
	Entity::Entity() {
		// UUID Creation.
		GenerateUUID();
	}

	Entity::~Entity() {

	}

	void Entity::GenerateUUID()
	{
		// Creating random generator
		std::random_device rd;
		auto seed_data = std::array<int, std::mt19937::state_size> {};
		std::generate(std::begin(seed_data), std::end(seed_data), std::ref(rd));
		std::seed_seq seq(std::begin(seed_data), std::end(seed_data));
		std::mt19937 generator(seq);

		// Creating the uuid and asigning it.
		uuids::uuid_random_generator gen{ generator };
		m_UUID = gen();
	}
}
