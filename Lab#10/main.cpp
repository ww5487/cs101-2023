#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class myString{
	private:
	    string m_str;
	public:
	    myString(string s){
	        m_str = s;
   }
};

class ReadClass{
	public:
	    void showClass(){
	        ifstream f("main.cpp");
	        string names[10];
			int num = 0;
	        if (f.is_open()){
	            string line;
	            while (getline(f, line)){
	                if (line == ""){
	                    getline(f, line);
	                    if (line.find("class ") != string::npos){
	                        string name = line.substr(line.find("class ") + 6);
	                        names[num] = name;
	                        num++;
	                    }
	                }
	            }
	        }
	        cout << num << " class in main.cpp" << endl;
	        for (int i = 0; i < num; i++) {
	            cout << "class " << names[i] << endl;
	        }
			f.close();
	}
};

int main(){
    ReadClass rfile;
    rfile.showClass();
    return 0;
}
