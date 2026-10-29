// week08-3.cpp 學習計畫 Matrix 第3題 有點難
// LeetCode 54. Spiral Matrix 螺旋矩陣, 繞圈圈輸出
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M = matrix.size(), N = matrix[0].size(); // 矩陣的高（行數 M）、寬（列數 N）
        vector<int> ans; // 儲存最終螺旋順序結果的陣列
        int left = 0, right = N - 1, up = 0, down = M - 1; // 定義目前的上下左右邊界

        // 當收集到的元素數量還沒達到總元素數量 (M * N) 時，持續繞圈
        while (ans.size() < M * N) {
            // 1. 往右走：走最上面那一行 (up)
            for (int j = left; j <= right; j++) ans.push_back(matrix[up][j]);
            up++; // 最上面那一行處理完畢，上邊界下移

            // 2. 往下走：走最右邊那一列 (right)
            for (int i = up; i <= down; i++) ans.push_back(matrix[i][right]);
            right--; // 最右邊那一列處理完畢，右邊界左移

            // 檢查是否已經收集完所有元素 (避免單行/單列矩陣時重複走往左與往上的流程)
            if (ans.size() == M * N) break;

            // 3. 往左走：走最下面那一行 (down)
            for (int j = right; j >= left; j--) ans.push_back(matrix[down][j]);
            down--; // 最下面那一行處理完畢，下邊界上移

            // 4. 往上走：走最左邊那一列 (left)
            for (int i = down; i >= up; i--) ans.push_back(matrix[i][left]);
            left++; // 最左邊那一列處理完畢，左邊界右移
        }

        return ans; // 回傳螺旋列印結果
    }
};
