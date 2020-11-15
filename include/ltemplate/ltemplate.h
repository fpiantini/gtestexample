#if !defined LIBLTEMPLATE_HEADER
#define LIBLTEMPLATE_HEADER

#include <string>

namespace libtemplate {

class TeaBreak {
public:
  TeaBreak();
  virtual ~TeaBreak() = default;

  // Return minutes taken to make the drinks
  int morningTea() {
    return makeCoffee(true, 1) + makeCoffee(false, 0.5) + makeHerbalTea();
  }

private:
  virtual int makeCoffee(bool milk, double sugars) = 0;
  virtual int makeHerbalTea() = 0;
  std::string desc;
};

//    class LibTemplateClass {
//
//        public:
//            LibTemplateClass();
//            virtual ~LibTemplateClass() = default;
//
//        private:
//            std::string desc;
//
//    };

}  // namespace libtemplate

#endif // #if !defined LIBLTEMPLATE_HEADER
