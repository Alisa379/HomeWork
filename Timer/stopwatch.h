#ifndef STOPWATCH_H
#define STOPWATCH_H
#include <QTimer>

class StopWatch
{
public:
    StopWatch();
    QTimer *timer = new QTimer();
    int sec;
    int seconds;
    int minutes;
    int circle;

    void update();
    void reset();
    void Start();
    void Stop();
};

#endif // STOPWATCH_H
