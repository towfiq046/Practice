#include <iostream>
using namespace std;

const int size = 10;
int search_list [size] = {11, 14, 15, 18, 22, 28, 38, 39, 42};
int count = 0;


int binary_search (int start_index, int end_index, int value){

    count++;
    int mid_index = (start_index + end_index)/2;
    cout << "value of mid_index: "<< search_list [mid_index] << endl <<endl;

    if (search_list [mid_index] == value){

        return value;
    }
    else if (start_index >= end_index){

            return -1;
    }
    else{

        if (value < search_list [mid_index]){

            cout << "as value " << value << " < " << search_list [mid_index] << " start_index " << start_index << " mid_index " << (start_index + (mid_index-1))/2 << " value " << value << endl << endl;
            binary_search (start_index, mid_index-1, value);
        }

        else{

            cout << "as value " << value << "=/>" << search_list [mid_index] << "start_index" << start_index << "start_index" << (mid_index + 1) << "value" << value << endl;
            binary_search (mid_index +1, end_index, value);
        }


    }

}

int main(){

    int result = binary_search (0, size - 1, 39);
    if (result < 0){

        cout << "not found " << count << "times" << endl;
    }
    else{
        cout << "found at index " << result << " after " << count << " times" << endl;
    }

    return 0;
}













