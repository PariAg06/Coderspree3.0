vector<int> printNos(int x) {
    // Write Your Code Here
    if (x == 0) {
        return {};
    } else {
        // Recursive case: Generate numbers from 1 to n-1 and append n
        auto numbers = printNos(x - 1);
        numbers.push_back(x);
        return numbers;
    }
}