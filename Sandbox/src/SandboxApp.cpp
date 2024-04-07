#include "Sunken.h"

class Sandbox : public Sunken::Application {

public:
	Sandbox() 
	{

	}

	~Sandbox()
	{

	}

};

Sunken::Application* Sunken::CreateApplication()
{
	return new Sandbox();
}