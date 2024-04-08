#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Sunken {

	class SUNKEN_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

//Core Log Macros
#define SK_CORE_TRACE(...)	::Sunken::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define SK_CORE_INFO(...)	::Sunken::Log::GetCoreLogger()->info(__VA_ARGS__)
#define SK_CORE_WARN(...)	::Sunken::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define SK_CORE_ERROR(...)	::Sunken::Log::GetCoreLogger()->error(__VA_ARGS__)
#define SK_CORE_FATAL(...)	::Sunken::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//Client Log Macros
#define SK_TRACE(...)	::Sunken::Log::GetClientLogger()->trace(__VA_ARGS__)
#define SK_INFO(...)	::Sunken::Log::GetClientLogger()->info(__VA_ARGS__)
#define SK_WARN(...)	::Sunken::Log::GetClientLogger()->warn(__VA_ARGS__)
#define SK_ERROR(...)	::Sunken::Log::GetClientLogger()->error(__VA_ARGS__)
#define SK_FATAL(...)	::Sunken::Log::GetClientLogger()->fatal(__VA_ARGS__)