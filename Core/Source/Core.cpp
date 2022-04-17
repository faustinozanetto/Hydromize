#include <iostream>

#include "Core.h"

int main()
{
  std::cout << "Hello, World!" << std::endl;
  Hydromize::Entity entity = Hydromize::Entity();
  auto Manager = Hydromize::EntityManager<Hydromize::Entity>();
  Manager.AddEntity(entity);
  std::cout << Manager.GetEntities()[0].GetUUID() << std::endl;
  return 0;
}