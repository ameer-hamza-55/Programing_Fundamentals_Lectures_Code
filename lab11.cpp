//25. Travel Expenses
#include <iostream>
#include <iomanip>
using namespace std;
// Function prototypes
int getTotalDays();
void getDepartureAndArrivalTimes(int &departureTime, int &arrivalTime, int totalDays);
double getAirfare();
double getCarRental();
double getMilesDriven();
double getParkingFees(int totalDays);
double getTaxiFees(int totalDays);
double getConferenceFees();
double getHotelExpenses(int totalDays);
double getMealExpenses(int departureTime, int arrivalTime, int totalDays);
void calculateAndDisplayExpenses(int totalDays, int departureTime, int arrivalTime,
                                 double airfare, double carRental, double milesDriven,
                                 double parkingFees, double taxiFees, double conferenceFees,
                                 double hotelExpenses, double mealExpenses);
int main() {
    int totalDays = getTotalDays();
    int departureTime, arrivalTime;
    getDepartureAndArrivalTimes(departureTime, arrivalTime, totalDays);
    double airfare = getAirfare();
    double carRental = getCarRental();
    double milesDriven = getMilesDriven();
    double parkingFees = getParkingFees(totalDays);
    double taxiFees = getTaxiFees(totalDays);
    double conferenceFees = getConferenceFees();
    double hotelExpenses = getHotelExpenses(totalDays);
    double mealExpenses = getMealExpenses(departureTime, arrivalTime, totalDays);
    calculateAndDisplayExpenses(totalDays, departureTime, arrivalTime, airfare,
                                carRental, milesDriven, parkingFees, taxiFees,
                                conferenceFees, hotelExpenses, mealExpenses);
    return 0;
}
int getTotalDays() {
    int days;
    do {
        cout << "Enter the total number of days spent on the trip: ";
        cin >> days;
        if (days < 1) {
            cout << "Number of days must be at least 1. Please try again." << endl;
        }
    } while (days < 1);
    return days;
}
void getDepartureAndArrivalTimes(int &departureTime, int &arrivalTime, int totalDays) {
    do {
        cout << "Enter the time of departure on the first day (0-23): ";
        cin >> departureTime;
        if (departureTime < 0 || departureTime > 23) {
            cout << "Invalid time. Please enter a time between 0 and 23." << endl;
        }
    } while (departureTime < 0 || departureTime > 23);
    do {
        cout << "Enter the time of arrival back home on the last day (0-23): ";
        cin >> arrivalTime;
        if (arrivalTime < 0 || arrivalTime > 23) {
            cout << "Invalid time. Please enter a time between 0 and 23." << endl;
        }
    } while (arrivalTime < 0 || arrivalTime > 23);
}
double getAirfare() {
    double airfare;
    do {
        cout << "Enter the amount of round-trip airfare: $";
        cin >> airfare;
        if (airfare < 0) {
            cout << "Airfare cannot be negative. Please try again." << endl;
        }
    } while (airfare < 0);
    return airfare;
}
double getCarRental() {
    double carRental;
    do {
        cout << "Enter the amount of car rentals: $";
        cin >> carRental;
        if (carRental < 0) {
            cout << "Car rental cannot be negative. Please try again." << endl;
        }
    } while (carRental < 0);
    return carRental;
}
double getMilesDriven() {
    double miles;
    do {
        cout << "Enter the miles driven using a private vehicle: ";
        cin >> miles;
        if (miles < 0) {
            cout << "Miles driven cannot be negative. Please try again." << endl;
        }
    } while (miles < 0);
    return miles * 0.27; // Calculate vehicle expense
}
double getParkingFees(int totalDays) {
    double totalParking = 0.0;
    for (int day = 1; day <= totalDays; ++day) {
        double dailyFee;
        do {
            cout << "Enter parking fees for day " << day << ": $";
            cin >> dailyFee;
            if (dailyFee < 0) {
                cout << "Parking fee cannot be negative. Please try again." << endl;
            }
        } while (dailyFee < 0);
        totalParking += dailyFee;
    }
    return totalParking;
}
double getTaxiFees(int totalDays) {
    double totalTaxi = 0.0;
    for (int day = 1; day <= totalDays; ++day) {
        double dailyFee;
        do {
            cout << "Enter taxi fees for day " << day << ": $";
            cin >> dailyFee;
            if (dailyFee < 0) {
                cout << "Taxi fee cannot be negative. Please try again." << endl;
            }
        } while (dailyFee < 0);
        totalTaxi += dailyFee;
    }
    return totalTaxi;
}
double getConferenceFees() {
    double conferenceFees;
    do {
        cout << "Enter conference or seminar registration fees: $";
        cin >> conferenceFees;
        if (conferenceFees < 0) {
            cout << "Conference fees cannot be negative. Please try again." << endl;
        }
    } while (conferenceFees < 0);
    return conferenceFees;
}
double getHotelExpenses(int totalDays) {
    double totalHotel = 0.0;
    for (int night = 1; night < totalDays; ++night) {
        double nightlyFee;
        do {
            cout << "Enter hotel expenses for night " << night << ": $";
            cin >> nightlyFee;
            if (nightlyFee < 0) {
                cout << "Hotel expense cannot be negative. Please try again." << endl;
            }
        } while (nightlyFee < 0);
        totalHotel += nightlyFee;
    }
    return totalHotel;
}
double getMealExpenses(int departureTime, int arrivalTime, int totalDays) {
    double totalMeals = 0.0;
    // First day meals
    if (departureTime < 7) {
        double breakfast;
        do {
            cout << "Enter breakfast expense for the first day: $";
            cin >> breakfast;
            if (breakfast < 0) {
                cout << "Meal expense cannot be negative. Please try again." << endl;
            }
        } while (breakfast < 0);
        totalMeals += breakfast;
    }
    if (departureTime < 12) {
        double lunch;
        do {
            cout << "Enter lunch expense for the first day: $";
            cin >> lunch;
            if (lunch < 0) {
                cout << "Meal expense cannot be negative. Please try again." << endl;
            }
        } while (lunch < 0);
        totalMeals += lunch;
    }
    if (departureTime < 18) {
        double dinner;
        do {
            cout << "Enter dinner expense for the first day: $";
            cin >> dinner;
            if (dinner < 0) {
                cout << "Meal expense cannot be negative. Please try again." << endl;
            }
        } while (dinner < 0);
        totalMeals += dinner;
    }
    // Last day meals
    if (arrivalTime > 8) {
        double breakfast;
        do {
            cout << "Enter breakfast expense for the last day: $";
            cin >> breakfast;
            if (breakfast < 0) {
                cout << "Meal expense cannot be negative. Please try again." << endl;
            }
        } while (breakfast < 0);
        totalMeals += breakfast;
    }
    if (arrivalTime > 13) {
        double lunch;
        do {
            cout << "Enter lunch expense for the last day: $";
            cin >> lunch;
            if (lunch < 0) {
                cout << "Meal expense cannot be negative. Please try again." << endl;
            }
        } while (lunch < 0);
        totalMeals += lunch;
    }
    if (arrivalTime > 19) {
        double dinner;
        do {
            cout << "Enter dinner expense for the last day: $";
            cin >> dinner;
            if (dinner < 0) {
                cout << "Meal expense cannot be negative. Please try again." << endl;
            }
        } while (dinner < 0);
        totalMeals += dinner;
    }
    return totalMeals;
}
void calculateAndDisplayExpenses(int totalDays, int departureTime, int arrivalTime,
                                 double airfare, double carRental, double milesDriven,
                                 double parkingFees, double taxiFees, double conferenceFees,
                                 double hotelExpenses, double mealExpenses) {
    double totalExpenses = airfare + carRental + milesDriven + parkingFees +
                           taxiFees + conferenceFees + hotelExpenses + mealExpenses;
    double allowableExpenses = 0.0;
    allowableExpenses += airfare;
    allowableExpenses += carRental;
    allowableExpenses += milesDriven;
    allowableExpenses += min(parkingFees, totalDays * 6.0);
    allowableExpenses += min(taxiFees, totalDays * 10.0);
    allowableExpenses += conferenceFees;
    allowableExpenses += min(hotelExpenses, (totalDays - 1) * 90.0);
    // Meal allowances
    if (departureTime < 7) allowableExpenses += 9.0; // Breakfast first day
    if (departureTime < 12) allowableExpenses += 12.0; // Lunch first day
    if (departureTime < 18) allowableExpenses += 16.0; // Dinner first day
    if (arrivalTime > 8) allowableExpenses += 9.0; // Breakfast last day
    if (arrivalTime > 13) allowableExpenses += 12.0; // Lunch last day
    if (arrivalTime > 19) allowableExpenses += 16.0; // Dinner last day
    cout << fixed << setprecision(2);
    cout << "\nTotal Expenses Incurred: $" << totalExpenses << endl;
    cout << "Total Allowable Expenses: $" << allowableExpenses << endl;
    if (totalExpenses > allowableExpenses) {
        cout << "Excess to be reimbursed by employee: $"
             << totalExpenses - allowableExpenses << endl;
    } else {
        cout << "Amount saved by employee: $"
             << allowableExpenses - totalExpenses << endl;
    }
}
