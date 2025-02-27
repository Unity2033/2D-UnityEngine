﻿#include <iostream>

using namespace std;

void Permutation(int n, int list[], int depth)
{
    if (depth == n)
    {  // (1) 모든 원소가 선택되었을 때 출력
        for (int i = 0; i < n; i++)
        {
            cout << list[i] << " ";
        }
        cout << "\n";
        return;
    }
    for (int i = depth; i < n; i++)
    {  // (2) depth부터 n까지 순회
        std::swap(list[i], list[depth]);  // 원소를 선택하고 순열을 생성
        Permutation(n, list, depth + 1);  // 재귀 호출
        std::swap(list[depth], list[i]);  // 백트래킹: 원래대로 복구
    }
}

int main()
{
#pragma region 백트래킹
    // 해를 찾아가는 도중에 지금의 경로가 해가 될 것 같지 않으면,
    // 더 이상 깊이 들어가지 않고, 이전 단계로 다시 돌아가는 알고리즘입니다.

    // 백트래킹의 유망성 판단
    // 해가 될 만한지 판단한 후에 유망하지 않다고 결정되면,
    // 그 노드의 이전 노드로 돌아가 다음 자식 노드로 이동합니다.

    // 해가 될 만한 가능이 있으면 유망하다. (Promising)
    // 유망하지 않은 노드에가지 않는 것     (Pruning)

    int n = 3;
    int element[] = { 1,2,3 };
    int depth = 0;

    Permutation(n, element, depth);

#pragma endregion

    return 0;
}


