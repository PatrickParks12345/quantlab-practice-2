#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "../headers/catch.hpp"
#include "../headers/importAndProcess.hpp"




TEST_CASE( "Import and process the input.csv file") {
    csvImportAndProcess myCsv;
    REQUIRE(myCsv.getFilename() == "input.csv");
    REQUIRE(myCsv.getChunkSize() == 1000);
}