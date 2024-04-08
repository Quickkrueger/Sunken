#pragma once

#ifdef SK_PLATFORM_WINDOWS

extern Sunken::Application* Sunken::CreateApplication();

int main(int argc, char** argv)
{
	Sunken::Log::Init();
	SK_CORE_WARN("Initialized Log!");

	auto app = Sunken::CreateApplication();
	app->Run();
	delete app;
}
#endif
