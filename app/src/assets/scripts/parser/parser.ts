import P from 'parsimmon';

// Helpers
function oneStr(arr: string[]) {
    return P.alt(...arr.map(e => P.string(e)));
}

// Atoms
const reservedStr = [
    'if', 'else', 'import', 'in', 'from',
    'interface', 'adt', 'instance', 'let',
    'where'
];
const reservedOpStr = [ '=', '.', ':', '->' ];

const varid = P.regexp(/[a-z_][a-zA-Z0-9_]*/).assert(
    s => !reservedStr.includes(s),
    'Identifier cannot be a keyword'
);
const conid = P.regexp(/[a-zA-Z_][a-zA-Z0-9_]*/);

const tyvar = varid; // Type variable
const tycon = conid; // Type constructor
const inter = conid; // Interface
const modid = conid; // Module name

// Types


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
const float = P.seqMap(
    decimal, P.string('.'), decimal,
    (a, _, b) => parseFloat(`${a}.${b}`)
);

// Strings
const escapes = P.regexp(/\\./);
const char = P.seqMap(
    P.string("'"), P.alt(P.noneOf("'\\"), escapes), P.string("'"),
    (_, chr, __) => chr
);
const string = P.seqMap(
    P.string('"'), P.alt(P.noneOf('"\\'), escapes).many(), P.string('"'),
    (_, str, __) => str
);

const language = (indent: number) => P.createLanguage({

});
