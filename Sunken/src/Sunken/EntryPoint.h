#pragma once

#ifdef SK_PLATFORM_WINDOWS

extern Sunken::Application* Sunken::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Sunken::CreateApplication();
	app->Run();
	delete app;
}
#endif
