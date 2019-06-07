#ifndef CAMERA_H
#define CAMERA_H

#include "object.h"
#include "../math/point.h"

namespace objects
{

class Camera: public Object
{
public:
    Camera(std::string name);

    const math::Point &getPosition() const;
    void setPosition(const math::Point &position);
    double getXAngle() const;
    void setXAngle(double x_angle);
    double getYAngle() const;
    void setYAngle(double y_angle);
    double getZAngle() const;
    void setZAngle(double z_angle);

    void transform(const std::shared_ptr<Matrix> matrix) override;
    void draw(std::shared_ptr<BaseDrawManager> drawer) override;
private:
    math::Point _position;
    double _x_angle;
    double _y_angle;
    double _z_angle;
};

}

#endif // CAMERA_H
