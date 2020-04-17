Test: https://leetcode.com/discuss/interview-question/396769/

function(question) // answers: 
    solution("23:5?");// 23:59
    solution("2?:22");// 23:22
    solution("0?:??");// 09:59
    solution("1?:??");// 19:59
    solution("?4:??");// 14:59
    solution("?3:??");// 23:59
    solution("??:??");// 23:59
    solution("?4:5?"); //14:59
    solution("?4:??"); //14:59
    solution("?3:??"); //23:59
    solution("23:5?"); //23:59
    solution("2?:22"); //23:22
    solution("0?:??"); //09:59
    solution("1?:??"); //19:59
    solution("?4:0?"); //14:09
    solution("?9:4?"); //19:49