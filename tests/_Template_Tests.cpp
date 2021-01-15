//
// Created by lap on 9/26/20.
//

#include "Test.h"

#include "include/_tested_lib.h"
#include <memory>

// FIXME '_Common_Test_Data_' should be replaced with name of test suite
#define SUITE_NAME _Common_Test_Data_Tests

struct TestData {
    TestData(const std::string& exprString, double expectedResult) :
            expectedResult(expectedResult) {
        exprString = std::make_shared<std::string>(exprString)
    };

    TestData(const TestData &data) :
    expectedResult(data.expectedResult),
    exprString(data.exprString){}
	
    // FIXME fix shared pointer ad make it work
    std::shared_ptr<const std::string> exprString;
    const double expectedResult;
};

struct SUITE_NAME : ::testing::Test {
protected:
    void SetUp() override {
        PrepareTestData();
    }

    // FIXME should be pointer
    std::vector<TestData> testData;

private:
    void PrepareTestData() {
        testData = {
                {"1 + 2 + 3",(1 + 2 + 3)},
                {"20.6 * 12 - 40",(20.6 * 12 - 40)}
        };
    }
};

TEST_F(SUITE_NAME, _From_Class_Test) {
    
}

TEST(PPCAT(_Own_Test_Data_, SUITE_NAME), _Without_Class_Test) {
    struct TestData {
        size_t val1;
        size_t val2;
    } testData[] = {
            {1102, 1101, TestData::Relations::VAL1_SMALLER},
            {1202, 1302}
    };
}
