#include <string>
#include "BooleanExpression.h"


Equal::Equal(ArithmeticExpression *ae1,ArithmeticExpression *ae2)
{
  _ae1 = ae1;
  _ae2 = ae2;

}

Equal::~Equal ()
{
  delete _ae1;
  delete _ae2;
}
  
void Equal::print (std::ostream & o) const
{
  o << "[";
  _ae1->print (o);
  o << " = ";
  _ae2->print (o);
  o << "]";
}

bool Equal::check(){
  if(_ae1->get()==_ae2->get()){
    result = true;
    return result;
  }
  else{
    return result;
  }
}

//Smaller
Smaller::Smaller (ArithmeticExpression *ae1,ArithmeticExpression *ae2)
{
  _ae1 = ae1;
  _ae2 = ae2;
}

Smaller::~Smaller ()
{
  delete _ae1;
  delete _ae2;
}
  
void Smaller::print (std::ostream & o) const
{
  o << "[";
  _ae1->print (o);
  o << " < ";
  _ae2->print (o);
  o << "]";
}


bool Smaller::check(){
  if(_ae1->get()<_ae2->get()){
    result = true;
    return result;
  }
  else{
    return result;
  }
}
//Larger
Larger::Larger(ArithmeticExpression *ae1,ArithmeticExpression *ae2)
{
  _ae1 = ae1;
  _ae2 = ae2;
}

Larger::~Larger ()
{
  delete _ae1;
  delete _ae2;
}
  
void Larger::print (std::ostream & o) const
{
  o << "[";
  _ae2->print (o);
  o << " < ";
  _ae1->print (o);
  o << "]";
}

bool Larger::check(){
  if(_ae1->get()>_ae2->get()){
    result = true;
    return result;
  }
  else{
    return result;
  }
}