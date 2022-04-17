#include "EntityManager.h"

namespace Hydromize {
	template<class T>
	EntityManager<T>::EntityManager()
	{

	}

	template<class T>
	void EntityManager<T>::AddEntity(T entity)
	{
		m_Entities.push_back(entity);
	}
}