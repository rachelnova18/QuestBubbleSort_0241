#include <iostream>
using namespace std;

int arr[20];
int n;

void input()
{
    while (true)
    {
        cout << "Input Maximum Length : ";
        cin >> n;
    
        if (n <= 20){
            break;
        } else {
            cout << "n is bigger than 20"; 
        }
    }

    cout << endl;
    cout << "======================"<< endl;
    cout << "Enter Elements of Array" << endl;
    cout << "======================" << endl;

    for(int i = 0; i < n; i++) {
        cout << "Data - " << i+1 << " : ";
        cin >> arr[i];
        cout << endl;


    }    
}

void display() {
    cout << endl;
    cout << "======================" <<endl;
    cout << "Sorted Array" << endl;
    cout << "======================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Data " << i+1 << " : " << arr [i] << endl;
        
    }

}

void bubbleSortAlgorithm()
{
    //set pass = 1
    int pass = 1;
    //if pass <= n-1 repeat step 2
    do {
        //repeat step 3 varying j from 0 to n-1 pass
    for (int j = 0; j <= n-1-pass; j++) //atau <= n-1-pass
    {
        //if the elemnt at index j is greater than the element at index
        //j+1 swap the elements.
        if(arr[j] > arr[j+1])
        {
            int tmp;
            tmp = arr[j];
            arr [j] = arr[j+1];
            arr[j+1] = tmp;
        }
    }
    // increment pass by 1
    pass = pass + 1;
    } while (pass <= n-1); //atau pas < n
}

int main(){

    input();
    bubbleSortAlgorithm();
    display();

}