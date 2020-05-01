#include <iostream>
#include <vector>

using namespace std;

void project(string detectorType, string descriptorType);

int main(int argc, const char *argv[])
{
    vector<string> detectorVec = {"SHITOMASI", "HARRIS", "FAST", "BRISK", "ORB", "SIFT"};
    vector<string> descVec = {"BRISK", "ORB", "FREAK"};

    for (string detectorType: detectorVec)
    {
        for (string descType: descVec)
        {
            project(detectorType, descType);
        }
    }
    project("AKAZE", "AKAZE");
    // project("SIFT", "SIFT");


    return 0;
}