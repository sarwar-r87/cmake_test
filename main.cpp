#include <iostream>
#include "Date.h"
#include <pthread.h>
#include "event.h"
using namespace std;

int main()
{
    cout << "helloworld!" << endl;
    Date da(1, 2, 44);
    
pthread_mutex_t test;

    event evn (5,3,3);
#ifdef MONTH
    cout << evn.m_month << endl;
#endif
}