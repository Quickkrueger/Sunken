#pragma once

#ifdef SK_PLATFORM_WINDOWS
	#ifdef SK_BUILD_DLL
		#define SUNKEN_API __declspec(dllexport)
	#else
		#define SUNKEN_API __declspec(dllimport)
	#endif
#else
	#error Sunken only suppotys Windows!
#endif