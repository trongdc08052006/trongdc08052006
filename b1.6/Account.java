
    package Ex_Classes.Bai1_6;

    public class Account {
        private String id;
        private String name;
        private int balance ;

        public Account(String id, String name) {
            this.id = id;
            this.name = name;
            this.balance = 0;
        }

        public Account(String id, String name, int balance) {
            this.id = id;
            this.name = name;
            this.balance = balance;
        }

        public String getId() {
            return id;
        }

        public String getName() {
            return name;
        }

        public int getBalance() {
            return balance;
        }

        public int credit(int amount) {
            return this.balance += amount;
        }

        public  int debit(int amount) {
            if (amount <= balance)
            {
                return  balance -= amount;
            }
            else {
                System.out.println( "Amount exceeded balance");
            }
            return this.balance;
        }

        public  int transferTo(int amount, Account another) {
            if (amount <= balance)
            {
                this.balance -= amount;
                another.credit(amount);
            }
            else {
                System.out.println( "Amount exceeded balance");
            }
            return this.balance;
        }

        @Override
        public String toString() {
            return "Account{" +
                    "id='" + id + '\'' +
                    ", name='" + name + '\'' +
                    ", balance=" + balance +
                    '}';
        }
    }

