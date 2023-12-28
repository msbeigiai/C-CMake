dependency:
	cd build && cmake .. --graphviz=graph.dot && dot -Tpng graph.dot -o graphImage.png

prepare:
	rm -rf build
	mkdir build

run:
	cd build && cmake .. && cmake --build .
	

build:
	cd build && cmake --build .