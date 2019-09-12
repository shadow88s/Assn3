package main

import "fmt"
import "strings"
import "os"
import "strconv"
import "regexp"

func main() {
	
	args := os.Args[1]
	str := strings.Split(args, " ")
	var decimal = "\\d*(\\.\\d|\\d\\.)\\d*"; 
	
	match1, _ := regexp.MatchString(decimal, str[0])
	match2, _ := regexp.MatchString(decimal, str[2])

	if(match1 || match2) {
		//float arithmatic
		in1, err := strconv.ParseFloat(str[0], 64)
		in2, err := strconv.ParseFloat(str[2], 64)
		if err == nil {
			
			var ans = 0.1
			
			if str[1] == "+"{
				ans = in1 + in2
			} else if str[1] == "-" {
				ans = in1 - in2
			} else if str[1] == "*" {
				ans = in1 * in2
			} else {
				ans = in1 / in2
			}
			
			fmt.Printf(os.Args[1])
			fmt.Printf(" = %.2f", ans)
		}
	}else {
	//int arithmetic 
		in1, err := strconv.Atoi(str[0])
		in2, err:= strconv.Atoi(str[2])
		if err == nil {
			
			var ans int
			
			if str[1] == "+"{
				ans = in1 + in2
			} else if str[1] == "-" {
				ans = in1 - in2
			} else if str[1] == "*" {
				ans = in1 * in2
			} else {
				ans = in1 / in2
			}
			
			fmt.Print(os.Args[1], " = ", ans)
		}
		
	}
	

	
}
