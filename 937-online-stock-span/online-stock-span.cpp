class StockSpanner {
public:
    vector<int> arr;

    StockSpanner() {}

    int next(int price) {

        arr.push_back(price);

        int i = arr.size() - 1;
        int span = 1;

        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] <= price) {
                span++;
            } else {
                break;
            }
        }

        return span;
    }
};