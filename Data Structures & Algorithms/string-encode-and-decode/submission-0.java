class Solution {

    public String encode(List<String> strs) {
        String res = "";
        for(String s : strs){
            res += Integer.toString(s.length()) +"#"+s;
        }
        return res;
    }

    public List<String> decode(String str) {
        List<String> res = new ArrayList<>();
        int i=0;
        while(i<str.length()){
            int j = i;
            while(str.charAt(j) != '#'){
                j++;
            }
            int len = Integer.parseInt(str.substring(i,j));
            i=j+1;
            j = len + i;
            res.add(str.substring(i,j));
            i=j;
        }
        return res;
    }
}
