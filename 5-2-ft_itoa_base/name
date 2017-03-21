#include <iostream>
#include <string>
#include <cmath>

using namespace std;

size_t IsBadArgv(string & binaryString)
{
    for (size_t i = 0; i < binaryString.size(); i++)
        if (binaryString[i] != '1' && binaryString[i] != '0')
            return i;
    return 0;
}

bool IsGoodArgvSize(size_t size)
{
    size_t good_size = 4;

    while (size > good_size)
        good_size = good_size << 2;
    return (size == good_size);
}

void ReverseString(string & str)
{
    for (size_t i = 0; i < str.size() / 2; i++) {
        char tmp = str[str.size() - i - 1];
        str[str.size() - i - 1] = str[i];
        str[i] = tmp;
    }
}

void PrintString(string binaryString)
{
    ReverseString(binaryString);
    cout << binaryString << endl;
}

int CountPyramidLines(int pyramidLength)
{
    return ((int)sqrt(pyramidLength));
}

int GetStartIndex(int pyramidLine)
{
    return (--pyramidLine * pyramidLine);
}

int GetShift(int piramidLine)
{
    return (2 * piramidLine);
}

void GetPositions(int *arrayOfPositions, bool & isUpsideDown, int  & startIndex, int  & shift)
{
    if (!isUpsideDown) {
        arrayOfPositions[1] = startIndex + shift;
        arrayOfPositions[3] = startIndex;
    }
    else {
        arrayOfPositions[1] = startIndex;
        arrayOfPositions[3] = startIndex + shift;
    }
    arrayOfPositions[0] = arrayOfPositions[1] + 1;
    arrayOfPositions[2] = arrayOfPositions[1] - 1;
}

bool ApplyRule(string & binaryString, int positions[4])
{
    static string rules[16];
    rules[0] = "0000";
    rules[1] = "1000";
    rules[2] = "0001";
    rules[3] = "0010";
    rules[4] = "0000";
    rules[5] = "0010";
    rules[6] = "1011";
    rules[7] = "1011";
    rules[8] = "0100";
    rules[9] = "0101";
    rules[10] = "0111";
    rules[11] = "1111";
    rules[12] = "1101";
    rules[13] = "1110";
    rules[14] = "0111";
    rules[15] = "1111";

    int rule = 0;
    if (binaryString[positions[0]] == '1') { rule += 8; }
    if (binaryString[positions[1]] == '1') { rule += 4; }
    if (binaryString[positions[2]] == '1') { rule += 2; }
    if (binaryString[positions[3]] == '1') { rule += 1; }

    string tmp = rules[rule];
    binaryString[positions[0]] = tmp[0];
    binaryString[positions[1]] = tmp[1];
    binaryString[positions[2]] = tmp[2];
    binaryString[positions[3]] = tmp[3];

    return (rule == 0 || rule == 15);
}

void ReducePyramid(string & binaryString)
{
    string result = "";
    bool canSolveNow = true;
    char tmp = binaryString[0];

    for (size_t i = 0; i < binaryString.size(); i++)
        if (binaryString[i] != tmp) {
            canSolveNow = false;
            break;
        }
    if (!canSolveNow) {
        int countOfPyramidLines = CountPyramidLines(binaryString.size());
        for (int localLevel = 1; localLevel < countOfPyramidLines; localLevel += 2) {
            int startIndex = GetStartIndex(localLevel);
            int shift = GetShift(localLevel);
            int lastIndex = startIndex + shift - 2;
            for (; startIndex <= lastIndex; result += binaryString[startIndex], startIndex += 2);
        }
    }
    else { result = tmp; }
    binaryString = result;
}

bool IsNeedToApplyRule(string & binaryString, int positions[4])
{
    if (binaryString.size() == 1)
        return false;
    for (int i = 1; i < 4; i++)
        if (binaryString[positions[i - 1]] ^ binaryString[positions[i]])
            return true;
    return false;
}

void Bibit(string & binaryString)
{
    bool isLastStep = binaryString.size() == 1 ? true : false;

    PrintString(binaryString);
    while (!isLastStep) {
        bool isRuleWasApplied = false;
        isLastStep = true;
        for (int localLevel = 1; localLevel <  CountPyramidLines(binaryString.size()); localLevel += 2) {
            int startIndex = GetStartIndex(localLevel);
            int shift = GetShift(localLevel);
            bool isUpsideDown = false;
            int lastIndex = startIndex + shift - 2;
            for (; startIndex <= lastIndex; startIndex += 2, isUpsideDown = !isUpsideDown) {
                int arrayOfPositions[4];
                GetPositions(&arrayOfPositions[0], isUpsideDown, startIndex, shift);
                if (IsNeedToApplyRule(binaryString, arrayOfPositions)) {
                    isLastStep = ApplyRule(binaryString, arrayOfPositions);
                    isRuleWasApplied = true;
                }
            }
        }
        if (isRuleWasApplied) { PrintString(binaryString); }
    }
    if (binaryString.size() != 1) {
        ReducePyramid(binaryString);
        Bibit(binaryString);
    }
}

    int main(int argc, char **argv)
    {
        if (argc == 2) {
        string binStr = argv[1];
            if (size_t i = IsBadArgv(binStr)) {
                cout << "Error. Unknown symbol '" << binStr[i] << "' at index " << i + 1 << ". Aborting...";
                exit(1);
            }
            if (!IsGoodArgvSize(binStr.size())) {
                cout << "Error. Bad input length(" << binStr.size() << "). Length must be equals to 4^n (4, 16, 64...etc). Aborting...";
                exit(2);
            }
            ReverseString(binStr);
            Bibit(binStr);
        }
        else { cout << "Usage: bibit.exe [binary_value]." << endl << "Example 1: bibit.exe 1101" << endl << "Example 2: bibit.exe 0101110011001010"; }
        return 0;
    }
