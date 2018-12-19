//
//  DateConverter.h
//  LunarCalendar
//
//  Created by Vinh Vu on 12/10/18.
//  Copyright © 2018 Vu Dinh Vinh. All rights reserved.
//

#ifndef DateConverter_h
#define DateConverter_h

#include <stdio.h>
#include <math.h>

struct VVDate {
    int  year;
    int  month;
    int  day;
    double leap;
};

extern double INT(double d);

extern double jdFromDate(int dd, int mm, int yy);

extern struct VVDate jdToDate(double jd);

extern double NewMoon(double k);

extern double SunLongitude(double jdn);

extern double getSunLongitude(double dayNumber, double timeZone);

extern double getNewMoonDay(double k, double timeZone);

extern double getLunarMonth11(double yy, double timeZone);

extern double getLeapMonthOffset(double a11, double timeZone);

extern struct VVDate convertSolar2Lunar(int dd, int mm, int yy, double timeZone);

extern struct VVDate convertLunar2Solar(int lunarDay, int lunarMonth, int lunarYear, double lunarLeap, double timeZone);

#endif /* DateConverter_h */
