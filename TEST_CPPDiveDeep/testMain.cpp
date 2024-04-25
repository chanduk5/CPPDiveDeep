 #include <gtest/gtest.h>

 #include "../SRC_CPPDiveDeep/inc/vectorImplementation.h"

 /// @brief 
 /// @param  
 /// @param  
 TEST(VectorImplementationTests, VectorInitTest) {
    VectorLocal<int> vec = { 1,2,3,4,5 };

    std::cout << "Check the size of the vector, expected is 5" <<std::endl;
    EXPECT_EQ(5, vec.Size());

 }
 
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}