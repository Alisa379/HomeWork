#ifndef STOPWATCH_H
#define STOPWATCH_H
#include <QTimer>

class Stopwatch
{
public:
    QTimer *timer = new QTimer();
    Stopwatch();
    int minutes;
    int seconds;
    bool circleClicked;

    void update();
    void reset();
    void Start();
    void Stop();
};

#endif // STOPWATCH_H
