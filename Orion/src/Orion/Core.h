#pragma once

#ifdef ORION_PLATFORM_WINDOWS
	#ifdef ORION_BUILD_DLL
		#define ORION_API __declspec(dllexport)
	#else
		#define ORION_API __declspec(dllimport)
	#endif // ORION_BUILD_DLL
#endif // ORION_PLATFORM_WINDOWS

