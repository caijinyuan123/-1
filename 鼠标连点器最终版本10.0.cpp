#include<stdio.h>
#include<windows.h>
#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<cstring>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#include<unistd.h>
#include<cstdlib>
#include<conio.h>
#define random(x) (rand()%x)
using namespace std;
int main()
{
	double a,b,c;
	cout << "welcome to Mouse connector!/��ӭʹ�������������" << endl;
	cout << "Please select a language!/��ѡ������:(Chinese or English Press 1 for Chinese and 2 for English)/ѡ���İ�1��ѡӢ�İ�2" << endl;
	cin >> c;
	if(c == 2)
	{
		system("title Mouse connector");
		cout << "Press the space bar to execute this product, press ESC once to end, and press ESC twice to exit the program" << endl;
		cout << "MOUSEEVENTF_LEFTDOWN:";
		cin >> a;
		cout << "MOUSEEVENTF_LEFTUP:";
		cin >> b;
		cout << "OK,Beginning!" << endl;
    	while(1)
    	{
        	if(GetAsyncKeyState(VK_SPACE))
        	{
            	while(1)
            	{
                	mouse_event(MOUSEEVENTF_LEFTDOWN,500,500, 0, 0);
                	Sleep(1000 * a);
					mouse_event(MOUSEEVENTF_LEFTUP,500,500, 0, 0);
                	Sleep(b * 1000);
                	if(GetAsyncKeyState(VK_ESCAPE))
					{
						cout << "OK,closed!" << endl;
						cout << "This product was invented by author King34 without team assistance.Welcome to use next time��";
						return 0; 
					}
            	}
        	}
    	}
	}
	if(c == 1)
	{
		system("title ���������");
		cout << "����Ʒ���ո��ִ�У���һ��Esc��������������Esc���˳�����" << endl; 
		cout << "����������:";
		cin >> a;
		cout << "������̧��:";
		cin >> b;
		cout << "��ʼ" << endl;
    	while(1)
    	{
        	if(GetAsyncKeyState(VK_SPACE))
        	{
            	while(1)
            	{
                	mouse_event(MOUSEEVENTF_LEFTDOWN,500,500, 0, 0);
                	Sleep(1000 * a);
					mouse_event(MOUSEEVENTF_LEFTUP,500,500, 0, 0);
                	Sleep(b * 1000);
                	if(GetAsyncKeyState(VK_ESCAPE))
					{
						cout << "�õģ��ر�" << endl;
						cout << "����Ʒ������King34һ�ַ��������Ŷ�Э������ӭ�´�ʹ�ã��ټ���";
						return 0; 
					}
            	}
        	}
    	}
	}
	if(c == 3)
	{
		cout << "��ӭ�����ҵ��˲ʵ���" << endl;
		usleep(500000);
		cout << "����Ʒ���������ߺܿ��ܻ��˳�Dev.C++����̨����Ϊ��׼��...������...�ټ���"; 
	} 
    return 0;
}
