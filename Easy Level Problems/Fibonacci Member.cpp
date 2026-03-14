// Problem - https://www.naukri.com/code360/problems/fibonacci-number_1589?interviewProblemRedirection=true&leftPanelTabValue=PROBLEM&count=25&page=3&search=&sort_entity=order&sort_order=ASC&customSource=studio_nav




// ------------------Solution--------------------

bool checkMember(int n){

  if(n == 0 || n == 1){
    return true;
  }

  int a = 0, b = 1;

  while(b < n) {
    int c = b + a;
    a = b;
    b = c;
  }

  return (b == n);

}
