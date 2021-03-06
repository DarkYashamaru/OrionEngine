#pragma once
#include "Core.h"

namespace OrionEngine
{
	class ORION_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	Application* CreateApplication();
}

