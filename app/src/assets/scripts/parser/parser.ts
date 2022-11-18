import P from 'parsimmon';

// Whitespaces
const comment = P.string('--')
                 .then(P.takeWhile(s => s !== '\n'))
                 .then(P.end);
const _ = P.regexp(/( |\t)*/);
const __ = P.regexp(/( |\t)+/);

// Numbers
const decimal = P.digits;
const hexadecimal = P.regexp(/0[xX][0-9a-fA-F]+/);
const integer = P.alt(decimal, hexadecimal);
const float = decimal.then(P.string('.')).then(decimal);

const language = (indent: number) => P.createLanguage({

});
