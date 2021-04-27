# drop kick this file into the styles subdirectory
# of your pygments distribution and rename it to
# 'illumina.py'

import pygments
from pygments import token


class IlluminaStyle(pygments.style.Style):

    background_color = '#F8F8F8'

    styles = {
        token.Whitespace: '#BBBBBB',
        token.Comment: 'italic #408080',

        token.Keyword: 'bold #2D803B',
        token.Name.Class: 'bold #0E84B5',
        token.String: '#E74C3C'
    }