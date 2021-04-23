install: fitstart
	cp ./src/client/fitstart /usr/local/bin/fitstart
	mkdir $(HOME)/.config/fitstart/
	touch $(HOME)/.config/fitstart/config
	mkdir $(HOME)/.local/share/
	touch $(HOME)/.local/share/fitstart
