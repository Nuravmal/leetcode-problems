1108. Defanging an IP Address
Easy

363

769

Add to List

Share
Given a valid (IPv4) IP address, return a defanged version of that IP address.

A defanged IP address replaces every period "." with "[.]".



Example 1:

Input: address = "1.1.1.1"
Output: "1[.]1[.]1[.]1"



class Solution {
public:
    string defangIPaddr(string address) {
        string result="";
        for(auto i:address)
        {
            if(i=='.')
                result+="[.]";
            else
                result+=i;
        }
        return result;
    }
};
