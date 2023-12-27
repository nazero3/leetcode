// codility.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <stack>
#include <string>
#include <list>
#include <set>
#include <queue>
using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};


//int solution(vector<int>& A) {
//	vector<bool> res;
//	for (int i = 0; i < A.size(); i++)
//	{
//		res.push_back(true);
//	}
//	
//	for (int i = 0; i < A.size() - 1; i++)
//	{
//
//		for (int j = i+1; j < A.size() ; j++)
//		{
//			if (A.at(i) == A.at(j)) {
//				res.at(i) = false;
//				res.at(j) = false;
//				break;
//			}
//		}
//	}
//
//	for (int i = 0; i < res.size(); i++)
//	{
//		if (res.at(i))
//			return A.at(i);
//	}
// //////////////////////////////////


// frogjmp
//int solution(int x, int y, int d) {
//	int diff = y - x;
//	int div = diff / d;
//	int mod = diff % d;
//	if (mod == 0)
//		return div ;
//	else if (mod > 0) {
//		return (div + 1) ;
//	}
//}


//int solution(vector<int>& A) {
//	sort(A.begin(), A.end());
//	if (A.size() == 1 || A.size() == 0)
//		return A.at(0) +1;
//	/*if (A.size() == 2) {
//		return A.at(0) + 1;
//	}*/
//	for (int i = 1; i <= A.size()  ; i++)
//	{
//		if (A.at(i + 1) != A.at(i) + 1) {
//			return  A.at(i) + 1;
//		}
//		if (i == A.size() - 1) {
//			return A.at(i) + 1;
//		}
//	}
//}


//vector<int> solution(int N, vector<int> &A) {
//	int max = 0;
//	vector<int> res{};
//	for (int i = 0; i < N; i++)
//	{
//		res.push_back(0);
//	}
//	for (int i = 0; i < A.size() ; i++)
//	{
//		if (A.at(i) > N) {
//			max = *max_element(res.begin(), res.end());
//			for (int i = 0; i < res.size(); i++)
//			{
//				res.at(i) = max;
//			}
//		}
//		else {
//			res.at(A.at(i)-1)++;
//		}
//
//	}
//	return res;
//}


//int solution(vector<int>& A) {
//	sort(A.begin(), A.end());
//	if (A.at(A.size()-1) + A.at(0) <= 0)
//		return 1;
//	else {
//		for (int i = 0; i <= A.size() -2; i++)
//		{
//			if ((A.at(i + 1) != A.at(i) + 1) && A.at(i) != A.at(i + 1))
//				return A.at(i) + 1;
//			if (i +1 == A.size() - 1)
//				return A.at(A.size()-1) + 1;
//		}
//	}
//}


//int solution(int A, int B, int K) {
//	int count = 0;
//	for (long long i = A; i <= B; i++)
//	{
//		if (i % K == 0) {
//			count++;
//		}
//	}
//	return count;
//}


//int solution(string& S) {
//	stack<char> s;
//	int size = 0;
//	if (S.size() % 2 == 0)
//	{
//		size = S.size()/2;
//	}
//	else {
//		size = S.size() / 2 + 1;
//	}
//	
//	// ||  || S.at(i) == '('
//	//  || S.at(i) == ']' || S.at(i) == ')'
//	for (int i = 0; i < S.size()/2; i++)
//	{
//		if (S.at(i) == '{' || S.at(i) == '[' || S.at(i) == '(' || S.at(i) == ')' || S.at(i) == ']' || S.at(i) == ')') {
//			s.push(S.at(i));
//		}
//		
//			
//	}
//	for (int i = size; i < S.size(); i++)
//	{
//		if (S.at(i) == s.top())
//			s.pop();
//	}
//	if (s.empty())
//		return 1;
//	else
//		return 0;
//
//}


//int solution(vector<int>& A) {
//    int N = A.size();
//    vector<long long> leftBoundaries(N);
//    vector<long long> rightBoundaries(N);
//
//    // Calculate left and right boundaries for each disc
//    for (int J = 0; J < N; J++) {
//        leftBoundaries[J] = J - static_cast<long long>(A[J]);
//        rightBoundaries[J] = J + static_cast<long long>(A[J]);
//    }
//
//    // Sort the boundaries arrays
//    sort(leftBoundaries.begin(), leftBoundaries.end());
//    sort(rightBoundaries.begin(), rightBoundaries.end());
//
//    int intersections = 0; // Count of intersections
//    int openDiscs = 0; // Number of open (unclosed) intervals
//
//    int rightIndex = 0;
//
//    // Iterate through left boundaries
//    for (int leftIndex = 0; leftIndex < N; leftIndex++) {
//        // Check for intersections with open intervals
//        while (rightIndex < N && rightBoundaries[rightIndex] < leftBoundaries[leftIndex]) {
//            openDiscs--;
//            rightIndex++;
//        }
//
//        // Increase the count of intersections with open intervals
//        // This represents the number of discs that intersect with the current disc
//        intersections += openDiscs;
//
//        // Check for the limit of 10,000,000 intersections
//        if (intersections > 10000000) {
//            return -1;
//        }
//
//        // Increase the count of open intervals
//        openDiscs++;
//    }
//
//    return intersections;
//}


//int soultion(string s) {
//	int total = 0;
//	for (int i = 0; i < s.size();i++) {
//		switch (s.at(i))
//		{
//		case 'I':
//			if (i +1 < s.size() && s.at(i+1) == 'V')
//			{
//				total += 4;
//				i++;
//				break;
//			}
//			else if (i + 1 < s.size() && s.at(i + 1) == 'X') {
//				total += 9;
//				i++;
//				break;
//			}
//			else
//			{
//				total += 1;
//				break;
//			}
//		case 'V':
//			total += 5;
//			break;
//		case 'X':
//			if (i + 1 < s.size() && s.at(i + 1) == 'L') {
//				total += 40;
//				i++;
//				break;
//			}
//			else if (i + 1 < s.size() && s.at(i + 1) == 'C') {
//				total += 90;
//				i++;
//				break;
//			}
//			else
//			{
//				total += 10;
//				break;
//			}
//			
//			break;
//		case 'L':
//			total += 50;
//			break;
//		case 'C':
//			if (i + 1 < s.size() && s.at(i + 1) == 'D') {
//				total += 400;
//				i++;
//				break;
//			}
//			else if (i + 1 < s.size() && s.at(i + 1) == 'M') {
//				total += 900;
//				i++;
//				break;
//			}
//			else
//			{
//				total += 100;
//				break;
//			}
//			
//			break;
//		case 'D':
//			total += 500;
//			break;
//		case 'M':
//			total += 1000;
//			break;
//		default:
//			break;
//		}
//	}
//	return total;
//}

/////////////////important 

//int solution(string s) {
//    vector<int> dict(256, -1);
//    int maxLen = 0, start = -1;
//    for (int i = 0; i != s.length(); i++) {
//        if (dict[s[i]] > start)
//            start = dict[s[i]];
//        dict[s[i]] = i;
//        maxLen = max(maxLen, i - start);
//    }
//    return maxLen;
//}


//bool solution(int x) {
//	string s ;
//	bool result = true;
//	s = to_string(x);
//	for (int i = 0; i < s.size(); i++)
//	{
//		if (s[i] != s[s.size() - 1 - i]) {
//			result = false;
//			break;
//		}
//			
//	}
//	return result;
//}

// needs to be repeated again *******LINKED LIST*******


//ListNode* solution(ListNode* l1, ListNode* l2) {
//
//	/*if (list1 == NULL)
//		return list2;
//	else if (list2 == NULL)
//		return list1;
//	else if (list1->val <= list2->val) {
//		list1->next = solution(list1->next, list2);
//		list2 = list1;
//	}
//	else if (list2->val <= list1->val) {
//		list2->next = solution(list1, list2->next);
//	}
//	
//
//	return list2;*/
//	if (l1 == NULL) {
//		return l2;
//	}
//	if (l2 == NULL) {
//		return l1;
//	}
//	ListNode* newHead = NULL;
//	ListNode* newTail = NULL;
//	if (l1->val < l2->val) {
//		newHead = l1;
//		newTail = l1;
//		l1 = l1->next;
//	}
//	else {
//		newHead = l2;
//		newTail = l2;
//		l2 = l2->next;
//	}
//	while (l1 != NULL and l2 != NULL) {
//		if (l1->val < l2->val) {
//			newTail->next = l1;
//			newTail = newTail->next;
//			l1 = l1->next;
//		}
//		else {
//			newTail->next = l2;
//			newTail = newTail->next;
//			l2 = l2->next;
//		}
//	}
//	if (l1 != NULL) {
//		newTail->next = l1;
//		l1 = l1->next;
//	}
//	if (l2 != NULL) {
//		newTail->next = l2;
//	}
//	return newHead;
//
//	
//}


//int solution(vector<int>& nums) {
//	vector<int> res;
//	res.push_back(nums.at(0));
//	for (int i = 1; i < nums.size(); i++)
//	{
//		if (nums.at(i) != nums.at(i - 1)) {
//			res.push_back(nums.at(i));
//		}
//	}
//	for (int i = 0; i < nums.size(); i++)
//	{
//		if (i < res.size()  )
//			nums.at(i) = res.at(i);
//		else
//		{
//			nums.at(i) = 1000;
//		}
//		
//	}
//	return res.size();
//}

//int solution(vector<int>& nums,int target) {
//
//	int res;
//	res = find(nums.begin(), nums.end(), target) - nums.begin();
//	if (res == nums.size() && nums.at(nums.size() / 2) > target) {
//		for (int i = 0; i <= nums.size()/2; i++)
//		{
//			if (nums.at(i) > target)
//				return i ;
//		}
//	}
//	else if (res == nums.size() && nums.at(nums.size() / 2) < target) {
//		for (int i = nums.size() / 2; i <= nums.size() ; i++)
//		{
//			if (nums.at(i) > target)
//				return i ;
//
//		}
//	}
//	return res;
//}


// sliding window
//int lengthOflongestSub(string s) {
//	int chars[128]{};
//	int right = 0;
//	int left = 0;
//	int res = 0;
//	while (right < s.length()) {
//		char r = s[right];
//		chars[r]++;
//		while (chars[r] > 1) {
//			char l = s[left];
//			chars[l]--;
//			left++;
//		}
//		res = max(res, right - left + 1);
//		right++;
//	}
//	return res;
//}


// longest palindrome 
//string logestPlindrome(string s) {
//	int n = s.size();
//
//	// initializing 2d array in c++
//	vector<vector<bool>> dp(n,vector<bool>(n));
//	int ans[] = { 0, 0 };
//	for (int i = 0; i < n; i++)
//	{
//		dp[i][i] = true;
//	}
//	for (int i = 0; i < n-1; i++)
//	{
//		if (s[i] == s[i + 1]) {
//			dp[i][i + 1] = true;
//			ans[0] = i;
//			ans[1] = i + 1;
//		}
//	}
//
//	for (int diff = 2; diff < n; diff++)
//	{
//		for (int i = 0; i < n - diff; i++) {
//			int j = i + diff;
//			if (s.at(i) == s.at(j) && dp[i + 1][j - 1]) {
//				dp[i][j] = true;
//				ans[0] = i;
//				ans[1] = j;
//			}
//		}
//	}
//	int i = ans[0];
//	int j = ans[1];
//
//	return s.substr(i,j-i+1);
//}


 //vector<int> sol{};
 //vector<int> preorderTraversal(TreeNode* root) {
 //    if (!root)
 //        return {};
	// else {
	//	 sol.push_back(root->val);
	//	 preorderTraversal(root->left);
	//	 preorderTraversal(root->right);
	//	 return sol;
	// }
 //}


 //vector<vector<int>> levels;
 //void helper(TreeNode* node, int level) {
 //    // start the current level
 //    if (levels.size() == level)
 //        levels.push_back(vector<int>());
 //    // fulfill the current level
 //    levels[level].push_back(node->val);
 //    // process child nodes for the next level
 //    if (node->left != nullptr)
 //        helper(node->left, level + 1);
 //    if (node->right != nullptr)
 //        helper(node->right, level + 1);
 //}
 //vector<vector<int>> levelOrder(TreeNode* root) {
 //    if (root == nullptr)
 //        return levels;
 //    helper(root, 0);
 //    return levels;
 //}


 //bool hasPathSum(TreeNode* root, int sum) {
	// if (root == nullptr)
	//	 return false;
	// sum -= root->val;
	// if ((root->left == nullptr) && (root->right == nullptr))
	//	 return (sum == 0);
	// return hasPathSum(root->left, sum) || hasPathSum(root->right, sum);
 //}


// int pivitIndex(vector<int> nums) {
//	 int sum = 0;
//	 int leftSum = 0;
//	 for (int x : nums) {
//		 sum += x;
//	 }
//	 for (int i = 0; i < nums.size(); i++)
//	 {
//		 if (leftSum == sum - leftSum - nums[i]) return i;
//		 leftSum += nums[i];
//	 }
//	 return -1;
//}


 /********
 find method in c++ how to use 
 you can use it to find prefix or occurrence of a substring with the string
 *********/
 //string longestCommonPrefix(vector<string> strs) {
	// if (strs.size() == 0) return "";
	// string prefix = strs.at(0);
	// for (int i = 1; i < strs.size(); i++)
	// {
	//	 while (strs.at(i).find(prefix) != 0) {
	//		 int a = strs.at(i).find(prefix);
	//		 prefix = prefix.substr(0, prefix.size() - 1);
	//		 if (prefix.size() == 0) return "";
	//	 }
	//	
	// }
	// return prefix;
 //}
 //int minSubArrayLen(int s, vector<int>& nums)
 //{
	// int n = nums.size();
	// int ans = INT_MAX;
	// for (int i = 0; i < n; i++) {
	//	 for (int j = i; j < n; j++) {
	//		 int sum = 0;
	//		 for (int k = i; k <= j; k++) {
	//			 sum += nums[k];
	//		 }
	//		 if (sum >= s) {
	//			 ans = min(ans, (j - i + 1));
	//			 break; //Found the smallest subarray with sum>=s starting with index i, hence move to next index
	//		 }
	//	 }
	// }
	// return (ans != INT_MAX) ? ans : 0;
 //}

//class MovingAverage {
//public:
//	int size;
//	queue<int> a;
//	MovingAverage(int size){
//		//int a[3]{};
//		this->size = size;
//		
//	}
//
//	double next(int val) {
//		double x=0;// all values will be added to it
//		
//		if (a.size() < this->size)
//		{
//			a.push(val);
//		}
//		else
//		{
//			a.pop();
//			a.push(val);
//		}
//		queue<int> tmp = a;
//		for (int i = 0; i < a.size(); i++)
//		{
//			
//			x += tmp.front();
//			tmp.pop();
//		}
//		
//		return x / a.size();
//		
//	}
//};


#include <vector>
#include <queue>

class Solution {
public:
	void wallsAndGates(std::vector<std::vector<int>>& rooms) {
		if (rooms.empty() || rooms[0].empty()) {
			return;
		}

		const int INF = 2147483647;
		const std::vector<std::vector<int>> DIRECTIONS = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };

		int m = rooms.size();
		int n = rooms[0].size();

		std::queue<std::pair<int, int>> q;

		// Enqueue all gates to start BFS from each gate
		for (int i = 0; i < m; ++i) {
			for (int j = 0; j < n; ++j) {
				if (rooms[i][j] == 0) {
					q.push({ i, j });
				}
			}
		}

		while (!q.empty()) {
			auto point = q.front();
			q.pop();
			int row = point.first;
			int col = point.second;

			for (const auto& direction : DIRECTIONS) {
				int r = row + direction[0];
				int c = col + direction[1];

				if (r < 0 || c < 0 || r >= m || c >= n || rooms[r][c] != INF) {
					continue;
				}

				rooms[r][c] = rooms[row][col] + 1;
				q.push({ r, c });
			}
		}
	}
};



struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}

};

int main()
{
	std::cout << "Hello World!\n";
	//MovingAverage *movingAverage = new MovingAverage(3);
	//cout << movingAverage->next(1) << endl; // return 1.0 = 1 / 1
	//cout<<movingAverage->next(10)<<endl ; // return 5.5 = (1 + 10) / 2
	//cout << movingAverage->next(3) << endl; // return 4.66667 = (1 + 10 + 3) / 3
	//cout << movingAverage->next(5) << endl; // return 6.0 = (10 + 3 + 5) / 3
	Solution sol{};
	vector<std::vector<int>> rooms= { {2147483647, -1, 0, 2147483647},{2147483647, 2147483647, 2147483647, -1},{2147483647, -1, 2147483647, -1},{0, -1, 2147483647, 2147483647} };
	sol.wallsAndGates(rooms);
	cout << " ";


	return 0;
}
