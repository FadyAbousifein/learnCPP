#include <iostream>

struct web_data { 
    int ads_watched {}; 
    double percent_clicked {}; 
    double average_earning_per_ad{}; 
}; 

void print_struct(const web_data& web_data) {
    std::cout << "Ads watched: " << web_data.ads_watched 
        << "\nPercent clicked: " << web_data.percent_clicked 
        << "%\nAverage earning per ad $" << web_data.average_earning_per_ad << std::endl; 
}

web_data populate_struct() {
    std::cout << "Enter ads watched: ";
    int ads_watched {}; 
    std::cin >> ads_watched; 
    
    std::cout << "Enter percent clicked: ";
    double percent_clicked {}; 
    std::cin >> percent_clicked;

    std::cout << "Enter Average earning per ad: ";
    double average_earning_per_ad {}; 
    std::cin >> average_earning_per_ad;
    
    return {ads_watched, percent_clicked, average_earning_per_ad}; 
}

int main (int argc, char *argv[]) {
    print_struct(populate_struct()); 
    
    return 0;
}
