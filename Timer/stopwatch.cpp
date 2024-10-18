#include "stopwatch.h"

StopWatch::StopWatch() {
    sec = 0;
    minutes = 0;
    seconds = 0;
    csec = 0;
    cminutes = 0;
    cseconds = 0;
    circle = 0;
}

void StopWatch::update() {
    if (sec < 9) {
        sec++;
        csec++;
    }
    else {
        if (seconds < 59) {
            sec = 0;
            csec = 0;
            seconds++;
            cseconds++;
        }
        else {
            sec = 0;
            csec = 0;
            seconds = 0;
            cseconds = 0;
            minutes++;
            cminutes++;
        }
    }
}

void StopWatch::cupdate() {
    csec = 0;
    cseconds = 0;
    cminutes = 0;
}


void StopWatch::reset() {
    minutes = 0;
    seconds = 0;
    sec = 0;
    cminutes = 0;
    cseconds = 0;
    csec = 0;
    circle = 0;
}

void StopWatch::Start() {
    timer->start(100);
}

void StopWatch::Stop() {
    timer->stop();
}

int StopWatch::getSec() {
    return sec;
}

int StopWatch::getSeconds() {
    return seconds;
}

int StopWatch::getMinutes() {
    return minutes;
}

int StopWatch::getCircle() {
    return circle;
}

int StopWatch::getCSec() {
    return csec;
}

int StopWatch::getCSeconds() {
    return cseconds;
}

int StopWatch::getCMinutes() {
    return cminutes;
}

void StopWatch::setCircle() {
    circle++;
}


