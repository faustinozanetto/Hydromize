#pragma once
#include <vector>

namespace Hydromize {
	template <class T>
	class EntityManager {
	public:
		EntityManager();

		void AddEntity(T entity);
		std::vector<T> GetEntities() const { return m_Entities; }

	private:
		std::vector<T> m_Entities;
	};
	

}