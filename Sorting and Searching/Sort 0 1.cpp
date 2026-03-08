// Problem - https://www.naukri.com/code360/problems/sort-0-1_624379?interviewProblemRedirection=true&search=&leftPanelTabValue=PROBLEM&count=25&page=1&sort_entity=order&sort_order=ASC&customSource=studio_nav



// ------------------Solution--------------------
void sortZeroesAndOne(int input[], int size)
{
    int nextZero = 0;

    for(int i = 0; i < size; i++) {
        if(input[i] == 0) {
            swap(input[i], input[nextZero]);
            nextZero++;
        }
    }
    
}
