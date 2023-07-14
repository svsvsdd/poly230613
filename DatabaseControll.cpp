

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
	//현재 좌표
}

void OrderMenu::robotmove()
{
	int x, y, tablenum;
	bool menuisready;

	//move to table
	if (menuisready == true) {//주문 완성되고
		if (x == 0 && y == 0) {//주방에 위치
			//		move to (x, y) //x, y 좌표로 이동(table)
			 // 끝나면 x==0,y==0으로 복귀
			//return back
		}
	}
}


void OrderMenu::batterycheck(int currentbattery)
{
	int currentbattery;
	if (currentbattery < 30) {
		printf("충전 필요");
	}
	//충전필요시 알림

}


int main()
{
	OrderMenu orderMenu;
	orderMenu.order(ordernum, tablenum, orderlist);
	orderMenu.currentlocation();
	orderMenu.robotmove();
	orderMenu.batterycheck();
}