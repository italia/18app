// expose your api wrapper
export default url => fetch(url)
  .then(response => response.json())
