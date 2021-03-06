
#include "Scheduler.h"

#include <stdarg.h>

using namespace Empty;

extern const AP_HAL::HAL& hal;

EmptyScheduler::EmptyScheduler()
{}

void EmptyScheduler::init(void* machtnichts)
{}

void EmptyScheduler::delay(uint16_t ms)
{}

void EmptyScheduler::delay_microseconds(uint16_t us)
{}

void EmptyScheduler::register_delay_callback(AP_HAL::Proc k,
            uint16_t min_time_ms)
{}

void EmptyScheduler::register_timer_process(AP_HAL::MemberProc k)
{}

void EmptyScheduler::register_io_process(AP_HAL::MemberProc k)
{}

void EmptyScheduler::register_timer_failsafe(AP_HAL::Proc, uint32_t period_us)
{}

void EmptyScheduler::suspend_timer_procs()
{}

void EmptyScheduler::resume_timer_procs()
{}

bool EmptyScheduler::in_timerprocess() {
    return false;
}

void EmptyScheduler::begin_atomic()
{}

void EmptyScheduler::end_atomic()
{}

bool EmptyScheduler::system_initializing() {
    return false;
}

void EmptyScheduler::system_initialized()
{}

void EmptyScheduler::reboot(bool hold_in_bootloader) {
    for(;;);
}
