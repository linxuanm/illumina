import pygments
from pygments import token


class IlluminaStyle(pygments.style.Style):

    background_color = '#F8F8F8'

    styles = {
        token.Whitespace: '#BBBBBB',
        token.Comment: 'italic #408080',

        token.Name: 'bold #2D803B'
    }