

#include <Stdio.h>


class OrderMenu
{
private:
	int ordernum, tablenum;
	char orderlist[7];
	bool menuisready;
public:
	void order(int ordernum, int tablenum, char orderlist[7]);
	void robotcurrentlocation(int x, int y);
	void robotmove();
	void batterycheck(int currentbattery);
};





void OrderMenu::order(int ordernum, int tablenum, char orderlist[7])
{
	this->ordernum = ordernum;
	this->tablenum = tablenum;
	//ordernum, tablenum, ordertime, menu, count, price, totalprice
}

void OrderMenu::robotcurrentlocation(int x, int y)
{
	int x, y;
	//���� ��ǥ
}

void OrderMenu::robotmove()
{
	int x, y, tablenum;
	bool menuisready;

	//move to table
	if (menuisready == true) {//�ֹ� �ϼ��ǰ�
		if (x == 0 && y == 0) {//�ֹ濡 ��ġ
			//		move to (x, y) //x, y ��ǥ�� �̵�(table)
			 // ������ x==0,y==0���� ����
			//return back
		}
	}
}


void OrderMenu::batterycheck(int currentbattery)
{
	int currentbattery;
	if (currentbattery < 30) {
		printf("���� �ʿ�");
	}
	//�����ʿ�� �˸�

}


int main()
{
	OrderMenu orderMenu;
	orderMenu.order(ordernum, tablenum, orderlist);
	orderMenu.currentlocation();
	orderMenu.robotmove();
	orderMenu.batterycheck();
}