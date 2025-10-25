int totalMoney(int n) {
    int total = 0;     // Total amount saved
    int monday = 1;    // Amount to start each week (starts at $1)

    // Repeat until all days are counted
    while (n > 0) {
        int current = monday;  // Money to deposit on current day
        for (int i = 0; i < 7 && n > 0; i++) {
            total += current;  // Add today's deposit
            current++;         // Next day's deposit increases by $1
            n--;               // One day passed
        }
        monday++;  // Next week starts with $1 more than last Monday
    }

    return total;
}
