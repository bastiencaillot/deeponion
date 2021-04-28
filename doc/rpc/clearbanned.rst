.. This file is licensed under the MIT License (MIT) available on
   http://opensource.org/licenses/MIT.

clearbanned
===========

``clearbanned``

Clear all banned IPs.

Examples
~~~~~~~~


.. highlight:: shell

::

  DeepOnion-cli clearbanned

::

  curl --user myusername --data-binary '{"jsonrpc": "1.0", "id":"curltest", "method": "clearbanned", "params": [] }' -H 'content-type: text/plain;' http://127.0.0.1:9332/

