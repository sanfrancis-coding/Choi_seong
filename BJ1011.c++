// 공간이동 장치 작동을 최소화해야함

// 공간이동 장치 -> 지난 이동거리와 같거나 +-1 만큼만 이동
// 처음과 마지막은 1만 이동

// 낼 수 있는 최고속도를 한 번 내는 것이 가장 효율적 (속도 변화 횟수가 적음)
 //-> 피라미드 형식
    // 4 -> 1 2 1
    // 9 -> 1 2 3 2 1
    // 16 -> 1 2 3 4 3 2 1 
    // 25 -> 1 2 3 4 5 4 3 2 1 
    // 대칭을 이루면서 제곱이 항상 완성 됨

    // 64 + 16 = 80
    // 81 + 18 = 99
    // 100
    // 미친 개소름



    // 거리가 n의 제곱일 때, 변환 수는 2n -1 공식이 성립 

    // distance를 이런식으로 분해해서 어떤 수의 제곱이면 이렇게 하기


    // 근데 제곱이 아니라면?
        // 남는 수가 최대 이동거리보다 작다면 like 19
            // 중간에 한번 더 추가하면 됨 이동거리 변환 0 으로 -> 2n
        // 크다면? like 23
            // 한번 더 해야함 그래서 2n +1 이됨
            // 수학적으로 2번 안에 끝나더라

    // -> 모두 커버 가능


#include <iostream>
#include <cmath>

using namespace std;

void solve(){

    long long x,y;

    cin >> x >> y;

    long long distance = y - x ;

    long long max_speed = sqrt(distance);

    if (distance== max_speed*max_speed){

        cout << 2*max_speed -1 << '\n';
    }

    else if (distance <= max_speed*max_speed + max_speed){

        cout << 2*max_speed << '\n';

    }

    else {

        cout << 2*max_speed+1 << '\n';

    }

}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){

        solve();

    }

    return 0;


}