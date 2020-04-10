#include <iostream>

using namespace std;

// 本当はクラスではなく構造体で済ませるべきだった
class counter {
    int time_for_customer;
    int current_customers;
 public:
    int get_time_for_customer();
    void set_time_for_customer(int time_for_customer_init);
    int get_current_customers();
    void init_current_customers();
    void increment_current_customers();
    int get_current_total_time();
};

int counter::get_time_for_customer()
{
    return time_for_customer;
}
void counter::set_time_for_customer(int time_for_customer_init)
{
    time_for_customer = time_for_customer_init;
}
int counter::get_current_customers()
{
    return current_customers;
}
void counter::init_current_customers()
{
    current_customers = 0;
}
void counter::increment_current_customers()
{
    current_customers += 1;
}
int counter::get_current_total_time()
{
    return time_for_customer * current_customers;
}

template <size_t n> 
int find_min_counter(counter (&counters)[n])
{
    int min_time = 10000000;
    int min_index = 0;

    for (int i = 1; i < counters.size(); ++i) {
        if (counters[i].get_current_total_time() < min_time) {
            min_time = counters[i].get_current_total_time();
            min_index = i;
        }
    }

    return min_index;
}

int main(){
    int num_counters = 0;
    int num_customers = 0;
    int longest_time = 0;
    counter *counters = new counter[num_customers];

    cin >> num_counters >> num_customers;
    for (int i = 0, each_counter_time; i < num_counters; ++i) {
        cin >> each_counter_time;
        counters[i].init_current_customers();
        counters[i].set_time_for_customer(each_counter_time);
    }

    for (int i = 0; i < num_counters; ++i) {
        counters[i].increment_current_customers();    
    }

    for (int i = num_counters; i < num_customers; ++i) {
        int min_index = find_min_counter(counters);
        counters[min_index].increment_current_customers();
    }

    for (int i = 0; i < num_counters; ++i) {
        if (counters[i].get_current_total_time() > longest_time) {
            longest_time = counters[i].get_current_total_time();
        }
    }
    delete[] counters;
    cout << longest_time << endl;

    return 0;
}