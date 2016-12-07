#include <cstdio>
#include <fstream>
#include <string>
#include <vector>
//#include <boost/test/unit_test.hpp>
#include "AVOSCloud.h"
#include "User/AVUser.h"
#include "AVObject/AVObject.h"
#include "Query/AVQuery.h"

using namespace std;
using namespace avoscloud;
int main(int argc, char *argv[]) {
  /*
    if (argc != 2) {
        std::cout << "Usage: " << argv[0] << " [url]" << std::endl;
        return 1;
    }
   */
    AVOSCloud::setApplicationId("rGngnUit9fqERRVjQMfzQhWg-gzGzoHsz", "xWQ3c4CoLPXIlRd6UxLRGndX");
    AVQuery *query = AVQuery::queryWithClassName("exclusive");
  //  query->whereKeyEqualTo("age", 27);
  //  query->limit = 10;
  //  query->skip = 1;
    std::vector<AVObject*> objects = query->findObjects();
    std::cout<<"ok"<<std::endl;
    
    return 0;
}
