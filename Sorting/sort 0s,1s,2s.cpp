class Sloution
{
public:
void sort012( int a[],int n){
int low = 0, mid = 0, high = N - 1;

    while (mid <= high) {
        switch (arr[mid]) {
            case 0:
                std::swap(arr[low++], arr[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                std::swap(arr[mid], arr[high--]);
                break;
        }
    }
}
}
