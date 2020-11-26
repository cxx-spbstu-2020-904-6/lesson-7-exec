#include "shape.hpp"
#include "log.hpp"
Picture pic;

Picture::Picture() {
  Log::instance().print("construct picture");
  int type = 0;
  //while (std::unique_ptr<Shape> p = createShape(type++)) { objects.push_back(std::move(p));}
}

Picture::~Picture() {
  Log::instance().print("destruct picture");
}

void Picture::draw() {
  //using namespace std::placeholders;
  //Log::instance().print(__FUNCTION__);
  //std::for_each(objects.begin(), objects.end(), std::bind(&Shape::draw, _1));
}


