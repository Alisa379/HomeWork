#include "stopwatch.h"

Stopwatch::Stopwatch() {
    minutes = 0;
    seconds = 0;
    milliseconds = 0;
    circleClicked = 0;
}

void Stopwatch::update() {
    if (milliseconds < 59) {
        milliseconds++;
    }
    else {
        milliseconds = 0;
        if (seconds < 59) {
            seconds++;
        }
        else {
            seconds = 0;
            minutes++;
        }
    }
}


void Stopwatch::reset() {
    minutes = 0;
    seconds = 0;
    milliseconds = 0;
    circleClicked = 0;
}

