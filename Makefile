.PHONY: build docs

build:
	mypyc dao_treasury/sorting dao_treasury/streams dao_treasury/_docker.py dao_treasury/_nicknames.py dao_treasury/_wallet.py dao_treasury/constants.py dao_treasury/types.py --pretty --strict --install-types --non-interactive --disable-error-code=unused-ignore --disable-error-code=arg-type --disable-error-code=return-value --disable-error-code=index --disable-error-code=attr-defined --disable-error-code=assignment --disable-error-code=union-attr --disable-error-code=call-overload --disable-error-code=var-annotated --disable-error-code=no-any-return --disable-error-code=type-arg

docs:
	rm -r ./docs/source -f
	rm -r ./docs/_templates -f
	rm -r ./docs/_build -f
	poetry run sphinx-apidoc -o ./docs/source ./dao_treasury

# Update the TaskStart hook submodule and commit the change
hooks:
	mkdir -p .clinerules/hooks/submodules

	# TaskStart hook update
	if ! git config --file .gitmodules --get-regexp '^submodule\.clinerules/hooks/submodules/TaskStart\.url$$' > /dev/null 2>&1; then \
		git submodule add https://github.com/BobTheBuidler/TaskStart.git .clinerules/hooks/submodules/TaskStart || true; \
		git add .gitmodules .clinerules/hooks/submodules/TaskStart; \
	fi
	git submodule update --init --recursive
	git -c protocol.file.allow=always submodule update --remote .clinerules/hooks/submodules/TaskStart
	cp .clinerules/hooks/submodules/TaskStart/TaskStart .clinerules/hooks/TaskStart
	git add -N .clinerules/hooks/submodules/TaskStart 2>/dev/null || true
	git add -N .clinerules/hooks/TaskStart 2>/dev/null || true
	if [ -n "$$(git status --porcelain .clinerules/hooks/submodules/TaskStart .clinerules/hooks/TaskStart)" ]; then \
		git add .clinerules/hooks/submodules/TaskStart .clinerules/hooks/TaskStart; \
		git commit -m "Update TaskStart hook submodule and file"; \
	fi

	# PostToolUse hook update
	if ! git config --file .gitmodules --get-regexp '^submodule\.clinerules/hooks/submodules/PostToolUse\.url$$' > /dev/null 2>&1; then \
		git submodule add https://github.com/BobTheBuidler/PostToolUse.git .clinerules/hooks/submodules/PostToolUse || true; \
		git add .gitmodules .clinerules/hooks/submodules/PostToolUse; \
	fi
	git submodule update --init --recursive
	git -c protocol.file.allow=always submodule update --remote .clinerules/hooks/submodules/PostToolUse
	cp .clinerules/hooks/submodules/PostToolUse/PostToolUse .clinerules/hooks/PostToolUse
	chmod +x .clinerules/hooks/PostToolUse
	git add -N .clinerules/hooks/submodules/PostToolUse 2>/dev/null || true
	git add -N .clinerules/hooks/PostToolUse 2>/dev/null || true
	if [ -n "$$(git status --porcelain .clinerules/hooks/submodules/PostToolUse .clinerules/hooks/PostToolUse)" ]; then \
		git add .clinerules/hooks/submodules/PostToolUse .clinerules/hooks/PostToolUse; \
		git commit -m "Update PostToolUse hook submodule and file"; \
	fi
