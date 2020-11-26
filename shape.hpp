#include <memory>
#include <list>
class Shape {
public:
  virtual ~Shape();
  virtual void draw() = 0;
};

//std::unique_ptr<Shape> createShape(int type);

class Picture {
public:
  Picture();
  ~Picture();
  void draw() /*may not, depends on implementation*/;
private:
  std::list< std::shared_ptr< Shape > > objects;
};


