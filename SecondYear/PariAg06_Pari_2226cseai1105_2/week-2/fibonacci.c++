vector<int> generateFibonacciNumbers(int n) {
    // Write your code here.
    int first = 0, second = 1, next;

   
    for (int i = 0; i < n; ++i) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }

        cout<<next<< " ";
    }

    cout<<endl;
}