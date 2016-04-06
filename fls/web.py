from aiohttp import web
# usage: python -m aiohttp.web -H localhost -P 8000 fls.web:init_function

def init_function(argv):
    app = web.Application()
    app.router.add_static('/', '/Users/danielyue/Projects/runit', name='static')
    return app
