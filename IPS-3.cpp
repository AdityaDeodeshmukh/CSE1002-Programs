#include <iostream>
using namespace std;
#include<string.h>

class words {//words begins
private:
    char *a = new char[100];
    char *b = new char[100];
    char *c = new char[100];
public:
    void getInp() {
        cin >> a;
        cin >> b;
        cin >> c;
    }

    void printstr() {
        cout << a;
        cout << b;
        cout << c;
    }

    void common3() {//common3 starts
        //letters common in all 3
        int i = 0, j = 0, k = 0;
        int arr[26];//this is an array. if the i(th) element of this array is 1 that represents i(th) alphabet is present
        for (i = 0; i < 26; i++) {//filling array with 0s
            arr[i] = 0;
        }
        for (i = 0; i < (strlen(a)); i++) {

            for (j = 0; j < (strlen(b)); j++) {
                for (k = 0; k < (strlen(c)); k++) {//we compare each element of a,b,c with each other
                    if ((a[i] == b[j]) && (a[i] == c[k])) {//if all 3 elements match
                        arr[int(a[i]) - 97] = 1;//array at index corresponding to the letter is made 1

                    }
                }
            }
        }
        int count = 0;
        for (i = 0; i < 26; i++) {
            if (arr[i] == 1) {//if array is 1
                if (count == 0) {
                    cout << char(i + 97);//i(th) letter of alphabet is printed(ASCII(a)=97)
                    count++;
                } else {
                    cout << "," << char(i + 97);
                }
            }
        }
        cout << endl;

    }//common3 ends

    void exclusive() {//exclusive starts
        //letters in first not in other 2
        int i = 0, j = 0, k = 0;
        int arr[26];//3 arrays
        int arr1[26];
        int arr2[26];
        for (i = 0; i < 26; i++) {
            arr[i] = 0;
            arr1[i] = 0;//setting arrays to 0
            arr2[i] = 0;
        }
        for (i= 0; i < (strlen(a)); i++)//mapping the letters of a to the array positions arr
        {
            arr[int(a[i]) - 97] = 1;
        }
        for (i = 0; i < (strlen(b)); i++)//mapping the letters of b to the array positions arr1
        {
            arr1[int(b[i]) - 97] = 1;
        }
        for (i = 0; i < (strlen(c)); i++)//mapping the letters of c to the array positions arr2
        {
            arr2[int(c[i]) - 97] = 1;
        }

        int count = 0;
        for (i = 0; i < 26; i++) {
            if (arr[i] == 1 && arr1[i] == 0 && arr2[i] == 0) {//if letter is in a but not in b and c
                if (count == 0) {
                    cout << char(i + 97);//print corresponding letter
                    count++;
                } else {
                    cout << "," << char(i + 97);
                }
            }
        }
        cout<<endl;
    }//exclusive ends

    void common2()
    {//common2 begins
        //letter in first 2 but not in 3
        int i=0,j=0,k=0;
        int arr[26];//map arrays
        int arr1[26];
        for(i=0;i<26;i++)
        {
            arr[i]=0;//map arrays set to 0
            arr1[i]=0;
        }
        for(i=0;i<(strlen(a));i++) {
            for (j = 0; j < (strlen(b)); j++) {
                if ((a[i] == b[j])) {//checking if element present in a and b
                    arr[int(a[i]) - 97] = 1;

                }
            }
            for (j = 0; j < (strlen(c)); j++) {//entering all elements of c to array map
                arr1[int(c[i]) - 97] = 1;
            }
            int count = 0;
            for (i = 0; i < 26; i++) {
                if (arr[i] == 1 && arr1[i] == 0) {//if present in a and b but not in c
                    if (count == 0) {
                        cout << char(i + 97);//print corresponding letter
                        count++;
                    } else {
                        cout << "," << char(i + 97);
                    }
                }
            }
            cout<<endl;
        }
    }//common2 ends
    void alpha()
    {//alpha begins
        //printing all letters in alphabetical order
        int i = 0, j = 0, k = 0;
        int arr[26];
        int arr1[26];//map arrays
        int arr2[26];
        for (i = 0; i < 26; i++) {
            arr[i] = 0;
            arr1[i] = 0;//map arrays set to 0
            arr2[i] = 0;
        }
        for (i= 0; i < (strlen(a)); i++)//mapping array arr to letters of a
        {
            arr[int(a[i]) - 97] = 1;
        }
        for (i = 0; i < (strlen(b)); i++)//mapping array arr1 to letters of b
        {
            arr1[int(b[i]) - 97] = 1;
        }
        for (i = 0; i < (strlen(c)); i++)//mapping array arr2 to letters of c
        {
            arr2[int(c[i]) - 97] = 1;
        }
        int count = 0;
        for (i = 0; i < 26; i++) {
            if ((arr[i] == 1) || (arr1[i] == 1 )|| (arr2[i] == 1)) {//if letter in a or b or c
                if (count == 0) {
                    cout << char(i + 97);//print corresponding character
                    count++;
                } else {
                    cout << "," << char(i + 97);
                }
            }
        }
        cout<<endl;

    }//alpha ends
};//class ends

int main() {//main begins
    words w;
    w.getInp();
    w.common3();
    w.common2();
    w.exclusive();
    w.alpha();
    return 0;

}//main ends
