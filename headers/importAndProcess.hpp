#include <iostream>

using std::string;

class csvImportAndProcess {
    private:
    string filename = "input.csv";
    public:

    //getters
    string getFilename(){
        return filename;
    }
};