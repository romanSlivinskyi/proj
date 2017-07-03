#include <iostream>

namespace people
{
class Person
{
public: 
  Person(std::string name) 
	: name_(std::move(name))
  {}
  
  auto getName() { return name_; }

private:
  std::string name_;
  std::string surname_;
} 
}

