package assignment;

	interface PaymentGateway {
	    void pay(double amount);
	}

	class UpiPayment implements PaymentGateway {
	    private String upiId;

	    UpiPayment(String upiId) {
	        this.upiId = upiId;
	    }

	    public void pay(double amount) {
	        System.out.println("Processing UPI payment...");
	        System.out.println("UPI ID: " + upiId);
	        System.out.println("Amount Paid: ₹" + amount);
	    }
	}

	class CardPayment implements PaymentGateway {
	    private String cardNumber;

	    CardPayment(String cardNumber) {
	        this.cardNumber = cardNumber;
	    }

	    public void pay(double amount) {
	        System.out.println("Processing Card payment...");
	        System.out.println("Card Number: " + cardNumber);
	        System.out.println("Amount Paid: ₹" + amount);
	    }
	}

	public class lab27 {
	    public static void main(String[] args) {

	        PaymentGateway payment;

	        payment = new UpiPayment("user@upi");
	        payment.pay(1500);

	        System.out.println();

	        payment = new CardPayment("1234-5678-9012-3456");
	        payment.pay(2500);
	    }
}

