#include <iostream> //ǥ�� ���̺귯�� iostream�� �ҷ���
#include "filename.h"	 //���� ���� filename.h ��� ������ �ҷ���

int addTwo(int a, int b) //return ���� �����̰�, ������ �Ű����� a�� b�� �޴� �Լ� addTwo ����
{
	return a + b;	//�� �Ű������� ���� return ��
}

int main() //main�Լ�
{
	std::string name{""}; //std namespace �ȿ� �ִ� string �ڷ��� ���� name�� ���� �� ""�� �ʱ�ȭ

	int number{ 0 }; //������ ���� number ���� �� 0���� �ʱ�ȭ
	int age = 0; //������ ���� age ���� �� 0���� �ʱ�ȭ

	addTwo(number, age); //addTwo �Լ��� number, age�� �Ű������� �Ѱ���

	std::cin >> name >> number >> age; //cin �Լ��� ����� name number age�� ������� �Է� ����

	if (name == "kimjongha") //if ���� ����ؼ� name�� ���� "kimjongha"���� Ȯ��
	{
		std::cout << "��� ���� ��� �� �̸��ε�?" << std::endl; //name�� ���� "kimjongha"��� cout�Լ��� ����� "��� ���� ��� �� �̸��ε�?"���

	}
	else //name�� "kimjongha"�� �ƴ϶�� ���� �ڵ� ����
	{
		std::cout << "ȯ���մϴ�!" << std::endl; //cout �Լ��� ����� "ȯ���մϴ�!" ��� �� endl�� ���� ���� + ��½�Ʈ�� ����
	}

	return 0; //main�Լ��� 0�� return ��
}


 