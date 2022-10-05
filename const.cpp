//const
//A compile time constrain that an object can not be modified

int main()
{
    
    /*why use const
     a. Guard against inadvertent write to the variable
     b. Self decumenting
     c. Enable compiler to do more optimization, making code tighter.
     d. const means the variable can be put into the ROM
    
     */
    
    const int i = 9;        //connot be modified
    
    const int *p1 = &i;     //data is const, pointer is not
    int* const p2;          //poiner is const, data is not
    const int *const p3;    //both data and pointer are const
    
    //Note
    //If const is left of the *, data is const
    //If const is right of the *, pointer is const
    
    int const *p4 = &i;     /*is similar to*/   const int *p4 = &i;
    
    //type casting of cast values
    const int j = 9;
    const_cast<const int&>(j);
    
    //To make any normal variable const in the middle of execution
    int const k = 10;
    static_cast<const int&>(k)  //this will make k a const
}
