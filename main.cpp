#include <iostream>
#include <Windows.h>
#include <ctime>
#include <ShlObj.h>
#include <lmcons.h>



const char* path = "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Shell Icons";
const char* valueName = "29";
const char* data = "%windir%\\System32\\shell32.dll,-51";


std::string GetUser() {
	
	char username[UNLEN + 1];
	DWORD username_len = UNLEN + 1;
	if (GetUserNameA(username, &username_len)) {
		return username;
	}
	return "user"
}

void explorer() {
	std::cout << "CLOSING EXPLORER..."<< std::endl;
	system("taskkill /f /im explorer.exe");

	std::cout << "RESATRTING EXPLORER..."<< std::endl;
	system("start explorer.exe");
	std::cout << "explorer.exe is running now...\n";

}

void RSI() {
	
	HKEY hkey;
	LONG result = RegCreateKeyExA(HKEY_LOCAL_MACHINE, path, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_WRITE | KEY_WOW64_64KEY, NULL, &hkey, NULL);


	if (result == ERROR_SUCCESS) {

		result = RegSetValueExA(hkey, valueName, 0, REG_SZ, (const BYTE*)data, strlen(data) + 1);

		if (result == ERROR_SUCCESS) {
			std::cout << "[+] Shortcut icon successfuly removed" << std::endl;
			explorer();
			system("pause");
			
			
		}
		else
		{
			std::cout << "[!] ERROR : coulden't remove the shortcut icon" << std::endl;
		}
		RegCloseKey(hkey);
		SHChangeNotify(SHCNE_ASSOCCHANGED, SHCNF_IDLIST, NULL, NULL);

	}
	else {
		if (result == ERROR_ACCESS_DENIED) {
			std::cout << "[!] ERROR: Access Denied. Please run as Administrator!" << std::endl;
		}
		else
		{
			std::cout << "[!] ERROR: Could not open key. Error code: " << result << std::endl;
		}
	}
	
}

void Restore() {
	
	HKEY hkey;
	LONG result = RegOpenKeyExA(HKEY_LOCAL_MACHINE, path, 0, KEY_SET_VALUE | KEY_WOW64_64KEY, &hkey);

	if (result == ERROR_SUCCESS) {
		result = RegDeleteValueA(hkey, valueName);
		if (result == ERROR_SUCCESS) {
			std::cout << "[+] Shortcut icon successfully restored!" << std::endl;
			explorer();
			system("pause");
		}
		else {
			std::cout << "[!] ERROR: Value not found or already restored." << std::endl;
		}
		RegCloseKey(hkey);
	}
	else {
		std::cout << "[!] ERROR: Access Denied or Key not found." << std::endl;
	}
}


int main() { 

	std::string user = GetUser();
	std::cout << "\n\n\n\n\n\t\t\tShurtcut icon remover\n\n\n\n\n";
	Sleep(3000);

	int command;

	std::cout << "\tOPTIONS:\n";
	std::cout << "1. Remove Shortcut icon\n2. Restore shortcut con\n3. EXIT\n";
	std::cout << user << "/>";

	
	std::cin >> command;
	switch (command) {
	case 1: RSI(); break;
	case 2: Restore(); break;
	case 3: return 0;
	default:std::cout << "Invalid Option ";
	}
	
}
