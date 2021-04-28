.. This file is licensed under the MIT License (MIT) available on
   http://opensource.org/licenses/MIT.

generate
========

``generate nblocks ( maxtries )``

Mine up to nblocks blocks immediately (before the RPC call returns) to an address in the wallet.

Argument #1 - nblocks
~~~~~~~~~~~~~~~~~~~~~

**Type:** numeric, required

How many blocks are generated immediately.

Argument #2 - maxtries
~~~~~~~~~~~~~~~~~~~~~~

**Type:** numeric, optional

How many iterations to try (default = 1000000).

Result
~~~~~~

::

  [ blockhashes ]     (array) hashes of blocks generated

Examples
~~~~~~~~


.. highlight:: shell

Generate 11 blocks::

  DeepOnion-cli generate 11

