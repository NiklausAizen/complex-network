#include <iostream>
#include <Windows.h>
#include "main-interface.h"
#include "clear-screen.h"
#include "introduce.h"
using namespace std;
int a;
void main(){
Main_interface();
todo:switch (a)
	{
	case 1:Read_from_readme();Sleep(5000);CLS();Main_interface();break;
	case 2:break;
	case 3:break;
	default:cout<<"Please choose the right number.";Sleep(3000);CLS();Main_interface();
			goto todo;break;
	}
	
	system("pause");
}