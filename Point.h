class Point{
    public:
        Point();
        Point(double xVal, double yVal);
        double calcDistance(Point other);
        //Accessor
        //double getX();
        //double getY();
        //Mutator
        //void setX(double xVal);
        //void setY(double yVal);
        void print();
    private:
        double x;
        double y;
};


