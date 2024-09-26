#ifndef STOPWATCH_H
#define STOPWATCH_H
#include <QTimer>

class Stopwatch
{
public:
    Stopwatch();
    int minutes;
    int seconds;
    int milliseconds;
    bool circleClicked;

    void update();
    void reset();
};

#endif // STOPWATCH_H
