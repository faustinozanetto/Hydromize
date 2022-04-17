#pragma once

#include "Core.h"

namespace Hydromize {
	class Entity {

	public:
		Entity();
		~Entity();

		[[nodiscard]] uuids::uuid GetUUID() const { return m_UUID; }
		void GenerateUUID();

	private:
		uuids::uuid m_UUID;
	};
}