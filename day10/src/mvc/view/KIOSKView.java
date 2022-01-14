package mvc.view;

import java.util.ArrayList;
import mvc.vo.OrderMenuVO;

public class KIOSKView {
	private ArrayList <OrderMenuVO> orderMenuArrList;
	private int sum;

	public KIOSKView(ArrayList<OrderMenuVO> orderMenuArrList) {
		this.orderMenuArrList = orderMenuArrList;
	}
	
	public String getMenuName(int menuNo){
		
		String menuName = "";
		switch(menuNo) {
		case 1 : 
			menuName = "떡볶이"; break;
		case 2 : 
			menuName = "쫄면"; break;
		case 3 : 
			menuName = "순대"; break;
		case 4 : 
			menuName = "튀김"; break;
		case 5 : 
			menuName = "김밥"; break;
		default :
			System.out.println("잘못된 메뉴번호를 입력하였씁니다.");
		}
		return menuName;
	}
	
	public void print() {
		System.out.println("================== 주문내역 ==================");		
		for(int i = 0; i < orderMenuArrList.size(); i++) {
//			ArrayList에 저장된 OrderMEnuVO의 객체 참조값을 반환 받아서 지역변수에 저장한다.
			OrderMenuVO om = orderMenuArrList.get(i);
//			OrderMenuVo 객체의 정보를 반환하여 주문내역을 출력한다.(반복)
			int price = om.getMenuPrice();
			int count = om.getMenuCount();
			System.out.printf("%d. %s : %d원 주문개수(%d) 합계 : %d\n",
								(i+1), getMenuName(om.getMenuNo()), om.getMenuPrice(), count, price*count);
			sum += price * count;
		}
			
		System.out.printf("\t\t 결제금액 : %d원\n", sum);
	}
}
