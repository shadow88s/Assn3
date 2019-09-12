var args = process.argv[2].split(" ")
var regExpr = new RegExp('\\d*(\\.\\d|\\d\\.)\\d*');
var operation = args[1]
var output
if(regExpr.test(args[0]) || regExpr.test(args[2])){
	var int1 = parseFloat(args[0])
	var int2 = parseFloat(args[2])
}
else{
	var int1 = parseInt(args[0])
	var int2 = parseInt(args[2])
}
if(operation === '+'){
	output = int1 + int2
}
else if(operation === '-'){
	output = int1 - int2
}
else if(operation === '*'){
	output = int1 * int2
}
else{
	output = int1 / int2
}
output.toFixed(2)
var result = process.argv[2] + ' = ' + output
console.log(result)