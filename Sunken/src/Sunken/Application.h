#pragma once

#include "Core.h"
namespace Sunken {
	class SUNKEN_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

	};

	Application* CreateApplication();
}

