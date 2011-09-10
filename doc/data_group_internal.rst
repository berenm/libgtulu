3.7.2 Transfer of Pixel Rectangles
-----------------------------------

GroupFormat:
  *format* is a symbolic constant indicating what the values in memory represent.
  
Width/Height:
  *width* and *height* are the width and height, respectively, of the pixel rectangle to be transferred.

Data:
  *data* refers to the data to be drawn.
  
DataFormat:
  These data are represented with one of several GL data types, specified by *type*. The correspondence between the *type* token values and the GL data types they indicate is given in table 3.2.

GroupFormat / DataFormat
  If *format* is DEPTH_STENCIL and *type* is not UNSIGNED_INT_24_8 or FLOAT_32_UNSIGNED_INT_24_8_REV, then the error INVALID_ENUM occurs.
  If *format* is one of the integer component formats as defined in table 3.3 and *type* is FLOAT, the error INVALID_ENUM occurs.
  
  Some additional constraints on the combinations of *format* and *type* values that are accepted are discussed below.
  Additional restrictions may be imposed by specific commands.


Table 3.2: Pixel data type parameter values and the corresponding GL data types.
--------------------------------------------------------------------------------
Refer to table 2.2 for definitions of GL data types.
Special interpretations are described near the end of section 3.5.

+---------------------------------+-----------------------------+------------------------+
| *type* Parameter Token Name     | Corresponding GL Data Type  | Special Interpretation |
+=================================+=============================+========================+
| UNSIGNED_BYTE                   | ubyte                       | No                     |
+---------------------------------+-----------------------------+------------------------+
| BYTE                            | byte                        | No                     |
+---------------------------------+-----------------------------+------------------------+
| UNSIGNED_SHORT                  | ushort                      | No                     |
+---------------------------------+-----------------------------+------------------------+
| SHORT                           | short                       | No                     |
+---------------------------------+-----------------------------+------------------------+
| UNSIGNED_INT                    | uint                        | No                     |
+---------------------------------+-----------------------------+------------------------+
| INT                             | int                         | No                     |
+---------------------------------+-----------------------------+------------------------+
| HALF_FLOAT                      | half                        | No                     |
+---------------------------------+-----------------------------+------------------------+
| FLOAT                           | float                       | No                     |
+---------------------------------+-----------------------------+------------------------+
| UNSIGNED_BYTE_3_3_2             | ubyte                       | Yes                    |
+---------------------------------+-----------------------------+------------------------+
| UNSIGNED_BYTE_2_3_3_REV         | ubyte                       | Yes                    |
+---------------------------------+-----------------------------+------------------------+
| UNSIGNED_SHORT_5_6_5            | ushort                      | Yes                    |
+---------------------------------+-----------------------------+------------------------+
| UNSIGNED_SHORT_5_6_5_REV        | ushort                      | Yes                    |
+---------------------------------+-----------------------------+------------------------+
| UNSIGNED_SHORT_4_4_4_4          | ushort                      | Yes                    |
+---------------------------------+-----------------------------+------------------------+
| UNSIGNED_SHORT_4_4_4_4_REV      | ushort                      | Yes                    |
+---------------------------------+-----------------------------+------------------------+
| UNSIGNED_SHORT_5_5_5_1          | ushort                      | Yes                    |
+---------------------------------+-----------------------------+------------------------+
| UNSIGNED_SHORT_1_5_5_5_REV      | ushort                      | Yes                    |
+---------------------------------+-----------------------------+------------------------+
| UNSIGNED_INT_8_8_8_8            | uint                        | Yes                    |
+---------------------------------+-----------------------------+------------------------+
| UNSIGNED_INT_8_8_8_8_REV        | uint                        | Yes                    |
+---------------------------------+-----------------------------+------------------------+
| UNSIGNED_INT_10_10_10_2         | uint                        | Yes                    |
+---------------------------------+-----------------------------+------------------------+
| UNSIGNED_INT_2_10_10_10_REV     | uint                        | Yes                    |
+---------------------------------+-----------------------------+------------------------+
| UNSIGNED_INT_24_8               | uint                        | Yes                    |
+---------------------------------+-----------------------------+------------------------+
| UNSIGNED_INT_10F_11F_11F_REV    | uint                        | Yes                    |
+---------------------------------+-----------------------------+------------------------+
| UNSIGNED_INT_5_9_9_9_REV        | uint                        | Yes                    |
+---------------------------------+-----------------------------+------------------------+
| FLOAT_32_UNSIGNED_INT_24_8_REV  | n/a                         | Yes                    |
+---------------------------------+-----------------------------+------------------------+

Table 3.3: Pixel data formats.
------------------------------
The second column gives a description of and the number and order of elements in a group.
Unless specified as an index, formats yield components.
Components are floating-point unless prefixed with the letter ’i’, which indicates they are integer.

+-------------------+---------------------------+-------------------+
| *format* Name     | Element Meaning and Order | Target Buffer     |
+===================+===========================+===================+
| STENCIL_INDEX     | Stencil Index             | Stencil           |
+-------------------+---------------------------+-------------------+
| DEPTH_COMPONENT   | Depth                     | Depth             |
+-------------------+---------------------------+-------------------+
| DEPTH_STENCIL     | Depth and Stencil Index   | Depth and Stencil |
+-------------------+---------------------------+-------------------+
| RED               | R                         | Color             |
+-------------------+---------------------------+-------------------+
| GREEN             | G                         | Color             |
+-------------------+---------------------------+-------------------+
| BLUE              | B                         | Color             |
+-------------------+---------------------------+-------------------+
| RG                | R, G                      | Color             |
+-------------------+---------------------------+-------------------+
| RGB               | R, G, B                   | Color             |
+-------------------+---------------------------+-------------------+
| RGBA              | R, G, B, A                | Color             |
+-------------------+---------------------------+-------------------+
| BGR               | B, G, R                   | Color             |
+-------------------+---------------------------+-------------------+
| BGRA              | B, G, R, A                | Color             |
+-------------------+---------------------------+-------------------+
| RED_INTEGER       | iR                        | Color             |
+-------------------+---------------------------+-------------------+
| GREEN_INTEGER     | iG                        | Color             |
+-------------------+---------------------------+-------------------+
| BLUE_INTEGER      | iB                        | Color             |
+-------------------+---------------------------+-------------------+
| RG_INTEGER        | iR, iG                    | Color             |
+-------------------+---------------------------+-------------------+
| RGB_INTEGER       | iR, iG, iB                | Color             |
+-------------------+---------------------------+-------------------+
| RGBA_INTEGER      | iR, iG, iB, iA            | Color             |
+-------------------+---------------------------+-------------------+
| BGR_INTEGER       | iB, iG, iR                | Color             |
+-------------------+---------------------------+-------------------+
| BGRA_INTEGER      | iB, iG, iR, iA            | Color             |
+-------------------+---------------------------+-------------------+


GroupFormat / DataFormat
  The number of components per packed pixel is fixed by the *type*, and must match the number of components per group indicated by the *format* parameter, as listed in table 3.5.
  The error INVALID_OPERATION is generated by any command processing pixel rectangles if a mismatch occurs.


Table 3.5: Packed pixel formats.
--------------------------------

+---------------------------------+---------------+-----------------------+----------------------------------------+
| type Parameter Token Name       | GL Data Type  | Number of Components  | Matching Pixel Formats                 |
+=================================+===============+=======================+========================================+
| UNSIGNED_BYTE_3_3_2             | ubyte         | 3                     | RGB, RGB_INTEGER                       |
+---------------------------------+---------------+-----------------------+----------------------------------------+
| UNSIGNED_BYTE_2_3_3_REV         | ubyte         | 3                     | RGB, RGB_INTEGER                       |
+---------------------------------+---------------+-----------------------+----------------------------------------+
| UNSIGNED_SHORT_5_6_5            | ushort        | 3                     | RGB, RGB_INTEGER                       |
+---------------------------------+---------------+-----------------------+----------------------------------------+
| UNSIGNED_SHORT_5_6_5_REV        | ushort        | 3                     | RGB, RGB_INTEGER                       |
+---------------------------------+---------------+-----------------------+----------------------------------------+
| UNSIGNED_SHORT_4_4_4_4          | ushort        | 4                     | RGBA, BGRA, RGBA_INTEGER, BGRA_INTEGER |
+---------------------------------+---------------+-----------------------+----------------------------------------+
| UNSIGNED_SHORT_4_4_4_4_REV      | ushort        | 4                     | RGBA, BGRA, RGBA_INTEGER, BGRA_INTEGER |
+---------------------------------+---------------+-----------------------+----------------------------------------+
| UNSIGNED_SHORT_5_5_5_1          | ushort        | 4                     | RGBA, BGRA, RGBA_INTEGER, BGRA_INTEGER |
+---------------------------------+---------------+-----------------------+----------------------------------------+
| UNSIGNED_SHORT_1_5_5_5_REV      | ushort        | 4                     | RGBA, BGRA, RGBA_INTEGER, BGRA_INTEGER |
+---------------------------------+---------------+-----------------------+----------------------------------------+
| UNSIGNED_INT_8_8_8_8            | uint          | 4                     | RGBA, BGRA, RGBA_INTEGER, BGRA_INTEGER |
+---------------------------------+---------------+-----------------------+----------------------------------------+
| UNSIGNED_INT_8_8_8_8_REV        | uint          | 4                     | RGBA, BGRA, RGBA_INTEGER, BGRA_INTEGER |
+---------------------------------+---------------+-----------------------+----------------------------------------+
| UNSIGNED_INT_10_10_10_2         | uint          | 4                     | RGBA, BGRA, RGBA_INTEGER, BGRA_INTEGER |
+---------------------------------+---------------+-----------------------+----------------------------------------+
| UNSIGNED_INT_2_10_10_10_REV     | uint          | 4                     | RGBA, BGRA, RGBA_INTEGER, BGRA_INTEGER |
+---------------------------------+---------------+-----------------------+----------------------------------------+
| UNSIGNED_INT_24_8               | uint          | 2                     | DEPTH_STENCIL                          |
+---------------------------------+---------------+-----------------------+----------------------------------------+
| UNSIGNED_INT_10F_11F_11F_REV    | uint          | 3                     | RGB                                    |
+---------------------------------+---------------+-----------------------+----------------------------------------+
| UNSIGNED_INT_5_9_9_9_REV        | uint          | 4                     | RGB                                    |
+---------------------------------+---------------+-----------------------+----------------------------------------+
| FLOAT_32_UNSIGNED_INT_24_8_REV  | n/a           | 2                     | DEPTH_STENCIL                          |
+---------------------------------+---------------+-----------------------+----------------------------------------+

