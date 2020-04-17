Test: https://leetcode.com/discuss/interview-question/396769/<br />

function(question) // answers: <br />
    solution("23:5?");// 23:59<br />
    solution("2?:22");// 23:22<br />
    solution("0?:??");// 09:59<br />
    solution("1?:??");// 19:59<br />
    solution("?4:??");// 14:59<br />
    solution("?3:??");// 23:59<br />
    solution("??:??");// 23:59<br />
    solution("?4:5?"); //14:59<br />
    solution("?4:??"); //14:59<br />
    solution("?3:??"); //23:59<br />
    solution("23:5?"); //23:59<br />
    solution("2?:22"); //23:22<br />
    solution("0?:??"); //09:59<br />
    solution("1?:??"); //19:59<br />
    solution("?4:0?"); //14:09<br />
    solution("?9:4?"); //19:49<br />