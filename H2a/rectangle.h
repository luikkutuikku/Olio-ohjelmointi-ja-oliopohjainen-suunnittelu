#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    double width;
    double height;

public:
    void setWidth(double newWidth);
    void setHeight(double newHeight);

    double getArea() const;
    double getCircum() const;
};

#endif
