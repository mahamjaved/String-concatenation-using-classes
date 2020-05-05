#include <iostream>
#include <sstream>
#include<string>
using namespace std;

class Student {
    private:
         int a,b;
        string c,d;
         string result,result1;
		 string final;
    public:
        void set_age(int newage)
		{a=newage;}
        void set_standard(int newstand)
            {b=newstand;}
        void set_first_name(string newfirst)
            {c=newfirst;}
        void set_last_name(string newlast)
            {d=newlast;}
        int get_age(){ 
            return a;}
        int get_standard(){ 
            return b;}
        string get_first_name(){ 
            return c;}
        string get_last_name(){ 
            return d;}
       string to_string()
       {
       	ostringstream convert,convert1;
       	convert<<a;
       	convert1<<b;
       	result=convert.str();
       	result1=convert1.str();
       	final += result + "," + c + "," + d + "," + result1;
       	return final;
	   }
};
int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout<<st.to_string();   
    return 0;
}
