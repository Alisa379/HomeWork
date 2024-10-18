#ifndef STOPWATCH_H
#define STOPWATCH_H
#include <QTimer>

class StopWatch
{
public:
    StopWatch();
    QTimer *timer = new QTimer();


    void update();
    void cupdate();
    void reset();
    void Start();
    void Stop();

    int getSec();
    int getSeconds();
    int getMinutes();
    int getCSec();
    int getCSeconds();
    int getCMinutes();
    int getCircle();
    void setCircle();

private:
    int sec;
    int seconds;
    int minutes;
    int circle;
    int csec;
    int cseconds;
    int cminutes;
};

#endif // STOPWATCH_H
