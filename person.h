#include <iostream>

class Person
{
public: 
  Person(std::string name) 
	: name_(std::move(name))
  {}

private:
  std::string name_;
} 
