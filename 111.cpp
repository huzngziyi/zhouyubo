/*#include <iostream>
#include <string>
using namespace std;
class staff //����һ��Ա������ 
{
protected:
	string number;//���
	string type;//ְ��
	string name;//����
	string sex;//�Ա�
	string birthday;//��������
	string address;//סַ
	string phone;//�绰
	string education;//ѧ��
public:
	staff(string number1 = "...", string type1 = "...", string name1 = "...", string sex1 = "...", string birthday1 = "...", string address1 = "...", string phone = "...", string education1 = "...");//�������캯������ָ��Ĭ�ϲ��� 
	void display();//����һ����ʾԱ����Ϣ�ĳ�Ա���� 
	void input();//����һ������Ա����Ϣ�ĳ�Ա���� 
	void delet();//����һ��ɾ��Ա����Ϣ�ĳ�Ա���� 
	void edit();//����һ���޸�Ա����Ϣ�ĳ�Ա���� 
	string sum();//����һ��ͳ��Ա�������ĳ�Ա���� 
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
	cout << "������ְԱ�ı�ţ�ְ���������Ա𣬳������£�סַ���绰��ѧ��:" << endl;
	cin >> number >> type >> name >> sex >> birthday >> address >> phone >> education;
}

void staff::display()
{
	cout << "Ա�����:" << number
		<< " Ա��ְ��:" << type
		<< " Ա������:" << name
		<< " Ա���Ա�:" << sex
		<< " Ա����������:" << birthday
		<< " Ա��סַ:" << address
		<< "�绰��" << phone
		<< " Ա��ѧ��:" << education << endl;
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
	cout << "�������µ�ְԱ��ţ�ְ���������Ա𣬳������£�Ա��סַ���绰��ѧ��:" << endl;
	cin >> number >> type >> name >> sex >> birthday >> address >> phone >> education;
}
string staff::sum()
{
	return type;//����Ա�������� 
}
string staff::summ()
{
	return number;
}

int main()//������ 
{
	staff s[100] = {};
	s[0] = { "1","A","����","��","1995-01-01","����ʡ","12909839335","����" };
	s[1] = { "2","B","����","Ů","1994-01-01","����ʡ","12909839336","˶ʿ" };
	s[2] = { "3","C","����","��","1990-01-01","����ʡ","12909839337","��ʿ" };
	s[3] = { "4","D","����","��","1982-01-01","����ʡ","12909839338","����" };
	s[4] = { "5","E","����","Ů","1980-01-01","����ʡ","12909839339","˶ʿ" };
	int i, j;
	int z = 5;
	string d;
	string e;
	string f;
	for (i = 1; i < 30; i++)//����һ��ѭ����ʹ�ò˵�ҳ�����ѭ������ 
	{
		cout << endl << endl;
		cout << "==========Ա������ϵͳ==========" << endl;
		cout << " 1. ����ְ����Ϣ " << endl;
		cout << " 2. ����ְ����Ϣ " << endl;
		cout << " 3. ����Ų�ѯְ������Ϣ " << endl;
		cout << " 4. ɾ��ְ������Ϣ " << endl;
		cout << " 5. �޸�ְ����Ϣ" << endl;
		cout << " 6. ͳ�Ʋ�ͬ���ְ������ " << endl;
		cout << " 7. �˳�ϵͳ " << endl;
		cout << "================================" << endl;
		cout << endl << "������ȷ������ѡ����Ӧ�Ĺ���" << endl;
		cin >> j;
		if (cin.good())//�ж����������Ƿ���ȷ 
		{
			switch (j)//ʹ�ö��֧ѡ��ṹ��ͨ�����벻ͬ��������ѡ��ͬ�Ĺ��� 
			{
			case(1):
				int a;
				for (a = 0; a < 15; a++)
				{
					s[a].display();//���ú��� 
				}
				break;//����ѡ��ṹ����û������ѭ�� 
			case(2):
				int b;
				for (b = z; b < 100; b++)
				{
					z = b + 1;
					int c;
					s[b].input();//���ú��� 
					cout << endl << "�Ƿ���������µ�Ա��" << "\n1.��" << "\n2.��" << endl;
					cin >> c;
					if (c == 2)break;
				}
				break;	//����ѡ��ṹ	
			case(3):
				cout << "������Ա����ţ�" << endl;
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
							cout << "�˱�Ų�����" << endl;
					}
				}
				break;

			case(4):
				cout << "����������ɾ����Ա����ţ�" << endl;
				cin >> e;
				for (i = 0; i < 15; i++)
				{
					if (s[i].summ() == e)
					{
						s[i].delet();
						cout << endl << "�ѳɹ�ɾ���ó�Ա����1�ɲ�ѯ" << endl;
						break;
					}
					else
					{
						if (i == 14)
							cout << "�˱�Ų�����" << endl;
					}
				}
				break;//����ѡ��ṹ 

			case(5):
				cout << "�����������޸ĵ�Ա����ţ�" << endl;
				cin >> f;
				for (i = 0; i < 15; i++)
				{
					if (s[i].summ() == f)
					{
						s[i].edit();
						cout << "�޸���Ϣ�ɹ�����1�ɲ�ѯ" << endl;
						break;
					}
					else
					{
						if (i == 14)
							cout << "�˱�Ų�����" << endl;
					}
				}
				break;
			case(6):
			{
				cout << "����������ͳ�Ƶ�Ա�����ͣ�" << endl;
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
					cout << "A��Ա������Ϊ��" << y << endl;
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
					cout << "B��Ա������Ϊ��" << y << endl;
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
					cout << "C��Ա������Ϊ��" << y << endl;
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
					cout << "D��Ա������Ϊ��" << y << endl;
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
					cout << "E��Ա������Ϊ��" << y << endl;
					y = 0;
					break;
				}
				else//�ж����������Ƿ���ȷ 
				{
					cout << "���������������ȷ������" << endl; break;
				}
			}
			break;
			}
			if (j == 7)
			{
				cout << "�ɹ��˳�ϵͳ" << endl;
				break;//����ѭ������������ 
			}
			if (j != 1 && j != 2 && j != 3 && j != 4 && j != 5 && j != 6 && j != 7)
			{
				cout << "���������������ȷ������" << endl;
			}
		}
		else
		{
			cout << "�����������������" << endl;
			cin.clear();//��������ǣ����´������� 
			cin.sync();//���cin������������ 
		}
	}
	return 0;
}*/