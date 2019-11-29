all:
	@rm -f spice-cabinet
	g++ spice-cabinet.cpp -o spice-cabinet
clean:
	@rm -f spice-cabinet
salt:
	@rm -f salts
	./generate_salts
