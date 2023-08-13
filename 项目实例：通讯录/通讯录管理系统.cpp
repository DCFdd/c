#include<iostream>
#include<string>

using namespace std;
void showMenu();//界面显示
#define MAX 1000

struct person
{
	string m_name;  // 联系人姓名
	int m_sex;  // 联系人性别，1表示女性，2表示男性
	string m_age;  // 联系人年龄
	string m_phone;  // 联系人电话号码
	string m_home;//联系人家庭住址
};
//通讯录结构体
struct add
{
	struct person array[MAX];//创建结构体数组
	int m_size = 0;//标志位，判断是否超出范围
};


void afg(add* abs);
int afz(add* abs);


//添加联系人
void afg(add* abs)
{
	if (abs->m_size == MAX)  // 判断通讯录的大小是否达到最大值
	{
		cout << "通讯录已满，无法添加！" << endl;  // 输出通讯录已满的提示信息
		return;  // 返回，终止当前函数的执行
	}
	else
	{

		string name;  // 声明一个字符串变量 name，用于存储用户输入的姓名
		int sex = 0;  // 声明一个整型变量 sex，并初始化为 0，用于存储用户输入的性别
		string age ;  // 声明一个整型变量 age，并初始化为 0，用于存储用户输入的年龄
		string phone;  // 声明一个整型变量 phone，用于存储用户输入的联系电话
		string home;  // 声明一个字符串变量 home，用于存储用户输入的居住地址
	

				cout << "请输入姓名" << endl;  // 提示用户输入姓名
				cin >> name;  // 从标准输入读取用户输入的姓名，并赋值给 name 
				for (size_t i = 0; i < abs->m_size; i++)

				{
					if (name == abs->array[i].m_name)
					{
						cout << "已经有此联系人，请重新输入" << endl;  // 重复输入
						system("pause");
						return;

					}
				}

				abs->array[abs->m_size].m_name = name;  // 将 name 赋值给通讯录中指定位置的联系人姓名
			
		cout << "请输入性别" << endl;  // 提示用户输入性别
		cout << "1----女" << endl << "2---男" << endl;  // 显示性别选项
		while (true)
		{
			cin >> sex;  // 从标准输入读取用户输入的性别，并赋值给 sex

			if (sex == 1 || sex == 2)  // 判断用户输入的性别是否为 1 或 2
			{
				abs->array[abs->m_size].m_sex = sex;  // 将性别赋值给通讯录中指定位置的联系人性别
				break;
			}
			else
			{
				cout << "输入错误请重新输入" << endl;
			}
		}


		cout << "请输入年龄" << endl;  // 提示用户输入年龄
		cin >> age;  // 从标准输入读取用户输入的年龄，并赋值给 age
		abs->array[abs->m_size].m_age = age;  // 将 age 赋值给通讯录中指定位置的联系人年龄

		cout << "请输入联系电话" << endl;  // 提示用户输入联系电话
		cin >> phone;  // 从标准输入读取用户输入的联系电话，并赋值给 phone
		abs->array[abs->m_size].m_phone = phone;  // 将 phone 赋值给通讯录中指定位置的联系人联系电话

		cout << "请输入居住地址" << endl;  // 提示用户输入居住地址
		cin >> home;  // 从标准输入读取用户输入的居住地址，并赋值给 home
		abs->array[abs->m_size].m_home = home;  // 将 home 赋值给通讯录中指定位置的联系人居住地址

		abs->m_size++;  // 增加通讯录中联系人的数量
		cout << "添加成功" << endl;  // 提示用户添加成功

		system("pause");
		system("cls");

	}

}


//显示联系人
void Dcs(add* abs)
{
	if (abs->m_size != 0)
	{
		// 遍历联系人数组
		for (size_t i = 0; i < abs->m_size; i++)
		{
			// 输出联系人姓名
			cout <<"姓名：" << abs->array[i].m_name << "  ";

			// 根据性别代码输出性别
			switch (abs->array[i].m_sex)
			{
			case 1:
				cout << "女性"; break;
			case 2:
				cout << "男性"; break;
			}

			// 输出联系人电话、年龄和家庭地址
			cout << "  " << "年龄：" << abs->array[i].m_age << " 手机号： " << abs->array[i].m_phone << " 家庭地址： " << abs->array[i].m_home << endl;
		}
	}
	else
	{
		cout << "还未存储联系人，请存储后再选择" << endl;
	}

	// 暂停程序执行，等待用户按任意键继续
	system("pause");
	// 清空控制台屏幕
	//system("cls");
}

//查找联系人
void apg(add* abs)
{
	cout << "输入查找的联系人姓名" << endl;
    afz(abs);

}

//查找封装
int afz(add* abs)
{

	string g_name;
	int flot = 0;
	cin >> g_name;
	for (size_t i = 0; i < abs->m_size; i++)

	{
		if (g_name == abs->array[i].m_name)
		{
			cout << "查找成功" << endl;
			// 输出联系人姓名
			cout << "姓名：" << abs->array[i].m_name << "  ";

			// 根据性别代码输出性别
			switch (abs->array[i].m_sex)
			{
			case 1:
				cout << "女性"; break;
			case 2:
				cout << "男性"; break;
			}

			// 输出联系人电话、年龄和家庭地址
			cout << "  " << "年龄：" << abs->array[i].m_age << " 手机号： " << abs->array[i].m_phone << " 家庭地址： " << abs->array[i].m_home << endl;
			flot = 1;
			return i;
			break;
		}



	}
	if (flot == 0)
	{
		cout << "查找失败" << endl;
		return  1001;

	}
	//system("pause");


}


//修改联系人
void axg(add* abs)
{

	string a_name;  // 联系人姓名
	int a_sex;  // 联系人性别，1表示女性，2表示男性
	string a_age;  // 联系人年龄
	string a_phone;  // 联系人电话号码
	string a_home;//联系人家庭住址
	cout << "请输入你要修改人的姓名" << endl;  // 提示用户输入要修改的联系人的姓名
	int a_floag;  // 定义变量a_floag，用于存储联系人的索引
	int a_xg = 0;  // 定义变量a_xg，用于存储用户选择的修改内容
	a_floag = afz(abs);  // 调用afz函数查找与输入姓名相匹配的联系人的索引，并将结果存入a_floag变量中
	if (a_floag != 1001)  // 判断是否找到了匹配的联系人
	{
		cout << "选着你要修改的内容" << endl;  // 提示用户选择要修改的内容
		cout << "输入1：姓名 2：性别 3：年龄 4：号码 5：地址" << endl;  // 显示选项供用户选择
		cin >> a_xg;  // 获取用户选择的修改内容
		cout << "你想修改为什么？" << endl;  // 提示用户输入新的信息
		switch (a_xg)  // 根据用户的选择进行相应的操作
		{
		case 1:
			cout << "请输入联系人姓名：";
			cin >> abs->array[a_floag].m_name;  // 将用户输入的新姓名存入联系人的m_name字段中
			cout << "修改成功" << endl;
			break;
		case 2:
			cout << "请输入联系人性别（1表示女性，2表示男性）：";
			cin >> abs->array[a_floag].m_sex;  // 将用户输入的新性别存入联系人的m_sex字段中
			cout << "修改成功" << endl;
			break;
		case 3:
			cout << "请输入联系人年龄：";
			cin >> abs->array[a_floag].m_age;  // 将用户输入的新年龄存入联系人的m_age字段中
			cout << "修改成功" << endl;
			break;
		case 4:
			cout << "请输入联系人电话号码：";
			cin >> abs->array[a_floag].m_phone;  // 将用户输入的新电话号码存入联系人的m_phone字段中
			cout << "修改成功" << endl;
			break;
		case 5:
			cout << "请输入联系人家庭住址：";
			cin >> abs->array[a_floag].m_home;  // 将用户输入的新家庭住址存入联系人的m_home字段中
			cout << "修改成功" << endl;
			break;
		default:
			break;
		}
	}
}
//删除联系人
void asc(add* abs)
{
	cout << "请输入你要删除人的姓名" << endl;  // 输出提示信息："请输入你要删除人的姓名"

	string g_name;  // 定义字符串变量g_name，用于存储用户输入的姓名
	int flot = 0;  // 定义整型变量flot，用于标记是否找到要删除的联系人
	int s_flot = 0;  // 定义整型变量s_flot，用于存储用户的选择
	cin >> g_name;  // 从标准输入读取用户输入的姓名，存入变量g_name中

	for (size_t i = 0; i < abs->m_size; i++)  // 遍历通讯录中的联系人

	{
		if (g_name == abs->array[i].m_name)  // 如果输入的姓名与当前遍历到的联系人姓名相等
		{
			cout << "你确定要删除吗（0取消，1确定）：";  // 输出提示信息："你确定要删除吗（0取消，1确定）："
			cin >> s_flot;  // 从标准输入读取用户的选择，存入变量s_flot中
			if (s_flot == 0)  // 如果用户选择取消（s_flot的值为0）
			{
				return;  // 直接返回，取消删除操作
			}
			else  // 如果用户选择确定（s_flot的值为1）
			{
				for (int a = i; a < abs->m_size; a++)  // 从当前位置开始，将后面的联系人向前移动一个位置
				{
					abs->array[i] = abs->array[i + 1];  // 将下一个联系人的信息覆盖当前联系人的信息
				}
				abs->m_size--;  // 通讯录中的联系人数量减1
				cout << "删除成功" << endl;  // 输出提示信息："删除成功"
			}
			flot = 1;  // 标记已找到要删除的联系人
			break;  // 跳出循环
		}
	}

	if (flot == 0)  // 如果flot的值为0，表示没有找到要删除的联系人
	{
		cout << "此人不在通讯录内" << endl;  // 输出提示信息："此人不在通讯录内"
	}

}

int main()
{

	add abs;				//创建通讯录结构体变量
	abs.m_size = 0;	//初始化

	int s_flot = 0;

	int shuru = 0;
	while (true)
	{
		showMenu();//界面显示
		cin >> shuru;
		switch (shuru)
		{
			case 1:
				cout << "******添加联系人" << endl;
				afg(&abs);
				break;
			case 2:
				cout << "******显示联系人" << endl;
				Dcs(&abs);
				break;
			case 3:
				cout << "******删除联系人" << endl;
				asc(&abs);
				break;
			case 4:
				cout << "******查找联系人" << endl;
				apg(&abs);
				break;
			case 5:
				cout << "******修改联系人" << endl;
				axg(&abs);
				break;
			case 6:
				cout << "******清空联系人" << endl;  // 输出提示信息："******清空联系人"
				cout << "你确定要删除吗（0取消，1确定）：";  // 输出提示信息："你确定要删除吗（0取消，1确定）："
				cin >> s_flot;  // 从标准输入读取一个整数值，存入变量s_flot中
				if (s_flot == 1)  // 如果s_flot的值为1，表示用户确定要删除联系人，则执行以下操作
				{
					memset(&abs, 0, sizeof(abs));  // 使用memset函数将结构体abs的内存块清零，将所有成员变量的值重置为0
					cout << "******清空联系人成功" << endl;  // 输出提示信息："******清空联系人成功"
				}

				
				break;
			
			case 0:  // 退出通讯录
				cout << "******欢迎下次使用" << endl;  // 输出欢迎下次使用的提示信息
				system("pause");  // 暂停程序的执行，等待用户按下任意键继续
				return 0;  // 返回0，表示程序正常结束
				break;  // 跳出switch语句
			case 99:
				system("cls");
				break;
			default:
				cout << "******请输入有效值" << endl;
				break;
		}


	}
	
}



//界面
void showMenu()
{
	cout << "****************************" << endl;
	cout << "****  1、添加联系人  *******" << endl;
	cout << "****  2、显示联系人  *******" << endl;
	cout << "****  3、删除联系人  *******" << endl;
	cout << "****  4、查找联系人  *******" << endl;
	cout << "****  5、修改联系人  *******" << endl;
	cout << "****  6、清空联系人  *******" << endl;
	cout << "****  0、退出通讯录  *******" << endl;
	cout << "****  清屏请按99     *******" << endl;

	cout << "****************************" << endl;
	
}