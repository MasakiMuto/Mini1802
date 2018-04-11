#pragma once
namespace mini {
  template<class T>
class vector2 {
public:
  vector2() = default;
  vector2(const T& x, const T& y) : x_(x), y_(y) { }
  void operator +=(const vector2& a) {
    x_ += a.x_;
    y_ += a.y_;
  }

  vector2 operator +(const vector2& a) const {
    return {x_ + a.x_, y_ + a.y_};
  }
  vector2 operator -() const {
    return {-x_, -y_};
  }
    template<class S>
  vector2 operator *(const S a) const {
    return {x_ * a, y_ * a};
  }

  const T& get_x() const {
    return x_;
  }
  const T& get_y() const {
    return y_;
  }

  void normalize() {
    auto sum = std::sqrt(x_ * x_ + y_ * y_);
    if(sum > 0) {
      x_ /= sum;
      y_ /= sum;
    }
  }

private:
  T x_, y_;
};

  using vector2f = mini::vector2<float>;
  
}
