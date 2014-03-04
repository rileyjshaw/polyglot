function makeChange ( coins, amount ) {
  var coin = coins[ 0 ];
  if ( amount === 0 ) return 1;
  if ( typeof coin === "undefined" || amount < 0 ) return 0;
  return makeChange ( coins.slice( 1 ), amount ) + makeChange( coins, amount - coin );
}