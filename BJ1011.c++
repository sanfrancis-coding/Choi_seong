// 공간이동 장치 작동을 최소화해야함

// 공간이동 장치 -> 지난 이동거리와 같거나 +-1 만큼만 이동
// 처음과 마지막은 1만 이동

// 낼 수 있는 최고속도를 한 번 내는 것이 가장 효율적 (속도 변화 횟수가 적음)
 //-> 피라미드 형식
    // 4 -> 1 2 1
    // 9 -> 1 2 3 2 1
    // 16 -> 1 2 3 4 3 2 1 
    // 25 -> 1 2 3 4 5 4 3 2 1 
    // 대칭을 이루면서 제곱이 항상 완성 됨ㄴ


#include <iostream>
#include <cmath>

using namespace std;

void solve(){

    long long x,y;

    cin >> x >> y;

    long long distance = y - x ;





}