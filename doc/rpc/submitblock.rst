.. This file is licensed under the MIT License (MIT) available on
   http://opensource.org/licenses/MIT.

submitblock
===========

``submitblock "hexdata"  ( "dummy" )``

Attempts to submit new block to network.

See https://en.bitcoin.it/wiki/BIP_0022 for full specification.

Arguments
1. "hexdata"        (string, required) the hex-encoded block data to submit
2. "dummy"          (optional) dummy value, for compatibility with BIP22. This value is ignored.

Examples
~~~~~~~~


.. highlight:: shell

::

  DeepOnion-cli submitblock "mydata"

::

  curl --user myusername --data-binary '{"jsonrpc": "1.0", "id":"curltest", "method": "submitblock", "params": ["mydata"] }' -H 'content-type: text/plain;' http://127.0.0.1:9332/

