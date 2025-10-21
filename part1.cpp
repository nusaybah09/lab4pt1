#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

struct CountryPopulation {
	int number;	//number of people
	char value; //to represent billons or millions
	string name; // name of country
};

int main() {
	string countryName;

	unordered_map<string, CountryPopulation> data;

	data["America"] = CountryPopulation{ 340, 'M' };
	data["Europe"] = CountryPopulation{ 744, 'M' };
	data["Brazil"] = CountryPopulation{ 213,'M' };
	data["Mexico"] = CountryPopulation{ 132, 'M' };
	data["Egypt"] = CountryPopulation{ 118, 'M' };

	//display all values

	for (auto& [name, countryInfo] : data) {
		cout << "Country Name: " << name << endl;
		cout << "Population: " << countryInfo.number << " " << countryInfo.value << endl;
	}

	//searching for a country
	cout << "Enter the country you want to search: " << endl;
	getline(cin, countryName);

	auto foundCountry = data.find(countryName);

	if (foundCountry != data.end()) {
		cout << "Country was found!" << endl;
		cout << "Country Name: " << foundCountry->first << endl;
		cout << "Population: " << foundCountry->second.number << " " << foundCountry->second.value << endl;
	}
	else{
		cout << "Country was not found! " << endl;
	}
		

	

	
	
}
