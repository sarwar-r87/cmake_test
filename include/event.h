#ifndef event_H
#define event_H

class event
{
  public:
    int m_year;
    int m_month;
    int m_day;

  public:
    event(int year, int month, int day)
    {
        m_year = year;
        m_month = month;
        m_day = day;
    }
};

#endif