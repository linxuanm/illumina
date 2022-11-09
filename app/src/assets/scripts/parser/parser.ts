import P from 'parsimmon';

const comment = P.string('//').then(P.regexp(/[^\n]*/));
const _ = P.regexp(/( |\t)*/);
const __ = P.regexp(/( |\t)+/);
const _br = P.optWhitespace;
const __br = P.whitespace;

const anno = P.regexp(/@[a-zA-Z0-9]+/);
