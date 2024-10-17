#include "stopwatch.h"

Stopwatch::Stopwatch() {
    minutes = 0;
    seconds = 0;
    circle = 0;
}

void Stopwatch::update() {
    if (sec < 10) {
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


void Stopwatch::reset() {
    minutes = 0;
    seconds = 0;
    sec = 0;
    circle = 0;
}

void Stopwatch::Start() {
    timer->start(100);
}

void Stopwatch::Stop() {
    timer->stop();
}
