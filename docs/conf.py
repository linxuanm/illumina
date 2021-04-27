import sphinx_rtd_theme

import pygments
from sphinx.highlighting import lexers
from pygments import token


project = 'Illumina'
copyright = '2021, David Ma'
author = 'David Ma'
release = '0.1.0'

extensions = [
    "sphinx_rtd_theme"
]

templates_path = ['_templates']
exclude_patterns = ['_build', 'Thumbs.db', '.DS_Store']
html_theme = 'sphinx_rtd_theme'
html_static_path = ['_static']

keywords = [
    'include',
    'func',
    'return'
]

types = [
    'int',
    'float',
    'char',
    'byte',
    'bool',
    'void',
    'String'
]


def union(strs):
    return r'\b' + '|'.join(f'{i}' for i in strs) + r'\b'


class IlluminaLexer(pygments.lexer.RegexLexer):

    name = 'illumina'

    tokens = {
        'root': [
            (union(keywords), token.Keyword),
            (union(types), token.Name.Class),
            (r'"[^"]*"', token.String)
        ]
    }


pygments_style = 'illumina'
lexers['illumina'] = IlluminaLexer()