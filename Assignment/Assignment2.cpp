#include <iostream>
using namespace std;

//Add,Sub,Multi,Div
int add(int a, int b){
    return a+b;
}
int sub(int a, int b){
    return a-b;
}
int mult(int a, int b){
    return a*b;
}
float divi(int a, int b){
    return a/b;
}

int main(void) {
    cout<<add(4,2)<<endl;
    cout<<sub(4,2)<<endl;
    cout<<mult(4,2)<<endl;
    cout<<divi(4,2)<<endl;
}

//Function Sumation of Array
int sumArray(int arr[],int size){
    int sum=0;
    for(int i = 0; i < size; i++)
        sum += arr[i];
    return sum;
}
int main(void) {
    int arr[]={1,4,3,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<sumArray(arr, size);
}

//Function Palindrome
void chkPalin(string str) {
    int left = 0;
    int right = str.length() - 1;

    while(left < right) {
        if(str[left] != str[right]) {
            cout << "Not Palindrome";
            return;
        }
        left++;
        right--;
    }
    cout << "Palindrome";
}
int main(void) {
    string word;
    cout<<"Enter Word: ";
    cin>>word;
    chkPalin(word);
}

// Struct Student
int countInd=0;  // Global index counting for student structure array

struct student {
    int id;
    char name[50];
    int mp_phy;
    int mp_maths;
    int mp_chem;
}s[50];
void setStdInfo(student s[]){
    cout<<"Enter ID: ";
    cin>>s[countInd].id;
    cout<<"Enter Name: ";
    cin>>s[countInd].name;
    cout<<"Enter Physics Marks: ";
    cin>>s[countInd].mp_phy;
    cout<<"Enter Maths Marks: ";
    cin>>s[countInd].mp_maths;
    cout<<"Enter Chemistry: ";
    cin>>s[countInd].mp_chem;
    cout<<"Your Serial is: "<<countInd<<endl;
    countInd++;
}
void displayStdInfo(student s[],int index) {
    cout<<"ID: "<<s[index].id<<endl;
    cout<<"Name: "<<s[index].name<<endl;
    cout<<"Total Marks: "<<s[index].mp_phy+s[index].mp_maths+s[index].mp_chem<<endl;    
}
int main(void) {
    setStdInfo(s);
    displayStdInfo(s,0);
    setStdInfo(s);
    displayStdInfo(s,1);
    displayStdInfo(s,0);
    
}
// Struct Book
struct book {
    char title[50];
    char author[50];
    float price;
};
void displayBook(book Tb) {
    cout<<Tb.title<<endl;
    cout<<Tb.author<<endl;
    cout<<"$"<<Tb.price<<endl;
}

int main(void) {
    book b1;
    cout<<"Enter Title: ";
    cin>>b1.title;
    cout<<"Enter Author: ";
    cin>>b1.author;
    cout<<"Enter Price: ";
    cin>>b1.price;
    displayBook(b1);
}
