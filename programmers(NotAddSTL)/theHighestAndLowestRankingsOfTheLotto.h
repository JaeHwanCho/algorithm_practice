#include <string>
#include <vector>

using namespace std;

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void quickSort(vector<int>& v, int start, int end)
{
    if (start >= end)
        return;
    int left = start + 1;
    int right = end;
    int pivot = start;

    while (left <= right)
    {
        while (left <= end && v[left] <= v[pivot])
        {
            left++;
        }
        while (right > start && v[right] >= v[pivot])
        {
            right--;
        }
        if (right < left)
            swap(&v[right], &v[pivot]);
        else
            swap(&v[right], &v[left]);
    }

    quickSort(v, start, right - 1);
    quickSort(v, right + 1, end);
}

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int unknown = 0;
    int same = 0;

    quickSort(lottos, 0, 5);
    quickSort(win_nums, 0, 5);

    for (int i = 0; i < lottos.size(); i++) {
        if (lottos[i] == 0) {
            unknown++;
        }
        else
            break;
    }

    for (int i = unknown; i < lottos.size(); i++) {
        for (int j = 0; j < win_nums.size(); j++) {
            if (lottos[i] == win_nums[j])
                same++;
        }
    }

    //max = unknown + same, min = same
    if (unknown + same > 5)
        answer.push_back(1);
    else if (unknown + same > 4)
        answer.push_back(2);
    else if (unknown + same > 3)
        answer.push_back(3);
    else if (unknown + same > 2)
        answer.push_back(4);
    else if (unknown + same > 1)
        answer.push_back(5);
    else
        answer.push_back(6);

    if (same > 5)
        answer.push_back(1);
    else if (same > 4)
        answer.push_back(2);
    else if (same > 3)
        answer.push_back(3);
    else if (same > 2)
        answer.push_back(4);
    else if (same > 1)
        answer.push_back(5);
    else
        answer.push_back(6);

    return answer;
}