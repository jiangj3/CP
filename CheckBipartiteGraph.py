class Solution:
    def isBipartite(self, graph: List[List[int]]) -> bool:
        #white: not visited
        #red and blue coloring to rep two diff sets
        
        #input is adjacency list where index is node. 
        
        
        
        #input is line below
        #neighboors:[[1,3],[0,2],[1,3],[0,2]]
        #nodes         0      1    2     3
        
        white, red, blue = 0,1,2
        colorMap = [white]*len(graph)
        
        def colorDFS(node):
            stack = []
            #pick an arbitrary color
            colorMap[node]=red
            stack.append((red,node))
            
            while len(stack)>0:
                currentColor,x = stack.pop(-1)
                nextColor = (blue if currentColor==red else red)
                for nbr in graph[x]:
                    if colorMap[nbr]==white:
                        colorMap[nbr]=nextColor
                        stack.append((nextColor,nbr))
                    elif colorMap[nbr]!=nextColor:
                        return False
                
            
            return True
        
        
        
        
        for node in range(len(graph)):
            if colorMap[node]==white:
                if not colorDFS(node): return False
                
        return True
        