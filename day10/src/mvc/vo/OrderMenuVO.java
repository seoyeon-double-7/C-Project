package mvc.vo;

public class OrderMenuVO {
	private int orderNo;
	private int menuNo;	
	private int menuPrice;
	private int menuCount;
	
	public OrderMenuVO(int orderNo, int menuNo, int menuPrice, int menuCount) {
		this.orderNo = orderNo;
		this.menuNo = menuNo;
		this.menuPrice = menuPrice;
		this.menuCount = menuCount;
	}
	
	public int getMenuCount() {
		return menuCount;
	}

	public void setMenuCount(int menuCount) {
		this.menuCount = menuCount;
	}

	public int getMenuNo() {
		return menuNo;
	}
	public void setMenuNo(int menuNo) {
		this.menuNo = menuNo;
	}
	public int getMenuPrice() {
		return menuPrice;
	}
	public void setMenuPrice(int menuPrice) {
		this.menuPrice = menuPrice;
	}

	public int getOrderNo() {
		return orderNo;
	}	
	
}
