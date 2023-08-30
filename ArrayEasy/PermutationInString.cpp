lass Solution {
private:
bool isSame(int count1[26],int count2[26])
{
    for(int i=0;i<26;i++)
    {
        if(count1[i]!=count2[i])
        {
            return 0;
        }
    }
    return 1;
}
public:
    bool checkInclusion(string s1, string s2) {
        //Character Count Array
        int count[26]={0};
        for(int i=0;i<s1.length();i++)
        {
            int index=s1[i]-'a';
            count[index]++;
        }
        int i=0;
        int windowSize=s1.length();
        int count2[26]={0};
        
        while(i<windowSize && i<s2.length()){
            int index=s2[i]-'a';
            count2[index]++;
            i++;
        }
        if(isSame(count,count2))
        {
            return 1;
        }
        while(i<s2.length() )
        {
            char newChar = s2[i];
            int index= newChar-'a';
            count2[index]++;
            char oldChar = s2[i-windowSize];
            int index2=oldChar - 'a';
            count2[index2]--;
            i++;

        if(isSame(count,count2))
        {
            return 1;
        }

        }
        return 0;

    }
};
