#include<iostream>
#include<string>

using namespace std;
void showMenu();//������ʾ
#define MAX 1000

struct person
{
	string m_name;  // ��ϵ������
	int m_sex;  // ��ϵ���Ա�1��ʾŮ�ԣ�2��ʾ����
	string m_age;  // ��ϵ������
	string m_phone;  // ��ϵ�˵绰����
	string m_home;//��ϵ�˼�ͥסַ
};
//ͨѶ¼�ṹ��
struct add
{
	struct person array[MAX];//�����ṹ������
	int m_size = 0;//��־λ���ж��Ƿ񳬳���Χ
};


void afg(add* abs);
int afz(add* abs);


//�����ϵ��
void afg(add* abs)
{
	if (abs->m_size == MAX)  // �ж�ͨѶ¼�Ĵ�С�Ƿ�ﵽ���ֵ
	{
		cout << "ͨѶ¼�������޷���ӣ�" << endl;  // ���ͨѶ¼��������ʾ��Ϣ
		return;  // ���أ���ֹ��ǰ������ִ��
	}
	else
	{

		string name;  // ����һ���ַ������� name�����ڴ洢�û����������
		int sex = 0;  // ����һ�����ͱ��� sex������ʼ��Ϊ 0�����ڴ洢�û�������Ա�
		string age ;  // ����һ�����ͱ��� age������ʼ��Ϊ 0�����ڴ洢�û����������
		string phone;  // ����һ�����ͱ��� phone�����ڴ洢�û��������ϵ�绰
		string home;  // ����һ���ַ������� home�����ڴ洢�û�����ľ�ס��ַ
	

				cout << "����������" << endl;  // ��ʾ�û���������
				cin >> name;  // �ӱ�׼�����ȡ�û����������������ֵ�� name 
				for (size_t i = 0; i < abs->m_size; i++)

				{
					if (name == abs->array[i].m_name)
					{
						cout << "�Ѿ��д���ϵ�ˣ�����������" << endl;  // �ظ�����
						system("pause");
						return;

					}
				}

				abs->array[abs->m_size].m_name = name;  // �� name ��ֵ��ͨѶ¼��ָ��λ�õ���ϵ������
			
		cout << "�������Ա�" << endl;  // ��ʾ�û������Ա�
		cout << "1----Ů" << endl << "2---��" << endl;  // ��ʾ�Ա�ѡ��
		while (true)
		{
			cin >> sex;  // �ӱ�׼�����ȡ�û�������Ա𣬲���ֵ�� sex

			if (sex == 1 || sex == 2)  // �ж��û�������Ա��Ƿ�Ϊ 1 �� 2
			{
				abs->array[abs->m_size].m_sex = sex;  // ���Ա�ֵ��ͨѶ¼��ָ��λ�õ���ϵ���Ա�
				break;
			}
			else
			{
				cout << "�����������������" << endl;
			}
		}


		cout << "����������" << endl;  // ��ʾ�û���������
		cin >> age;  // �ӱ�׼�����ȡ�û���������䣬����ֵ�� age
		abs->array[abs->m_size].m_age = age;  // �� age ��ֵ��ͨѶ¼��ָ��λ�õ���ϵ������

		cout << "��������ϵ�绰" << endl;  // ��ʾ�û�������ϵ�绰
		cin >> phone;  // �ӱ�׼�����ȡ�û��������ϵ�绰������ֵ�� phone
		abs->array[abs->m_size].m_phone = phone;  // �� phone ��ֵ��ͨѶ¼��ָ��λ�õ���ϵ����ϵ�绰

		cout << "�������ס��ַ" << endl;  // ��ʾ�û������ס��ַ
		cin >> home;  // �ӱ�׼�����ȡ�û�����ľ�ס��ַ������ֵ�� home
		abs->array[abs->m_size].m_home = home;  // �� home ��ֵ��ͨѶ¼��ָ��λ�õ���ϵ�˾�ס��ַ

		abs->m_size++;  // ����ͨѶ¼����ϵ�˵�����
		cout << "��ӳɹ�" << endl;  // ��ʾ�û���ӳɹ�

		system("pause");
		system("cls");

	}

}


//��ʾ��ϵ��
void Dcs(add* abs)
{
	if (abs->m_size != 0)
	{
		// ������ϵ������
		for (size_t i = 0; i < abs->m_size; i++)
		{
			// �����ϵ������
			cout <<"������" << abs->array[i].m_name << "  ";

			// �����Ա��������Ա�
			switch (abs->array[i].m_sex)
			{
			case 1:
				cout << "Ů��"; break;
			case 2:
				cout << "����"; break;
			}

			// �����ϵ�˵绰������ͼ�ͥ��ַ
			cout << "  " << "���䣺" << abs->array[i].m_age << " �ֻ��ţ� " << abs->array[i].m_phone << " ��ͥ��ַ�� " << abs->array[i].m_home << endl;
		}
	}
	else
	{
		cout << "��δ�洢��ϵ�ˣ���洢����ѡ��" << endl;
	}

	// ��ͣ����ִ�У��ȴ��û������������
	system("pause");
	// ��տ���̨��Ļ
	//system("cls");
}

//������ϵ��
void apg(add* abs)
{
	cout << "������ҵ���ϵ������" << endl;
    afz(abs);

}

//���ҷ�װ
int afz(add* abs)
{

	string g_name;
	int flot = 0;
	cin >> g_name;
	for (size_t i = 0; i < abs->m_size; i++)

	{
		if (g_name == abs->array[i].m_name)
		{
			cout << "���ҳɹ�" << endl;
			// �����ϵ������
			cout << "������" << abs->array[i].m_name << "  ";

			// �����Ա��������Ա�
			switch (abs->array[i].m_sex)
			{
			case 1:
				cout << "Ů��"; break;
			case 2:
				cout << "����"; break;
			}

			// �����ϵ�˵绰������ͼ�ͥ��ַ
			cout << "  " << "���䣺" << abs->array[i].m_age << " �ֻ��ţ� " << abs->array[i].m_phone << " ��ͥ��ַ�� " << abs->array[i].m_home << endl;
			flot = 1;
			return i;
			break;
		}



	}
	if (flot == 0)
	{
		cout << "����ʧ��" << endl;
		return  1001;

	}
	//system("pause");


}


//�޸���ϵ��
void axg(add* abs)
{

	string a_name;  // ��ϵ������
	int a_sex;  // ��ϵ���Ա�1��ʾŮ�ԣ�2��ʾ����
	string a_age;  // ��ϵ������
	string a_phone;  // ��ϵ�˵绰����
	string a_home;//��ϵ�˼�ͥסַ
	cout << "��������Ҫ�޸��˵�����" << endl;  // ��ʾ�û�����Ҫ�޸ĵ���ϵ�˵�����
	int a_floag;  // �������a_floag�����ڴ洢��ϵ�˵�����
	int a_xg = 0;  // �������a_xg�����ڴ洢�û�ѡ����޸�����
	a_floag = afz(abs);  // ����afz��������������������ƥ�����ϵ�˵������������������a_floag������
	if (a_floag != 1001)  // �ж��Ƿ��ҵ���ƥ�����ϵ��
	{
		cout << "ѡ����Ҫ�޸ĵ�����" << endl;  // ��ʾ�û�ѡ��Ҫ�޸ĵ�����
		cout << "����1������ 2���Ա� 3������ 4������ 5����ַ" << endl;  // ��ʾѡ��û�ѡ��
		cin >> a_xg;  // ��ȡ�û�ѡ����޸�����
		cout << "�����޸�Ϊʲô��" << endl;  // ��ʾ�û������µ���Ϣ
		switch (a_xg)  // �����û���ѡ�������Ӧ�Ĳ���
		{
		case 1:
			cout << "��������ϵ��������";
			cin >> abs->array[a_floag].m_name;  // ���û������������������ϵ�˵�m_name�ֶ���
			cout << "�޸ĳɹ�" << endl;
			break;
		case 2:
			cout << "��������ϵ���Ա�1��ʾŮ�ԣ�2��ʾ���ԣ���";
			cin >> abs->array[a_floag].m_sex;  // ���û���������Ա������ϵ�˵�m_sex�ֶ���
			cout << "�޸ĳɹ�" << endl;
			break;
		case 3:
			cout << "��������ϵ�����䣺";
			cin >> abs->array[a_floag].m_age;  // ���û�����������������ϵ�˵�m_age�ֶ���
			cout << "�޸ĳɹ�" << endl;
			break;
		case 4:
			cout << "��������ϵ�˵绰���룺";
			cin >> abs->array[a_floag].m_phone;  // ���û�������µ绰���������ϵ�˵�m_phone�ֶ���
			cout << "�޸ĳɹ�" << endl;
			break;
		case 5:
			cout << "��������ϵ�˼�ͥסַ��";
			cin >> abs->array[a_floag].m_home;  // ���û�������¼�ͥסַ������ϵ�˵�m_home�ֶ���
			cout << "�޸ĳɹ�" << endl;
			break;
		default:
			break;
		}
	}
}
//ɾ����ϵ��
void asc(add* abs)
{
	cout << "��������Ҫɾ���˵�����" << endl;  // �����ʾ��Ϣ��"��������Ҫɾ���˵�����"

	string g_name;  // �����ַ�������g_name�����ڴ洢�û����������
	int flot = 0;  // �������ͱ���flot�����ڱ���Ƿ��ҵ�Ҫɾ������ϵ��
	int s_flot = 0;  // �������ͱ���s_flot�����ڴ洢�û���ѡ��
	cin >> g_name;  // �ӱ�׼�����ȡ�û�������������������g_name��

	for (size_t i = 0; i < abs->m_size; i++)  // ����ͨѶ¼�е���ϵ��

	{
		if (g_name == abs->array[i].m_name)  // �������������뵱ǰ����������ϵ���������
		{
			cout << "��ȷ��Ҫɾ����0ȡ����1ȷ������";  // �����ʾ��Ϣ��"��ȷ��Ҫɾ����0ȡ����1ȷ������"
			cin >> s_flot;  // �ӱ�׼�����ȡ�û���ѡ�񣬴������s_flot��
			if (s_flot == 0)  // ����û�ѡ��ȡ����s_flot��ֵΪ0��
			{
				return;  // ֱ�ӷ��أ�ȡ��ɾ������
			}
			else  // ����û�ѡ��ȷ����s_flot��ֵΪ1��
			{
				for (int a = i; a < abs->m_size; a++)  // �ӵ�ǰλ�ÿ�ʼ�����������ϵ����ǰ�ƶ�һ��λ��
				{
					abs->array[i] = abs->array[i + 1];  // ����һ����ϵ�˵���Ϣ���ǵ�ǰ��ϵ�˵���Ϣ
				}
				abs->m_size--;  // ͨѶ¼�е���ϵ��������1
				cout << "ɾ���ɹ�" << endl;  // �����ʾ��Ϣ��"ɾ���ɹ�"
			}
			flot = 1;  // ������ҵ�Ҫɾ������ϵ��
			break;  // ����ѭ��
		}
	}

	if (flot == 0)  // ���flot��ֵΪ0����ʾû���ҵ�Ҫɾ������ϵ��
	{
		cout << "���˲���ͨѶ¼��" << endl;  // �����ʾ��Ϣ��"���˲���ͨѶ¼��"
	}

}

int main()
{

	add abs;				//����ͨѶ¼�ṹ�����
	abs.m_size = 0;	//��ʼ��

	int s_flot = 0;

	int shuru = 0;
	while (true)
	{
		showMenu();//������ʾ
		cin >> shuru;
		switch (shuru)
		{
			case 1:
				cout << "******�����ϵ��" << endl;
				afg(&abs);
				break;
			case 2:
				cout << "******��ʾ��ϵ��" << endl;
				Dcs(&abs);
				break;
			case 3:
				cout << "******ɾ����ϵ��" << endl;
				asc(&abs);
				break;
			case 4:
				cout << "******������ϵ��" << endl;
				apg(&abs);
				break;
			case 5:
				cout << "******�޸���ϵ��" << endl;
				axg(&abs);
				break;
			case 6:
				cout << "******�����ϵ��" << endl;  // �����ʾ��Ϣ��"******�����ϵ��"
				cout << "��ȷ��Ҫɾ����0ȡ����1ȷ������";  // �����ʾ��Ϣ��"��ȷ��Ҫɾ����0ȡ����1ȷ������"
				cin >> s_flot;  // �ӱ�׼�����ȡһ������ֵ���������s_flot��
				if (s_flot == 1)  // ���s_flot��ֵΪ1����ʾ�û�ȷ��Ҫɾ����ϵ�ˣ���ִ�����²���
				{
					memset(&abs, 0, sizeof(abs));  // ʹ��memset�������ṹ��abs���ڴ�����㣬�����г�Ա������ֵ����Ϊ0
					cout << "******�����ϵ�˳ɹ�" << endl;  // �����ʾ��Ϣ��"******�����ϵ�˳ɹ�"
				}

				
				break;
			
			case 0:  // �˳�ͨѶ¼
				cout << "******��ӭ�´�ʹ��" << endl;  // �����ӭ�´�ʹ�õ���ʾ��Ϣ
				system("pause");  // ��ͣ�����ִ�У��ȴ��û��������������
				return 0;  // ����0����ʾ������������
				break;  // ����switch���
			case 99:
				system("cls");
				break;
			default:
				cout << "******��������Чֵ" << endl;
				break;
		}


	}
	
}



//����
void showMenu()
{
	cout << "****************************" << endl;
	cout << "****  1�������ϵ��  *******" << endl;
	cout << "****  2����ʾ��ϵ��  *******" << endl;
	cout << "****  3��ɾ����ϵ��  *******" << endl;
	cout << "****  4��������ϵ��  *******" << endl;
	cout << "****  5���޸���ϵ��  *******" << endl;
	cout << "****  6�������ϵ��  *******" << endl;
	cout << "****  0���˳�ͨѶ¼  *******" << endl;
	cout << "****  �����밴99     *******" << endl;

	cout << "****************************" << endl;
	
}