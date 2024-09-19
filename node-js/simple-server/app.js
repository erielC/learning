// Making a basic webserver

const http = require('http');

const server = http.createServer((req, res) => {
  res.statusCode = 200;
  res.setHeader('Content-Type', 'text/html');
  res.end('<h1>Welcome to my page</h1>');
});
// a request parameter that then responds using the res parameter
server.listen(3000, '127.0.0.1', () => {
  console.log('Server running....')
})


// () =>   that is the syntax for defining a function