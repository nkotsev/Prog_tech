#����������� ������� ���������� ������� ��� �� �����
#11 �
#22
#������� ��������� �����
#�������� �� ������� � ������� ������ �� csv ����
require 'csv'
def process_file
	sum = 0
	CSV.foreach("exam.csv") do |row|
	sum = sum + row[4]
	end
	print "Sum = "
	puts sum
	
end

process_file
sleep 3