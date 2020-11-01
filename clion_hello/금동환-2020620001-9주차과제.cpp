#include <iostream>
#include <iomanip>

using namespace std;

bool isLeapYear(int year){
    if((year%4==0&&year%100!=0)||year%400==0)
        return true;
    return false;
}

char* getMonthName(int mon){
    switch(mon){
        case 1:  return "january";
        case 2:  return "february";
        case 3:  return "march";
        case 4:  return "april";
        case 5:  return "may";
        case 6:  return "june";
        case 7:  return "july";
        case 8:  return "agust";
        case 9:  return "september";
        case 10: return "october";
        case 11: return "november";
        case 12: return "december";
    }
    return "";
}

int getMonthDays(int yy, int mm){
    switch(mm){
        case 2:  return isLeapYear(yy) ? 29 : 28;
        case 4:  return 30;
        case 6:  return 30;
        case 9:  return 30;
        case 11: return 30;
        default: return 31;
    }
    return 31;
}

//0 : sun
//1 : mon
//2 : tue
//3 : wed
//4 : thu
//5 : fri
//6 : sat
int getMonthFirst(int yy, int mm){
    // 1980년1월1일(화요일)
    int fd = 2;
    for (int cy = 1980 ; cy < yy ; cy++){
        fd+= isLeapYear(cy) ? 2 : 1;
    }
    fd = fd % 7;
    for (int cm = 1 ; cm < mm ; cm++){
        fd+= getMonthDays(yy, cm);
        fd = fd % 7;
    }

    return fd;
}

void outputCal(int yy , int mm ){
    int firstD = getMonthFirst(yy, mm);
    int lastD = getMonthDays(yy, mm);
    int cal[5][7] = {0,};

    int idxW = 0, idxD = firstD;
    for (int cd = 0 ; cd < lastD ; cd++){
        cal[idxW][idxD++] = (cd+1);
        if (idxD > 6){
            idxD = 0;
            idxW++;
        }
    }

    for (int ww = 0 ; ww < 5 ; ww++){
        cout << "----------------------------" << endl;
        for (int dd = 0 ; dd < 7 ; dd++){
            if (cal[ww][dd] > 0)
                cout << "  " << std::setfill('0') << std::setw(2) << cal[ww][dd];
            else
                cout << "  " << "  ";
        }
        cout << "" << endl;
    }
    cout << "----------------------------" << endl;
}


int main() {
    bool retry = false;
    do {
        cout << "1980년부터 2030년까지 중의 년월을 입력하세요. (예:2003 5)" << endl;

        int year=1980, month=1;
        cin >> year;
        cin >> month;
        cout << "입력하신 달은 " << year << "년 " << month << "월 입니다." << endl;
        if (year > 2030 || 1980 > year || month > 12 || 1 > month)
        {
            retry = true;
            continue;
        }
        cout << "\t< " << year << " " << getMonthName(month) << " >" << endl;
        cout << " Sun Mon Tue Wed Thu Fri Sat" << endl;
        cout << "============================" << endl;

        outputCal(year, month);

        char answer;
        cout << "다시 입력하시겠습니까? (Y/N)" << endl;
        cin >> answer;
        if (cin.fail()){
            retry = false;
        } else {
            switch (answer) {
                case 'y':
                case 'Y':
                    retry = true;
                    break;
                case 'n':
                case 'N':
                default:
                    retry = false;
                    break;
            }
        }
    } while(retry);

    return 0;
}