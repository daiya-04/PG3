#include <stdio.h>
#include <list>


int main() {

	std::list<const char*> yamanoteLine = {
		"Tokyo",
		"Kanda",
		"Akihabara",
		"Okachimachi",
		"Ueno",
		"Uguisudani",
		"Nippori",
		"Tabata",
		"Komagome",
		"Sugamo",
		"Otsuka",
		"Ikebukuro",
		"Mejiro",
		"Takadanobaba",
		"Shin-Okubo",
		"Shinjuku",
		"Yoyogi",
		"Harajuku",
		"Shibuya",
		"Ebisu",
		"Meguro",
		"Gotanda",
		"Osaki",
		"Shinagawa",
		"Tamachi",
		"Hamamatsucho",
		"Shimbashi",
		"Yurakucho"
	};

	printf("1970\n");
	for (std::list<const char*>::iterator itYamanoteLine = yamanoteLine.begin(); itYamanoteLine != yamanoteLine.end(); ++itYamanoteLine) {
		printf("%s\n", *itYamanoteLine);
	}

	for (std::list<const char*>::iterator itYamanoteLine = yamanoteLine.begin(); itYamanoteLine != yamanoteLine.end(); ++itYamanoteLine) {
		if (*itYamanoteLine == "Tabata") {
			itYamanoteLine = yamanoteLine.insert(itYamanoteLine, "Nishi-Nippori");
			++itYamanoteLine;
		}
	}

	printf("\n");
	printf("2019\n");
	for (std::list<const char*>::iterator itYamanoteLine = yamanoteLine.begin(); itYamanoteLine != yamanoteLine.end(); ++itYamanoteLine) {
		printf("%s\n", *itYamanoteLine);
	}

	for (std::list<const char*>::iterator itYamanoteLine = yamanoteLine.begin(); itYamanoteLine != yamanoteLine.end(); ++itYamanoteLine) {
		if (*itYamanoteLine == "Tamachi") {
			itYamanoteLine = yamanoteLine.insert(itYamanoteLine, "Takanawa Gateway");
			++itYamanoteLine;
		}
	}

	printf("\n");
	printf("2022\n");
	for (std::list<const char*>::iterator itYamanoteLine = yamanoteLine.begin(); itYamanoteLine != yamanoteLine.end(); ++itYamanoteLine) {
		printf("%s\n", *itYamanoteLine);
	}



	return 0;
}