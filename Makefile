.PHONY: build docs

build:
	mypyc dao_treasury/sorting dao_treasury/streams dao_treasury/_docker.py dao_treasury/_nicknames.py dao_treasury/_wallet.py dao_treasury/constants.py dao_treasury/types.py --pretty --strict --install-types --non-interactive --disable-error-code=unused-ignore --disable-error-code=import-not-found --disable-error-code=arg-type --disable-error-code=return-value --disable-error-code=index --disable-error-code=attr-defined --disable-error-code=assignment --disable-error-code=union-attr --disable-error-code=call-overload --disable-error-code=var-annotated --disable-error-code=type-arg

docs:
	rm -r ./docs/source -f
	rm -r ./docs/_templates -f
	rm -r ./docs/_build -f
	poetry run sphinx-apidoc -o ./docs/source ./dao_treasury
