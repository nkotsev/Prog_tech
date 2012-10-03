require "csv"
def process_file
	rubysum = 0
	pythonsum = 0
	perlsum = 0
	allsum = 0
	CSV.foreach("example.csv") do |row|
	puts row
	end
	CSV.foreach("example.csv") do |row|
		if row[2] =="Ruby"
			rubysum = rubysum + row[1].to_i
		elsif row[2] == "Python"
			pythonsum = pythonsum + row[1].to_i
		elsif row[2] == "Perl"
			perlsum = perlsum + row[1].to_i
		end
	end
	allsum = rubysum + pythonsum + perlsum
	printf("\n Ruby = %d \n Python = %d \n Perl = %d \n Sum = %d\n",rubysum,pythonsum,perlsum,allsum)
end

process_file
	