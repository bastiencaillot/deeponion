.. This file is licensed under the MIT License (MIT) available on
   http://opensource.org/licenses/MIT.

combinerawtransaction
=====================

``combinerawtransaction ["hexstring",...]``

Combine multiple partially signed transactions into one transaction.

The combined transaction may be another partially signed transaction or a
fully signed transaction.

Argument #1 - txs
~~~~~~~~~~~~~~~~~

**Type:** string

A json array of hex strings of partially signed transactions

::

    [
      "hexstring"     (string) A transaction hash
      ,...
    ]

Result
~~~~~~

.. list-table::
   :header-rows: 1

   * - Name
     - Type
     - Description
   * - hex
     - string
     - The hex-encoded raw transaction with signature(s)

Examples
~~~~~~~~


.. highlight:: shell

::

  DeepOnion-cli combinerawtransaction ["myhex1", "myhex2", "myhex3"]

