#include <bits/stdc++.h>
using namespace std;
class CarService {
	public:
        unordered_map<string,bool>cars;
	    unordered_map<string,string>services;
	    unordered_map<string, vector<pair<string,int>>>map;
	    void addCar(string);
	    void addServices(string, string);
	    void displayCars();
	    void displayServices();
		void displayEntries();
		void addEntry(string carName, vector<pair<string,int>> &services) {
           for(auto &pair : services) {
			   this->map[carName].push_back({pair.first, pair.second});
		   }
		}
		int generateBill(string carName, vector<string> &serviceCodes) {
			int amt = 0;
			vector<pair<string,int>>temp = this->map[carName];
			unordered_set<string>tempCodes(serviceCodes.begin(), serviceCodes.end());
			for(auto i : temp) {
			   if(tempCodes.find(i.first) != tempCodes.end()) {
			       cout<<"Charges for " << services[i.first] <<" Rs:" << i.second<<endl;
				   amt += i.second;
			   }
			}
			return amt;
		}
};
void CarService::displayEntries() {
    for(auto &i : map) {
		cout<<i.first<<endl;
		for(auto &j : i.second) {
			cout<<j.first<<" "<<j.second<<endl;
		}
	}
}
void CarService::addCar(string brand) {
	this->cars[brand] = true;
}  

void CarService::addServices(string sCode, string sType) {
	this->services[sCode] = sType; 
}

void CarService::displayCars() {
   for(auto &i : cars) {
      cout<<i.first<<" "<< i.second << " "<<endl;
   }
}

void CarService::displayServices() {
	for(auto &s : services) {
		cout<<s.first<<" " << s.second << " "<<endl;
	}
}

int main(void) {
	CarService o1;
    o1.addCar("HatchBack");
	o1.addCar("Sedan");
	o1.addCar("SUV");
	o1.addServices("BS101","Basic Servicing");
	o1.addServices("EF101","Engine Fixing");
	o1.addServices("CF101","Clutch Fixing");
	o1.addServices("BF101","Brake Fixing");
	o1.addServices("GF101","Gear Fixing");
	// FOR HATCHBACK
	vector<pair<string,int>>entry1{{"BS101", 2000},{"EF101", 5000},{"CF101", 2000},{"BF101", 1000},{"GF101", 3000}};
	// FOR SEDAN
	vector<pair<string,int>>entry2{{"BS101", 4000},{"EF101", 8000},{"CF101", 4000},{"BF101", 1500},{"GF101", 6000}};
	// FOR SUV
	vector<pair<string,int>>entry3{{"BS101",5000}, {"EF101", 10000}, {"CF101", 6000}, {"BF101", 2500}, {"GF101", 8000}};
	o1.addEntry("HatchBack", entry1);
	o1.addEntry("Sedan", entry2);
	o1.addEntry("SUV", entry3);
	// Menu 
	cout<<"WARNING : INPUTS ARE CASE SENSITIVE :"<<endl;
	string carName;
	cout<<"Enter the type of car (available HatchBack, Sedan, SUV) : ";
	cin>>carName;
	if(o1.cars[carName] == 0) {
		cout<<"We don't provide sercice for the requested car, thank you"<<endl;
	}
	int n;
	cout<<"Enter the no of services to apply (min : 1 and max : 5): ";
	cin>>n;
	if(n > 5) 
		cout<<"Please enter within specified range";
	vector<string>serviceCodes(n);
	cout<<"Enter the services (in codes, available BS101 EF101 CF101 BF101 GF101): ";
	for(int i = 0; i < n; i++) {
		cin>>serviceCodes[i];
	}
    int bill = o1.generateBill(carName, serviceCodes);
	cout<<"TOTAL BILL "<< bill<<endl;
	if(bill >= 10000) 
		cout<<"Please avail for cleaning service too "<<endl;
	return 0 == 0;
}
