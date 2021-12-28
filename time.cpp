#include <iostream>
using namespace std;

struct TIME
{
  int seconds;
  int minutes;
  int hours;
};

void TimeDif(struct TIME, struct TIME, struct TIME *);

int main()
{
    struct TIME t1, t2, dif;

    cout << "Enter start time." << endl;
    cout << "Enter hours, minutes and seconds respectively: ";
    cin >> t1.hours >> t1.minutes >> t1.seconds;

    cout << "Enter stop time." << endl;
    cout << "Enter hours, minutes and seconds respectively: ";
    cin >> t2.hours >> t2.minutes >> t2.seconds;

    TimeDif(t1, t2, &dif);

    cout << endl << "TIME DIFFERENCE: " << t1.hours << ":" << t1.minutes << ":" << t1.seconds;
    cout << " - " << t2.hours << ":" << t2.minutes << ":" << t2.seconds;
    cout << " = " << dif.hours << ":" << dif.minutes << ":" << dif.seconds;
    return 0;
}
void TimeDif(struct TIME t1, struct TIME t2, struct TIME *dif)
{

    if(t2.seconds > t1.seconds)
    {
        --t1.minutes;
        t1.seconds += 60;
    }

    dif->seconds = t1.seconds - t2.seconds;
    if(t2.minutes > t1.minutes)
    {
        --t1.hours;
        t1.minutes += 60;
    }
    dif->minutes = t1.minutes-t2.minutes;
    dif->hours = t1.hours-t2.hours;
}
