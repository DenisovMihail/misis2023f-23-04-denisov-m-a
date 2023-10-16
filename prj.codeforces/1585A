#include <iostream>
#include <vector>
 
int main() {
    int num_sets = 0;
    std::cin >> num_sets;
 
    for (int set = 0; set < num_sets; set++) {
        int num_days = 0;
        std::cin >> num_days;
 
        std::vector<int> watering(num_days);
        for (int day = 0; day < num_days; day++) {
            std::cin >> watering[day];
        }
 
        int height = 1;
        int consecutive_days_without_water = 0;
 
        for (int day = 0; day < num_days; day++) {
            if (watering[day] == 1) {
                height += 1;
                if (day > 0 && watering[day - 1] == 1) {
                    height += 4;
                }
                consecutive_days_without_water = 0;
            } else {
                consecutive_days_without_water++;
                if (consecutive_days_without_water >= 2) {
                    std::cout << -1 << std::endl;
                    break;
                }
            }
        }
 
        if (consecutive_days_without_water < 2) {
            std::cout << height << std::endl;
        }
    }
 
    return 0;
}
