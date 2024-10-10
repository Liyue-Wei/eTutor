#include <iostream>
#define sec_day (60*60*24)
#define sec_hour (60*60)

int main() {
    int i;
    scanf("%d", &i);
    std::printf("%d days\n%d hours\n%d minutes\n%d seconds\n", i/sec_day, (i%sec_day)/sec_hour, ((i%sec_day)%sec_hour)/60, ((i%sec_day)%sec_hour)%60);
}