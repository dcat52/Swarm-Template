all:
	make clean
	make build
	make run

build:
	mkdir build
	(cd build && cmake .. && make && cd ..)

run:
	argos3 -c swarm_template.argos

clean:
	rm -rf build