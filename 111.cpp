/*#include <iostream>
#include <string>
using namespace std;
class staff //建立一个员工基类 
{
protected:
	string number;//编号
	string type;//职务
	string name;//姓名
	string sex;//性别
	string birthday;//出生年月
	string address;//住址
	string phone;//电话
	string education;//学历
public:
	staff(string number1 = "...", string type1 = "...", string name1 = "...", string sex1 = "...", string birthday1 = "...", string address1 = "...", string phone = "...", string education1 = "...");//声明构造函数，并指定默认参数 
	void display();//声明一个显示员工信息的成员函数 
	void input();//声明一个输入员工信息的成员函数 
	void delet();//声明一个删除员工信息的成员函数 
	void edit();//声明一个修改员工信息的成员函数 
	string sum();//声明一个统计员工数量的成员函数 
	string summ();
};
staff::staff(string number1, string type1, string name1, string sex1, string birthday1, string address1, string phone1, string education1)
{
	number = number1;
	type = type1;
	name = name1;
	sex = sex1;
	birthday = birthday1;
	address = address1;
	phone = phone1;
	education = education1;

}

void staff::input()
{
	cout << "请输入职员的编号，职务，姓名，性别，出生年月，住址，电话，学历:" << endl;
	cin >> number >> type >> name >> sex >> birthday >> address >> phone >> education;
}

void staff::display()
{
	cout << "员工编号:" << number
		<< " 员工职务:" << type
		<< " 员工姓名:" << name
		<< " 员工性别:" << sex
		<< " 员工出生年月:" << birthday
		<< " 员工住址:" << address
		<< "电话：" << phone
		<< " 员工学历:" << education << endl;
}
void staff::delet()
{
	number = "...";
	type = "...";
	name = "...";
	sex = "...";
	birthday = "...";
	address = "...";
	phone = "...";
	education = "...";
}
void staff::edit()
{
	cout << "请输入新的职员编号，职务，姓名，性别，出生年月，员工住址，电话，学历:" << endl;
	cin >> number >> type >> name >> sex >> birthday >> address >> phone >> education;
}
string staff::sum()
{
	return type;//返回员工的类型 
}
string staff::summ()
{
	return number;
}

int main()//主函数 
{
	staff s[100] = {};
	s[0] = { "1","A","张三","男","1995-01-01","辽宁省","12909839335","本科" };
	s[1] = { "2","B","李四","女","1994-01-01","辽宁省","12909839336","硕士" };
	s[2] = { "3","C","王五","男","1990-01-01","辽宁省","12909839337","博士" };
	s[3] = { "4","D","赵六","男","1982-01-01","辽宁省","12909839338","本科" };
	s[4] = { "5","E","孙七","女","1980-01-01","辽宁省","12909839339","硕士" };
	int i, j;
	int z = 5;
	string d;
	string e;
	string f;
	for (i = 1; i < 30; i++)//建立一个循环，使得菜单页面可以循环出现 
	{
		cout << endl << endl;
		cout << "==========员工管理系统==========" << endl;
		cout << " 1. 加载职工信息 " << endl;
		cout << " 2. 增加职工信息 " << endl;
		cout << " 3. 按编号查询职工工信息 " << endl;
		cout << " 4. 删除职工工信息 " << endl;
		cout << " 5. 修改职工信息" << endl;
		cout << " 6. 统计不同类的职工人数 " << endl;
		cout << " 7. 退出系统 " << endl;
		cout << "================================" << endl;
		cout << endl << "输入正确的数字选择相应的功能" << endl;
		cin >> j;
		if (cin.good())//判断输入类型是否正确 
		{
			switch (j)//使用多分支选择结构，通过输入不同的数字来选择不同的功能 
			{
			case(1):
				int a;
				for (a = 0; a < 15; a++)
				{
					s[a].display();//调用函数 
				}
				break;//跳出选择结构，但没有跳出循环 
			case(2):
				int b;
				for (b = z; b < 100; b++)
				{
					z = b + 1;
					int c;
					s[b].input();//调用函数 
					cout << endl << "是否继续增加新的员工" << "\n1.是" << "\n2.否" << endl;
					cin >> c;
					if (c == 2)break;
				}
				break;	//跳出选择结构	
			case(3):
				cout << "请输入员工编号：" << endl;
				cin >> d;
				for (i = 0; i < 15; i++)
				{
					if (s[i].summ() == d)
					{
						s[i].display();
						break;
					}
					else
					{
						if (i == 14)
							cout << "此编号不存在" << endl;
					}
				}
				break;

			case(4):
				cout << "请输入你想删除的员工编号：" << endl;
				cin >> e;
				for (i = 0; i < 15; i++)
				{
					if (s[i].summ() == e)
					{
						s[i].delet();
						cout << endl << "已成功删除该成员，按1可查询" << endl;
						break;
					}
					else
					{
						if (i == 14)
							cout << "此编号不存在" << endl;
					}
				}
				break;//跳出选择结构 

			case(5):
				cout << "请输入你想修改的员工编号：" << endl;
				cin >> f;
				for (i = 0; i < 15; i++)
				{
					if (s[i].summ() == f)
					{
						s[i].edit();
						cout << "修改信息成功，按1可查询" << endl;
						break;
					}
					else
					{
						if (i == 14)
							cout << "此编号不存在" << endl;
					}
				}
				break;
			case(6):
			{
				cout << "请输入你想统计的员工类型：" << endl;
				string type;
				cin >> type;
				int x = 0;
				int y = 0;
				if (type == "A")
				{
					for (x = 0; x < 15; x++)
					{
						s[x].sum();
						if (s[x].sum() == "A") y++;
					}
					cout << "A类员工人数为：" << y << endl;
					y = 0;
					break;
				}

				if (type == "B")
				{
					for (x = 0; x < 15; x++)
					{
						s[x].sum();
						if (s[x].sum() == "B") y++;
					}
					cout << "B类员工人数为：" << y << endl;
					y = 0;
					break;
				}

				if (type == "C")
				{
					for (x = 0; x < 15; x++)
					{
						s[x].sum();
						if (s[x].sum() == "C") y++;
					}
					cout << "C类员工人数为：" << y << endl;
					y = 0;
					break;
				}

				if (type == "D")
				{
					for (x = 0; x < 15; x++)
					{
						s[x].sum();
						if (s[x].sum() == "D") y++;
					}
					cout << "D类员工人数为：" << y << endl;
					y = 0;
					break;
				}

				if (type == "E")
				{
					for (x = 0; x < 15; x++)
					{
						s[x].sum();
						if (s[x].sum() == "E") y++;
					}
					cout << "E类员工人数为：" << y << endl;
					y = 0;
					break;
				}
				else//判断输入类型是否正确 
				{
					cout << "输入错误，请输入正确的类型" << endl; break;
				}
			}
			break;
			}
			if (j == 7)
			{
				cout << "成功退出系统" << endl;
				break;//跳出循环，结束程序 
			}
			if (j != 1 && j != 2 && j != 3 && j != 4 && j != 5 && j != 6 && j != 7)
			{
				cout << "输入错误，请输入正确的数字" << endl;
			}
		}
		else
		{
			cout << "输入错误，请输入数字" << endl;
			cin.clear();//清除错误标记，重新打开输入流 
			cin.sync();//清除cin缓冲区的数据 
		}
	}
	return 0;
}*/