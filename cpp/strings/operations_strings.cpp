#include<bits/stdc++.h>
using namespace std;

int main()  {
    //1. APPEND 
    string s1 = "fam";
    string s2 = "ily";

    cout<< s1+s2 <<"\n"; // METHOD #1
    
    s1.append(s2);  //METHOD #2
    cout<<s1<<endl;

    //2. ACCESS A PARTICULAR CHARACTER
    cout<< s1[4] <<endl;

    //3. CLEAR
    string s3 = "fgfhksjvef ergexetrhe";
    s3.clear();
    cout<<s3<<endl;

    //4. COMPARE
    string s4 = "abc";
    string s5 = "xyz";
    if(s5.compare(s4) == 0) {
        cout<<"Strings are equal"<<"\n";
    }   else if(s5.compare(s4) > 0) {
        cout<<s5<<" is bigger than "<<s4<<"\n";

    }   else    {
        cout<<s5<<" is smaller than "<<s4<<"\n";
    }

    //5. EMPTY
    string s6 = "ashwin";
    s6.clear();
    if(s6.empty())  {
        cout<<"String is empty"<<"\n";
    }

    //6. ERASE
    string s7 = "institute";
    s7.erase(2,4);  // 4 char would be deleted starting from index 2
    cout<<s7<<"\n";

    //7. FIND
    string s8 = "ashwin is a good boy";
    cout<<s8.find("good")<<endl; //returns the index where good is starting

    //8. INSERT
    s8.insert(12, "very "); //12 is the index where I want to insert very 
    cout<<s8<<"\n";

    //9. SIZE / LENGTH
    cout<<s8.size()<<endl;
    cout<<s8.length()<<endl;

    string s9 = "radha";
    for(int i=0; i<s9.size(); i++)  {
        cout<<s9[i]<<"\n";
    }

    //10. SUBSTR (SUBSTRING)
    cout<<s9.substr(1,4)<<"\n";

    //11. STOI (STRING TO INTEGER)
    string s10 = "1711";
    int x = stoi(s10);
    cout<< x - 10 <<endl;

    //12. TO_STRING (INTEGER TO STRING)
    int a = 116;
    cout<< to_string(a) + "2"<<endl;

    //13. SORT
    string s11 = "jsdvbkd345fvbb53fgk sgefgf";
    sort(s11.begin() , s11.end());
    cout<<s11<<endl;
}