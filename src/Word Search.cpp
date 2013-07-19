class Solution {
public:
    bool exist(vector<vector<char> > &board, string word) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(word.size() == 0)
            return true;
        if(board.empty())
            return false;
        
        bool ret = false;
        vector<vector<bool> > visited(board.size(), vector<bool>(board[0].size(), false));
        for(int i=0; i<board.size(); i++)
        {
            for(int j=0; j<board[0].size(); j++)
            {
                if(word[0] == board[i][j])
                {
                    ret = search(board, word, 0, visited, i, j);
                    if(ret)
                        return true;
                }
            }
        }
        return ret;
    }
    
    bool search(vector<vector<char> > board, string word, int dep, vector<vector<bool> > &visited, int posx, int posy)
    {
        if(dep == word.size())
        {
        	return true;
        }
        if(posx >= board.size() || posx < 0 || posy >= board[0].size() || posy < 0)
        	return false;
        
    	if(board[posx][posy] != word[dep])
    		return false;
    	
    	bool ret = false;
    	if(!visited[posx][posy])
    	{
    		visited[posx][posy] = true;
    		ret = search(board, word, dep+1, visited, posx+1, posy);
        if(!ret)
        		ret = search(board, word, dep+1, visited, posx, posy+1);
        if(!ret)
        		ret = search(board, word, dep+1, visited, posx, posy-1);
    		if(!ret)
    			ret = search(board, word, dep+1, visited, posx-1, posy);
    		
    		
    		if(!ret)
    			visited[posx][posy] = false;
    	}
    	
    	return ret;
    	
    }
};