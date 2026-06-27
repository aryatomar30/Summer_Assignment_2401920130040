Ques 1 - Interface test and Arthemetic class


interface Test {
    void square(int n);
}

class Arithmetic implements Test {

    public void square(int n) {
        System.out.println("Square = " + (n * n));
    }
}

public class ToTestInt {
    public static void main(String[] args) {
        Arithmetic obj = new Arithmetic();
        obj.square(5);
    }
}


Ques 2 -  Outer class and inner clASS

class Outer {

    void display() {
        System.out.println("Display of Outer Class");
    }

    class Inner {
        void display() {
            System.out.println("Display of Inner Class");
        }
    }
}

public class Main {
    public static void main(String[] args) {

        Outer obj = new Outer();
        obj.display();

        Outer.Inner in = obj.new Inner();
        in.display();
    }
}


Ques 3 -  Point class 

class Point {

    private int x, y;

    public Point() {
        x = 0;
        y = 0;
    }

    public Point(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public void setX(int x) {
        this.x = x;
    }

    public void setY(int y) {
        this.y = y;
    }

    public void setXY(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public void display() {
        System.out.println("Point = (" + x + "," + y + ")");
    }

    public static void main(String[] args) {

        Point p1 = new Point();
        p1.display();

        Point p2 = new Point(10, 20);
        p2.display();

        p2.setXY(30, 40);
        p2.display();
    }
}



Question 4 - *-Box and Box3D


class Box {

    int length, breadth;

    Box(int l, int b) {
        length = l;
        breadth = b;
    }

    void area() {
        System.out.println("Area = " + (length * breadth));
    }
}

class Box3D extends Box {

    int height;

    Box3D(int l, int b, int h) {
        super(l, b);
        height = h;
    }

    void volume() {
        System.out.println("Volume = " + (length * breadth * height));
    }
}

public class Main {
    public static void main(String[] args) {

        Box3D obj = new Box3D(10, 5, 4);

        obj.area();
        obj.volume();
    }
}
