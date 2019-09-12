import sys
import re

def main(argv):
	text = argv[1]
	args = text.split(" ")
	regExpr = "\\d*(\\.\\d|\\d\\.)\\d*"
	x = re.search(regExpr, args[0])
	y = re.search(regExpr, args[2])
	if x or y:
		int1 = float(args[0])
		int2 = float(args[2])
		if args[1] == "+":
			output = int1 + int2
		elif args[1] == "-":
			output = int1 - int2
		elif args[1] == "*":
			output = int1 * int2
		else:
			output = int1 / int2
		print(argv[1], "=", output)
	else:
		int1 = int(args[0])
		int2 = int(args[2])
		if args[1] == "+":
			output = int1 + int2
		elif args[1] == "-":
			output = int1 - int2
		elif args[1] == "*":
			output = int1 * int2
		else:
			output = int1 / int2
		print(argv[1], "=", "{:.0f}".format(output))
	
main(sys.argv)