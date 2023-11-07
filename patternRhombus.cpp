#include <iostream>
using namespace std;

int main() {
    int height;
    cin >> height;
    int width = 2 * height - 1;        
    int num_spaces = height - 1;         
    int current_num = 1;            
    int current_row;             
    int num_stars = 1;          
    	for (int i = 1; i <= width; i++) {
        current_row = i;
        if (i > height)
            current_row = width - i + 1;

        for (int j = 1; j <= num_spaces; j++) {
            cout << "\t";
        }
        for (int j = 1; j <= num_stars; j++) {
            cout << current_num << "\t";
            if (j < current_row)
                current_num++;
            else
                current_num--;
        }
        if (i <= width / 2) {
            num_spaces = num_spaces - 1;
            current_num += 2;
            num_stars += 2;
        } else {
            num_spaces = num_spaces + 1;
            num_stars -= 2;
        }
        cout << endl;
    }
    return 0;
}
