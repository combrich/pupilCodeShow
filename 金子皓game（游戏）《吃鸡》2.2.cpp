#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;
int a = 0;
int jb = 0;
int zuanshi = 0;

int game2();
int shangdian2();
int time();
int game();
int jb2(int m);
int guocheng();

int zs(int m)
{
	if (m == 1)
	{
		zuanshi = zuanshi + 1000;
		return zuanshi;
	}
	if (m == 2)
	{
		zuanshi = zuanshi + 500;
		return zuanshi;
	}
}


int jb2(int m)
{
	int jinbi = 0;
	if (m == 1)
	{
		jb = jb + 2000;
		return jb;
	}
	if (m == 0)
	{
		jb = jb + 1000;
		return jb;
	}

}
int shangdian1(int m2)
{
	if (m2 == 1)
	{
		printf("���Ľ����Ϊ");
		cout << jb;
		cout << endl;
		int a;
		printf("������1.AK47(3000),2.������(20000),3.ɳĮ֮ӥ��2000����4.�����ḫ��1500��");
		cin >> a;
		if (a == 1)
		{

			if (jb >= 3000)
			{
				jb = jb - 3000;
				printf("����ɹ�");
				printf("�Ƿ������Ϸ\n1.�� 2.��");
				int jixu;
				cin >> jixu;
				if (jixu == 1)
				{
					game2();
				}
			}
			else
			{
				printf("��Ҳ���");
				printf("�Ƿ������Ϸ\n1.�� 2.��");
				int jixu;
				cin >> jixu;
				if (jixu == 1)
				{
					game2();
				}
			}
		}

		if (a == 2)
		{
			if (jb >= 20000)
			{
				jb = jb - 20000;
				printf("����ɹ�");
				printf("�Ƿ������Ϸ\n1.�� 2.��");
				int jixu;
				cin >> jixu;
				if (jixu == 1)
				{
					game2();
				}
			}
			else
			{
				printf("��Ҳ���");
				printf("�Ƿ������Ϸ\n1.�� 2.��");
				int jixu;
				cin >> jixu;
				if (jixu == 1)
				{
					game2();
				}
			}
		}

		if (a == 3)
		{
			if (jb >= 2000)
			{
				jb = jb - 2000;
				printf("����ɹ�");
				printf("�Ƿ������Ϸ\n1.�� 2.��");
				int jixu;
				cin >> jixu;
				if (jixu == 1)
				{
					game2();
				}
			}
			else
			{
				printf("��Ҳ���");
				printf("�Ƿ������Ϸ\n1.�� 2.��");
				int jixu;
				cin >> jixu;
				if (jixu == 1)
				{
					game2();
				}
			}
		}

		if (a == 4)
		{
			if (jb >= 1500)
			{
				jb = jb - 1500;
				printf("����ɹ�");
				printf("�Ƿ������Ϸ\n1.�� 2.��");
				int jixu;
				cin >> jixu;
				if (jixu == 1)
				{
					game2();
				}
			}
			else
			{
				printf("��Ҳ���");
				printf("�Ƿ������Ϸ\n1.�� 2.��");
				int jixu;
				cin >> jixu;
				if (jixu == 1)
				{
					game2();
				}
			}
		}
	}
	return 0;
}

int guocheng()
{
	int	jinbi = 0;
	int zuanshi = 0;
	double dengji = 1;
	int m2;
	int a;
	do
	{
		int s;
		m2 = game();
		if (m2 == 1)
		{
			printf("ʤ���ˣ�����\n");
			printf("��Ҽ�2000\n");
			printf("��ʯ��1000\n");
			printf("�ȼ���1\n");
			jb2(m2);
			zs(m2);
			dengji = dengji + 1;
		}
		if (m2 == 0)
		{
			printf("���ˡ�\n");
			printf("��Ҽ�1000\n");
			printf("��ʯ��500");
			printf("�ȼ���0.5");
			jb2(m2);
			zs(m2);
			dengji = dengji + 0.5;
		}
		printf("�Ƿ������Ϸ\n");
		printf("1�� 2��\n(�������)");
		int m;
		cin >> m;
		while (m != 1 && m != 2)
		{
			printf("�������\n");
			printf("�Ƿ������Ϸ\n");
			printf("1�� 2��\n(�������)");
			cin >> m;
		}
		if (m == 1)
		{
			break;
		}
		if (m == 2)
		{
			printf("�õģ����Ǽ�����Ϸ\n");
			printf("��Ҫȥ���\n1.�̵깺��ǹ 2.������Ϸ\n");
			printf("��������ţ�");
			int xuhao2;
			cin >> xuhao2;
			while (xuhao2 != 1 && xuhao2 != 2)
			{
				printf("�������\n");
				printf("��Ҫȥ���\n1.�̵깺��ǹ 2.������Ϸ\n");
				printf("��������ţ�");
				cin >> xuhao2;
			}
			if (xuhao2 == 1)
			{
				shangdian1(xuhao2);
			}

		}
	} while (1);
	printf("��Ϸ����������");
	return 0;
}

int gamezhongjian(int n)
{
	int s;
	srand(time(0));
	int z = rand(), zhaoshu = z % 3 + 1;
	if (n == 1)
	{
		if (zhaoshu == 1)
		{
			printf("ƽ��\n");
			return s = 2;
		}
		if (zhaoshu == 2)
		{
			printf("����ʤ��\n");
			return s = 0;
		}
		if (zhaoshu == 3)
		{
			printf("����ʤ��\n");
			return s = 1;
		}
	}
	if (n == 2)
	{
		if (zhaoshu == 1)
		{
			printf("����ʤ��\n");
			return s = 1;
		}
		if (zhaoshu == 2)
		{
			printf("ƽ��\n");
			return s = 2;
		}
		if (zhaoshu == 3)
		{
			printf("����ʤ��\n");
			return s = 0;
		}
	}
	if (n == 3)
	{
		if (zhaoshu == 1)
		{
			printf("����ʤ��\n");
			return s = 0;
		}
		if (zhaoshu == 2)
		{
			printf("����ʤ��\n");
			return s = 1;
		}
		if (zhaoshu == 3)
		{

			printf("ƽ��\n");
			return s = 2;
		}
	}
}
void jiemian2(int a)
{
	int b;
	if (a == 1)
	{
		printf("1�ս�սʿ\n");
		printf("2��߸����\n");
		printf("3�¹�����\n");
		printf("4���޴�½--����\n");
		printf("5����ɳ̲\n");
		printf("(�������)\n");
		cin >> b;
		if (b == 1)
		{
			printf("�õ�,���Ѿ���Ϊ�ս�սʿ\n");
		}
		if (b == 2)
		{
			printf("�õ�,���Ѿ���Ϊ��߸����\n");
		}
		if (b == 3)
		{
			printf("�õ�,���Ѿ���Ϊ�¹�����\n");
		}
		if (b == 4)
		{
			printf("�õ�,���Ѿ���Ϊ����\n");
		}
		if (b == 5)
		{
			printf("�õ�,���Ѿ���Ϊ����ɳ̲\n");
		}
		while (b <= 0 || b >= 6)
		{
			printf("�����������������\n");
			printf("1�ս�սʿ\n");
			printf("2��߸����\n");
			printf("3�¹�����\n");
			printf("4���޴�½--����\n");
			printf("(�������)\n");
			cin >> b;
			if (b == 1)
			{
				printf("�õ�,���Ѿ���Ϊ�ս�սʿ\n");
			}
			if (b == 2)
			{
				printf("�õ�,���Ѿ���Ϊ��߸����\n");
			}
			if (b == 3)
			{
				printf("�õ�,���Ѿ���Ϊ�¹�����\n");
			}
			if (b == 4)
			{
				printf("�õ�,���Ѿ���Ϊ����\n");
			}
		}
	}
	if (a == 2)
	{
		printf("1����սʿ\n");
		printf("2�¹�����\n");
		printf("3����У��\n");
		printf("4���޴�½--С��\n");
		printf("5�Ŵ�����\n");
		printf("(�������)\n");
		cin >> b;
		if (b == 1)
		{
			printf("�õ�,���Ѿ���Ϊ����սʿ\n");
		}
		if (b == 2)
		{
			printf("�õ�,���Ѿ���Ϊ�¹�����\n");
		}
		if (b == 3)
		{
			printf("�õ�,���Ѿ���Ϊ����У��\n");
		}
		if (b == 4)
		{
			printf("�õ�,���Ѿ���ΪС��\n");
		}
		if (b == 5)
		{
			printf("�õ�,���Ѿ���Ϊ�Ŵ�����\n");
		}
		while (b <= 0 || b >= 6)
		{
			printf("�����������������\n");
			printf("1����սʿ\n");
			printf("2�¹�����\n");
			printf("3����У��\n");
			printf("4���޴�½--С��");
			printf("(�������)\n");
			cin >> b;
			if (b == 1)
			{
				printf("�õ�,���Ѿ���Ϊ����սʿ\n");
			}
			if (b == 2)
			{
				printf("�õ�,���Ѿ���Ϊ�¹�����\n");
			}
			if (b == 3)
			{
				printf("�õ�,���Ѿ���Ϊ����У��\n");
			}
			if (b == 4)
			{
				printf("�õ�,���Ѿ���ΪС��\n");
			}
		}
		return;
	}
}
void jiemian()
{
	int a;
	printf("��ӭ���롶�Լ�(������ʯͷ������)��\n");
	printf("���������룺(������");
	srand(time(0));
	int mima2 = rand() % 100 + 1;
	cout << mima2 << "*15�Ļ�)";
	cout << endl;
	printf("��Ҫ�ո񣡣���");
	int mima;
	printf("\n");
	cin >> mima;
	while (mima != mima2 * 15)
	{
		printf("�����������������\n");
		printf("�������������룺(����");
		cout << mima2 << "*15�Ļ�)";
		cout << endl;
		printf("��Ҫ�ո񣡣���");
		cin >> mima;
	}
	printf("��ã��������Ա�\n");
	printf("1�У�2Ů(�������)\n");
	cin >> a;
	int b;
	while (a != 1 && a != 2)
	{
		printf("�����������������\n");
		printf("��ã��������Ա�\n");
		printf("1�У�2Ů(�������)\n");
		cin >> a;
	}
	jiemian2(a);
	return;
}


int game()
{
	printf("��Ϸ��ʼ������");
	int m;
	int i = 0;
	int j = 0;
	for (;;)
	{
		int renxue = 100;
		int dianxue = 100;
		printf("\n���ȳ���\n");
		printf("(1ʯͷ)\n");
		printf("(2����)\n");
		printf("(3��)\n");
		printf("(�������)\n");
		int n;
		cin >> n;
		srand(time(0));
		int z = rand(), qiang2 = z % 6 + 1;
		int s;
		int m;
		while (n != 1 && n != 2 && n != 3)
		{
			printf("�����������������\n");
			printf("\n���ٴγ���\n");
			printf("(1ʯͷ)\n");
			printf("(2����)\n");
			printf("(3��)\n");
			printf("(�������)\n");
			cin >> n;
		}
		int  game3 = gamezhongjian(n);
		if (game3 == 0)
		{
			i++;
			do
			{

				if (i == 1)
				{
					printf("����׼������");
					break;
				}
				if (i == 2)
				{
					printf("�������");
					break;
				}
				if (i == 3)
				{
					printf("������ǹ������");
					printf("\n");
				}
				if (i == 4)
				{
					printf("�����õ�ǹ\n");
					printf("ʲôǹ 1.AK47 2.������ 3.AWM 4.98k 5.���ǹ--��ޱ\n");
					printf("(ѡ�����)");
					int qiang;
					cin >> qiang;
					while (qiang <= 0 && qiang >= 6)
					{
						printf("  �����������������\n");
						printf("  1.AK47 2.������ 3.AWM 4.98k 5.���ǹ--��ޱ\n");
						printf("(ѡ�����)\n");
						printf("������ʤ������һ������");
						cin >> qiang;
					}
					if (qiang == 1)
					{
						cout << endl;
						printf("��ϲ���AK47");
						cout << endl;
						break;
					}
					if (qiang == 2)
					{
						cout << endl;
						printf("��ϲ��ð�����");
						cout << endl;
						break;
					}
					if (qiang == 3)
					{
						cout << endl;
						printf("��ϲ���AWM");
						cout << endl;
						break;
					}
					if (qiang == 4)
					{
						cout << endl;
						printf("��ϲ���98K");
						cout << endl;
						break;
					}
					if (qiang == 5)
					{
						cout << endl;
						printf("��ϲ��ó��ǹ--��ޱ");
						cout << endl;
						break;
					}
				}
				if (i == 5)
				{
					printf("�������ӵ�!!!\n");
				}
				if (i == 6)
				{
					printf("�����ҵ��ӵ�!!!\n");
					break;
				}
				if (i == 7)
				{
					dianxue = dianxue / 2;
					printf("����Ѫ��ֻʣ�ٷ�֮50");
					printf("������ʤ����һ������");
					break;
				}
				if (i == 8)
				{
					printf("��������!KO!!\n");
					m = 1;
					return m;
					break;
				}
			} while (s == 1);
		}
		if (game3 == 1)
		{
			j++;
			do
			{
				if (j == 1)
				{
					printf("����׼������");
					break;
				}
				if (j == 2)
				{
					printf("�������");
					break;
				}
				if (i == 3)
				{
					printf("������ǹ������");
					printf("\n");
				}
				if (j == 4)
				{
					printf("�����õ�ǹ\n");
					printf("ʲôǹ 1.AK47 2.������ 3.AWM 4.98k 5.���ǹ--��ޱ\n");
					printf("(ѡ�����)\n");
					printf("ѡ��");
					cout << qiang2 << endl;
					printf("������ʤ������һ������");
					break;
				}
				if (qiang2 == 1)
				{
					cout << endl;
					printf("��ϲ���AK47");
					cout << endl;
					break;
				}
				if (qiang2 == 2)
				{
					cout << endl;
					printf("��ϲ��ð�����");
					cout << endl;
					break;
				}
				if (qiang2 == 3)
				{
					cout << endl;
					printf("��ϲ���AWM");
					cout << endl;
					break;
				}
				if (qiang2 == 4)
				{
					cout << endl;
					printf("��ϲ���98K");
					cout << endl;
					break;
				}
				if (qiang2 == 5)
				{
					cout << endl;
					printf("��ϲ��ó��ǹ--��ޱ");
					cout << endl;
					break;
				}
				if (j == 5)
				{
					printf("�������ӵ�!!!\n");
				}
				if (j == 6)
				{
					printf("�����ҵ��ӵ�!!!\n");
				}
				if (j == 7)
				{
					renxue = renxue / 2;
					printf("����Ѫ��ֻʣ�ٷ�֮50");
					printf("������ʤ����һ������");
					break;
				}
				if (j == 8)
				{
					printf("��������!KO!!\n");
					m = 0;
					return m;
				}
			} while (s == 0);
		}
	}
}
int main()
{
	jiemian();
	guocheng();
	return 0;
}
int game2()
{
	guocheng();
	return 0;
}

