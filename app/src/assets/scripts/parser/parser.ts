import P from 'parsimmon';

const comment = P.string('--').then(P.regexp(/[^\n]*/));
const _ = P.regexp(/( |\t)*/);
const __ = P.regexp(/( |\t)+/);
const _br = P.alt(P.whitespace, comment).many();
const __br = P.alt(P.whitespace, comment).atLeast(1);

const anno = P.regexp(/@[a-zA-Z0-9]+/);
