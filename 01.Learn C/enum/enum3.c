

#include <stdio.h>

enum Day {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

int main() {
    enum Day today = THURSDAY ;

    switch (today) {
        case MONDAY:
            printf("It's Monday:%d\n",today);
            break;
        case TUESDAY:
            printf("It's Tuesday\n");
            break;
        case WEDNESDAY:
            printf("It's Wednesday:%d\n",today);
            break;
        case THURSDAY:
            printf("It's Thursday:%d\n",today);
            break;
        case FRIDAY:
            printf("It's Friday\n");
            break;
        case SATURDAY:
            printf("It's Saturday\n");
            break;
        case SUNDAY:
            printf("It's Sunday\n");
            break;
        default:
            printf("Invalid day\n");
            break;
    }

    return 0;
}

