#include "stopwatch.h"

Stopwatch::Stopwatch() {
    minutes = 0;
    seconds = 0;
    circleClicked = 0;
}

void Stopwatch::update() {
    if (seconds < 59) {
        seconds++;
    }
    else {
        seconds = 0;
        minutes++;
    }
}


void Stopwatch::reset() {
    minutes = 0;
    seconds = 0;
}

void Stopwatch::Start() {
    timer->start(1000);
}

void Stopwatch::Stop() {
    timer->stop();
}
