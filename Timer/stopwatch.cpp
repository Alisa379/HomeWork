#include "stopwatch.h"

StopWatch::StopWatch() {
    sec = 0;
    minutes = 0;
    seconds = 0;
    circle = 0;
}

void StopWatch::update() {
    if (sec < 9) {
        sec++;
    }
    else {
        if (seconds < 59) {
            sec = 0;
            seconds++;
        }
        else {
            sec = 0;
            seconds = 0;
            minutes++;
        }
    }
}


void StopWatch::reset() {
    minutes = 0;
    seconds = 0;
    sec = 0;
    circle = 0;
}

void StopWatch::Start() {
    timer->start(100);
}

void StopWatch::Stop() {
    timer->stop();
}

