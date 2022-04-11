#include <iostream>

using std::string;

class csvImportAndProcess {
    private:
    string filename = "input.csv";
    int chunkSize = 1000;
    public:
    void start(){
        
    }

    //getters
    string getFilename(){
        return filename;
    }

    int getChunkSize(){
        return chunkSize;
    }
};