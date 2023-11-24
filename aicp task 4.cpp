#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float area;
int peri;
int a = 120; // one angle of hexagon=120
int angle;
int lastDigit;

class Hexagon {
public:
    void calculateHexagonArea(int lastDigit) {
        area = 1.5 * 1.732 * pow(lastDigit, 2);
    }

    void calculateHexagonPerimeter(int lastDigit) {
        peri = 6 * lastDigit;
    }

    void calculateHexagonAngleSum() {
        angle = 6 * a;
    }

    void displayHexagonMeasurements() {
        cout << "\t\t\t\t --------------------------------------------------" << endl;
        cout << "\t\t\t\t\t Hexagon Measurements\t\t   " << endl;
        cout << "\t\t\t\t\t\t\t\t\t   " << endl;
        cout << fixed << setprecision(2);
        cout << "\t\t\t\t Area of Hexagon: " << area << "\t\t   " << endl;
        cout << "\t\t\t\t Perimeter of Hexagon:" << peri << "\t\t   " << endl;
        cout << "\t\t\t\t Sum of all angles of Hexagon:" << angle << "\t   ";
        cout << "\n\t\t\t\t\t\t\t\t\t   " << endl;
         cout << "\t\t\t\t --------------------------------------------------" << endl;
    }
};

class Square {
public:
    void calculateSquareArea(int length) {
        area = pow(length, 2);
    }

    void calculateSquarePerimeter(int length) {
        peri = 4 * length;
    }

    void calculateSquareAngleSum() {
        angle = 4 * 90; // Sum of all angles of square = 4 * 90
    }

    void displaySquareMeasurements() {
          cout << "\t\t\t\t --------------------------------------------------" << endl;
        cout << "\t\t\t\t\t Square Measurements\t   " << endl;
        cout << "\t\t\t\t\t\t\t\t   " << endl;
        cout << fixed << setprecision(2);
        cout << "\t\t\t\t Area of Square: " << area << "\t\t   " << endl;
        cout << "\t\t\t\t Perimeter of Square:" << peri << "\t   " << endl;
        cout << "\t\t\t\t Sum of all angles of Square:" << angle << "\t   " << endl;
        cout << "\t\t\t\t\t\t\t\t   " << endl;
          cout << "\t\t\t\t --------------------------------------------------" << endl;
    }
};

void displayMenu() {
    cout << "\n\n\t\t\t\t *************************************************" << endl;
    cout << "\t\t\t\t\t\tGeometry Calculator" << endl;

    cout << "\t\t\t\t\tWelcome to the Measurement Calculator" << endl;
    cout << "\t\t\t\t\t\tCoded by Maryam Siddiqui" << endl;
    cout << "\t\t\t\t **************************************************" << endl;
    cout << "\n\t\t\t\tEnter the last digit of your CNIC: ";
    cin >> lastDigit;
    cout << "\t\t\t\tPlease select any option" << endl;
   cout << "\n\n\t\t\t\t *************************************************" << endl;
    cout << "\t\t\t\t  1. Calculate Hexagon Measurements         " << endl;
    cout << "\t\t\t\t\t--------------------------------\t     " << endl;
    cout << "\t\t\t\t\t 1. Area of Hexagon\t\t     " << endl;
    cout << "\t\t\t\t\t 2. Perimeter of Hexagon\t\t     " << endl;
    cout << "\t\t\t\t\t 3. Sum of all angles of Hexagon\t " << endl;
    cout << "\t\t\t\t\t--------------------------------\t     " << endl;
    cout << "\t\t\t\t\t\t\t\t\t     " << endl;
    cout << "\t\t\t\t  2. Calculate Square Measurements          " << endl;
    cout << "\t\t\t\t\t--------------------------------\t     " << endl;
    cout << "\t\t\t\t\t 1. Area of Square\t\t     " << endl;
    cout << "\t\t\t\t\t 2. Perimeter of Square\t     " << endl;
    cout << "\t\t\t\t\t 3. Sum of all angles of Square\t " << endl;
    cout << "\t\t\t\t\t--------------------------------\t     " << endl;
    cout << "\t\t\t\t  Press any other key to exit\t\t     " << endl;
    cout << "\t\t\t\t\t\t\t\t     " << endl;
    cout << "\n\n\t\t\t\t *************************************************" << endl;
}

int main() {
    Hexagon hexagon1;
    Square square1;

    char choice;

    int length = (lastDigit + 1);

    do {
        displayMenu();

        cout << "\t\t\t\t\t";
        cout << "Enter your choice   ";
        cin >> choice;

      cout << "\n\n\t\t\t\t *************************************************" << endl;
      cout << "\n\n\t\t\t\t *************************************************" << endl;
             
        switch (choice) {
        case '1':
            hexagon1.calculateHexagonArea(lastDigit);
            hexagon1.calculateHexagonPerimeter(lastDigit);
            hexagon1.calculateHexagonAngleSum();
            hexagon1.displayHexagonMeasurements();
            break;
        case '2':
            square1.calculateSquareArea(length);
            square1.calculateSquarePerimeter(length);
            square1.calculateSquareAngleSum();
            square1.displaySquareMeasurements();
            break;
        default:
            cout << "Exiting the program. Thank you for using the Measurement Calculator!" << endl;
            return 0;
        }
    } while (true);

    return 0;
}

