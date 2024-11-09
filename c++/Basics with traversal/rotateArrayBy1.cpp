void rotate(vector<int> &arr) {
        int n = arr.size();
        int last_el = arr[n - 1];
 
    // assign every value by its predecessor
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
 
    // first element will be assigned by last element
    arr[0] = last_el;
        
        
    }void rotate(vector<int> &arr) {
        int n = arr.size();
        int last_el = arr[n - 1];
 
    // assign every value by its predecessor
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
 
    // first element will be assigned by last element
    arr[0] = last_el;
        
        
    }