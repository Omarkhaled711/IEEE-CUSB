class Circle{
        private:
          double radius;
        public:
          Circle(){
              radius=1;
          }
          Circle(double radius){
              this->radius=radius;
          }
          double getRadius(){
              return radius;
          }
          void setRadius(double radius){
              this->radius=radius;
          }
          ~Circle(){}
    };