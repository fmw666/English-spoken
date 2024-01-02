#include "simpio.h"
#include "ctype.h"
#include <string.h>
#include "strlib.h"
typedef enum
{
    Jua,
    Feb,
    Mar,
    Apr,
    May,
    Jun,
    Jul,
    Aug,
    Sec,
    Oct,
    Nov,
    Dec
} MonthT;
string DateString(int day, MonthT month, int year);
string Day(int date);
string Year(int years);
string Month(MonthT months);

int main()
{
    printf("Please");
    DateString(22, 11, 1963);

    return 0;
}
string DateString(int day, MonthT month, int year)
{
    string stickA = Concat(Day(day), Month(month));
    string stickB = Concat(stickA, Year(year));
    return stickB;
}
string Day(int date)
{
    // string day;
    string day = sprintf(day, "%d", date);
    //      string ConvertToUpperCase(string s);
    // string ConvertToUpperCase(string s);

    // return day;
}
string Year(int years)
{

    string year = sprintf(year, "-%d", years);
    return year;
}
string Month(MonthT months)
{
    switch (months)
    {
    case Jua:
        return "-Jua";
    case Feb:
        return "-Feb";
    case Mar:
        return "-Mar";
    case Apr:
        return "-Apr";
    case May:
        return "-May";
    case Jun:
        return "-Jun";
    case Jul:
        return "-Jul";
    case Aug:
        return "-Aug";
    case Sec:
        return "-Sec";
    case Oct:
        return "-Oct";
    case Nov:
        return "-Nov";
    case Dec:
        return "-Dec";
    }
}