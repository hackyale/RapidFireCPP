#include <iostream>
#include <string>
#include <stdexcept>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

// A few different sums:
double straightforward_sum(vector<double> &nums)
{
	double sum = 0.0;
	for (int i = 0; i < nums.size(); ++i) {
		sum += nums[i];
	}
	return sum;
}

double stl_sum(vector<double> &nums)
{
	return accumulate(nums.begin(), nums.end(), 0.0);
}

int main()
{
	string line;
	vector<double> inputData;
	while(getline(cin, line)) {
		try {
			double value = stod(line);
			inputData.push_back(value);
		} catch(invalid_argument & e) {
			cerr << "Error: " << e.what() << endl;
		} catch(out_of_range & e) {
			cerr << "Error: " << e.what() << endl;
		}
	}
	cout << "Summary statistics: " << endl;
	double sum = stl_sum(inputData);
	cout << "Total: " << sum << endl;
	cout << "Mean: " << sum / inputData.size() << endl;

	sort(inputData.begin(), inputData.end());
	
	cout << "(Min, Median, Max) = (";
	cout << inputData.front() << ", ";
	if(inputData.size() % 2) { // odd
		cout << inputData[inputData.size() / 2] << ", ";
	} else { // even
		double median = (inputData[inputData.size() / 2] + inputData[inputData.size() / 2 - 1]) / 2.0;
		cout << median << ", ";
	}
	cout << inputData.back() << ")" << endl;
	return 0;
}
