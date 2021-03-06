#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
class student
{
	friend ostream& operator<<(ostream&, const student&);
	friend bool cmpn(student&, student&);
	friend bool cmpg(student&, student&);
	friend bool cmpa(student&, student&);
	friend student find(vector<student>&, string &, bool);
	friend bool find(vector<student>&, string&);
private:
	string name;
	string num;
	int grade;
	int addnum;
public:
	student(string n, string m, int g, int a) :
	num(n),name(m),grade(g),addnum(a){}
	student() {}
	~student() {}
};
ostream& operator<<(ostream&os, const student& s)
{
	os << s.num << " " << s.name << " " << s.grade;
	return os;
}
bool cmpn(student& a, student&b)
{
	return a.num < b.num;
}
bool cmpg(student& a, student&b)
{
	if (a.grade == b.grade)return a.addnum < b.addnum;
	else return a.grade > b.grade;
}
bool cmpa(student&a, student&b)
{
	return a.addnum < b.addnum;
}
student find(vector<student>&arr, string &str, bool type)
{
	if (type)for (auto x : arr) if (x.num == str)return x;
    else for (auto x : arr) if (x.name == str)return x;
	return student();
}
bool find(vector<student>& arr, string &str)
{
	if (arr.empty())return false;
	else for (auto x : arr)if (x.num == str)return true;
	return false;
}
int main()
{
	int n, tmpg, tmpa = 0;
	bool flag = false;
	vector<student>arr;
	string tmpn, tmpm;
	while (cin >> n && !flag)
	{
		switch (n) {
		case 1:cin >> tmpn >> tmpm >> tmpg;
			if (find(arr, tmpn)) cout << "FAILED" << endl;
			else { arr.push_back(student(tmpn, tmpm, tmpg, tmpa++)); cout << "SUCCESS" << endl; }continue;
		case 2:if (arr.empty());
			   else {
				   sort(arr.begin(), arr.end(), cmpa);
				   for (auto x : arr)
					   cout << x << endl;
			   } continue;
		case 3:cin >> tmpn; cout << find(arr, tmpn, 1) << endl; continue;
		case 4:cin >> tmpm; cout << find(arr, tmpm, 0) << endl; continue;
		case 5:if (arr.empty());
			   else {
				   sort(arr.begin(), arr.end(), cmpn);
				   for (auto x : arr)
					   cout << x << endl;
			   }continue;
		case 6:if (arr.empty());
			   else {
				   sort(arr.begin(), arr.end(), cmpg);
				   for (auto x : arr)
					   cout << x << endl;
			   } continue;
		case 7:flag = true; continue;
		default:continue;
		}
	}
	cout << "END";
	return 0;
}