class Solution(object):
    def isValidSudoku(self, board):
        """
        :type board: List[List[str]]
        :rtype: bool
        """
        row=[set() for _ in range(9)]
        col=[set() for _ in range(9)]
        box=[set() for _ in range(9)]

        for r in range(9):
            for c in range(9):
                val=board[r][c]
                if val=='.':
                    continue
                if val in row[r]:
                    return False
                row[r].add(val)

                if val in col[c]:
                    return False
                col[c].add(val)

                index=(r//3)*3+c//3
                if val in box[index]:
                    return False
                box[index].add(val)
        return True
