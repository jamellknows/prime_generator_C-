#include <iostream>
#include <fstream>
#include <cmath>
#include <cstdlib>
#include <vector>
#include <string>
#include <math.h>
using namespace std;

int main ()
{
    cout <<"\n\n\t*****WELCOME TO JAMELL SAMUELS' PRIME NUMBER GENERATOR*****" <<endl;
    cout <<"\n\n\tENTER THE NUMBER OF PRIMES YOU WOULD LIKE TO GENERATE*****"<<endl;
    int number;
    cin >> number;
    vector <long double> arr1;
    vector <long double> arr2;
    vector <long int> prime1;
    vector <long int> prime2;
    long double theta = M_PI / 3;

    for( int i = 0; i < number ; i++)
    {
        double y_1 = theta * (1 + 6 * i);
        y_1 = sqrt(pow(y_1/theta, 2) - 0.25);
        cout << y_1 << endl;
        arr1.push_back(y_1);
        double y_2 = 5 * theta * (1 + ((6 / 5) * i));
        y_2 = sqrt(pow(y_2/theta, 2) - 0.25); 
        cout << y_2 << endl;
        arr1.push_back(y_2);
      


    }
    int lArr1 = arr1.size();

    sort(arr1.begin(), arr1.begin() + lArr1);
    for (int k = 0; k < lArr1; k++){
        //Here we sort out the PI error where all the zeros aren't even. 
        if( ((int)floor(arr1[k])) % 2 != 0){
                cout << "change " << arr1[k];
                arr1[k] = arr1[k] + 1;
                cout << " to" << arr1[k] <<endl;
                
       
        }
        prime1.push_back((int)floor(arr1[k]) - 1);
        // cout << "The minus one is: " << (int)floor(arr1[k]) - 1 << endl;
        prime1.push_back((int)floor(arr1[k]) + 1);
        // cout << "The plus one is: " << (int)floor(arr1[k]) + 1 << endl;

    }
    sort(prime1.begin(), prime1.begin() + prime1.size());

    //Seive for the time being as it's not yet perfect
    for(int i = 0; i < number ; i++)
    {
        if(prime1[i] % 5 !=0 && prime1[i] % 3 != 0)
        {
            cout << prime1[i]<< endl;

        }
        //  cout << prime1[i]<< endl;

    }
    //pm1 pattern 


}