#pragma once
#define _TIMESPEC_DEFINED

#include <pthread.h>
#include <types.h>

namespace Core::Libraries::LibC::cxa {
int PS4_SYSV_ABI __cxa_guard_acquire(u64* guard_object);
void PS4_SYSV_ABI __cxa_guard_release(u64* guard_object);
void PS4_SYSV_ABI __cxa_guard_abort(u64* guard_object);
}  // namespace Core::Libraries::LibC::Cxa