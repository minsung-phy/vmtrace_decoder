// VMProtect anchor pseudocode
     0: pxor xmm1 ,xmm0  /*manual*/
     1: lea rax ,ptr [rip+0xe68]  /*manual*/
     2: rdi = rax
     3: call 0x5d8dcd6ca56a
     4: push r12  /*manual*/
     5: pushfq   /*manual*/
     6: r12 = 0xb58009407ba34d19
     7: shr r12w ,0xcc  /*manual*/
     8: push rbx  /*manual*/
     9: call 0x5d8dcd6e02b0
    10: r12 = 0x73bfe994ff2db982
    11: call 0x5d8dcd65646b
    12: qword ptr [rsp+0x28] = 0xffffffff9b27e7df
    13: r12 = qword ptr [rsp+0x20]
    14: qword ptr [rsp+0x8] += 0xffffffffffed646a
    15: rbx = 0xd397037cff99891c
    16: cmp rbx ,0xe2debeb  /*manual*/
    17: lea rsp ,ptr [rsp+0x8]  /*manual*/
    18: return
    19: not bl  /*manual*/
    20: pop rbx  /*manual*/
    21: push qword ptr [rsp]  /*manual*/
    22: popfq   /*manual*/
    23: lea rsp ,ptr [rsp+0x10]  /*manual*/
    24: call 0x5d8dcd590756
    25: jmp 0x5d8dcd55192d  /*manual*/
    26: call 0x5d8dcd67a052
    27: qword ptr [rsp] = r11
    28: r11d = 0xcdbb1678
    29: push r9  /*manual*/
    30: jmp 0x5d8dcd54c1ce  /*manual*/
    31: push rdi  /*manual*/
    32: jmp 0x5d8dcd66f340  /*manual*/
    33: push r13  /*manual*/
    34: push r13  /*manual*/
    35: push r11  /*manual*/
    36: qword ptr [rsp] = rcx
    37: push r11  /*manual*/
    38: qword ptr [rsp] = rsi
    39: movzx r9d ,r11w  /*manual*/
    40: lea rdi ,ptr [r9*2+0x53b52332]  /*manual*/
    41: push rdi  /*manual*/
    42: qword ptr [rsp+r9*2-0x2cf0] = rax
    43: not r9  /*manual*/
    44: lea r9 ,ptr [rdi*8-0x154eed9a]  /*manual*/
    45: push rbx  /*manual*/
    46: push r12  /*manual*/
    47: jmp 0x5d8dcd548ac0  /*manual*/
    48: jmp 0x5d8dcd67a3c5  /*manual*/
    49: push rdx  /*manual*/
    50: not r9b  /*manual*/
    51: not edi  /*manual*/
    52: movsx ebx ,r11w  /*manual*/
    53: push r14  /*manual*/
    54: push rdi  /*manual*/
    55: movzx ecx ,byte ptr [rsp+rbx*2-0x2cef]  /*manual*/
    56: qword ptr [rsp+rbx*8-0xb3c0] = r10
    57: lea r11 ,ptr [rcx*8+0x15009913]  /*manual*/
    58: push r15  /*manual*/
    59: call 0x5d8dcd54d420
    60: pushfq   /*manual*/
    61: pop rcx  /*manual*/
    62: qword ptr [rsp+r11*2-0x2a013d16] = rcx
    63: rdx = 0x5d8dcd4ea000
    64: ebx -= 0x5784f9b2
    65: inc ebx  /*manual*/
    66: movzx esi ,di  /*manual*/
    67: qword ptr [rsp+r11*2-0x2a013cc6] = rdx
    68: lea rax ,ptr [rsi*2-0x546a4a25]  /*manual*/
    69: shr rbx ,0x2d  /*manual*/
    70: esi += ebx
    71: esi = dword ptr [rsp+r11*1-0x15009e0b]
    72: lea rcx ,ptr [r9*8-0x7fcfe6a1]  /*manual*/
    73: movzx r10d ,bl  /*manual*/
    74: lea esi ,ptr [rbx+rsi*1-0x7aba45ea]  /*manual*/
    75: inc bx  /*manual*/
    76: bt r10 ,rcx  /*manual*/
    77: setnb dil  /*manual*/
    78: esi ^= 0xc286066f
    79: rcx += 0xffffffffe19830a4
    80: not al  /*manual*/
    81: bswap esi  /*manual*/
    82: data16 cbw  /*manual*/
    83: shr r9b ,0x85  /*manual*/
    84: sbb cl ,0x52  /*manual*/
    85: lea esi ,ptr [rsi+rax*2+0xe2a17eb]  /*manual*/
    86: rsi += rdx
    87: shr ecx ,cl  /*manual*/
    88: or r9d ,ecx  /*manual*/
    89: jl 0x5d8dcd56d46b  /*manual*/
    90: qword ptr [rsp+r11*1-0x15009e13] = rbp
    91: movzx ebp ,dil  /*manual*/
    92: qword ptr [rsp+r11*2-0x2a013c96] = r8
    93: adc cx ,0x7d26  /*manual*/
    94: lea r10 ,ptr [rdi+rcx*2+0x263f2aaf]  /*manual*/
    95: movsx r8d ,bpl  /*manual*/
    96: r10 = rsp
    97: lea r9 ,ptr [r10+r11*2-0x2a013f7e]  /*manual*/
    98: di ^= 0x9607
    99: and r9b ,0xf0  /*manual*/
   100: rsp = r9
   101: push 0x2fa4cba5  /*manual*/
   102: r8 = rsi
   103: rdx = 0x5d8dcd4ea000
   104: sar byte ptr [rsp+0x3] ,0x5  /*manual*/
   105: sbb r8 ,rdx  /*manual*/
   106: lea rsp ,ptr [rsp+0x8]  /*manual*/
   107: lea r11 ,ptr [rip-0x7]  /*manual*/
   108: rsi -= 0x4
   109: ebx = dword ptr [rsi]
   110: edx = 0xe81d5634
   111: push rdx  /*manual*/
   112: ebx ^= r8d
   113: qword ptr [rsp] ^= 0xffffffffe21b30ed
   114: ror ebx ,0x1  /*manual*/
   115: not ebx  /*manual*/
   116: inc ebx  /*manual*/
   117: push rdx  /*manual*/
   118: qword ptr [rsp+0x8] -= rdx
   119: bswap ebx  /*manual*/
   120: ror byte ptr [rsp+0xb] ,0xe3  /*manual*/
   121: ebp = edx
   122: not ebx  /*manual*/
   123: qword ptr [rsp+0x8] = r8
   124: shr bpl ,0x24  /*manual*/
   125: js 0x5d8dcd5cc870  /*manual*/
   126: dword ptr [rsp+0x8] ^= ebx
   127: r8 = qword ptr [rsp+0x8]
   128: lea r9 ,ptr [rbp+rdx*8+0x371d1c75]  /*manual*/
   129: movsxd rbx ,ebx  /*manual*/
   130: r11 += rbx
   131: movsx edi ,dx  /*manual*/
   132: movzx ecx ,bp  /*manual*/
   133: qword ptr [rsp+rdi*1-0x562c] = r9
   134: qword ptr [rsp+rdi*1-0x5634] = r11
   135: return
   136: r9 = qword ptr [r10]
   137: edi = 0xc7a08824
   138: shl di ,0x8d  /*manual*/
   139: lea rbx ,ptr [rsp+0x110]  /*manual*/
   140: lea rbp ,ptr [rdi+rdi*8-0x60f6cd1c]  /*manual*/
   141: movzx edx ,bpl  /*manual*/
   142: qword ptr [rbx+rdx*2-0x1c8] = r9
   143: rdi = qword ptr [r10+rdx*4-0x388]
   144: eax = 0x5dbb1e06
   145: movzx ebx ,byte ptr [rdx+rsi*1-0xe5]  /*manual*/
   146: bl ^= r8b
   147: ecx = edx
   148: inc bl  /*manual*/
   149: and edx ,ecx  /*manual*/
   150: lea rbp ,ptr [rcx+rcx*4+0x504e278]  /*manual*/
   151: bl ^= 0x64
   152: call 0x5d8dcd5cfd67
   153: qword ptr [rsp+rbp*1-0x504e6ec] = rcx
   154: shl rax ,0x1b  /*manual*/
   155: inc bl  /*manual*/
   156: rol bl ,0x1  /*manual*/
   157: shl al ,0x24  /*manual*/
   158: r8b ^= bl
   159: lea rbx ,ptr [rsp+rbx*1+0x8]  /*manual*/
   160: jmp 0x5d8dcd574a01  /*manual*/
   161: qword ptr [rbx+rbp*2-0xa09cdd8] = rdi
   162: rol dword ptr [rsp+rbp*1-0x504e6e9] ,cl  /*manual*/
   163: lea r9 ,ptr [rdx*8+0x61c3205]  /*manual*/
   164: r9 = qword ptr [rbp+r10*1-0x504e6dc]
   165: lea rdi ,ptr [rdx+rdx*4-0x52e8b779]  /*manual*/
   166: xadd dx ,cx  /*manual*/
   167: ebx = 0x7cbc0948
   168: lea r10 ,ptr [rbp+r10*1-0x504e6d4]  /*manual*/
   169: movzx edi ,byte ptr [rsi+rbp*1-0x504e6ee]  /*manual*/
   170: call 0x5d8dcd595b88
   171: dil ^= r8b
   172: al ^= al
   173: sbb dil ,0x39  /*manual*/
   174: shl rbx ,cl  /*manual*/
   175: qword ptr [rsp+rbp*1-0x504e6ec] = rax
   176: cmovnp edx ,eax  /*manual*/
   177: not dil  /*manual*/
   178: jbe 0x5d8dcd6def2a  /*manual*/
   179: ecx -= eax
   180: rol dil ,0x1  /*manual*/
   181: neg dil  /*manual*/
   182: r8b ^= dil
   183: rcx ^= rcx
   184: lea rdi ,ptr [rsp+rdi*1+0x10]  /*manual*/
   185: rol bx ,0x4c  /*manual*/
   186: btr cx ,dx  /*manual*/
   187: qword ptr [rbp+rdi*1-0x504e6ec] = r9
   188: r9d = dword ptr [rbp+rsi*1-0x504e6f2]
   189: lea rsi ,ptr [rbp+rsi*1-0x504e6f2]  /*manual*/
   190: call 0x5d8dcd65b46b
   191: or eax ,edx  /*manual*/
   192: inc bp  /*manual*/
   193: r9d ^= r8d
   194: sar dword ptr [rsp+rbp*1-0x504e6de] ,0xec  /*manual*/
   195: pop rax  /*manual*/
   196: adc rax ,0xfffffffffff7aa06  /*manual*/
   197: jmp rax  /*manual*/
   198: call 0x5d8dcd5d20d6
   199: lea r9d ,ptr [r9+rbp*1-0x60afa71d]  /*manual*/
   200: shl ebx ,0xb4  /*manual*/
   201: not r9d  /*manual*/
   202: qword ptr [rsp+rbp*2-0xa09cdda] = 0xffffffff99b398d8
   203: rol r9d ,0x1  /*manual*/
   204: r9d -= 0xba9ac6a6
   205: or word ptr [rsp+rbp*1-0x504e6d8] ,0xbb53  /*manual*/
   206: shl qword ptr [rsp+rbp*1-0x504e6dd] ,0x3d  /*manual*/
   207: qword ptr [rsp+rcx*4+0x10] ^= r8
   208: movzx r8d ,cl  /*manual*/
   209: dword ptr [rsp+rbp*8-0x28273758] ^= r9d
   210: jmp 0x5d8dcd5ce54e  /*manual*/
   211: byte ptr [rsp+rbp*1-0x504e6e7] ^= 0x67
   212: r8 = qword ptr [rsp+rbp*2-0xa09cdca]
   213: qword ptr [rsp+rbp*1-0x504e6dd] = rcx
   214: movsxd r9 ,r9d  /*manual*/
   215: adc r11 ,r9  /*manual*/
   216: not word ptr [rsp+rbp*2-0xa09cdc6]  /*manual*/
   217: lea rcx ,ptr [rbx*8+0xe39bc30]  /*manual*/
   218: qword ptr [rsp+rbp*1-0x504e6ed] = r11
   219: return
   220: ebp = 0xc6b4fe18
   221: edx = ebp
   222: inc rdx  /*manual*/
   223: r9 = qword ptr [r10]
   224: lea rbx ,ptr [rsp+0x20]  /*manual*/
   225: movsx edi ,dx  /*manual*/
   226: qword ptr [rbx] = r9
   227: dx ^= 0x81ed
   228: and dx ,dx  /*manual*/
   229: bts rdx ,rbp  /*manual*/
   230: rdx = qword ptr [r10+0x8]
   231: lea rax ,ptr [rbp+rbp*2-0x4fdd4ef6]  /*manual*/
   232: movzx r9d ,byte ptr [rsi-0x1]  /*manual*/
   233: r9b ^= r8b
   234: not r9b  /*manual*/
   235: inc r9b  /*manual*/
   236: movsx ecx ,bp  /*manual*/
   237: shl ecx ,0x8e  /*manual*/
   238: ebx = edi
   239: neg r9b  /*manual*/
   240: shl dil ,0x46  /*manual*/
   241: r9b ^= 0xa7
   242: rol cl ,0x64  /*manual*/
   243: call 0x5d8dcd531c57
   244: data16 cbw  /*manual*/
   245: neg r9b  /*manual*/
   246: qword ptr [rsp] = rcx
   247: r9b += 0xb1
   248: and byte ptr [rsp+0x3] ,ch  /*manual*/
   249: shr cx ,0xa7  /*manual*/
   250: ror byte ptr [rsp+0x4] ,0xa6  /*manual*/
   251: neg r9b  /*manual*/
   252: r8b ^= r9b
   253: push rbp  /*manual*/
   254: neg ebp  /*manual*/
   255: shl qword ptr [rsp+rbp*1-0x394b01e5] ,0x11  /*manual*/
   256: lea r9 ,ptr [rsp+r9*1+0x10]  /*manual*/
   257: edi ^= 0x8daac208
   258: adc dil ,byte ptr [rsp+rbp*1-0x394b01dc]  /*manual*/
   259: shl ax ,0x81  /*manual*/
   260: qword ptr [rbp+r9*1-0x394b01e8] = rdx
   261: or ecx ,0x568fdc22  /*manual*/
   262: rdx = qword ptr [r10+rbp*1-0x394b01d8]
   263: lea r10 ,ptr [r10+rbp*2-0x729603b8]  /*manual*/
   264: pop rax  /*manual*/
   265: and rax ,rdi  /*manual*/
   266: movzx ebp ,byte ptr [rsi+rax*2-0x287812]  /*manual*/
   267: neg byte ptr [rsp+rax*1-0x143c01]  /*manual*/
   268: shl qword ptr [rsp+rdi*1-0x72553c48] ,0x6f  /*manual*/
   269: bpl ^= r8b
   270: inc qword ptr [rsp+rdi*1-0x72553c48]  /*manual*/
   271: xadd ebx ,ecx  /*manual*/
   272: movzx r9d ,byte ptr [rsp+rax*2-0x287810]  /*manual*/
   273: sbb bpl ,0xd0  /*manual*/
   274: call 0x5d8dcd59dc24
   275: rol di ,0xed  /*manual*/
   276: cl ^= byte ptr [rsp+rax*2-0x287807]
   277: neg bpl  /*manual*/
   278: not byte ptr [rsp+rdi*1-0x7255077c]  /*manual*/
   279: bpl -= r9b
   280: dec word ptr [rsp+rdi*1-0x7255077e]  /*manual*/
   281: cdqe   /*manual*/
   282: not bpl  /*manual*/
   283: and qword ptr [rsp+r9*4+0x4] ,rax  /*manual*/
   284: and rdi ,qword ptr [rsp+rdi*1-0x72550781]  /*manual*/
   285: rol ecx ,cl  /*manual*/
   286: adc bpl ,r9b  /*manual*/
   287: shl rdi ,cl  /*manual*/
   288: jnb 0x5d8dcd6c12ad  /*manual*/
   289: qword ptr [rsp+rdi*2] = rbx
   290: bpl ^= 0xf4
   291: inc rdi  /*manual*/
   292: or dword ptr [rsp+rdi*1+0xb] ,ebx  /*manual*/
   293: ror bpl ,0x1  /*manual*/
   294: btc rbx ,rdi  /*manual*/
   295: sbb ecx ,ebx  /*manual*/
   296: xadd rdi ,rbx  /*manual*/
   297: r8b ^= bpl
   298: shl rax ,0x3b  /*manual*/
   299: setnbe cl  /*manual*/
   300: lea rbp ,ptr [rsp+rbp*1+0x10]  /*manual*/
   301: qword ptr [rbp+rax*4] = rdx
   302: movzx edx ,byte ptr [rsp+rax*4+0x7]  /*manual*/
   303: ebp = dword ptr [rsi+rax*4-0x6]
   304: lea rsi ,ptr [rsi+rax*4-0x6]  /*manual*/
   305: or eax ,edx  /*manual*/
   306: pop rdx  /*manual*/
   307: pop r9  /*manual*/
   308: ebp ^= r8d
   309: lea ebp ,ptr [rax+rbp*1-0x5baac030]  /*manual*/
   310: lea rcx ,ptr [rdx+r9*4+0x26026f2a]  /*manual*/
   311: sar r9w ,0xe1  /*manual*/
   312: sar bl ,cl  /*manual*/
   313: not ebp  /*manual*/
   314: rol ebp ,0x1  /*manual*/
   315: shr rcx ,cl  /*manual*/
   316: sbb ebp ,0xba9ac6a6  /*manual*/
   317: push r8  /*manual*/
   318: shl rbx ,0xc  /*manual*/
   319: and di ,cx  /*manual*/
   320: setle dil  /*manual*/
   321: dword ptr [rsp+rax*4] ^= ebp
   322: shl r9 ,0x26  /*manual*/
   323: neg bl  /*manual*/
   324: inc edx  /*manual*/
   325: pop r8  /*manual*/
   326: lea r9 ,ptr [rbx+rcx*1-0x396d4197]  /*manual*/
   327: movsxd rbp ,ebp  /*manual*/
   328: rbx ^= rdi
   329: shr bl ,cl  /*manual*/
   330: sar di ,0x27  /*manual*/
   331: adc r11 ,rbp  /*manual*/
   332: call 0x5d8dcd620e1a
   333: qword ptr [rsp+rax*2] = r11
   334: return
   335: r9d = 0xb8bc58d4
   336: movsx edx ,r9b  /*manual*/
   337: dx -= r9w
   338: rdi = qword ptr [r10]
   339: movzx ebx ,byte ptr [rsi-0x1]  /*manual*/
   340: bl ^= r8b
   341: rol bl ,0x1  /*manual*/
   342: movsx ebp ,dl  /*manual*/
   343: not bl  /*manual*/
   344: bl -= 0xfb
   345: movzx eax ,bp  /*manual*/
   346: dec ebp  /*manual*/
   347: rol bl ,0x1  /*manual*/
   348: cqo   /*manual*/
   349: bt r9d ,eax  /*manual*/
   350: adc bl ,bpl  /*manual*/
   351: push rbp  /*manual*/
   352: bl ^= 0x3c
   353: bl -= 0xbe
   354: push r9  /*manual*/
   355: bl ^= 0x67
   356: pop rax  /*manual*/
   357: and word ptr [rsp+rdx*1+0x5] ,r9w  /*manual*/
   358: movsx ecx ,bpl  /*manual*/
   359: bl ^= bpl
   360: rol qword ptr [rsp+rdx*2] ,cl  /*manual*/
   361: ror eax ,cl  /*manual*/
   362: r8b ^= bl
   363: jmp 0x5d8dcd63438f  /*manual*/
   364: inc word ptr [rsp+rdx*1+0x2]  /*manual*/
   365: lea rbx ,ptr [rsp+rbx*1+0x8]  /*manual*/
   366: qword ptr [rbx+rdx*2] = rdi
   367: shl eax ,0x5b  /*manual*/
   368: rcx -= rax
   369: setno byte ptr [rsp+rdx*1+0x2]  /*manual*/
   370: ecx = dword ptr [rsi+rdx*2-0x5]
   371: ecx ^= r8d
   372: shr edx ,0xff  /*manual*/
   373: inc byte ptr [rsp+rax*1-0x47ffffff]  /*manual*/
   374: xadd word ptr [rsp+rdx*2+0x4] ,bp  /*manual*/
   375: lea ecx ,ptr [rcx+rdx*2-0x5baac030]  /*manual*/
   376: not ecx  /*manual*/
   377: lea rdi ,ptr [rax*2-0x425fe5ee]  /*manual*/
   378: rol ecx ,0x1  /*manual*/
   379: lea rdx ,ptr [rbp*2+0x19b9fed0]  /*manual*/
   380: and ebp ,0xc5a513e7  /*manual*/
   381: cwde   /*manual*/
   382: sbb ecx ,0xba9ac6a6  /*manual*/
   383: di -= word ptr [rsp+rax*2]
   384: cmovp r9 ,rbp  /*manual*/
   385: qword ptr [rsp+rax*4] = r8
   386: movzx ebx ,bp  /*manual*/
   387: call 0x5d8dcd6b02ba
   388: rbx += 0xffffffffd11fd860
   389: dword ptr [rsp+rax*2+0x8] ^= ecx
   390: eax -= eax
   391: pop rdx  /*manual*/
   392: shl eax ,0xa4  /*manual*/
   393: pop r8  /*manual*/
   394: ror r9b ,0xa7  /*manual*/
   395: or rbp ,rbx  /*manual*/
   396: call 0x5d8dcd64dc29
   397: movsxd rcx ,ecx  /*manual*/
   398: adc r11 ,rcx  /*manual*/
   399: pop r9  /*manual*/
   400: r9 += 0xffffffffffed6f9a
   401: jmp r9  /*manual*/
   402: btr bx ,0xfd  /*manual*/
   403: lea rcx ,ptr [rdi+rdi*2-0x70d74c47]  /*manual*/
   404: rbp = qword ptr [r10+rax*1+0x8]
   405: jnb 0x5d8dcd6c7769  /*manual*/
   406: bts ebx ,eax  /*manual*/
   407: lea r10 ,ptr [r10+rax*1+0x10]  /*manual*/
   408: edx = 0xc78ec212
   409: movzx edi ,word ptr [rsi+rax*2-0x7]  /*manual*/
   410: lea r9 ,ptr [rcx+rbx*4+0x4a011b11]  /*manual*/
   411: shl ebx ,0xa5  /*manual*/
   412: lea rsi ,ptr [rsi+rax*2-0x7]  /*manual*/
   413: di ^= r8w
   414: not dl  /*manual*/
   415: or rcx ,0x7dbf8730  /*manual*/
   416: di ^= 0xa66c
   417: inc dx  /*manual*/
   418: not di  /*manual*/
   419: ror di ,0x1  /*manual*/
   420: jmp 0x5d8dcd528de6  /*manual*/
   421: shl rbx ,cl  /*manual*/
   422: dec di  /*manual*/
   423: bl += 0x96
   424: data16 cwd  /*manual*/
   425: jnz 0x5d8dcd5f6718  /*manual*/
   426: r8w ^= di
   427: call 0x5d8dcd5f3722
   428: btc bx ,bx  /*manual*/
   429: lea rdi ,ptr [rsp+rdi*1+0x8]  /*manual*/
   430: qword ptr [rax+rdi*1] = rbp
   431: bt r9d ,edx  /*manual*/
   432: qword ptr [rsp+rax*1] = r11
   433: return
   434: r9 = qword ptr [r10]
   435: jmp 0x5d8dcd636bb9  /*manual*/
   436: ecx = 0xd43961d5
   437: rol cx ,0x22  /*manual*/
   438: movzx eax ,word ptr [rsi-0x2]  /*manual*/
   439: ax ^= r8w
   440: rol rcx ,0x3f  /*manual*/
   441: ebx = 0xf88a4a1b
   442: movsx edx ,cx  /*manual*/
   443: neg ax  /*manual*/
   444: jmp 0x5d8dcd6aebea  /*manual*/
   445: rol rcx ,0xc1  /*manual*/
   446: dec ax  /*manual*/
   447: not ax  /*manual*/
   448: bts edx ,0x43  /*manual*/
   449: not dl  /*manual*/
   450: jb 0x5d8dcd6d55d0  /*manual*/
   451: sbb ax ,0x1642  /*manual*/
   452: movsx edi ,cx  /*manual*/
   453: and dil ,0xaf  /*manual*/
   454: not ax  /*manual*/
   455: xadd cx ,bx  /*manual*/
   456: movzx ebp ,cl  /*manual*/
   457: rol edx ,cl  /*manual*/
   458: r8w ^= ax
   459: ebx ^= ebp
   460: btr rbx ,0xcd  /*manual*/
   461: adc rax ,rsp  /*manual*/
   462: qword ptr [rax+rbp*1-0x70] = r9
   463: not bpl  /*manual*/
   464: shr cl ,0x21  /*manual*/
   465: ebp = dword ptr [rsi+rbp*8-0x47e]
   466: ebp ^= r8d
   467: dec dx  /*manual*/
   468: neg ebp  /*manual*/
   469: shl dl ,0x26  /*manual*/
   470: movsx r9d ,bl  /*manual*/
   471: sbb ebp ,0xbca35a6d  /*manual*/
   472: neg dil  /*manual*/
   473: bswap ebp  /*manual*/
   474: shl r9w ,0x28  /*manual*/
   475: rol dil ,0xa2  /*manual*/
   476: inc ebp  /*manual*/
   477: movsx eax ,dx  /*manual*/
   478: push rdi  /*manual*/
   479: and al ,byte ptr [rsp+r9*2-0x49fc]  /*manual*/
   480: neg ebp  /*manual*/
   481: xchg edx ,edi  /*manual*/
   482: qword ptr [rsp+r9*1-0x2500] = r8
   483: or rax ,rdx  /*manual*/
   484: dword ptr [rsp+r9*2-0x4a00] ^= ebp
   485: pop r8  /*manual*/
   486: data16 cbw  /*manual*/
   487: rol cl ,0xc1  /*manual*/
   488: movsxd rbp ,ebp  /*manual*/
   489: r9w += 0x5cac
   490: bts rcx ,rax  /*manual*/
   491: adc r11 ,rbp  /*manual*/
   492: rbx += 0x7d13bbf5
   493: xchg bx ,ax  /*manual*/
   494: rdi = qword ptr [r9+r10*1-0x81a4]
   495: bswap r9d  /*manual*/
   496: adc r10 ,0x10  /*manual*/
   497: and dx ,cx  /*manual*/
   498: and rbx ,rax  /*manual*/
   499: movzx ebx ,byte ptr [rsi+rbx*1-0x759e4311]  /*manual*/
   500: movsx ebp ,dx  /*manual*/
   501: sbb rsi ,0x7  /*manual*/
   502: bl ^= r8b
   503: ror bl ,0x1  /*manual*/
   504: inc bp  /*manual*/
   505: r9d += edx
   506: dec bl  /*manual*/
   507: rol dx ,0x6e  /*manual*/
   508: shr r9d ,cl  /*manual*/
   509: rol bl ,0x1  /*manual*/
   510: or eax ,0x3410b929  /*manual*/
   511: dec bl  /*manual*/
   512: or cx ,dx  /*manual*/
   513: and rcx ,r9  /*manual*/
   514: neg bl  /*manual*/
   515: inc r9b  /*manual*/
   516: r8b ^= bl
   517: rol eax ,0x18  /*manual*/
   518: cmovb dx ,cx  /*manual*/
   519: jb 0x5d8dcd55036a  /*manual*/
   520: rbx += rsp
   521: qword ptr [rbx+rcx*4-0x28000] = rdi
   522: r9 += rax
   523: jmp r11  /*manual*/
   524: eax = 0x23b0adc6
   525: push rax  /*manual*/
   526: lea rsi ,ptr [rsi+rax*2-0x47615b90]  /*manual*/
   527: ror dword ptr [rsp+rax*1-0x23b0adc4] ,0xe4  /*manual*/
   528: ecx = dword ptr [rsi+rax*2-0x47615b8c]
   529: jnb 0x5d8dcd61be2e  /*manual*/
   530: ecx ^= r8d
   531: ebp = eax
   532: ebx = eax
   533: movsx edi ,byte ptr [rsp+rbx*2-0x47615b8c]  /*manual*/
   534: lea ecx ,ptr [rax+rcx*1-0x7f5b6df6]  /*manual*/
   535: not ecx  /*manual*/
   536: ror word ptr [rsp+rax*1-0x23b0adc2] ,0x4e  /*manual*/
   537: cqo   /*manual*/
   538: rol ecx ,0x1  /*manual*/
   539: xchg word ptr [rsp+rbp*2-0x47615b8b] ,bp  /*manual*/
   540: not edx  /*manual*/
   541: ecx -= 0xba9ac6a6
   542: dec bp  /*manual*/
   543: movzx r9d ,word ptr [rsp+rax*1-0x23b0adc3]  /*manual*/
   544: qword ptr [rsp+r9*1-0x2] = r8
   545: dword ptr [rsp+rax*2-0x47615b8c] ^= ecx
   546: btc rdx ,r9  /*manual*/
   547: rol di ,0xa3  /*manual*/
   548: not r9d  /*manual*/
   549: pop r8  /*manual*/
   550: movsxd rcx ,ecx  /*manual*/
   551: and bp ,ax  /*manual*/
   552: adc r11 ,rcx  /*manual*/
   553: rbx = qword ptr [rax+r10*1-0x23b0adc6]
   554: sar rdi ,0x73  /*manual*/
   555: push rax  /*manual*/
   556: qword ptr [rsp+rax*2-0x47615b8c] -= 0xffffffffb3092a8b
   557: lea r10 ,ptr [r10+rbp*1-0x23b0297c]  /*manual*/
   558: jbe 0x5d8dcd50c0a8  /*manual*/
   559: bswap eax  /*manual*/
   560: and qword ptr [rsp+rdi*2] ,rax  /*manual*/
   561: lea rsi ,ptr [rsi+rbp*2-0x47605309]  /*manual*/
   562: or dil ,byte ptr [rsi+rdi*4]  /*manual*/
   563: sar r9w ,0x6c  /*manual*/
   564: adc al ,r9b  /*manual*/
   565: rbp += 0xffffffff9a8825cb
   566: dil ^= r8b
   567: shr dx ,0x6b  /*manual*/
   568: adc dil ,0x12  /*manual*/
   569: dil ^= r9b
   570: cwde   /*manual*/
   571: or word ptr [rsp+rbp*1+0x41c7b0b1] ,r9w  /*manual*/
   572: adc dil ,0xfa  /*manual*/
   573: not rax  /*manual*/
   574: call 0x5d8dcd68fe47
   575: rol dil ,0x1  /*manual*/
   576: qword ptr [rsp+rbp*1+0x41c7b0b1] = rbp
   577: dil ^= r9b
   578: r8b ^= dil
   579: lea rdi ,ptr [rsp+rdi*1+0x10]  /*manual*/
   580: shl r9w ,0xe1  /*manual*/
   581: qword ptr [rbp+rdi*1+0x41c7b0b1] = rbx
   582: qword ptr [rsp+rbp*1+0x41c7b0b1] = r11
   583: return
   584: ebx = 0xe58c001c
   585: ecx = dword ptr [rsi-0x4]
   586: movsx edi ,bl  /*manual*/
   587: ror rbx ,0x43  /*manual*/
   588: ecx ^= r8d
   589: shl dil ,0xa6  /*manual*/
   590: lea ecx ,ptr [rdi+rcx*1-0x5baac030]  /*manual*/
   591: xchg bl ,dil  /*manual*/
   592: not ecx  /*manual*/
   593: movzx r9d ,bl  /*manual*/
   594: movsx edx ,bl  /*manual*/
   595: rol ecx ,0x1  /*manual*/
   596: jmp 0x5d8dcd59dac7  /*manual*/
   597: lea r9 ,ptr [rbx*4+0x693e9396]  /*manual*/
   598: sar r9 ,0x47  /*manual*/
   599: sbb ecx ,0xba9ac6a6  /*manual*/
   600: push r8  /*manual*/
   601: movzx r8d ,dil  /*manual*/
   602: xadd edi ,r8d  /*manual*/
   603: movsx ebp ,dx  /*manual*/
   604: dword ptr [rsp+rbx*2-0x39630000] ^= ecx
   605: pop r8  /*manual*/
   606: movsxd rcx ,ecx  /*manual*/
   607: movzx eax ,bl  /*manual*/
   608: r11 += rcx
   609: jmp 0x5d8dcd5fa950  /*manual*/
   610: cqo   /*manual*/
   611: rcx = qword ptr [r10+rbx*2-0x39630000]
   612: sar rbp ,0x4c  /*manual*/
   613: neg dl  /*manual*/
   614: dil = byte ptr [rsi+rbx*2-0x39630005]
   615: ax -= r9w
   616: lea r9 ,ptr [rbp*2-0x75e868a2]  /*manual*/
   617: push rbp  /*manual*/
   618: lea rsi ,ptr [rsi+rdx*2-0x5]  /*manual*/
   619: adc ebp ,ebp  /*manual*/
   620: setnbe bl  /*manual*/
   621: dil ^= r8b
   622: dil -= 0x3c
   623: bx += word ptr [rsp+rbx*4-0x72c60002]
   624: pop rdx  /*manual*/
   625: rol dil ,0x1  /*manual*/
   626: dec r9  /*manual*/
   627: dil -= bl
   628: cqo   /*manual*/
   629: and dl ,dl  /*manual*/
   630: bt bx ,ax  /*manual*/
   631: ror dil ,0x1  /*manual*/
   632: lea rdx ,ptr [r9*2-0x18464c39]  /*manual*/
   633: bts r9 ,r9  /*manual*/
   634: dil ^= 0x68
   635: not bpl  /*manual*/
   636: shr edx ,0x66  /*manual*/
   637: r8b ^= dil
   638: jmp 0x5d8dcd6342eb  /*manual*/
   639: rdi += rsp
   640: neg r9b  /*manual*/
   641: not rbp  /*manual*/
   642: not rbx  /*manual*/
   643: qword ptr [rdi+rbx*2+0x39630004] = rcx
   644: btr eax ,0x3b  /*manual*/
   645: bp -= bp
   646: lea rcx ,ptr [r9+r9*2+0x64050021]  /*manual*/
   647: rax = qword ptr [r10+rdx*2-0x7df470c]
   648: xadd rcx ,r9  /*manual*/
   649: or rbp ,rbp  /*manual*/
   650: lea rdi ,ptr [rdx+rbx*8+0x74a35bff]  /*manual*/
   651: lea r10 ,ptr [r10+rdx*2-0x7df4704]  /*manual*/
   652: bt ecx ,0xe6  /*manual*/
   653: lea rbp ,ptr [rsp+rdx*2-0x7df469c]  /*manual*/
   654: qword ptr [rbp+rdx*4-0xfbe8e28] = rax
   655: jmp r11  /*manual*/
   656: edi = 0x171875c6
   657: movzx eax ,dil  /*manual*/
   658: lea rsi ,ptr [rsi+rdi*2-0x2e30eb90]  /*manual*/
   659: edx = dword ptr [rsi+rdi*1-0x171875c6]
   660: rol eax ,0xb5  /*manual*/
   661: edx ^= r8d
   662: shl eax ,0x25  /*manual*/
   663: lea edx ,ptr [rdi+rdx*1-0x72c335f6]  /*manual*/
   664: not edx  /*manual*/
   665: ax += 0x4076
   666: rol edx ,0x1  /*manual*/
   667: edx -= 0xba9ac6a6
   668: lea r9 ,ptr [rdi*8-0x7f74bab2]  /*manual*/
   669: push r8  /*manual*/
   670: dword ptr [rsp+rdi*2-0x2e30eb8c] ^= edx
   671: movsx r8d ,r9w  /*manual*/
   672: movzx ecx ,r8b  /*manual*/
   673: push r8  /*manual*/
   674: r8 = qword ptr [rsp+rax*1-0x1800406e]
   675: btr ecx ,ecx  /*manual*/
   676: movsxd rdx ,edx  /*manual*/
   677: qword ptr [rsp+rax*1-0x1800406e] = 0x67b19cbb
   678: adc r11 ,rdx  /*manual*/
   679: movzx ebp ,cx  /*manual*/
   680: rdx = qword ptr [r10+rdi*2-0x2e30eb8c]
   681: call 0x5d8dcd52da7a
   682: movsx ebx ,bpl  /*manual*/
   683: lea r10 ,ptr [r10+rdi*2-0x2e30eb84]  /*manual*/
   684: and cx ,di  /*manual*/
   685: call 0x5d8dcd5bf553
   686: shl ax ,0xa8  /*manual*/
   687: lea rsi ,ptr [rdi+rsi*1-0x171875c7]  /*manual*/
   688: not edi  /*manual*/
   689: dec rbp  /*manual*/
   690: cl = byte ptr [rax+rsi*1-0x18007600]
   691: and byte ptr [rsp+rax*1-0x180075e2] ,ah  /*manual*/
   692: cl ^= r8b
   693: inc byte ptr [rsp+rax*2-0x3000ebe8]  /*manual*/
   694: bswap rax  /*manual*/
   695: ror word ptr [rsp+r9*2-0x729de6df] ,0x88  /*manual*/
   696: adc cl ,0x13  /*manual*/
   697: pop r9  /*manual*/
   698: not cl  /*manual*/
   699: shl eax ,0xb2  /*manual*/
   700: adc cl ,0xfa  /*manual*/
   701: eax ^= dword ptr [rsp+rax*1+0x13]
   702: rol cl ,0x1  /*manual*/
   703: rol rdi ,0xf3  /*manual*/
   704: sar bx ,0xe3  /*manual*/
   705: not cl  /*manual*/
   706: r8b ^= cl
   707: movsx r9d ,di  /*manual*/
   708: bts ebx ,0x70  /*manual*/
   709: lea rcx ,ptr [rsp+rcx*1+0x18]  /*manual*/
   710: shl dil ,0xa7  /*manual*/
   711: sar di ,0x29  /*manual*/
   712: qword ptr [rax+rcx*1-0x67] = rdx
   713: or edi ,0x6639ebc2  /*manual*/
   714: qword ptr [rsp+rax*1-0x67] = r11
   715: return
   716: r9d = 0xb8bc58d4
   717: movsx edx ,r9b  /*manual*/
   718: dx -= r9w
   719: rdi = qword ptr [r10]
   720: movzx ebx ,byte ptr [rsi-0x1]  /*manual*/
   721: bl ^= r8b
   722: rol bl ,0x1  /*manual*/
   723: movsx ebp ,dl  /*manual*/
   724: not bl  /*manual*/
   725: bl -= 0xfb
   726: movzx eax ,bp  /*manual*/
   727: dec ebp  /*manual*/
   728: rol bl ,0x1  /*manual*/
   729: cqo   /*manual*/
   730: bt r9d ,eax  /*manual*/
   731: adc bl ,bpl  /*manual*/
   732: push rbp  /*manual*/
   733: bl ^= 0x3c
   734: bl -= 0xbe
   735: push r9  /*manual*/
   736: bl ^= 0x67
   737: pop rax  /*manual*/
   738: and word ptr [rsp+rdx*1+0x5] ,r9w  /*manual*/
   739: movsx ecx ,bpl  /*manual*/
   740: bl ^= bpl
   741: rol qword ptr [rsp+rdx*2] ,cl  /*manual*/
   742: ror eax ,cl  /*manual*/
   743: r8b ^= bl
   744: jmp 0x5d8dcd63438f  /*manual*/
   745: inc word ptr [rsp+rdx*1+0x2]  /*manual*/
   746: lea rbx ,ptr [rsp+rbx*1+0x8]  /*manual*/
   747: qword ptr [rbx+rdx*2] = rdi
   748: shl eax ,0x5b  /*manual*/
   749: rcx -= rax
   750: setno byte ptr [rsp+rdx*1+0x2]  /*manual*/
   751: ecx = dword ptr [rsi+rdx*2-0x5]
   752: ecx ^= r8d
   753: shr edx ,0xff  /*manual*/
   754: inc byte ptr [rsp+rax*1-0x47ffffff]  /*manual*/
   755: xadd word ptr [rsp+rdx*2+0x4] ,bp  /*manual*/
   756: lea ecx ,ptr [rcx+rdx*2-0x5baac030]  /*manual*/
   757: not ecx  /*manual*/
   758: lea rdi ,ptr [rax*2-0x425fe5ee]  /*manual*/
   759: rol ecx ,0x1  /*manual*/
   760: lea rdx ,ptr [rbp*2+0x19b9fed0]  /*manual*/
   761: and ebp ,0xc5a513e7  /*manual*/
   762: cwde   /*manual*/
   763: sbb ecx ,0xba9ac6a6  /*manual*/
   764: di -= word ptr [rsp+rax*2]
   765: cmovp r9 ,rbp  /*manual*/
   766: qword ptr [rsp+rax*4] = r8
   767: movzx ebx ,bp  /*manual*/
   768: call 0x5d8dcd6b02ba
   769: rbx += 0xffffffffd11fd860
   770: dword ptr [rsp+rax*2+0x8] ^= ecx
   771: eax -= eax
   772: pop rdx  /*manual*/
   773: shl eax ,0xa4  /*manual*/
   774: pop r8  /*manual*/
   775: ror r9b ,0xa7  /*manual*/
   776: or rbp ,rbx  /*manual*/
   777: call 0x5d8dcd64dc29
   778: movsxd rcx ,ecx  /*manual*/
   779: adc r11 ,rcx  /*manual*/
   780: pop r9  /*manual*/
   781: r9 += 0xffffffffffed6f9a
   782: jmp r9  /*manual*/
   783: btr bx ,0xfd  /*manual*/
   784: lea rcx ,ptr [rdi+rdi*2-0x70d74c47]  /*manual*/
   785: rbp = qword ptr [r10+rax*1+0x8]
   786: jnb 0x5d8dcd6c7769  /*manual*/
   787: bts ebx ,eax  /*manual*/
   788: lea r10 ,ptr [r10+rax*1+0x10]  /*manual*/
   789: edx = 0xc78ec212
   790: movzx edi ,word ptr [rsi+rax*2-0x7]  /*manual*/
   791: lea r9 ,ptr [rcx+rbx*4+0x4a011b11]  /*manual*/
   792: shl ebx ,0xa5  /*manual*/
   793: lea rsi ,ptr [rsi+rax*2-0x7]  /*manual*/
   794: di ^= r8w
   795: not dl  /*manual*/
   796: or rcx ,0x7dbf8730  /*manual*/
   797: di ^= 0xa66c
   798: inc dx  /*manual*/
   799: not di  /*manual*/
   800: ror di ,0x1  /*manual*/
   801: jmp 0x5d8dcd528de6  /*manual*/
   802: shl rbx ,cl  /*manual*/
   803: dec di  /*manual*/
   804: bl += 0x96
   805: data16 cwd  /*manual*/
   806: jnz 0x5d8dcd5f6718  /*manual*/
   807: r8w ^= di
   808: call 0x5d8dcd5f3722
   809: btc bx ,bx  /*manual*/
   810: lea rdi ,ptr [rsp+rdi*1+0x8]  /*manual*/
   811: qword ptr [rax+rdi*1] = rbp
   812: bt r9d ,edx  /*manual*/
   813: qword ptr [rsp+rax*1] = r11
   814: return
   815: ebx = 0xcf8207fd
   816: rcx = qword ptr [r10]
   817: lea rbp ,ptr [rbx*2+0x3b257a13]  /*manual*/
   818: movzx eax ,bx  /*manual*/
   819: movzx ebp ,byte ptr [rsi+rax*2-0xffb]  /*manual*/
   820: rbx += rax
   821: bpl ^= r8b
   822: inc bpl  /*manual*/
   823: ror ebx ,0xa7  /*manual*/
   824: movzx edx ,bl  /*manual*/
   825: movsx edi ,dx  /*manual*/
   826: bpl ^= 0xc4
   827: bpl += 0x63
   828: dec edx  /*manual*/
   829: call 0x5d8dcd67a1cf
   830: qword ptr [rsp+rax*1-0x7fd] = rax
   831: not bpl  /*manual*/
   832: neg bpl  /*manual*/
   833: btr edx ,edi  /*manual*/
   834: r8b ^= bpl
   835: al += ah
   836: cqo   /*manual*/
   837: push rdi  /*manual*/
   838: lea rbp ,ptr [rsp+rbp*1+0x10]  /*manual*/
   839: movsx r9d ,ax  /*manual*/
   840: qword ptr [rbp+rax*2-0xe08] = rcx
   841: movzx ebx ,word ptr [rdx+rsi*1-0x3]  /*manual*/
   842: or word ptr [rsp+rax*2-0xe07] ,r9w  /*manual*/
   843: inc dword ptr [rsp+rax*1-0x6f8]  /*manual*/
   844: not edi  /*manual*/
   845: bx ^= r8w
   846: bx ^= 0x913f
   847: cdqe   /*manual*/
   848: dx -= di
   849: movsx ebp ,ax  /*manual*/
   850: neg bx  /*manual*/
   851: lea rdi ,ptr [rax+rdx*2-0x7cc40ec]  /*manual*/
   852: edi ^= 0x52178c36
   853: sbb bx ,0xb0c  /*manual*/
   854: sar rbp ,0xbf  /*manual*/
   855: ror bx ,0x1  /*manual*/
   856: r8w ^= bx
   857: ror r9w ,0xcf  /*manual*/
   858: qword ptr [r10+rax*8-0x3820] = rbx
   859: xchg word ptr [rsp+rax*2-0xe07] ,dx  /*manual*/
   860: pop rcx  /*manual*/
   861: rbp ^= 0xffffffff99b3fd6b
   862: ecx = dword ptr [rsi+rax*2-0xe0f]
   863: setns dil  /*manual*/
   864: cdqe   /*manual*/
   865: xchg dil ,r9b  /*manual*/
   866: lea rsi ,ptr [rsi+rax*1-0x70b]  /*manual*/
   867: js 0x5d8dcd6d727e  /*manual*/
   868: adc ebp ,r9d  /*manual*/
   869: or rdi ,qword ptr [rsp+rax*1-0x704]  /*manual*/
   870: ecx ^= r8d
   871: eax ^= 0x1e149ea2
   872: inc ecx  /*manual*/
   873: movsx ebx ,dil  /*manual*/
   874: rol rbp ,0x4e  /*manual*/
   875: ax += 0x7b60
   876: ecx ^= 0x31143b84
   877: bt bp ,0x7a  /*manual*/
   878: lea ecx ,ptr [rcx+rdx*1-0x78a0b2ad]  /*manual*/
   879: jnb 0x5d8dcd645297  /*manual*/
   880: not edx  /*manual*/
   881: inc rbp  /*manual*/
   882: rol ecx ,0x1  /*manual*/
   883: sar dil ,0x21  /*manual*/
   884: qword ptr [rsp+rax*1-0x1e141506] = r8
   885: btc r9d ,eax  /*manual*/
   886: dword ptr [rsp+rax*1-0x1e141506] ^= ecx
   887: dec bp  /*manual*/
   888: pop r8  /*manual*/
   889: or rdi ,rdx  /*manual*/
   890: push rdx  /*manual*/
   891: movsxd rcx ,ecx  /*manual*/
   892: xchg dword ptr [rsp+rax*1-0x1e141502] ,edx  /*manual*/
   893: adc r11 ,rcx  /*manual*/
   894: qword ptr [rsp+rax*1-0x1e141506] = r11
   895: return
   896: r9d = 0xabb40bc7
   897: movsx ebx ,r9b  /*manual*/
   898: edx = r9d
   899: movzx eax ,byte ptr [rsi-0x1]  /*manual*/
   900: lea rdi ,ptr [r9*2+0x561cda8d]  /*manual*/
   901: ror edx ,0xa1  /*manual*/
   902: btr dx ,bx  /*manual*/
   903: al ^= r8b
   904: al ^= 0x26
   905: al -= 0xcd
   906: call 0x5d8dcd63a562
   907: movsx ebp ,r9b  /*manual*/
   908: al ^= 0x2f
   909: movzx ecx ,bp  /*manual*/
   910: qword ptr [rsp+rcx*1-0xffc7] = rcx
   911: call 0x5d8dcd53157f
   912: rol al ,0x1  /*manual*/
   913: r8b ^= al
   914: rol dil ,0xe1  /*manual*/
   915: lea rax ,ptr [rsp+rax*1+0x10]  /*manual*/
   916: or rcx ,qword ptr [rsp+rcx*2-0x1ff86]  /*manual*/
   917: qword ptr [rsp+rcx*2-0x1ff86] += rcx
   918: neg rdi  /*manual*/
   919: rdx = qword ptr [rax+rcx*8-0x7fe38]
   920: sets cl  /*manual*/
   921: call 0x5d8dcd57d48e
   922: adc r9 ,qword ptr [rsp+rcx*1-0xfef1]  /*manual*/
   923: r9 = qword ptr [r10+rcx*4-0x3fc04]
   924: rcx = qword ptr [rsp+0x8]
   925: adc rcx ,0x3ab03  /*manual*/
   926: jmp rcx  /*manual*/
   927: btr bp ,bx  /*manual*/
   928: inc qword ptr [rsp+0x10]  /*manual*/
   929: rdx += r9
   930: pop r9  /*manual*/
   931: or word ptr [rsp+0x8] ,0x2c8f  /*manual*/
   932: qword ptr [r10] = rdx
   933: movsx edx ,bl  /*manual*/
   934: r9d = edx
   935: qword ptr [rsp] = 0xffffffffbbb1ebd6
   936: edi = dword ptr [rsi-0x5]
   937: btr rbx ,0xbe  /*manual*/
   938: sbb rsi ,0x5  /*manual*/
   939: shl byte ptr [rsp] ,0x81  /*manual*/
   940: word ptr [rsp+0x1] = 0x7a99
   941: rdx ^= 0xffffffffab3f95b4
   942: edi ^= r8d
   943: xadd ebx ,edx  /*manual*/
   944: lea r9 ,ptr [rbx+rdx*2-0x73cd015d]  /*manual*/
   945: inc edi  /*manual*/
   946: push r9  /*manual*/
   947: xadd ebp ,edx  /*manual*/
   948: not edi  /*manual*/
   949: rbp -= r9
   950: and rbx ,qword ptr [rsp+rbx*1-0x54c06a2a]  /*manual*/
   951: ecx = edx
   952: lea edi ,ptr [rdi+rbx*4-0xa93f279]  /*manual*/
   953: not bpl  /*manual*/
   954: dec word ptr [rsp+rbx*1-0x69f7]  /*manual*/
   955: neg edi  /*manual*/
   956: push rcx  /*manual*/
   957: bt dx ,0x4  /*manual*/
   958: sbb ebx ,ecx  /*manual*/
   959: qword ptr [rsp+rbx*4-0x1aaf4] = r8
   960: dword ptr [rsp+rbx*8-0x35600] ^= edi
   961: not word ptr [rsp+rbx*1-0x6ac1]  /*manual*/
   962: r8 = qword ptr [rsp+rbx*1-0x6aab]
   963: call 0x5d8dcd6b9661
   964: movsxd rdi ,edi  /*manual*/
   965: r11 += rdi
   966: word ptr [rsp+rbx*1-0x6aae] ^= bx
   967: shl r9d ,cl  /*manual*/
   968: qword ptr [rsp+rbx*1-0x6ac3] = r11
   969: return
   970: ebp = 0x28b2b5bc
   971: call 0x5d8dcd6298f2
   972: qword ptr [rsp+rbp*1-0x28b2b5bc] = rbp
   973: rbx = qword ptr [r10+rbp*2-0x51656b78]
   974: movzx ecx ,word ptr [rsi+rbp*2-0x51656b7a]  /*manual*/
   975: r9d = dword ptr [rsp+rbp*1-0x28b2b5b8]
   976: cx ^= r8w
   977: eax = dword ptr [rsp+rbp*2-0x51656b76]
   978: movsx edx ,r9b  /*manual*/
   979: edi = dword ptr [rsp+r9*1]
   980: rol cx ,0x1  /*manual*/
   981: inc rax  /*manual*/
   982: inc r9w  /*manual*/
   983: btc rax ,rdx  /*manual*/
   984: cx -= r9w
   985: data16 cbw  /*manual*/
   986: not qword ptr [rsp+rbp*1-0x28b2b5bc]  /*manual*/
   987: cx ^= 0x7258
   988: call 0x5d8dcd69186d
   989: cwde   /*manual*/
   990: not edx  /*manual*/
   991: rol cx ,0x1  /*manual*/
   992: shl dl ,0xa4  /*manual*/
   993: ror rdi ,0x91  /*manual*/
   994: pop rax  /*manual*/
   995: cx ^= 0xaf35
   996: r8w ^= cx
   997: inc byte ptr [rsp+r9*2]  /*manual*/
   998: jnle 0x5d8dcd5852f4  /*manual*/
   999: movsx eax ,word ptr [rsp+rbp*2-0x51656b75]  /*manual*/
  1000: lea rcx ,ptr [rsp+rcx*1+0x8]  /*manual*/
  1001: qword ptr [r9+rcx*1-0x1] = rbx
  1002: cqo   /*manual*/
  1003: or edx ,dword ptr [rsi+rbp*1-0x28b2b5c2]  /*manual*/
  1004: dword ptr [rsp+rbp*1-0x28b2b5b8] += edi
  1005: lea rsi ,ptr [rsi+rbp*2-0x51656b7e]  /*manual*/
  1006: shr dword ptr [rsp+rbp*1-0x28b2b5bb] ,0x9  /*manual*/
  1007: shl byte ptr [rsp+rbp*1-0x28b2b5bc] ,0x42  /*manual*/
  1008: edx ^= r8d
  1009: lea edx ,ptr [rdx+rbp*2-0x13bae753]  /*manual*/
  1010: ebx = edi
  1011: xchg byte ptr [rsp+rbp*2-0x51656b75] ,bpl  /*manual*/
  1012: rol edx ,0x1  /*manual*/
  1013: btr rbp ,r9  /*manual*/
  1014: inc edi  /*manual*/
  1015: setnl byte ptr [rsp+r9*4]  /*manual*/
  1016: sbb edx ,r9d  /*manual*/
  1017: neg ax  /*manual*/
  1018: push rdi  /*manual*/
  1019: push rbp  /*manual*/
  1020: edx ^= 0xf7014321
  1021: inc ax  /*manual*/
  1022: xadd word ptr [rsp+rbp*1-0x28b2b528] ,bp  /*manual*/
  1023: neg bp  /*manual*/
  1024: qword ptr [rsp+r9*1+0xf] = r8
  1025: rbp += 0x1b2f83
  1026: dword ptr [rsp+rbp*1-0x28cd2f73] ^= edx
  1027: r8 = qword ptr [rsp+rbp*1-0x28cd2f73]
  1028: movsxd rdx ,edx  /*manual*/
  1029: ecx = 0xf618ecd2
  1030: cl -= 0xe8
  1031: bpl -= r9b
  1032: adc r11 ,rdx  /*manual*/
  1033: lea rbx ,ptr [rbp+r10*1-0x28cd2f7a]  /*manual*/
  1034: qword ptr [r10+rbp*2-0x519a5f04] = rbx
  1035: dec bp  /*manual*/
  1036: lea rdi ,ptr [rbp*8-0x4be58a55]  /*manual*/
  1037: jnz 0x5d8dcd616881  /*manual*/
  1038: qword ptr [rsp+rbp*1-0x28cd2f81] = r11
  1039: return
  1040: jmp 0x5d8dcd582c14  /*manual*/
  1041: edi = 0x46aeeb78
  1042: edi = dword ptr [rsi+rdi*1-0x46aeeb7c]
  1043: ebx = 0xa332792
  1044: edi ^= r8d
  1045: movzx eax ,bx  /*manual*/
  1046: r9d = ebx
  1047: movzx edx ,ax  /*manual*/
  1048: neg edi  /*manual*/
  1049: jmp 0x5d8dcd578a2a  /*manual*/
  1050: edi -= 0xbca35a6e
  1051: bswap edi  /*manual*/
  1052: inc edi  /*manual*/
  1053: rbx ^= 0xffffffffc82b4286
  1054: neg edi  /*manual*/
  1055: dec rbx  /*manual*/
  1056: jp 0x5d8dcd541c03  /*manual*/
  1057: push r8  /*manual*/
  1058: cwde   /*manual*/
  1059: call 0x5d8dcd61273d
  1060: dword ptr [rsp+rbx*1+0x3de79af5] ^= edi
  1061: qword ptr [rsp+rbx*1+0x3de79aed] = rdx
  1062: r8 = qword ptr [rsp+rbx*1+0x3de79af5]
  1063: movsxd rdi ,edi  /*manual*/
  1064: ebx ^= eax
  1065: jnz 0x5d8dcd6217a1  /*manual*/
  1066: lea rbp ,ptr [rbx+rax*2-0x73cbbe08]  /*manual*/
  1067: adc r11 ,rdi  /*manual*/
  1068: rbp = qword ptr [rax+r10*1-0x2792]
  1069: movzx r9d ,word ptr [rax+rsi*1-0x2798]  /*manual*/
  1070: cdqe   /*manual*/
  1071: r9w ^= r8w
  1072: movzx ecx ,al  /*manual*/
  1073: shl cx ,0xc5  /*manual*/
  1074: adc r9w ,0x408  /*manual*/
  1075: dec cx  /*manual*/
  1076: push rcx  /*manual*/
  1077: rol r9w ,0x1  /*manual*/
  1078: r9w -= 0x7b63
  1079: xadd rbx ,rax  /*manual*/
  1080: jle 0x5d8dcd686d90  /*manual*/
  1081: ror r9w ,0x1  /*manual*/
  1082: shl dl ,0x82  /*manual*/
  1083: not r9w  /*manual*/
  1084: xchg bx ,cx  /*manual*/
  1085: xadd rax ,rbx  /*manual*/
  1086: push rax  /*manual*/
  1087: r8w ^= r9w
  1088: qword ptr [rsp+rdx*1-0x2730] = 0xffffffff878c4283
  1089: pop rdx  /*manual*/
  1090: jmp 0x5d8dcd5233ad  /*manual*/
  1091: lea r9 ,ptr [rsp+r9*1+0x18]  /*manual*/
  1092: byte ptr [rsp+rcx*4-0x1a846] = 0xe6
  1093: dword ptr [rsp+rcx*4-0x1a841] ^= 0x292230f4
  1094: qword ptr [rcx+r9*1-0x6a13] = rbp
  1095: movzx r9d ,byte ptr [rsp+rcx*1-0x69ff]  /*manual*/
  1096: movzx eax ,word ptr [r9+rsi*1-0x107]  /*manual*/
  1097: lea rsi ,ptr [rsi+rcx*2-0xd42e]  /*manual*/
  1098: push rbx  /*manual*/
  1099: lea rbp ,ptr [r9+0x59b4581d]  /*manual*/
  1100: ax ^= r8w
  1101: rol ax ,0x1  /*manual*/
  1102: or r9w ,bx  /*manual*/
  1103: byte ptr [rsp+rcx*1-0x69f5] -= bh
  1104: ax ^= 0xfe08
  1105: byte ptr [rsp+rcx*2-0xd418] = dh
  1106: not rbx  /*manual*/
  1107: neg ax  /*manual*/
  1108: bt r9d ,ebx  /*manual*/
  1109: not bpl  /*manual*/
  1110: ror ebp ,cl  /*manual*/
  1111: ax ^= 0xc511
  1112: push rbp  /*manual*/
  1113: dec ax  /*manual*/
  1114: r8w ^= ax
  1115: dec rbx  /*manual*/
  1116: lea rax ,ptr [rsp+rax*1+0x28]  /*manual*/
  1117: rcx = qword ptr [rax+rcx*8-0x35098]
  1118: qword ptr [r10+r9*4-0x10bfc] = rcx
  1119: ecx = r9d
  1120: shl bp ,0xc4  /*manual*/
  1121: jnz 0x5d8dcd62aa5e  /*manual*/
  1122: qword ptr [rsp+rcx*2-0x85fe] = r11
  1123: return
  1124: jmp 0x5d8dcd582c14  /*manual*/
  1125: edi = 0x46aeeb78
  1126: edi = dword ptr [rsi+rdi*1-0x46aeeb7c]
  1127: ebx = 0xa332792
  1128: edi ^= r8d
  1129: movzx eax ,bx  /*manual*/
  1130: r9d = ebx
  1131: movzx edx ,ax  /*manual*/
  1132: neg edi  /*manual*/
  1133: jmp 0x5d8dcd578a2a  /*manual*/
  1134: edi -= 0xbca35a6e
  1135: bswap edi  /*manual*/
  1136: inc edi  /*manual*/
  1137: rbx ^= 0xffffffffc82b4286
  1138: neg edi  /*manual*/
  1139: dec rbx  /*manual*/
  1140: jp 0x5d8dcd541c03  /*manual*/
  1141: push r8  /*manual*/
  1142: cwde   /*manual*/
  1143: call 0x5d8dcd61273d
  1144: dword ptr [rsp+rbx*1+0x3de79af5] ^= edi
  1145: qword ptr [rsp+rbx*1+0x3de79aed] = rdx
  1146: r8 = qword ptr [rsp+rbx*1+0x3de79af5]
  1147: movsxd rdi ,edi  /*manual*/
  1148: ebx ^= eax
  1149: jnz 0x5d8dcd6217a1  /*manual*/
  1150: lea rbp ,ptr [rbx+rax*2-0x73cbbe08]  /*manual*/
  1151: adc r11 ,rdi  /*manual*/
  1152: rbp = qword ptr [rax+r10*1-0x2792]
  1153: movzx r9d ,word ptr [rax+rsi*1-0x2798]  /*manual*/
  1154: cdqe   /*manual*/
  1155: r9w ^= r8w
  1156: movzx ecx ,al  /*manual*/
  1157: shl cx ,0xc5  /*manual*/
  1158: adc r9w ,0x408  /*manual*/
  1159: dec cx  /*manual*/
  1160: push rcx  /*manual*/
  1161: rol r9w ,0x1  /*manual*/
  1162: r9w -= 0x7b63
  1163: xadd rbx ,rax  /*manual*/
  1164: jle 0x5d8dcd686d90  /*manual*/
  1165: ror r9w ,0x1  /*manual*/
  1166: shl dl ,0x82  /*manual*/
  1167: not r9w  /*manual*/
  1168: xchg bx ,cx  /*manual*/
  1169: xadd rax ,rbx  /*manual*/
  1170: push rax  /*manual*/
  1171: r8w ^= r9w
  1172: qword ptr [rsp+rdx*1-0x2730] = 0xffffffff878c4283
  1173: pop rdx  /*manual*/
  1174: jmp 0x5d8dcd5233ad  /*manual*/
  1175: lea r9 ,ptr [rsp+r9*1+0x18]  /*manual*/
  1176: byte ptr [rsp+rcx*4-0x1a846] = 0xe6
  1177: dword ptr [rsp+rcx*4-0x1a841] ^= 0x292230f4
  1178: qword ptr [rcx+r9*1-0x6a13] = rbp
  1179: movzx r9d ,byte ptr [rsp+rcx*1-0x69ff]  /*manual*/
  1180: movzx eax ,word ptr [r9+rsi*1-0x107]  /*manual*/
  1181: lea rsi ,ptr [rsi+rcx*2-0xd42e]  /*manual*/
  1182: push rbx  /*manual*/
  1183: lea rbp ,ptr [r9+0x59b4581d]  /*manual*/
  1184: ax ^= r8w
  1185: rol ax ,0x1  /*manual*/
  1186: or r9w ,bx  /*manual*/
  1187: byte ptr [rsp+rcx*1-0x69f5] -= bh
  1188: ax ^= 0xfe08
  1189: byte ptr [rsp+rcx*2-0xd418] = dh
  1190: not rbx  /*manual*/
  1191: neg ax  /*manual*/
  1192: bt r9d ,ebx  /*manual*/
  1193: not bpl  /*manual*/
  1194: ror ebp ,cl  /*manual*/
  1195: ax ^= 0xc511
  1196: push rbp  /*manual*/
  1197: dec ax  /*manual*/
  1198: r8w ^= ax
  1199: dec rbx  /*manual*/
  1200: lea rax ,ptr [rsp+rax*1+0x28]  /*manual*/
  1201: rcx = qword ptr [rax+rcx*8-0x35098]
  1202: qword ptr [r10+r9*4-0x10bfc] = rcx
  1203: ecx = r9d
  1204: shl bp ,0xc4  /*manual*/
  1205: jnz 0x5d8dcd62aa5e  /*manual*/
  1206: qword ptr [rsp+rcx*2-0x85fe] = r11
  1207: return
  1208: edx = 0x453b0ea7
  1209: bswap rdx  /*manual*/
  1210: lea rdi ,ptr [rdx*4-0x4964118d]  /*manual*/
  1211: rbx = qword ptr [r10]
  1212: xchg dh ,dl  /*manual*/
  1213: xadd dl ,dil  /*manual*/
  1214: lea rbp ,ptr [rdi-0x78e33899]  /*manual*/
  1215: adc r10 ,0x8  /*manual*/
  1216: movsx r9d ,dx  /*manual*/
  1217: push rdx  /*manual*/
  1218: dec dx  /*manual*/
  1219: lea rsi ,ptr [rsi+r9*1-0x75]  /*manual*/
  1220: lea rdx ,ptr [r9+rdx*4-0x735364a3]  /*manual*/
  1221: lea rdx ,ptr [r9+rbp*1-0x4aedd8f4]  /*manual*/
  1222: movzx eax ,word ptr [rsi+r9*4-0x1cc]  /*manual*/
  1223: xadd r9d ,ebp  /*manual*/
  1224: shl byte ptr [rsp+rbp*1-0x6e] ,0x61  /*manual*/
  1225: bt r9 ,r9  /*manual*/
  1226: ax ^= r8w
  1227: rol ax ,0x1  /*manual*/
  1228: ax += 0x7f1a
  1229: neg rdx  /*manual*/
  1230: sbb r9b ,r9b  /*manual*/
  1231: neg ax  /*manual*/
  1232: inc ax  /*manual*/
  1233: ecx = edx
  1234: or dl ,ch  /*manual*/
  1235: r8w ^= ax
  1236: r9 -= 0x74a81c0b
  1237: dword ptr [rsp+rbp*4-0x1cc] += ebp
  1238: rdx -= rdi
  1239: lea rax ,ptr [rsp+rax*1+0x8]  /*manual*/
  1240: and rdx ,0x3321f26  /*manual*/
  1241: pop rdx  /*manual*/
  1242: not cl  /*manual*/
  1243: qword ptr [rax+rbp*1-0x73] = rbx
  1244: xadd rcx ,rdi  /*manual*/
  1245: call 0x5d8dcd69813f
  1246: ebp -= 0xb41a7e0b
  1247: lea rsi ,ptr [rsi+rdi*1-0xd3523e9]  /*manual*/
  1248: r9b += dl
  1249: ecx = dword ptr [rsi+rdi*2-0x1a6a47ca]
  1250: ecx ^= r8d
  1251: dec r9  /*manual*/
  1252: rdi += rdi
  1253: adc ebp ,ebp  /*manual*/
  1254: neg ecx  /*manual*/
  1255: movzx eax ,dil  /*manual*/
  1256: qword ptr [rsp+rdi*1-0x1a6a47ca] = rbp
  1257: push rbp  /*manual*/
  1258: lea ecx ,ptr [rcx+r9*4+0x1f1a3e2e]  /*manual*/
  1259: bswap ecx  /*manual*/
  1260: shl byte ptr [rsp+rdi*2-0x34d48f91] ,0x7  /*manual*/
  1261: btc rdx ,rdi  /*manual*/
  1262: inc ecx  /*manual*/
  1263: cdq   /*manual*/
  1264: lea rbx ,ptr [rax-0x63f0fa82]  /*manual*/
  1265: dec r9d  /*manual*/
  1266: neg ecx  /*manual*/
  1267: and dword ptr [rsp+rdx*2+0xb] ,0x41bb9cde  /*manual*/
  1268: not byte ptr [rsp+rdx*1+0x2]  /*manual*/
  1269: sar ebx ,0x32  /*manual*/
  1270: qword ptr [rsp+rdx*1+0x8] = r8
  1271: setnp r9b  /*manual*/
  1272: dword ptr [rsp+rdx*2+0x8] ^= ecx
  1273: sar byte ptr [rsp+rdx*8+0x7] ,0x1  /*manual*/
  1274: jz 0x5d8dcd5243e8  /*manual*/
  1275: data16 cbw  /*manual*/
  1276: r8 = qword ptr [rsp+rdx*4+0x8]
  1277: movsxd rcx ,ecx  /*manual*/
  1278: push rax  /*manual*/
  1279: neg rbp  /*manual*/
  1280: sar bp ,0xc2  /*manual*/
  1281: adc r11 ,rcx  /*manual*/
  1282: qword ptr [rsp+rax*1-0xffca] = r11
  1283: return
  1284: eax = 0xdf309b67
  1285: cqo   /*manual*/
  1286: movsx ebx ,al  /*manual*/
  1287: dl ^= byte ptr [rsi+rdx*8-0x1]
  1288: dl ^= r8b
  1289: bswap rbx  /*manual*/
  1290: push rbx  /*manual*/
  1291: not dl  /*manual*/
  1292: movsx ecx ,bx  /*manual*/
  1293: jmp 0x5d8dcd5696b3  /*manual*/
  1294: not qword ptr [rsp+rcx*1]  /*manual*/
  1295: dl ^= 0x2b
  1296: xchg ebx ,ecx  /*manual*/
  1297: lea rdi ,ptr [rbx*8-0x57d101f7]  /*manual*/
  1298: dec dl  /*manual*/
  1299: btr di ,ax  /*manual*/
  1300: movzx r9d ,cx  /*manual*/
  1301: dl ^= 0x1b
  1302: ebp = dword ptr [rsp+rbx*4+0x1]
  1303: ror dword ptr [rsp+rbx*1+0x1] ,0xd0  /*manual*/
  1304: r8b ^= dl
  1305: bpl ^= 0x28
  1306: xchg bp ,r9w  /*manual*/
  1307: lea rax ,ptr [rbp+0x6bb78be]  /*manual*/
  1308: lea rdx ,ptr [rsp+rdx*1+0x8]  /*manual*/
  1309: call 0x5d8dcd6c0211
  1310: pop rbx  /*manual*/
  1311: rax = qword ptr [rcx+rdx*1]
  1312: call 0x5d8dcd66af6e
  1313: qword ptr [r10+rcx*1-0x8] = rax
  1314: eax = dword ptr [rsi+rcx*2-0x5]
  1315: bt rdi ,0x72  /*manual*/
  1316: xadd rbp ,r9  /*manual*/
  1317: and r9b ,0x21  /*manual*/
  1318: eax ^= r8d
  1319: shl di ,0xa3  /*manual*/
  1320: neg eax  /*manual*/
  1321: shr ebp ,0x64  /*manual*/
  1322: byte ptr [rsp+rcx*1+0xa] += bpl
  1323: lea eax ,ptr [rax+rdi*2-0xd013afe]  /*manual*/
  1324: xchg r9 ,rdi  /*manual*/
  1325: pop rbp  /*manual*/
  1326: bswap eax  /*manual*/
  1327: jle 0x5d8dcd56d384  /*manual*/
  1328: adc eax ,ecx  /*manual*/
  1329: movzx edx ,byte ptr [rsp+rcx*2]  /*manual*/
  1330: neg eax  /*manual*/
  1331: movsx ebx ,word ptr [rsp+rcx*2+0x1]  /*manual*/
  1332: sar r9w ,0x47  /*manual*/
  1333: jnp 0x5d8dcd647ff0  /*manual*/
  1334: qword ptr [rsp+rcx*2] = r8
  1335: adc rdx ,0xffffffff8a1dcd75  /*manual*/
  1336: dword ptr [rsp+rcx*2] ^= eax
  1337: btr cx ,bx  /*manual*/
  1338: bt edx ,edx  /*manual*/
  1339: pop r8  /*manual*/
  1340: movsxd rax ,eax  /*manual*/
  1341: lea rdx ,ptr [rdi*4+0x47001220]  /*manual*/
  1342: adc r11 ,rax  /*manual*/
  1343: lea rax ,ptr [rcx+rcx*2+0x609fa349]  /*manual*/
  1344: rdi = qword ptr [r10+rcx*2-0x8]
  1345: cx += word ptr [rsi+rcx*1-0x7]
  1346: movsx ebp ,bl  /*manual*/
  1347: cx ^= r8w
  1348: cx -= bp
  1349: cdqe   /*manual*/
  1350: cx ^= bp
  1351: r9w ^= bp
  1352: rol dx ,0xcd  /*manual*/
  1353: not eax  /*manual*/
  1354: sbb cx ,0xfd59  /*manual*/
  1355: inc rdx  /*manual*/
  1356: ror cx ,0x1  /*manual*/
  1357: r8w ^= cx
  1358: rcx += rsp
  1359: data16 cbw  /*manual*/
  1360: push r9  /*manual*/
  1361: call 0x5d8dcd606693
  1362: qword ptr [rcx+r9*1+0x57d1ffe1] = rdi
  1363: movzx eax ,byte ptr [rsi+r9*1+0x57d1ffd9]  /*manual*/
  1364: btc dx ,0xc1  /*manual*/
  1365: setb dl  /*manual*/
  1366: lea rsi ,ptr [rsi+r9*1+0x57d1ffd9]  /*manual*/
  1367: edi = edx
  1368: qword ptr [rsp+rdi*1-0x46fc0200] = rbx
  1369: al ^= r8b
  1370: al += 0x9f
  1371: btr r9d ,edi  /*manual*/
  1372: dec bp  /*manual*/
  1373: al ^= bl
  1374: push rbx  /*manual*/
  1375: neg al  /*manual*/
  1376: dec dword ptr [rsp+rdi*1-0x46fc01fd]  /*manual*/
  1377: ror al ,0x1  /*manual*/
  1378: or dl ,0xb0  /*manual*/
  1379: neg al  /*manual*/
  1380: bt rbx ,0x13  /*manual*/
  1381: al += bl
  1382: bts rdx ,0x4a  /*manual*/
  1383: lea rcx ,ptr [rdx+r9*1+0x44ae6062]  /*manual*/
  1384: r8b ^= al
  1385: dec r9w  /*manual*/
  1386: neg rcx  /*manual*/
  1387: lea rax ,ptr [rsp+rax*1+0x18]  /*manual*/
  1388: ebp ^= 0x1a8760d8
  1389: ror di ,0xc4  /*manual*/
  1390: shl di ,0x29  /*manual*/
  1391: rbp = qword ptr [rdi+rax*1-0x46fc4000]
  1392: sbb bx ,r9w  /*manual*/
  1393: not r9b  /*manual*/
  1394: not cl  /*manual*/
  1395: qword ptr [r10+rdi*1-0x46fc4008] = rbp
  1396: pop rax  /*manual*/
  1397: jnz 0x5d8dcd550c66  /*manual*/
  1398: push rdx  /*manual*/
  1399: lea r10 ,ptr [r10+rdi*1-0x46fc4008]  /*manual*/
  1400: pop rdx  /*manual*/
  1401: pop rcx  /*manual*/
  1402: pop rax  /*manual*/
  1403: js 0x5d8dcd55d7a6  /*manual*/
  1404: lea rbp ,ptr [rsp+0x1e8]  /*manual*/
  1405: push 0xffffffff89366a7a  /*manual*/
  1406: inc byte ptr [rsp+0x1]  /*manual*/
  1407: push 0xffffffffcd9b4535  /*manual*/
  1408: cmp r10 ,rbp  /*manual*/
  1409: lea rsp ,ptr [rsp+0x10]  /*manual*/
  1410: jnbe 0x5d8dcd54e3e5  /*manual*/
  1411: jmp r11  /*manual*/
  1412: ebx = 0x58b031f0
  1413: ebp = 0x2627a376
  1414: movsx edi ,bx  /*manual*/
  1415: rcx = qword ptr [rbp+r10*1-0x2627a376]
  1416: r9d = ebp
  1417: shr ebp ,0xcc  /*manual*/
  1418: lea r10 ,ptr [r10+rbp*1-0x26272]  /*manual*/
  1419: dil += 0x2b
  1420: shl r9d ,0x89  /*manual*/
  1421: movsx eax ,dil  /*manual*/
  1422: lea rsi ,ptr [rbx+rsi*1-0x58b031f2]  /*manual*/
  1423: or bl ,bh  /*manual*/
  1424: cdq   /*manual*/
  1425: movzx r9d ,word ptr [rbp+rsi*1-0x2627a]  /*manual*/
  1426: rol ax ,0xa9  /*manual*/
  1427: jnz 0x5d8dcd6c61f6  /*manual*/
  1428: neg di  /*manual*/
  1429: r9w ^= r8w
  1430: btr dx ,di  /*manual*/
  1431: shr ebp ,0x7a  /*manual*/
  1432: not eax  /*manual*/
  1433: rol r9w ,0x1  /*manual*/
  1434: r9w += 0x7f1a
  1435: sar rax ,0x51  /*manual*/
  1436: neg r9w  /*manual*/
  1437: btc ax ,di  /*manual*/
  1438: adc rax ,rax  /*manual*/
  1439: xadd di ,dx  /*manual*/
  1440: inc r9w  /*manual*/
  1441: neg dx  /*manual*/
  1442: r8w ^= r9w
  1443: r9 += rsp
  1444: qword ptr [rbx+r9*1-0x58b031f1] = rcx
  1445: ebp -= 0xbfac7712
  1446: shr al ,0x21  /*manual*/
  1447: lea rsi ,ptr [rbp+rsi*1-0x405388f2]  /*manual*/
  1448: not ax  /*manual*/
  1449: call 0x5d8dcd5da906
  1450: r9d = dword ptr [rbp+rsi*1-0x405388ee]
  1451: r9d ^= r8d
  1452: neg r9d  /*manual*/
  1453: qword ptr [rsp+rdi*2-0x19dca] = rdx
  1454: pop rbx  /*manual*/
  1455: shl rdx ,0xb6  /*manual*/
  1456: sbb r9d ,0xbca35a6e  /*manual*/
  1457: xchg dx ,bx  /*manual*/
  1458: data16 cbw  /*manual*/
  1459: neg ax  /*manual*/
  1460: bswap r9d  /*manual*/
  1461: neg edx  /*manual*/
  1462: inc dl  /*manual*/
  1463: adc r9d ,ebx  /*manual*/
  1464: neg r9d  /*manual*/
  1465: push rbx  /*manual*/
  1466: qword ptr [rsp+rbx*1] ^= r8
  1467: inc dil  /*manual*/
  1468: cqo   /*manual*/
  1469: dword ptr [rsp+rbx*8] ^= r9d
  1470: not edi  /*manual*/
  1471: pop r8  /*manual*/
  1472: sar ax ,0x63  /*manual*/
  1473: shr rax ,0x97  /*manual*/
  1474: ebp -= eax
  1475: movsxd r9 ,r9d  /*manual*/
  1476: adc r11 ,r9  /*manual*/
  1477: inc rdi  /*manual*/
  1478: movsx ecx ,di  /*manual*/
  1479: movsx r9d ,bl  /*manual*/
  1480: rbx ^= r11
  1481: jmp rbx  /*manual*/
  1482: r9d = 0xa0a6dd32
  1483: rsi -= 0x8
  1484: movsx ebp ,r9w  /*manual*/
  1485: movsx ebx ,bpl  /*manual*/
  1486: ecx = r9d
  1487: rdx = qword ptr [rbx+rsi*1-0x32]
  1488: lea rax ,ptr [rbp+rbp*4+0x23a55240]  /*manual*/
  1489: inc ax  /*manual*/
  1490: dec al  /*manual*/
  1491: rdx ^= r8
  1492: bt rbp ,r9  /*manual*/
  1493: lea rcx ,ptr [r9+rax*2+0x8375d6d]  /*manual*/
  1494: rol bx ,0xc1  /*manual*/
  1495: rdx ^= 0x4117004e
  1496: xchg r9 ,rcx  /*manual*/
  1497: shl ecx ,cl  /*manual*/
  1498: dec rdx  /*manual*/
  1499: bswap rdx  /*manual*/
  1500: inc cx  /*manual*/
  1501: not cx  /*manual*/
  1502: inc rdx  /*manual*/
  1503: or ebp ,ebp  /*manual*/
  1504: r8 ^= rdx
  1505: shl r9 ,cl  /*manual*/
  1506: lea r10 ,ptr [rbx+r10*1-0x6c]  /*manual*/
  1507: cmovnz ebp ,ecx  /*manual*/
  1508: qword ptr [r10+r9*8] = rdx
  1509: btr ecx ,0xcd  /*manual*/
  1510: cl ^= al
  1511: movzx edx ,bx  /*manual*/
  1512: lea rsi ,ptr [rbp+rsi*1-0x74c90002]  /*manual*/
  1513: edi = dword ptr [rsi+r9*4]
  1514: sbb bl ,dl  /*manual*/
  1515: edi ^= r8d
  1516: dec ebx  /*manual*/
  1517: lea rax ,ptr [rbp+rdx*1-0xfe88a2a]  /*manual*/
  1518: ror ebp ,0x69  /*manual*/
  1519: adc edi ,r9d  /*manual*/
  1520: shl bx ,0x41  /*manual*/
  1521: edi ^= 0x2481ba11
  1522: dec edi  /*manual*/
  1523: call 0x5d8dcd5c7c5a
  1524: sar bpl ,0xc1  /*manual*/
  1525: edi ^= 0xf9aa4013
  1526: lea edi ,ptr [rdi+r9*4+0x629ff463]  /*manual*/
  1527: not ax  /*manual*/
  1528: qword ptr [rsp+r9*4] = 0xffffffffbf27995e
  1529: inc qword ptr [rsp+r9*4]  /*manual*/
  1530: qword ptr [rsp+r9*4] = r8
  1531: btc r9d ,eax  /*manual*/
  1532: dword ptr [rsp+r9*2-0x100] ^= edi
  1533: jmp 0x5d8dcd5d15ea  /*manual*/
  1534: shl dx ,cl  /*manual*/
  1535: ror bpl ,cl  /*manual*/
  1536: pop r8  /*manual*/
  1537: or rbx ,rbp  /*manual*/
  1538: call 0x5d8dcd62588c
  1539: movsxd rdi ,edi  /*manual*/
  1540: qword ptr [rsp+r9*1-0x80] = rbx
  1541: adc r11 ,rdi  /*manual*/
  1542: movsx edi ,bpl  /*manual*/
  1543: inc word ptr [rsp+r9*4-0x1fc]  /*manual*/
  1544: pop r9  /*manual*/
  1545: jnle 0x5d8dcd55d7a6  /*manual*/
  1546: lea rbp ,ptr [rsp+0x1e8]  /*manual*/
  1547: push 0xffffffff89366a7a  /*manual*/
  1548: inc byte ptr [rsp+0x1]  /*manual*/
  1549: push 0xffffffffcd9b4535  /*manual*/
  1550: cmp r10 ,rbp  /*manual*/
  1551: lea rsp ,ptr [rsp+0x10]  /*manual*/
  1552: jnbe 0x5d8dcd54e3e5  /*manual*/
  1553: jmp r11  /*manual*/
  1554: r9d = 0xabb40bc7
  1555: movsx ebx ,r9b  /*manual*/
  1556: edx = r9d
  1557: movzx eax ,byte ptr [rsi-0x1]  /*manual*/
  1558: lea rdi ,ptr [r9*2+0x561cda8d]  /*manual*/
  1559: ror edx ,0xa1  /*manual*/
  1560: btr dx ,bx  /*manual*/
  1561: al ^= r8b
  1562: al ^= 0x26
  1563: al -= 0xcd
  1564: call 0x5d8dcd63a562
  1565: movsx ebp ,r9b  /*manual*/
  1566: al ^= 0x2f
  1567: movzx ecx ,bp  /*manual*/
  1568: qword ptr [rsp+rcx*1-0xffc7] = rcx
  1569: call 0x5d8dcd53157f
  1570: rol al ,0x1  /*manual*/
  1571: r8b ^= al
  1572: rol dil ,0xe1  /*manual*/
  1573: lea rax ,ptr [rsp+rax*1+0x10]  /*manual*/
  1574: or rcx ,qword ptr [rsp+rcx*2-0x1ff86]  /*manual*/
  1575: qword ptr [rsp+rcx*2-0x1ff86] += rcx
  1576: neg rdi  /*manual*/
  1577: rdx = qword ptr [rax+rcx*8-0x7fe38]
  1578: sets cl  /*manual*/
  1579: call 0x5d8dcd57d48e
  1580: adc r9 ,qword ptr [rsp+rcx*1-0xfef1]  /*manual*/
  1581: r9 = qword ptr [r10+rcx*4-0x3fc04]
  1582: rcx = qword ptr [rsp+0x8]
  1583: adc rcx ,0x3ab03  /*manual*/
  1584: jmp rcx  /*manual*/
  1585: btr bp ,bx  /*manual*/
  1586: inc qword ptr [rsp+0x10]  /*manual*/
  1587: rdx += r9
  1588: pop r9  /*manual*/
  1589: or word ptr [rsp+0x8] ,0x2c8f  /*manual*/
  1590: qword ptr [r10] = rdx
  1591: movsx edx ,bl  /*manual*/
  1592: r9d = edx
  1593: qword ptr [rsp] = 0xffffffffbbb1ebd6
  1594: edi = dword ptr [rsi-0x5]
  1595: btr rbx ,0xbe  /*manual*/
  1596: sbb rsi ,0x5  /*manual*/
  1597: shl byte ptr [rsp] ,0x81  /*manual*/
  1598: word ptr [rsp+0x1] = 0x7a99
  1599: rdx ^= 0xffffffffab3f95b4
  1600: edi ^= r8d
  1601: xadd ebx ,edx  /*manual*/
  1602: lea r9 ,ptr [rbx+rdx*2-0x73cd015d]  /*manual*/
  1603: inc edi  /*manual*/
  1604: push r9  /*manual*/
  1605: xadd ebp ,edx  /*manual*/
  1606: not edi  /*manual*/
  1607: rbp -= r9
  1608: and rbx ,qword ptr [rsp+rbx*1-0x54c06a2a]  /*manual*/
  1609: ecx = edx
  1610: lea edi ,ptr [rdi+rbx*4-0xa93f279]  /*manual*/
  1611: not bpl  /*manual*/
  1612: dec word ptr [rsp+rbx*1-0x69f7]  /*manual*/
  1613: neg edi  /*manual*/
  1614: push rcx  /*manual*/
  1615: bt dx ,0x4  /*manual*/
  1616: sbb ebx ,ecx  /*manual*/
  1617: qword ptr [rsp+rbx*4-0x1aaf4] = r8
  1618: dword ptr [rsp+rbx*8-0x35600] ^= edi
  1619: not word ptr [rsp+rbx*1-0x6ac1]  /*manual*/
  1620: r8 = qword ptr [rsp+rbx*1-0x6aab]
  1621: call 0x5d8dcd6b9661
  1622: movsxd rdi ,edi  /*manual*/
  1623: r11 += rdi
  1624: word ptr [rsp+rbx*1-0x6aae] ^= bx
  1625: shl r9d ,cl  /*manual*/
  1626: qword ptr [rsp+rbx*1-0x6ac3] = r11
  1627: return
  1628: edx = 0x381d1d8f
  1629: lea rdi ,ptr [rdx*4-0x307c039b]  /*manual*/
  1630: lea rsi ,ptr [rsi+rdx*2-0x703a3b26]  /*manual*/
  1631: movsx ecx ,dx  /*manual*/
  1632: jmp 0x5d8dcd5500f6  /*manual*/
  1633: rbx = qword ptr [rsi+rdx*1-0x381d1d8f]
  1634: lea r9 ,ptr [rdi+rdx*2-0x2162845d]  /*manual*/
  1635: rbx ^= r8
  1636: lea rax ,ptr [rdi+rcx*1-0x4e6d022b]  /*manual*/
  1637: cdq   /*manual*/
  1638: shl r9b ,0x62  /*manual*/
  1639: rbx ^= 0x4117004e
  1640: inc dl  /*manual*/
  1641: rbx -= rdx
  1642: jmp 0x5d8dcd569574  /*manual*/
  1643: not ecx  /*manual*/
  1644: bswap rbx  /*manual*/
  1645: neg r9  /*manual*/
  1646: ror r9b ,0x21  /*manual*/
  1647: adc rbx ,rdx  /*manual*/
  1648: shl eax ,cl  /*manual*/
  1649: cdqe   /*manual*/
  1650: r8 ^= rbx
  1651: sar di ,0xcb  /*manual*/
  1652: al ^= 0x9a
  1653: lea r10 ,ptr [r10+rdx*1-0x9]  /*manual*/
  1654: dec rax  /*manual*/
  1655: qword ptr [r10+rdx*1-0x1] = rbx
  1656: lea rsi ,ptr [rsi+rdx*1-0x5]  /*manual*/
  1657: movzx ebp ,r9w  /*manual*/
  1658: neg edi  /*manual*/
  1659: rol al ,0xe7  /*manual*/
  1660: eax = dword ptr [rsi+rdx*2-0x2]
  1661: btc r9w ,0x9f  /*manual*/
  1662: eax ^= r8d
  1663: dec bp  /*manual*/
  1664: or r9b ,0x3d  /*manual*/
  1665: adc edi ,r9d  /*manual*/
  1666: adc eax ,edx  /*manual*/
  1667: bt cx ,cx  /*manual*/
  1668: bswap r9d  /*manual*/
  1669: lea rbp ,ptr [rdi*4-0x6450fefe]  /*manual*/
  1670: eax ^= 0x2481ba11
  1671: eax -= edx
  1672: call 0x5d8dcd6b5374
  1673: eax ^= 0xf9aa4013
  1674: qword ptr [rsp+r9*2-0x7aac5e02] = 0xffffffff8486e523
  1675: lea rbx ,ptr [rdi+r9*8+0x681b4ad9]  /*manual*/
  1676: lea eax ,ptr [rax+rdx*1+0x629ff462]  /*manual*/
  1677: bts edx ,0xac  /*manual*/
  1678: push rdx  /*manual*/
  1679: ebx -= dword ptr [rsp+rdx*4-0x3ffb]
  1680: qword ptr [rsp+rdx*1-0xff9] = r8
  1681: dword ptr [rsp+rdx*1-0xff9] ^= eax
  1682: sar dword ptr [rsp+rdx*4-0x4000] ,0x1a  /*manual*/
  1683: shr dil ,0xe1  /*manual*/
  1684: r8d = 0x7f18a695
  1685: r8 = qword ptr [rsp+rdx*1-0xff9]
  1686: rol rbx ,cl  /*manual*/
  1687: neg bp  /*manual*/
  1688: movsxd rax ,eax  /*manual*/
  1689: r11 += rax
  1690: pop rdx  /*manual*/
  1691: pop r9  /*manual*/
  1692: jmp 0x5d8dcd55d7a6  /*manual*/
  1693: lea rbp ,ptr [rsp+0x1e8]  /*manual*/
  1694: push 0xffffffff89366a7a  /*manual*/
  1695: inc byte ptr [rsp+0x1]  /*manual*/
  1696: push 0xffffffffcd9b4535  /*manual*/
  1697: cmp r10 ,rbp  /*manual*/
  1698: lea rsp ,ptr [rsp+0x10]  /*manual*/
  1699: jnbe 0x5d8dcd54e3e5  /*manual*/
  1700: jmp r11  /*manual*/
  1701: r9d = 0xabb40bc7
  1702: movsx ebx ,r9b  /*manual*/
  1703: edx = r9d
  1704: movzx eax ,byte ptr [rsi-0x1]  /*manual*/
  1705: lea rdi ,ptr [r9*2+0x561cda8d]  /*manual*/
  1706: ror edx ,0xa1  /*manual*/
  1707: btr dx ,bx  /*manual*/
  1708: al ^= r8b
  1709: al ^= 0x26
  1710: al -= 0xcd
  1711: call 0x5d8dcd63a562
  1712: movsx ebp ,r9b  /*manual*/
  1713: al ^= 0x2f
  1714: movzx ecx ,bp  /*manual*/
  1715: qword ptr [rsp+rcx*1-0xffc7] = rcx
  1716: call 0x5d8dcd53157f
  1717: rol al ,0x1  /*manual*/
  1718: r8b ^= al
  1719: rol dil ,0xe1  /*manual*/
  1720: lea rax ,ptr [rsp+rax*1+0x10]  /*manual*/
  1721: or rcx ,qword ptr [rsp+rcx*2-0x1ff86]  /*manual*/
  1722: qword ptr [rsp+rcx*2-0x1ff86] += rcx
  1723: neg rdi  /*manual*/
  1724: rdx = qword ptr [rax+rcx*8-0x7fe38]
  1725: sets cl  /*manual*/
  1726: call 0x5d8dcd57d48e
  1727: adc r9 ,qword ptr [rsp+rcx*1-0xfef1]  /*manual*/
  1728: r9 = qword ptr [r10+rcx*4-0x3fc04]
  1729: rcx = qword ptr [rsp+0x8]
  1730: adc rcx ,0x3ab03  /*manual*/
  1731: jmp rcx  /*manual*/
  1732: btr bp ,bx  /*manual*/
  1733: inc qword ptr [rsp+0x10]  /*manual*/
  1734: rdx += r9
  1735: pop r9  /*manual*/
  1736: or word ptr [rsp+0x8] ,0x2c8f  /*manual*/
  1737: qword ptr [r10] = rdx
  1738: movsx edx ,bl  /*manual*/
  1739: r9d = edx
  1740: qword ptr [rsp] = 0xffffffffbbb1ebd6
  1741: edi = dword ptr [rsi-0x5]
  1742: btr rbx ,0xbe  /*manual*/
  1743: sbb rsi ,0x5  /*manual*/
  1744: shl byte ptr [rsp] ,0x81  /*manual*/
  1745: word ptr [rsp+0x1] = 0x7a99
  1746: rdx ^= 0xffffffffab3f95b4
  1747: edi ^= r8d
  1748: xadd ebx ,edx  /*manual*/
  1749: lea r9 ,ptr [rbx+rdx*2-0x73cd015d]  /*manual*/
  1750: inc edi  /*manual*/
  1751: push r9  /*manual*/
  1752: xadd ebp ,edx  /*manual*/
  1753: not edi  /*manual*/
  1754: rbp -= r9
  1755: and rbx ,qword ptr [rsp+rbx*1-0x54c06a2a]  /*manual*/
  1756: ecx = edx
  1757: lea edi ,ptr [rdi+rbx*4-0xa93f279]  /*manual*/
  1758: not bpl  /*manual*/
  1759: dec word ptr [rsp+rbx*1-0x69f7]  /*manual*/
  1760: neg edi  /*manual*/
  1761: push rcx  /*manual*/
  1762: bt dx ,0x4  /*manual*/
  1763: sbb ebx ,ecx  /*manual*/
  1764: qword ptr [rsp+rbx*4-0x1aaf4] = r8
  1765: dword ptr [rsp+rbx*8-0x35600] ^= edi
  1766: not word ptr [rsp+rbx*1-0x6ac1]  /*manual*/
  1767: r8 = qword ptr [rsp+rbx*1-0x6aab]
  1768: call 0x5d8dcd6b9661
  1769: movsxd rdi ,edi  /*manual*/
  1770: r11 += rdi
  1771: word ptr [rsp+rbx*1-0x6aae] ^= bx
  1772: shl r9d ,cl  /*manual*/
  1773: qword ptr [rsp+rbx*1-0x6ac3] = r11
  1774: return
  1775: r9d = 0xe0294a80
  1776: lea rbx ,ptr [r9*2-0x6e516566]  /*manual*/
  1777: movzx ebx ,byte ptr [rsi-0x1]  /*manual*/
  1778: movsx edi ,r9b  /*manual*/
  1779: movsx ebp ,di  /*manual*/
  1780: lea r9 ,ptr [rbp+r9*1-0x16df774d]  /*manual*/
  1781: bl ^= r8b
  1782: shl r9 ,0x74  /*manual*/
  1783: movzx eax ,r9w  /*manual*/
  1784: ecx = eax
  1785: sbb bl ,0x4d  /*manual*/
  1786: rol bl ,0x1  /*manual*/
  1787: bl ^= 0x26
  1788: and cx ,di  /*manual*/
  1789: cqo   /*manual*/
  1790: jbe 0x5d8dcd6cf2b7  /*manual*/
  1791: neg bl  /*manual*/
  1792: cqo   /*manual*/
  1793: bl -= 0x48
  1794: shl dl ,0x84  /*manual*/
  1795: r8b ^= bl
  1796: rbx += rsp
  1797: rdi = qword ptr [rax+rbx*1]
  1798: push rax  /*manual*/
  1799: qword ptr [r10+rax*2-0x8] = rdi
  1800: dx ^= 0x11ee
  1801: shl word ptr [rsp+rcx*4+0x6] ,0xd  /*manual*/
  1802: or byte ptr [rsp+rax*2+0x3] ,ah  /*manual*/
  1803: ebx = dword ptr [rax+rsi*1-0x5]
  1804: word ptr [rsp+rax*1+0x2] += cx
  1805: ror eax ,0xc2  /*manual*/
  1806: setbe r9b  /*manual*/
  1807: ebx ^= r8d
  1808: word ptr [rsp+rax*1+0x4] -= r9w
  1809: bt cx ,cx  /*manual*/
  1810: sbb ebx ,0x8ebb022d  /*manual*/
  1811: ebx ^= 0xafb46cda
  1812: rol ax ,0x4a  /*manual*/
  1813: not cl  /*manual*/
  1814: rol ebx ,0x1  /*manual*/
  1815: call 0x5d8dcd540171
  1816: ebx ^= 0x7a8059bb
  1817: inc rax  /*manual*/
  1818: dl += dl
  1819: rol eax ,0xd7  /*manual*/
  1820: sbb ebx ,0xf7ab1539  /*manual*/
  1821: lea r9 ,ptr [rdx+rdx*1-0x50730f]  /*manual*/
  1822: qword ptr [rsp+r9*1+0x504f57] = rcx
  1823: neg ebx  /*manual*/
  1824: not dx  /*manual*/
  1825: word ptr [rsp+r9*8+0x2827ac3] = cx
  1826: shr dx ,0x64  /*manual*/
  1827: qword ptr [rsp+r9*2+0xa09eb6] = r8
  1828: movsx edi ,bp  /*manual*/
  1829: call 0x5d8dcd6530dd
  1830: push rdx  /*manual*/
  1831: dword ptr [rsp+r9*1+0x504f6f] ^= ebx
  1832: dword ptr [rsp+r9*4+0x1413d6c] = r9d
  1833: dec bp  /*manual*/
  1834: r8 = qword ptr [rsp+r9*1+0x504f6f]
  1835: btc cx ,0xdd  /*manual*/
  1836: lea rcx ,ptr [rdx+rdi*2-0x3cc28725]  /*manual*/
  1837: movsxd rbx ,ebx  /*manual*/
  1838: adc r11 ,rbx  /*manual*/
  1839: movzx r9d ,word ptr [rsi+r9*1+0x504f50]  /*manual*/
  1840: call 0x5d8dcd6cccc6
  1841: qword ptr [rsp+rax*1-0x800000] = rbp
  1842: pop rax  /*manual*/
  1843: lea rsi ,ptr [rsi+rdx*2-0x1dcb]  /*manual*/
  1844: r9w ^= r8w
  1845: movzx ebx ,dx  /*manual*/
  1846: inc bpl  /*manual*/
  1847: neg r9w  /*manual*/
  1848: r9w += 0xb350
  1849: cdq   /*manual*/
  1850: cdqe   /*manual*/
  1851: rol r9w ,0x1  /*manual*/
  1852: dec bx  /*manual*/
  1853: qword ptr [rsp+rax*1+0x99] = 0x4bad7636
  1854: and rcx ,0x3242d63  /*manual*/
  1855: r9w ^= dx
  1856: shr rbp ,0x85  /*manual*/
  1857: bx -= cx
  1858: sbb r9w ,dx  /*manual*/
  1859: pop rbx  /*manual*/
  1860: ror r9w ,cl  /*manual*/
  1861: inc bpl  /*manual*/
  1862: qword ptr [rsp+rbp*2-0xffffffa] = rbp
  1863: r8w ^= r9w
  1864: ax += bx
  1865: jl 0x5d8dcd556c37  /*manual*/
  1866: lea r9 ,ptr [rsp+r9*1+0x18]  /*manual*/
  1867: bswap rdx  /*manual*/
  1868: rdi = qword ptr [r9+rbp*2-0xffffffa]
  1869: adc eax ,ecx  /*manual*/
  1870: movzx r9d ,byte ptr [rsp+rbp*1-0x7fffff0]  /*manual*/
  1871: qword ptr [r10+rbp*1-0x800000d] = rdi
  1872: lea r10 ,ptr [rax+r10*1-0x3231293]  /*manual*/
  1873: sar word ptr [rsp+rbp*2-0xfffffe5] ,0x67  /*manual*/
  1874: push rax  /*manual*/
  1875: pop rbp  /*manual*/
  1876: pop rax  /*manual*/
  1877: pop rax  /*manual*/
  1878: pop rdx  /*manual*/
  1879: jnb 0x5d8dcd55d7a6  /*manual*/
  1880: lea rbp ,ptr [rsp+0x1e8]  /*manual*/
  1881: push 0xffffffff89366a7a  /*manual*/
  1882: inc byte ptr [rsp+0x1]  /*manual*/
  1883: push 0xffffffffcd9b4535  /*manual*/
  1884: cmp r10 ,rbp  /*manual*/
  1885: lea rsp ,ptr [rsp+0x10]  /*manual*/
  1886: jnbe 0x5d8dcd54e3e5  /*manual*/
  1887: jmp r11  /*manual*/
  1888: r9d = 0x2395a57
  1889: movsx eax ,r9w  /*manual*/
  1890: ebp = eax
  1891: movzx ebx ,byte ptr [rsi+r9*1-0x2395a58]  /*manual*/
  1892: cdqe   /*manual*/
  1893: lea rax ,ptr [r9*2+0x2d9ee4fb]  /*manual*/
  1894: bl ^= r8b
  1895: bts r9d ,r9d  /*manual*/
  1896: setnb r9b  /*manual*/
  1897: lea rdi ,ptr [rax+rbp*4+0x7297102c]  /*manual*/
  1898: not bl  /*manual*/
  1899: cqo   /*manual*/
  1900: xadd r9d ,edx  /*manual*/
  1901: sbb bl ,r9b  /*manual*/
  1902: cdqe   /*manual*/
  1903: push rdi  /*manual*/
  1904: bpl += byte ptr [rsp+r9*4-0xae56804]
  1905: rol bl ,0x1  /*manual*/
  1906: cqo   /*manual*/
  1907: shl qword ptr [rsp+r9*2-0x572b402] ,0x30  /*manual*/
  1908: dec rbp  /*manual*/
  1909: adc bl ,0xee  /*manual*/
  1910: r8b ^= bl
  1911: lea rbx ,ptr [rsp+rbx*1+0x8]  /*manual*/
  1912: inc dil  /*manual*/
  1913: shr r9b ,0x21  /*manual*/
  1914: adc ebp ,edx  /*manual*/
  1915: rdi = qword ptr [rbx+r9*8-0x15cad000]
  1916: shl qword ptr [rsp+rax*1-0x321199a9] ,0xe0  /*manual*/
  1917: qword ptr [r9+r10*1-0x2b95a08] = rdi
  1918: not r9  /*manual*/
  1919: xchg r9w ,ax  /*manual*/
  1920: lea rcx ,ptr [rdx+r9*1-0x23f72747]  /*manual*/
  1921: eax = dword ptr [rsi+r9*4+0xae59957]
  1922: neg dl  /*manual*/
  1923: eax ^= r8d
  1924: lea eax ,ptr [rcx+rax*1-0x680a748f]  /*manual*/
  1925: neg dword ptr [rsp+r9*2+0x572ccae]  /*manual*/
  1926: eax ^= 0xafb46cda
  1927: btc rcx ,r9  /*manual*/
  1928: xadd dl ,dh  /*manual*/
  1929: rol eax ,0x1  /*manual*/
  1930: movsx ebx ,bpl  /*manual*/
  1931: ror r9 ,cl  /*manual*/
  1932: eax ^= 0x7a8059bb
  1933: bts bp ,bx  /*manual*/
  1934: btr edx ,edx  /*manual*/
  1935: sbb eax ,0xf7ab1539  /*manual*/
  1936: xadd word ptr [rsp+rbp*8-0x2dc3c] ,bx  /*manual*/
  1937: movzx edi ,word ptr [rsp+rdx*2+0x4]  /*manual*/
  1938: neg eax  /*manual*/
  1939: push rbx  /*manual*/
  1940: not byte ptr [rsp+rbp*1-0x5b83]  /*manual*/
  1941: qword ptr [rsp+rbp*4-0x16e18] = r8
  1942: shl cl ,0xa1  /*manual*/
  1943: dword ptr [rsp+rbp*2-0xb708] ^= eax
  1944: rol bx ,0xe7  /*manual*/
  1945: ror byte ptr [rsp+rbp*1-0x5b83] ,cl  /*manual*/
  1946: r8 = qword ptr [rsp+rbp*1-0x5b80]
  1947: movsxd rax ,eax  /*manual*/
  1948: r11 += rax
  1949: lea rcx ,ptr [rsp+rbp*2-0xb670]  /*manual*/
  1950: rbx = qword ptr [rcx+rbp*2-0xb710]
  1951: r9d += 0xda0223cf
  1952: qword ptr [r10+r9*1-0x5a0223de] = rbx
  1953: sar rdx ,0xfe  /*manual*/
  1954: qword ptr [rsp+r9*1-0x5a0223ce] ^= 0xfffffffffc98f3bc
  1955: movzx edi ,byte ptr [rsi+rbp*8-0x2dc46]  /*manual*/
  1956: lea rsi ,ptr [rsi+rbp*1-0x5b8e]  /*manual*/
  1957: and dl ,r9b  /*manual*/
  1958: movzx ebx ,r9w  /*manual*/
  1959: dil ^= r8b
  1960: lea rdx ,ptr [rbp*4+0x1e88ec10]  /*manual*/
  1961: or r9 ,0x34004072  /*manual*/
  1962: rol dil ,0x1  /*manual*/
  1963: pop r9  /*manual*/
  1964: dil ^= 0xe1
  1965: rol r9d ,0xf2  /*manual*/
  1966: dec dil  /*manual*/
  1967: bl += dl
  1968: ror dil ,0x1  /*manual*/
  1969: r8b ^= dil
  1970: bts dx ,bx  /*manual*/
  1971: lea rdi ,ptr [rsp+rdi*1+0x8]  /*manual*/
  1972: qword ptr [rsp+rbp*2-0xb710] = rdx
  1973: setb byte ptr [rsp+rbp*1-0x5b88]  /*manual*/
  1974: push rbx  /*manual*/
  1975: rbx = qword ptr [rbp+rdi*1-0x5b88]
  1976: movsx ecx ,bpl  /*manual*/
  1977: rbp ^= rcx
  1978: qword ptr [rdx+r10*1-0x1e8a5a48] = rbx
  1979: setp cl  /*manual*/
  1980: lea r10 ,ptr [r10+rdx*4-0x7a2968d8]  /*manual*/
  1981: movsx eax ,cl  /*manual*/
  1982: rol qword ptr [rsp+rdx*1-0x1e8a5a2a] ,cl  /*manual*/
  1983: pop rbp  /*manual*/
  1984: pop rdx  /*manual*/
  1985: jnb 0x5d8dcd55d7a6  /*manual*/
  1986: lea rbp ,ptr [rsp+0x1e8]  /*manual*/
  1987: push 0xffffffff89366a7a  /*manual*/
  1988: inc byte ptr [rsp+0x1]  /*manual*/
  1989: push 0xffffffffcd9b4535  /*manual*/
  1990: cmp r10 ,rbp  /*manual*/
  1991: lea rsp ,ptr [rsp+0x10]  /*manual*/
  1992: jnbe 0x5d8dcd54e3e5  /*manual*/
  1993: jmp r11  /*manual*/
  1994: edi = dword ptr [rsi-0x4]
  1995: edx = 0x1c8f3714
  1996: movsx r9d ,dx  /*manual*/
  1997: movzx eax ,dl  /*manual*/
  1998: edi ^= r8d
  1999: xchg r9b ,al  /*manual*/
  2000: movzx ebp ,ax  /*manual*/
  2001: edi -= 0x8ebb022d
  2002: call 0x5d8dcd596805
  2003: edi ^= 0xafb46cda
  2004: ebx = ebp
  2005: lea rcx ,ptr [rbp+rbx*2-0x5464ad99]  /*manual*/
  2006: lea r9 ,ptr [rbx*4+0x2d3cbcbb]  /*manual*/
  2007: rol edi ,0x1  /*manual*/
  2008: dec ebp  /*manual*/
  2009: qword ptr [rsp+rdx*1-0x1c8f3714] = rbx
  2010: edi ^= 0x7a8059bb
  2011: lea edi ,ptr [rdi+rcx*4+0x59e7a03b]  /*manual*/
  2012: bpl += bpl
  2013: bswap eax  /*manual*/
  2014: xchg qword ptr [rsp+rdx*2-0x391e6e28] ,rbx  /*manual*/
  2015: neg edi  /*manual*/
  2016: sar ecx ,cl  /*manual*/
  2017: qword ptr [rsp+rdx*2-0x391e6e28] = r8
  2018: sbb ebp ,ebp  /*manual*/
  2019: xchg rbp ,rdx  /*manual*/
  2020: dword ptr [rsp+rdx*1] ^= edi
  2021: pop r8  /*manual*/
  2022: dec rcx  /*manual*/
  2023: movsxd rdi ,edi  /*manual*/
  2024: jno 0x5d8dcd6a0cf1  /*manual*/
  2025: ror bpl ,0x41  /*manual*/
  2026: adc r11 ,rdi  /*manual*/
  2027: dl ^= byte ptr [rsi+rdx*2-0x5]
  2028: not eax  /*manual*/
  2029: sar r9w ,0x69  /*manual*/
  2030: setnp bl  /*manual*/
  2031: dl ^= r8b
  2032: dl ^= 0x44
  2033: lea rdi ,ptr [rax+rbp*8-0x1dc958d0]  /*manual*/
  2034: or bpl ,dil  /*manual*/
  2035: sbb dl ,0xa7  /*manual*/
  2036: bt eax ,0x5d  /*manual*/
  2037: neg dl  /*manual*/
  2038: dl += al
  2039: push rdi  /*manual*/
  2040: r8b ^= dl
  2041: inc al  /*manual*/
  2042: dec rbp  /*manual*/
  2043: ror ecx ,0xda  /*manual*/
  2044: lea rdx ,ptr [rsp+rdx*1+0x8]  /*manual*/
  2045: dec qword ptr [rsp+rbx*1]  /*manual*/
  2046: sbb ebx ,0xa0a29878  /*manual*/
  2047: rcx = qword ptr [rdx+r9*2-0x5a79ffbc]
  2048: qword ptr [r10+r9*1-0x2d3cffe6] = rcx
  2049: movzx edx ,byte ptr [r9+rsi*1-0x2d3cffe4]  /*manual*/
  2050: ebx ^= 0x86037499
  2051: shl r9b ,0x25  /*manual*/
  2052: lea rsi ,ptr [r9+rsi*1-0x2d3cffc6]  /*manual*/
  2053: dl ^= r8b
  2054: ecx = 0xeab66886
  2055: dl -= 0x31
  2056: ror dl ,0x1  /*manual*/
  2057: inc bpl  /*manual*/
  2058: ebp -= 0x4230b57c
  2059: sbb dword ptr [rsp+r9*1-0x2d3cffbf] ,r9d  /*manual*/
  2060: not dl  /*manual*/
  2061: or rax ,rcx  /*manual*/
  2062: dec dl  /*manual*/
  2063: rol qword ptr [rsp+r9*1-0x2d3cffc0] ,0x78  /*manual*/
  2064: jnb 0x5d8dcd63828d  /*manual*/
  2065: r8b ^= dl
  2066: neg rbx  /*manual*/
  2067: pop r9  /*manual*/
  2068: push rax  /*manual*/
  2069: lea rdx ,ptr [rsp+rdx*1+0x8]  /*manual*/
  2070: pop r9  /*manual*/
  2071: and eax ,eax  /*manual*/
  2072: call 0x5d8dcd5dee42
  2073: rax = qword ptr [rdx]
  2074: qword ptr [rsp] = rbp
  2075: ror dword ptr [rsp+0x3] ,0xf  /*manual*/
  2076: sbb byte ptr [rsp+0x6] ,ch  /*manual*/
  2077: qword ptr [r10-0x10] = rax
  2078: xadd bl ,r9b  /*manual*/
  2079: xchg rbp ,r9  /*manual*/
  2080: sbb r10 ,0xf  /*manual*/
  2081: shl byte ptr [rsp+0x5] ,0xc6  /*manual*/
  2082: adc ecx ,0xb1bd6d75  /*manual*/
  2083: push rbp  /*manual*/
  2084: pop rcx  /*manual*/
  2085: pop rcx  /*manual*/
  2086: jl 0x5d8dcd55d7a6  /*manual*/
  2087: lea rbp ,ptr [rsp+0x1e8]  /*manual*/
  2088: push 0xffffffff89366a7a  /*manual*/
  2089: inc byte ptr [rsp+0x1]  /*manual*/
  2090: push 0xffffffffcd9b4535  /*manual*/
  2091: cmp r10 ,rbp  /*manual*/
  2092: lea rsp ,ptr [rsp+0x10]  /*manual*/
  2093: jnbe 0x5d8dcd54e3e5  /*manual*/
  2094: jmp r11  /*manual*/
  2095: r9d = 0xec2139c0
  2096: movzx edi ,word ptr [rsi-0x2]  /*manual*/
  2097: di ^= r8w
  2098: di ^= 0xe6b
  2099: lea rcx ,ptr [r9*2+0x6b31dd39]  /*manual*/
  2100: edx = 0x9ea3c72d
  2101: rol di ,0x1  /*manual*/
  2102: ebp = 0xc0259f02
  2103: or r9 ,rbp  /*manual*/
  2104: shl cx ,0x86  /*manual*/
  2105: dec di  /*manual*/
  2106: and rcx ,r9  /*manual*/
  2107: ror rbp ,0x9f  /*manual*/
  2108: eax = 0x3e805db5
  2109: di ^= 0x588f
  2110: ror di ,0x1  /*manual*/
  2111: r9 ^= rbp
  2112: shl cl ,0xe3  /*manual*/
  2113: movzx ebx ,ax  /*manual*/
  2114: sbb di ,bp  /*manual*/
  2115: rol di ,0x1  /*manual*/
  2116: xadd eax ,r9d  /*manual*/
  2117: shr rax ,0xf3  /*manual*/
  2118: xchg rbp ,rdx  /*manual*/
  2119: adc di ,dx  /*manual*/
  2120: call 0x5d8dcd6e42df
  2121: r8w ^= di
  2122: cdqe   /*manual*/
  2123: lea rdi ,ptr [rsp+rdi*1+0x8]  /*manual*/
  2124: lea rax ,ptr [rbp*2+0x65a73d81]  /*manual*/
  2125: ror edx ,0x56  /*manual*/
  2126: rbp = qword ptr [rdi+r9*2-0x7d00bb6a]
  2127: r9b += dl
  2128: qword ptr [r10+rcx*1-0x40242e08] = rbp
  2129: lea rcx ,ptr [rcx*2+0x310b581e]  /*manual*/
  2130: lea rcx ,ptr [rsp+r9*1-0x3e805ca5]  /*manual*/
  2131: pop rbp  /*manual*/
  2132: r9 = qword ptr [rcx+rdx*1-0x400]
  2133: movsx ebp ,bl  /*manual*/
  2134: ror ebx ,0x53  /*manual*/
  2135: movzx edi ,bp  /*manual*/
  2136: qword ptr [r10+rdx*2-0x810] = r9
  2137: lea r10 ,ptr [r10+rdx*2-0x810]  /*manual*/
  2138: movsx r9d ,di  /*manual*/
  2139: sar edi ,0x32  /*manual*/
  2140: r9d = dword ptr [rsi+rdx*4-0x1006]
  2141: lea rbp ,ptr [rdi*4+0x349554e9]  /*manual*/
  2142: call 0x5d8dcd4f2eb6
  2143: qword ptr [rsp+rdx*8-0x2000] = 0x168d22f8
  2144: lea rsi ,ptr [rsi+rdx*1-0x406]  /*manual*/
  2145: cqo   /*manual*/
  2146: r9d ^= r8d
  2147: inc dx  /*manual*/
  2148: xadd qword ptr [rsp+rdx*1-0x1] ,rbp  /*manual*/
  2149: rol r9d ,0x2  /*manual*/
  2150: r9d -= 0xbf834780
  2151: pop rax  /*manual*/
  2152: cqo   /*manual*/
  2153: push rax  /*manual*/
  2154: not r9d  /*manual*/
  2155: pop rdx  /*manual*/
  2156: ecx = edx
  2157: dec r9d  /*manual*/
  2158: btc cx ,0x84  /*manual*/
  2159: ror r9d ,0x1  /*manual*/
  2160: dec eax  /*manual*/
  2161: call 0x5d8dcd53e383
  2162: qword ptr [rsp+rdx*1-0x4b2277e1] = rax
  2163: r9d ^= 0x78a77d05
  2164: or qword ptr [rsp+rbx*1-0xbb6a000] ,rax  /*manual*/
  2165: pop rbx  /*manual*/
  2166: shl bx ,0xe7  /*manual*/
  2167: lea r9d ,ptr [rdi+r9*1-0x71253af6]  /*manual*/
  2168: sar edi ,cl  /*manual*/
  2169: ror r9d ,0x3  /*manual*/
  2170: r9d ^= 0x17b61c84
  2171: bt ax ,dx  /*manual*/
  2172: lea r9d ,ptr [r9+rdx*2+0x27e223ef]  /*manual*/
  2173: btc dx ,ax  /*manual*/
  2174: not r9d  /*manual*/
  2175: call 0x5d8dcd62e97c
  2176: ax += 0xf68f
  2177: ebp ^= 0x4a30236e
  2178: qword ptr [rsp+rdx*1-0x4b2277e0] = r8
  2179: jns 0x5d8dcd4f6d35  /*manual*/
  2180: not edi  /*manual*/
  2181: dword ptr [rsp+rdx*1-0x4b2277e0] ^= r9d
  2182: xadd bp ,di  /*manual*/
  2183: pop r8  /*manual*/
  2184: btr ax ,di  /*manual*/
  2185: dl ^= cl
  2186: call 0x5d8dcd6e2979
  2187: movsxd r9 ,r9d  /*manual*/
  2188: qword ptr [rsp+rbp*1-0x5cbd0195] = rbx
  2189: neg cl  /*manual*/
  2190: ror dl ,0x21  /*manual*/
  2191: r11 += r9
  2192: shl eax ,cl  /*manual*/
  2193: pop r9  /*manual*/
  2194: jb 0x5d8dcd55d7a6  /*manual*/
  2195: lea rbp ,ptr [rsp+0x1e8]  /*manual*/
  2196: push 0xffffffff89366a7a  /*manual*/
  2197: inc byte ptr [rsp+0x1]  /*manual*/
  2198: push 0xffffffffcd9b4535  /*manual*/
  2199: cmp r10 ,rbp  /*manual*/
  2200: lea rsp ,ptr [rsp+0x10]  /*manual*/
  2201: jnbe 0x5d8dcd54e3e5  /*manual*/
  2202: jmp r11  /*manual*/
  2203: edi = dword ptr [rsi-0x4]
  2204: edx = 0x1c8f3714
  2205: movsx r9d ,dx  /*manual*/
  2206: movzx eax ,dl  /*manual*/
  2207: edi ^= r8d
  2208: xchg r9b ,al  /*manual*/
  2209: movzx ebp ,ax  /*manual*/
  2210: edi -= 0x8ebb022d
  2211: call 0x5d8dcd596805
  2212: edi ^= 0xafb46cda
  2213: ebx = ebp
  2214: lea rcx ,ptr [rbp+rbx*2-0x5464ad99]  /*manual*/
  2215: lea r9 ,ptr [rbx*4+0x2d3cbcbb]  /*manual*/
  2216: rol edi ,0x1  /*manual*/
  2217: dec ebp  /*manual*/
  2218: qword ptr [rsp+rdx*1-0x1c8f3714] = rbx
  2219: edi ^= 0x7a8059bb
  2220: lea edi ,ptr [rdi+rcx*4+0x59e7a03b]  /*manual*/
  2221: bpl += bpl
  2222: bswap eax  /*manual*/
  2223: xchg qword ptr [rsp+rdx*2-0x391e6e28] ,rbx  /*manual*/
  2224: neg edi  /*manual*/
  2225: sar ecx ,cl  /*manual*/
  2226: qword ptr [rsp+rdx*2-0x391e6e28] = r8
  2227: sbb ebp ,ebp  /*manual*/
  2228: xchg rbp ,rdx  /*manual*/
  2229: dword ptr [rsp+rdx*1] ^= edi
  2230: pop r8  /*manual*/
  2231: dec rcx  /*manual*/
  2232: movsxd rdi ,edi  /*manual*/
  2233: jno 0x5d8dcd6a0cf1  /*manual*/
  2234: ror bpl ,0x41  /*manual*/
  2235: adc r11 ,rdi  /*manual*/
  2236: dl ^= byte ptr [rsi+rdx*2-0x5]
  2237: not eax  /*manual*/
  2238: sar r9w ,0x69  /*manual*/
  2239: setnp bl  /*manual*/
  2240: dl ^= r8b
  2241: dl ^= 0x44
  2242: lea rdi ,ptr [rax+rbp*8-0x1dc958d0]  /*manual*/
  2243: or bpl ,dil  /*manual*/
  2244: sbb dl ,0xa7  /*manual*/
  2245: bt eax ,0x5d  /*manual*/
  2246: neg dl  /*manual*/
  2247: dl += al
  2248: push rdi  /*manual*/
  2249: r8b ^= dl
  2250: inc al  /*manual*/
  2251: dec rbp  /*manual*/
  2252: ror ecx ,0xda  /*manual*/
  2253: lea rdx ,ptr [rsp+rdx*1+0x8]  /*manual*/
  2254: dec qword ptr [rsp+rbx*1]  /*manual*/
  2255: sbb ebx ,0xa0a29878  /*manual*/
  2256: rcx = qword ptr [rdx+r9*2-0x5a79ffbc]
  2257: qword ptr [r10+r9*1-0x2d3cffe6] = rcx
  2258: movzx edx ,byte ptr [r9+rsi*1-0x2d3cffe4]  /*manual*/
  2259: ebx ^= 0x86037499
  2260: shl r9b ,0x25  /*manual*/
  2261: lea rsi ,ptr [r9+rsi*1-0x2d3cffc6]  /*manual*/
  2262: dl ^= r8b
  2263: ecx = 0xeab66886
  2264: dl -= 0x31
  2265: ror dl ,0x1  /*manual*/
  2266: inc bpl  /*manual*/
  2267: ebp -= 0x4230b57c
  2268: sbb dword ptr [rsp+r9*1-0x2d3cffbf] ,r9d  /*manual*/
  2269: not dl  /*manual*/
  2270: or rax ,rcx  /*manual*/
  2271: dec dl  /*manual*/
  2272: rol qword ptr [rsp+r9*1-0x2d3cffc0] ,0x78  /*manual*/
  2273: jnb 0x5d8dcd63828d  /*manual*/
  2274: r8b ^= dl
  2275: neg rbx  /*manual*/
  2276: pop r9  /*manual*/
  2277: push rax  /*manual*/
  2278: lea rdx ,ptr [rsp+rdx*1+0x8]  /*manual*/
  2279: pop r9  /*manual*/
  2280: and eax ,eax  /*manual*/
  2281: call 0x5d8dcd5dee42
  2282: rax = qword ptr [rdx]
  2283: qword ptr [rsp] = rbp
  2284: ror dword ptr [rsp+0x3] ,0xf  /*manual*/
  2285: sbb byte ptr [rsp+0x6] ,ch  /*manual*/
  2286: qword ptr [r10-0x10] = rax
  2287: xadd bl ,r9b  /*manual*/
  2288: xchg rbp ,r9  /*manual*/
  2289: sbb r10 ,0xf  /*manual*/
  2290: shl byte ptr [rsp+0x5] ,0xc6  /*manual*/
  2291: adc ecx ,0xb1bd6d75  /*manual*/
  2292: push rbp  /*manual*/
  2293: pop rcx  /*manual*/
  2294: pop rcx  /*manual*/
  2295: jl 0x5d8dcd55d7a6  /*manual*/
  2296: lea rbp ,ptr [rsp+0x1e8]  /*manual*/
  2297: push 0xffffffff89366a7a  /*manual*/
  2298: inc byte ptr [rsp+0x1]  /*manual*/
  2299: push 0xffffffffcd9b4535  /*manual*/
  2300: cmp r10 ,rbp  /*manual*/
  2301: lea rsp ,ptr [rsp+0x10]  /*manual*/
  2302: jnbe 0x5d8dcd54e3e5  /*manual*/
  2303: jmp r11  /*manual*/
  2304: edi = dword ptr [rsi-0x4]
  2305: edx = 0x1c8f3714
  2306: movsx r9d ,dx  /*manual*/
  2307: movzx eax ,dl  /*manual*/
  2308: edi ^= r8d
  2309: xchg r9b ,al  /*manual*/
  2310: movzx ebp ,ax  /*manual*/
  2311: edi -= 0x8ebb022d
  2312: call 0x5d8dcd596805
  2313: edi ^= 0xafb46cda
  2314: ebx = ebp
  2315: lea rcx ,ptr [rbp+rbx*2-0x5464ad99]  /*manual*/
  2316: lea r9 ,ptr [rbx*4+0x2d3cbcbb]  /*manual*/
  2317: rol edi ,0x1  /*manual*/
  2318: dec ebp  /*manual*/
  2319: qword ptr [rsp+rdx*1-0x1c8f3714] = rbx
  2320: edi ^= 0x7a8059bb
  2321: lea edi ,ptr [rdi+rcx*4+0x59e7a03b]  /*manual*/
  2322: bpl += bpl
  2323: bswap eax  /*manual*/
  2324: xchg qword ptr [rsp+rdx*2-0x391e6e28] ,rbx  /*manual*/
  2325: neg edi  /*manual*/
  2326: sar ecx ,cl  /*manual*/
  2327: qword ptr [rsp+rdx*2-0x391e6e28] = r8
  2328: sbb ebp ,ebp  /*manual*/
  2329: xchg rbp ,rdx  /*manual*/
  2330: dword ptr [rsp+rdx*1] ^= edi
  2331: pop r8  /*manual*/
  2332: dec rcx  /*manual*/
  2333: movsxd rdi ,edi  /*manual*/
  2334: jno 0x5d8dcd6a0cf1  /*manual*/
  2335: ror bpl ,0x41  /*manual*/
  2336: adc r11 ,rdi  /*manual*/
  2337: dl ^= byte ptr [rsi+rdx*2-0x5]
  2338: not eax  /*manual*/
  2339: sar r9w ,0x69  /*manual*/
  2340: setnp bl  /*manual*/
  2341: dl ^= r8b
  2342: dl ^= 0x44
  2343: lea rdi ,ptr [rax+rbp*8-0x1dc958d0]  /*manual*/
  2344: or bpl ,dil  /*manual*/
  2345: sbb dl ,0xa7  /*manual*/
  2346: bt eax ,0x5d  /*manual*/
  2347: neg dl  /*manual*/
  2348: dl += al
  2349: push rdi  /*manual*/
  2350: r8b ^= dl
  2351: inc al  /*manual*/
  2352: dec rbp  /*manual*/
  2353: ror ecx ,0xda  /*manual*/
  2354: lea rdx ,ptr [rsp+rdx*1+0x8]  /*manual*/
  2355: dec qword ptr [rsp+rbx*1]  /*manual*/
  2356: sbb ebx ,0xa0a29878  /*manual*/
  2357: rcx = qword ptr [rdx+r9*2-0x5a79ffbc]
  2358: qword ptr [r10+r9*1-0x2d3cffe6] = rcx
  2359: movzx edx ,byte ptr [r9+rsi*1-0x2d3cffe4]  /*manual*/
  2360: ebx ^= 0x86037499
  2361: shl r9b ,0x25  /*manual*/
  2362: lea rsi ,ptr [r9+rsi*1-0x2d3cffc6]  /*manual*/
  2363: dl ^= r8b
  2364: ecx = 0xeab66886
  2365: dl -= 0x31
  2366: ror dl ,0x1  /*manual*/
  2367: inc bpl  /*manual*/
  2368: ebp -= 0x4230b57c
  2369: sbb dword ptr [rsp+r9*1-0x2d3cffbf] ,r9d  /*manual*/
  2370: not dl  /*manual*/
  2371: or rax ,rcx  /*manual*/
  2372: dec dl  /*manual*/
  2373: rol qword ptr [rsp+r9*1-0x2d3cffc0] ,0x78  /*manual*/
  2374: jnb 0x5d8dcd63828d  /*manual*/
  2375: r8b ^= dl
  2376: neg rbx  /*manual*/
  2377: pop r9  /*manual*/
  2378: push rax  /*manual*/
  2379: lea rdx ,ptr [rsp+rdx*1+0x8]  /*manual*/
  2380: pop r9  /*manual*/
  2381: and eax ,eax  /*manual*/
  2382: call 0x5d8dcd5dee42
  2383: rax = qword ptr [rdx]
  2384: qword ptr [rsp] = rbp
  2385: ror dword ptr [rsp+0x3] ,0xf  /*manual*/
  2386: sbb byte ptr [rsp+0x6] ,ch  /*manual*/
  2387: qword ptr [r10-0x10] = rax
  2388: xadd bl ,r9b  /*manual*/
  2389: xchg rbp ,r9  /*manual*/
  2390: sbb r10 ,0xf  /*manual*/
  2391: shl byte ptr [rsp+0x5] ,0xc6  /*manual*/
  2392: adc ecx ,0xb1bd6d75  /*manual*/
  2393: push rbp  /*manual*/
  2394: pop rcx  /*manual*/
  2395: pop rcx  /*manual*/
  2396: jl 0x5d8dcd55d7a6  /*manual*/
  2397: lea rbp ,ptr [rsp+0x1e8]  /*manual*/
  2398: push 0xffffffff89366a7a  /*manual*/
  2399: inc byte ptr [rsp+0x1]  /*manual*/
  2400: push 0xffffffffcd9b4535  /*manual*/
  2401: cmp r10 ,rbp  /*manual*/
  2402: lea rsp ,ptr [rsp+0x10]  /*manual*/
  2403: jnbe 0x5d8dcd54e3e5  /*manual*/
  2404: jmp r11  /*manual*/
  2405: edi = dword ptr [rsi-0x4]
  2406: edx = 0x1c8f3714
  2407: movsx r9d ,dx  /*manual*/
  2408: movzx eax ,dl  /*manual*/
  2409: edi ^= r8d
  2410: xchg r9b ,al  /*manual*/
  2411: movzx ebp ,ax  /*manual*/
  2412: edi -= 0x8ebb022d
  2413: call 0x5d8dcd596805
  2414: edi ^= 0xafb46cda
  2415: ebx = ebp
  2416: lea rcx ,ptr [rbp+rbx*2-0x5464ad99]  /*manual*/
  2417: lea r9 ,ptr [rbx*4+0x2d3cbcbb]  /*manual*/
  2418: rol edi ,0x1  /*manual*/
  2419: dec ebp  /*manual*/
  2420: qword ptr [rsp+rdx*1-0x1c8f3714] = rbx
  2421: edi ^= 0x7a8059bb
  2422: lea edi ,ptr [rdi+rcx*4+0x59e7a03b]  /*manual*/
  2423: bpl += bpl
  2424: bswap eax  /*manual*/
  2425: xchg qword ptr [rsp+rdx*2-0x391e6e28] ,rbx  /*manual*/
  2426: neg edi  /*manual*/
  2427: sar ecx ,cl  /*manual*/
  2428: qword ptr [rsp+rdx*2-0x391e6e28] = r8
  2429: sbb ebp ,ebp  /*manual*/
  2430: xchg rbp ,rdx  /*manual*/
  2431: dword ptr [rsp+rdx*1] ^= edi
  2432: pop r8  /*manual*/
  2433: dec rcx  /*manual*/
  2434: movsxd rdi ,edi  /*manual*/
  2435: jno 0x5d8dcd6a0cf1  /*manual*/
  2436: ror bpl ,0x41  /*manual*/
  2437: adc r11 ,rdi  /*manual*/
  2438: dl ^= byte ptr [rsi+rdx*2-0x5]
  2439: not eax  /*manual*/
  2440: sar r9w ,0x69  /*manual*/
  2441: setnp bl  /*manual*/
  2442: dl ^= r8b
  2443: dl ^= 0x44
  2444: lea rdi ,ptr [rax+rbp*8-0x1dc958d0]  /*manual*/
  2445: or bpl ,dil  /*manual*/
  2446: sbb dl ,0xa7  /*manual*/
  2447: bt eax ,0x5d  /*manual*/
  2448: neg dl  /*manual*/
  2449: dl += al
  2450: push rdi  /*manual*/
  2451: r8b ^= dl
  2452: inc al  /*manual*/
  2453: dec rbp  /*manual*/
  2454: ror ecx ,0xda  /*manual*/
  2455: lea rdx ,ptr [rsp+rdx*1+0x8]  /*manual*/
  2456: dec qword ptr [rsp+rbx*1]  /*manual*/
  2457: sbb ebx ,0xa0a29878  /*manual*/
  2458: rcx = qword ptr [rdx+r9*2-0x5a79ffbc]
  2459: qword ptr [r10+r9*1-0x2d3cffe6] = rcx
  2460: movzx edx ,byte ptr [r9+rsi*1-0x2d3cffe4]  /*manual*/
  2461: ebx ^= 0x86037499
  2462: shl r9b ,0x25  /*manual*/
  2463: lea rsi ,ptr [r9+rsi*1-0x2d3cffc6]  /*manual*/
  2464: dl ^= r8b
  2465: ecx = 0xeab66886
  2466: dl -= 0x31
  2467: ror dl ,0x1  /*manual*/
  2468: inc bpl  /*manual*/
  2469: ebp -= 0x4230b57c
  2470: sbb dword ptr [rsp+r9*1-0x2d3cffbf] ,r9d  /*manual*/
  2471: not dl  /*manual*/
  2472: or rax ,rcx  /*manual*/
  2473: dec dl  /*manual*/
  2474: rol qword ptr [rsp+r9*1-0x2d3cffc0] ,0x78  /*manual*/
  2475: jnb 0x5d8dcd63828d  /*manual*/
  2476: r8b ^= dl
  2477: neg rbx  /*manual*/
  2478: pop r9  /*manual*/
  2479: push rax  /*manual*/
  2480: lea rdx ,ptr [rsp+rdx*1+0x8]  /*manual*/
  2481: pop r9  /*manual*/
  2482: and eax ,eax  /*manual*/
  2483: call 0x5d8dcd5dee42
  2484: rax = qword ptr [rdx]
  2485: qword ptr [rsp] = rbp
  2486: ror dword ptr [rsp+0x3] ,0xf  /*manual*/
  2487: sbb byte ptr [rsp+0x6] ,ch  /*manual*/
  2488: qword ptr [r10-0x10] = rax
  2489: xadd bl ,r9b  /*manual*/
  2490: xchg rbp ,r9  /*manual*/
  2491: sbb r10 ,0xf  /*manual*/
  2492: shl byte ptr [rsp+0x5] ,0xc6  /*manual*/
  2493: adc ecx ,0xb1bd6d75  /*manual*/
  2494: push rbp  /*manual*/
  2495: pop rcx  /*manual*/
  2496: pop rcx  /*manual*/
  2497: jl 0x5d8dcd55d7a6  /*manual*/
  2498: lea rbp ,ptr [rsp+0x1e8]  /*manual*/
  2499: push 0xffffffff89366a7a  /*manual*/
  2500: inc byte ptr [rsp+0x1]  /*manual*/
  2501: push 0xffffffffcd9b4535  /*manual*/
  2502: cmp r10 ,rbp  /*manual*/
  2503: lea rsp ,ptr [rsp+0x10]  /*manual*/
  2504: jnbe 0x5d8dcd54e3e5  /*manual*/
  2505: jmp r11  /*manual*/
  2506: r14d = 0xc19af8ab
  2507: edi = r14d
  2508: movzx edx ,word ptr [rsi-0x2]  /*manual*/
  2509: movsx esi ,dil  /*manual*/
  2510: movzx r15d ,si  /*manual*/
  2511: and r14d ,0xc6b43d7e  /*manual*/
  2512: dx ^= r8w
  2513: movzx ebx ,sil  /*manual*/
  2514: call 0x5d8dcd6a3229
  2515: ror dx ,0x1  /*manual*/
  2516: push rbx  /*manual*/
  2517: rdi ^= 0x61369ac8
  2518: dec dx  /*manual*/
  2519: rbx -= r14
  2520: jl 0x5d8dcd510a70  /*manual*/
  2521: dx ^= 0x28d5
  2522: movzx r13d ,r15w  /*manual*/
  2523: not r14d  /*manual*/
  2524: pop r12  /*manual*/
  2525: dx -= 0x231e
  2526: pop r14  /*manual*/
  2527: r14 += 0xfffffffffff07aa2
  2528: jmp r14  /*manual*/
  2529: call 0x5d8dcd63e76f
  2530: neg dx  /*manual*/
  2531: dx -= 0x1cdd
  2532: shl r13d ,0x1a  /*manual*/
  2533: bt rsi ,0xb3  /*manual*/
  2534: rol dx ,0x1  /*manual*/
  2535: btc di ,bx  /*manual*/
  2536: r8w ^= dx
  2537: lea rdx ,ptr [rsp+rdx*1+0x8]  /*manual*/
  2538: push rdi  /*manual*/
  2539: movsx eax ,bl  /*manual*/
  2540: qword ptr [rsp+r15*1-0xffa3] = rsi
  2541: rbp = qword ptr [r15+rdx*1-0xffab]
  2542: qword ptr [r15+r10*1-0xffb3] = rbp
  2543: shr dil ,0x82  /*manual*/
  2544: pop r8  /*manual*/
  2545: lea rsp ,ptr [rsp+r15*1-0xffa3]  /*manual*/
  2546: lea rsp ,ptr [r10+r15*2-0x1ff5e]  /*manual*/
  2547: shl si ,0x29  /*manual*/
  2548: lea r10 ,ptr [r8+r13*4-0x334ca04d]  /*manual*/
  2549: lea r11 ,ptr [rax*2-0x78770d82]  /*manual*/
  2550: popfq   /*manual*/
  2551: pop r15  /*manual*/
  2552: pop r10  /*manual*/
  2553: push r8  /*manual*/
  2554: cdq   /*manual*/
  2555: pop rdx  /*manual*/
  2556: pop r14  /*manual*/
  2557: pop rdx  /*manual*/
  2558: pop r12  /*manual*/
  2559: data16 cbw  /*manual*/
  2560: pop rbx  /*manual*/
  2561: not r13w  /*manual*/
  2562: push r11  /*manual*/
  2563: rax = qword ptr [rsp+0x8]
  2564: call 0x5d8dcd5f9a9d
  2565: push r8  /*manual*/
  2566: rsi = qword ptr [rsp+0x20]
  2567: call 0x5d8dcd680cb1
  2568: rcx = qword ptr [rsp+0x30]
  2569: lea r8 ,ptr [r13*4-0x105503fb]  /*manual*/
  2570: call 0x5d8dcd505a7e
  2571: r13 = qword ptr [rsp+0x40]
  2572: rdi = qword ptr [rsp+0x48]
  2573: qword ptr [rsp+0x48] = r8
  2574: lea rbp ,ptr [r8+r11*8-0x670f960]  /*manual*/
  2575: pop r9  /*manual*/
  2576: lea r9 ,ptr [r9+0x33bce]  /*manual*/
  2577: jmp r9  /*manual*/
  2578: r9 = qword ptr [rsp+0x48]
  2579: push rbp  /*manual*/
  2580: push r8  /*manual*/
  2581: push rbp  /*manual*/
  2582: r11 = qword ptr [rsp+0x68]
  2583: rbp = qword ptr [rsp+0x70]
  2584: r8 = qword ptr [rsp+0x78]
  2585: qword ptr [rsp+0x50] = 0x5f181d84
  2586: jmp 0x5d8dcd5a9152  /*manual*/
  2587: lea rsp ,ptr [rsp+0x80]  /*manual*/
  2588: return
  2589: nop edx ,edi  /*manual*/
  2590: return
  2591: push 0x43ae44da  /*manual*/
  2592: pushfq   /*manual*/
  2593: neg dword ptr [rsp+0x8]  /*manual*/
  2594: cmp word ptr [rsp+0x8] ,0x801a  /*manual*/
  2595: push 0xfffffffffbad8a97  /*manual*/
  2596: jle 0x5d8dcd6ec8b1  /*manual*/
  2597: push rbp  /*manual*/
  2598: test dword ptr [rsp+0x8] ,0x548dfcd0  /*manual*/
  2599: qword ptr [rsp+0x18] = 0x6f20b666
  2600: push qword ptr [rsp+0x10]  /*manual*/
  2601: popfq   /*manual*/
  2602: lea rsp ,ptr [rsp+0x18]  /*manual*/
  2603: call 0x5d8dcd57f7e5
  2604: push 0xffffffffaa226c31  /*manual*/
  2605: call 0x5d8dcd5d35d8
  2606: push 0xffffffff85373808  /*manual*/
  2607: pushfq   /*manual*/
  2608: pop qword ptr [rsp+0x10]  /*manual*/
  2609: push 0xffffffffff333bb1  /*manual*/
  2610: qword ptr [rsp+0x20] = rax
  2611: neg dword ptr [rsp+0x6]  /*manual*/
  2612: eax = dword ptr [rsp+0x8]
  2613: qword ptr [rsp+0x10] = rdi
  2614: rdi = 0x5d8dcd4ea000
  2615: qword ptr [rsp+0x8] = rsi
  2616: neg rax  /*manual*/
  2617: qword ptr [rsp] = r8
  2618: rol eax ,0x4d  /*manual*/
  2619: dec eax  /*manual*/
  2620: push r12  /*manual*/
  2621: lea rsi ,ptr [rax*8+0xb09983e]  /*manual*/
  2622: sar si ,0xaa  /*manual*/
  2623: esi += esi
  2624: push rdi  /*manual*/
  2625: r8d = eax
  2626: adc esi ,eax  /*manual*/
  2627: push r15  /*manual*/
  2628: xadd r8 ,rsi  /*manual*/
  2629: cmovbe r8w ,si  /*manual*/
  2630: push r10  /*manual*/
  2631: jp 0x5d8dcd56f751  /*manual*/
  2632: push rbp  /*manual*/
  2633: push rbx  /*manual*/
  2634: jz 0x5d8dcd69a178  /*manual*/
  2635: push rdx  /*manual*/
  2636: shl r8d ,0xcd  /*manual*/
  2637: push rcx  /*manual*/
  2638: movsx ecx ,r8b  /*manual*/
  2639: push r11  /*manual*/
  2640: jnbe 0x5d8dcd5ed850  /*manual*/
  2641: movzx ebx ,sil  /*manual*/
  2642: movzx r11d ,cx  /*manual*/
  2643: push r9  /*manual*/
  2644: push r13  /*manual*/
  2645: btc rbx ,rcx  /*manual*/
  2646: r9d = 0xad32fd3d
  2647: jnb 0x5d8dcd68d4bc  /*manual*/
  2648: or r11d ,dword ptr [rsp+rax*2-0xe025e30]  /*manual*/
  2649: btc rsi ,rcx  /*manual*/
  2650: movsx edx ,sil  /*manual*/
  2651: bswap r9d  /*manual*/
  2652: lea r11d ,ptr [r11+rax*1-0x1f34c837]  /*manual*/
  2653: jnb 0x5d8dcd60b9a2  /*manual*/
  2654: neg r11d  /*manual*/
  2655: rol r11d ,0x2  /*manual*/
  2656: neg r11d  /*manual*/
  2657: bts ax ,r8w  /*manual*/
  2658: lea r11d ,ptr [r11+rax*1-0x22b2de35]  /*manual*/
  2659: rol r11d ,0x3  /*manual*/
  2660: movsx r10d ,sil  /*manual*/
  2661: rol r10d ,0xd0  /*manual*/
  2662: adc r11 ,rdi  /*manual*/
  2663: push r10  /*manual*/
  2664: qword ptr [rsp+rax*2-0xe025e2a] = r14
  2665: shl edx ,0x6e  /*manual*/
  2666: lea r9 ,ptr [rsp+rax*1-0x7012f51]  /*manual*/
  2667: lea rdi ,ptr [r10+rcx*4-0x22cd07b6]  /*manual*/
  2668: and qword ptr [rsp+rax*2-0xe025eb2] ,rdx  /*manual*/
  2669: lea rsi ,ptr [r9+rax*2-0xe02611a]  /*manual*/
  2670: shr rax ,0xf7  /*manual*/
  2671: al += dil
  2672: and sil ,0xf0  /*manual*/
  2673: and di ,word ptr [rsp+rax*1-0x44]  /*manual*/
  2674: rsp = rsi
  2675: push 0xffffffffee33ae7a  /*manual*/
  2676: eax = dword ptr [rsp+0x1]
  2677: r8 = r11
  2678: movsx ecx ,ax  /*manual*/
  2679: shr dword ptr [rsp+rcx*2-0x675b] ,cl  /*manual*/
  2680: rbp = 0x5d8dcd4ea000
  2681: ror word ptr [rsp+rcx*1-0x33ad] ,cl  /*manual*/
  2682: r8 -= rbp
  2683: lea rsp ,ptr [rsp+0x8]  /*manual*/
  2684: ebp = 0xdd9a437c
  2685: lea r10 ,ptr [rip-0xc]  /*manual*/
  2686: ecx = 0xfca34da8
  2687: eax = ecx
  2688: edi = dword ptr [r11]
  2689: rol al ,0x21  /*manual*/
  2690: xchg ebp ,ecx  /*manual*/
  2691: rcx += rax
  2692: adc r11 ,0x4  /*manual*/
  2693: lea rsi ,ptr [rbp+rbp*8+0x162ba3ea]  /*manual*/
  2694: edi ^= r8d
  2695: edi ^= 0x90a4ddf8
  2696: shl bpl ,0x2  /*manual*/
  2697: bts bp ,0x69  /*manual*/
  2698: lea edi ,ptr [rdi+rax*1-0x6991e155]  /*manual*/
  2699: neg sil  /*manual*/
  2700: ror edi ,0x3  /*manual*/
  2701: neg edi  /*manual*/
  2702: neg ecx  /*manual*/
  2703: edx = eax
  2704: push r8  /*manual*/
  2705: neg rax  /*manual*/
  2706: dword ptr [rsp+rcx*1-0x25c26f33] ^= edi
  2707: inc cl  /*manual*/
  2708: pop r8  /*manual*/
  2709: bts ecx ,0x89  /*manual*/
  2710: ebx = eax
  2711: movsxd rdi ,edi  /*manual*/
  2712: sar rbx ,0xd2  /*manual*/
  2713: ror rsi ,cl  /*manual*/
  2714: adc r10 ,rdi  /*manual*/
  2715: sar ecx ,cl  /*manual*/
  2716: jmp r10  /*manual*/
  2717: ebp = 0x333ecb99
  2718: inc ebp  /*manual*/
  2719: rbx = qword ptr [rbp+r9*1-0x333ecb9a]
  2720: movzx ecx ,bp  /*manual*/
  2721: edx = ecx
  2722: movzx edx ,byte ptr [rbp+r11*1-0x333ecb9a]  /*manual*/
  2723: dl ^= r8b
  2724: lea rdi ,ptr [rbp+rcx*1+0x3f0c4195]  /*manual*/
  2725: or edi ,0xd39ab738  /*manual*/
  2726: inc dl  /*manual*/
  2727: dl ^= 0x34
  2728: neg dl  /*manual*/
  2729: dl += 0x5d
  2730: movsx eax ,bpl  /*manual*/
  2731: ror dl ,0x1  /*manual*/
  2732: dl -= 0xd6
  2733: r8b ^= dl
  2734: shl cl ,0x25  /*manual*/
  2735: rdx += rsp
  2736: xadd ebp ,edi  /*manual*/
  2737: sbb al ,0xe4  /*manual*/
  2738: qword ptr [rdx+rcx*2-0x19680] = rbx
  2739: edx = 0xb833ed2e
  2740: esi = dword ptr [rbp+r11*1-0x271acb92]
  2741: esi ^= r8d
  2742: btr rcx ,rcx  /*manual*/
  2743: call 0x5d8dcd5e21a8
  2744: btr ecx ,edx  /*manual*/
  2745: esi ^= 0x3b46b3e
  2746: shr rdi ,0x98  /*manual*/
  2747: not rcx  /*manual*/
  2748: not esi  /*manual*/
  2749: lea esi ,ptr [rsi+rbp*2-0x2b2349d5]  /*manual*/
  2750: call 0x5d8dcd5dc33a
  2751: qword ptr [rsp+rbp*2-0x4e35971e] = rbp
  2752: inc rax  /*manual*/
  2753: neg esi  /*manual*/
  2754: shl bpl ,0x61  /*manual*/
  2755: bswap esi  /*manual*/
  2756: lea esi ,ptr [rcx+rsi*1+0x163b2d0e]  /*manual*/
  2757: cwde   /*manual*/
  2758: movzx ebx ,bpl  /*manual*/
  2759: qword ptr [rsp+rcx*8+0x45a10] = r8
  2760: bts rbx ,rcx  /*manual*/
  2761: shr dx ,0xaf  /*manual*/
  2762: dword ptr [rsp+rcx*2+0x1168a] ^= esi
  2763: cdq   /*manual*/
  2764: xadd ebx ,ecx  /*manual*/
  2765: qword ptr [rsp+rcx*8-0x130] = rbp
  2766: r8 = qword ptr [rsp+rbp*1-0x271acb1e]
  2767: lea rdi ,ptr [rdx*8-0x3759bb73]  /*manual*/
  2768: data16 cwd  /*manual*/
  2769: pop rdi  /*manual*/
  2770: movsxd rsi ,esi  /*manual*/
  2771: shl dx ,cl  /*manual*/
  2772: dec rbx  /*manual*/
  2773: xadd edx ,ebp  /*manual*/
  2774: r10 += rsi
  2775: qword ptr [rsp+rcx*1-0x26] = rdx
  2776: bp += di
  2777: neg dword ptr [rsp+rcx*4-0x94]  /*manual*/
  2778: rbx = qword ptr [r9+rdi*2-0x4e359644]
  2779: lea r9 ,ptr [r9+rcx*2-0x3c]  /*manual*/
  2780: jp 0x5d8dcd67224f  /*manual*/
  2781: ecx += dword ptr [rsp+rdx*2-0x4e3595cc]
  2782: jp 0x5d8dcd6d762e  /*manual*/
  2783: movzx eax ,byte ptr [r11+rcx*1-0x271acb07]  /*manual*/
  2784: jnb 0x5d8dcd579358  /*manual*/
  2785: adc rdi ,qword ptr [rsp+rcx*1-0x271acb0c]  /*manual*/
  2786: push rbp  /*manual*/
  2787: lea r11 ,ptr [r11+rcx*2-0x4e359612]  /*manual*/
  2788: bpl -= cl
  2789: esi = dword ptr [rsp+rdi*1-0x4e35960a]
  2790: push rsi  /*manual*/
  2791: al ^= r8b
  2792: bp += word ptr [rsp+rcx*1-0x271acaf7]
  2793: sbb al ,0x84  /*manual*/
  2794: btr di ,0x7d  /*manual*/
  2795: al ^= 0x6d
  2796: xchg rdi ,rsi  /*manual*/
  2797: rol dil ,0xe2  /*manual*/
  2798: neg bp  /*manual*/
  2799: adc al ,0xef  /*manual*/
  2800: and word ptr [rsp+rcx*2-0x4e359611] ,dx  /*manual*/
  2801: neg al  /*manual*/
  2802: qword ptr [rsp+rdi*2-0x1fff2] = 0xffffffff9121ed6b
  2803: neg word ptr [rsp+rdi*1-0xfff5]  /*manual*/
  2804: shl byte ptr [rsp+rcx*1-0x271acafe] ,0xe3  /*manual*/
  2805: al ^= 0x80
  2806: or si ,word ptr [rsp+rcx*1-0x271acaf6]  /*manual*/
  2807: ror di ,0x1  /*manual*/
  2808: al += dil
  2809: edi -= 0xb182fcd4
  2810: and bpl ,0xb1  /*manual*/
  2811: r8b ^= al
  2812: lea rsi ,ptr [rdi+rdx*2+0x383e3406]  /*manual*/
  2813: shr qword ptr [rsp+rcx*2-0x4e359608] ,0xe3  /*manual*/
  2814: lea rax ,ptr [rsp+rax*1+0x18]  /*manual*/
  2815: js 0x5d8dcd564b1f  /*manual*/
  2816: dec di  /*manual*/
  2817: not dx  /*manual*/
  2818: qword ptr [rax+rcx*2-0x4e359618] = rbx
  2819: sbb byte ptr [rsp+rdi*1-0x4e7e0321] ,dil  /*manual*/
  2820: qword ptr [rsp+rdi*1-0x4e7e032a] = r10
  2821: return
  2822: eax = 0x58a094ec
  2823: movsx ebx ,ax  /*manual*/
  2824: movsx edx ,bl  /*manual*/
  2825: rdi = qword ptr [r9+rax*1-0x58a094ec]
  2826: lea r9 ,ptr [r9+rax*1-0x58a094e4]  /*manual*/
  2827: btc rbx ,0x90  /*manual*/
  2828: lea rsi ,ptr [rdx+rdx*1-0xcd16d5f]  /*manual*/
  2829: movzx ebp ,byte ptr [rax+r11*1-0x58a094ec]  /*manual*/
  2830: call 0x5d8dcd5e5aee
  2831: ecx = esi
  2832: jb 0x5d8dcd57dca8  /*manual*/
  2833: lea r11 ,ptr [r11+rax*1-0x58a094eb]  /*manual*/
  2834: dl += sil
  2835: qword ptr [rsp+rax*1-0x58a094ec] = 0xffffffffd92c46a1
  2836: cdqe   /*manual*/
  2837: bpl ^= r8b
  2838: pop rax  /*manual*/
  2839: data16 cbw  /*manual*/
  2840: push rsi  /*manual*/
  2841: neg bpl  /*manual*/
  2842: rol rsi ,cl  /*manual*/
  2843: cqo   /*manual*/
  2844: neg byte ptr [rsp+rdx*1+0x7]  /*manual*/
  2845: bpl ^= 0x27
  2846: sar dword ptr [rsp+rax*2+0x4da600c2] ,0xc5  /*manual*/
  2847: ror bpl ,0x1  /*manual*/
  2848: bts rax ,0xb2  /*manual*/
  2849: sar esi ,cl  /*manual*/
  2850: sbb cl ,0x62  /*manual*/
  2851: adc bpl ,0xd7  /*manual*/
  2852: dword ptr [rsp+rax*1+0x26d30062] = ecx
  2853: or word ptr [rsp+rax*2+0x4da600c3] ,bx  /*manual*/
  2854: shl qword ptr [rsp+rax*1+0x26d3005f] ,0xd  /*manual*/
  2855: r8b ^= bpl
  2856: shl si ,0xac  /*manual*/
  2857: shr dword ptr [rsp+rax*1+0x26d30063] ,cl  /*manual*/
  2858: sbb rdx ,qword ptr [rsp+rax*2+0x4da600be]  /*manual*/
  2859: lea rbp ,ptr [rsp+rbp*1+0x8]  /*manual*/
  2860: shl si ,0xe7  /*manual*/
  2861: cl ^= 0xc9
  2862: qword ptr [rbp+rax*2+0x4da600be] = rdi
  2863: lea rax ,ptr [rsi+rcx*1+0x34bd1b38]  /*manual*/
  2864: eax = dword ptr [r11+rsi*8]
  2865: jnl 0x5d8dcd508c0d  /*manual*/
  2866: call 0x5d8dcd6e6227
  2867: pop rbp  /*manual*/
  2868: adc rbp ,0x136df1  /*manual*/
  2869: jmp rbp  /*manual*/
  2870: lea r11 ,ptr [r11+rsi*8+0x4]  /*manual*/
  2871: eax ^= r8d
  2872: eax ^= 0x3b46b3e
  2873: not eax  /*manual*/
  2874: lea eax ,ptr [rax+rsi*2+0x23124d51]  /*manual*/
  2875: xchg word ptr [rsp+rsi*1+0x1] ,bx  /*manual*/
  2876: call 0x5d8dcd5aeddc
  2877: neg eax  /*manual*/
  2878: bswap rbx  /*manual*/
  2879: shl dword ptr [rsp+rsi*1+0x8] ,0xb5  /*manual*/
  2880: bswap eax  /*manual*/
  2881: call 0x5d8dcd69884e
  2882: lea eax ,ptr [rax+rsi*1+0x163aa1cd]  /*manual*/
  2883: movzx ebp ,dl  /*manual*/
  2884: sar sil ,0x85  /*manual*/
  2885: sar byte ptr [rsp+rsi*1+0x14] ,0x81  /*manual*/
  2886: qword ptr [rsp+rsi*1+0x10] = r8
  2887: sbb edx ,ebx  /*manual*/
  2888: dword ptr [rsp+rdx*1-0x2db0dfee] ^= eax
  2889: sar dl ,0xa4  /*manual*/
  2890: push rdx  /*manual*/
  2891: word ptr [rsp+rdx*1-0x2db0dffb] += cx
  2892: r8 = qword ptr [rsp+rdx*1-0x2db0dfe7]
  2893: qword ptr [rsp+rsi*1+0x8] = rsi
  2894: shl bx ,0x22  /*manual*/
  2895: jbe 0x5d8dcd65bc25  /*manual*/
  2896: movsxd rax ,eax  /*manual*/
  2897: adc r10 ,rax  /*manual*/
  2898: dec edx  /*manual*/
  2899: sar ebp ,0x8f  /*manual*/
  2900: qword ptr [rsp+rdx*1-0x2db0dffe] = r10
  2901: return
  2902: ebx = 0x4c37e5c7
  2903: rcx = qword ptr [r9+rbx*1-0x4c37e5c7]
  2904: movsx eax ,bx  /*manual*/
  2905: movsx esi ,bl  /*manual*/
  2906: shl rbx ,0x53  /*manual*/
  2907: adc r9 ,0x8  /*manual*/
  2908: movzx eax ,word ptr [r11]  /*manual*/
  2909: shl ebx ,0x3a  /*manual*/
  2910: adc bx ,si  /*manual*/
  2911: shl sil ,0x22  /*manual*/
  2912: lea r11 ,ptr [rbx+r11*1-0xffc5]  /*manual*/
  2913: esi -= esi
  2914: push rsi  /*manual*/
  2915: movsx edx ,byte ptr [rsp+rbx*2-0x1ff8e]  /*manual*/
  2916: ax ^= r8w
  2917: ror ax ,0x1  /*manual*/
  2918: shl dx ,0xad  /*manual*/
  2919: sbb si ,0x77bc  /*manual*/
  2920: lea rdi ,ptr [rsi+rsi*4-0x55cf34fd]  /*manual*/
  2921: adc ax ,dx  /*manual*/
  2922: rol esi ,0x2c  /*manual*/
  2923: esi -= 0x7bb3a1e1
  2924: ror ax ,0x1  /*manual*/
  2925: edx += ebx
  2926: not ax  /*manual*/
  2927: shl edx ,0x6b  /*manual*/
  2928: jnb 0x5d8dcd6dc32b  /*manual*/
  2929: call 0x5d8dcd54f065
  2930: r8w ^= ax
  2931: qword ptr [rsp+rbx*1-0xffc7] = rdi
  2932: shl dl ,0xa4  /*manual*/
  2933: lea rax ,ptr [rsp+rax*1+0x10]  /*manual*/
  2934: sil += 0x25
  2935: rbx ^= 0xffffffffdc24794b
  2936: qword ptr [rdx+rax*1-0x7fe3800] = rcx
  2937: call 0x5d8dcd61c52e
  2938: xadd rsi ,rdi  /*manual*/
  2939: call 0x5d8dcd4f7f5c
  2940: ecx = dword ptr [r11+rsi*1-0x3704129b]
  2941: push rbx  /*manual*/
  2942: sbb dx ,0xdfae  /*manual*/
  2943: lea r11 ,ptr [r11+rbx*1+0x23db7978]  /*manual*/
  2944: ecx ^= r8d
  2945: dec ecx  /*manual*/
  2946: and ebx ,esi  /*manual*/
  2947: neg ecx  /*manual*/
  2948: ror ecx ,0x3  /*manual*/
  2949: and si ,0x1bb3  /*manual*/
  2950: adc word ptr [rsp+rbx*1-0x1404026f] ,di  /*manual*/
  2951: pop rbp  /*manual*/
  2952: ecx ^= 0x1c38bf0f
  2953: movsx eax ,bpl  /*manual*/
  2954: pop rax  /*manual*/
  2955: sar rsi ,0xdc  /*manual*/
  2956: adc qword ptr [rsp+rbx*1-0x14040278] ,r8  /*manual*/
  2957: sar dword ptr [rsp+rbx*1-0x1404027d] ,0xb3  /*manual*/
  2958: pop rdx  /*manual*/
  2959: rdx += 0xffffffffffff56d2
  2960: jmp rdx  /*manual*/
  2961: not ebp  /*manual*/
  2962: dword ptr [rsp+rbx*1-0x14040280] ^= ecx
  2963: ebp -= dword ptr [rsp+rbx*4-0x50100a20]
  2964: inc rbp  /*manual*/
  2965: call 0x5d8dcd60174d
  2966: r8 = qword ptr [rsp+rbx*4-0x50100a10]
  2967: edx = ebp
  2968: bl ^= bpl
  2969: movsxd rcx ,ecx  /*manual*/
  2970: byte ptr [rsp+rbx*4-0x50100a45] += 0xb
  2971: xadd dword ptr [rsp+rbx*1-0x1404028d] ,edi  /*manual*/
  2972: r10 += rcx
  2973: dec edi  /*manual*/
  2974: qword ptr [rsp+rbx*2-0x2808052a] = r10
  2975: return
  2976: ebp = 0x333ecb99
  2977: inc ebp  /*manual*/
  2978: rbx = qword ptr [rbp+r9*1-0x333ecb9a]
  2979: movzx ecx ,bp  /*manual*/
  2980: edx = ecx
  2981: movzx edx ,byte ptr [rbp+r11*1-0x333ecb9a]  /*manual*/
  2982: dl ^= r8b
  2983: lea rdi ,ptr [rbp+rcx*1+0x3f0c4195]  /*manual*/
  2984: or edi ,0xd39ab738  /*manual*/
  2985: inc dl  /*manual*/
  2986: dl ^= 0x34
  2987: neg dl  /*manual*/
  2988: dl += 0x5d
  2989: movsx eax ,bpl  /*manual*/
  2990: ror dl ,0x1  /*manual*/
  2991: dl -= 0xd6
  2992: r8b ^= dl
  2993: shl cl ,0x25  /*manual*/
  2994: rdx += rsp
  2995: xadd ebp ,edi  /*manual*/
  2996: sbb al ,0xe4  /*manual*/
  2997: qword ptr [rdx+rcx*2-0x19680] = rbx
  2998: edx = 0xb833ed2e
  2999: esi = dword ptr [rbp+r11*1-0x271acb92]
  3000: esi ^= r8d
  3001: btr rcx ,rcx  /*manual*/
  3002: call 0x5d8dcd5e21a8
  3003: btr ecx ,edx  /*manual*/
  3004: esi ^= 0x3b46b3e
  3005: shr rdi ,0x98  /*manual*/
  3006: not rcx  /*manual*/
  3007: not esi  /*manual*/
  3008: lea esi ,ptr [rsi+rbp*2-0x2b2349d5]  /*manual*/
  3009: call 0x5d8dcd5dc33a
  3010: qword ptr [rsp+rbp*2-0x4e35971e] = rbp
  3011: inc rax  /*manual*/
  3012: neg esi  /*manual*/
  3013: shl bpl ,0x61  /*manual*/
  3014: bswap esi  /*manual*/
  3015: lea esi ,ptr [rcx+rsi*1+0x163b2d0e]  /*manual*/
  3016: cwde   /*manual*/
  3017: movzx ebx ,bpl  /*manual*/
  3018: qword ptr [rsp+rcx*8+0x45a10] = r8
  3019: bts rbx ,rcx  /*manual*/
  3020: shr dx ,0xaf  /*manual*/
  3021: dword ptr [rsp+rcx*2+0x1168a] ^= esi
  3022: cdq   /*manual*/
  3023: xadd ebx ,ecx  /*manual*/
  3024: qword ptr [rsp+rcx*8-0x130] = rbp
  3025: r8 = qword ptr [rsp+rbp*1-0x271acb1e]
  3026: lea rdi ,ptr [rdx*8-0x3759bb73]  /*manual*/
  3027: data16 cwd  /*manual*/
  3028: pop rdi  /*manual*/
  3029: movsxd rsi ,esi  /*manual*/
  3030: shl dx ,cl  /*manual*/
  3031: dec rbx  /*manual*/
  3032: xadd edx ,ebp  /*manual*/
  3033: r10 += rsi
  3034: qword ptr [rsp+rcx*1-0x26] = rdx
  3035: bp += di
  3036: neg dword ptr [rsp+rcx*4-0x94]  /*manual*/
  3037: rbx = qword ptr [r9+rdi*2-0x4e359644]
  3038: lea r9 ,ptr [r9+rcx*2-0x3c]  /*manual*/
  3039: jp 0x5d8dcd67224f  /*manual*/
  3040: ecx += dword ptr [rsp+rdx*2-0x4e3595cc]
  3041: jp 0x5d8dcd6d762e  /*manual*/
  3042: movzx eax ,byte ptr [r11+rcx*1-0x271acb07]  /*manual*/
  3043: jnb 0x5d8dcd579358  /*manual*/
  3044: adc rdi ,qword ptr [rsp+rcx*1-0x271acb0c]  /*manual*/
  3045: push rbp  /*manual*/
  3046: lea r11 ,ptr [r11+rcx*2-0x4e359612]  /*manual*/
  3047: bpl -= cl
  3048: esi = dword ptr [rsp+rdi*1-0x4e35960a]
  3049: push rsi  /*manual*/
  3050: al ^= r8b
  3051: bp += word ptr [rsp+rcx*1-0x271acaf7]
  3052: sbb al ,0x84  /*manual*/
  3053: btr di ,0x7d  /*manual*/
  3054: al ^= 0x6d
  3055: xchg rdi ,rsi  /*manual*/
  3056: rol dil ,0xe2  /*manual*/
  3057: neg bp  /*manual*/
  3058: adc al ,0xef  /*manual*/
  3059: and word ptr [rsp+rcx*2-0x4e359611] ,dx  /*manual*/
  3060: neg al  /*manual*/
  3061: qword ptr [rsp+rdi*2-0x1fff2] = 0xffffffff9121ed6b
  3062: neg word ptr [rsp+rdi*1-0xfff5]  /*manual*/
  3063: shl byte ptr [rsp+rcx*1-0x271acafe] ,0xe3  /*manual*/
  3064: al ^= 0x80
  3065: or si ,word ptr [rsp+rcx*1-0x271acaf6]  /*manual*/
  3066: ror di ,0x1  /*manual*/
  3067: al += dil
  3068: edi -= 0xb182fcd4
  3069: and bpl ,0xb1  /*manual*/
  3070: r8b ^= al
  3071: lea rsi ,ptr [rdi+rdx*2+0x383e3406]  /*manual*/
  3072: shr qword ptr [rsp+rcx*2-0x4e359608] ,0xe3  /*manual*/
  3073: lea rax ,ptr [rsp+rax*1+0x18]  /*manual*/
  3074: js 0x5d8dcd564b1f  /*manual*/
  3075: dec di  /*manual*/
  3076: not dx  /*manual*/
  3077: qword ptr [rax+rcx*2-0x4e359618] = rbx
  3078: sbb byte ptr [rsp+rdi*1-0x4e7e0321] ,dil  /*manual*/
  3079: qword ptr [rsp+rdi*1-0x4e7e032a] = r10
  3080: return
  3081: ebp = 0xfb23fe03
  3082: edi = 0xaa1b4cf4
  3083: rdi = qword ptr [r9]
  3084: bp ^= bp
  3085: push rbp  /*manual*/
  3086: or word ptr [rsp+0x6] ,0x41b5  /*manual*/
  3087: lea rbx ,ptr [rsp+0x48]  /*manual*/
  3088: movsx esi ,byte ptr [rsp+0x1]  /*manual*/
  3089: bp ^= si
  3090: qword ptr [rbx+rsi*8] = rdi
  3091: rdi = qword ptr [r9+rsi*1+0x8]
  3092: movzx ecx ,word ptr [rsp+rsi*8+0x3]  /*manual*/
  3093: inc word ptr [rsp+rsi*2+0x1]  /*manual*/
  3094: lea rdx ,ptr [rbp+rsi*1+0x7c1cafb6]  /*manual*/
  3095: movzx eax ,word ptr [r11+rsi*1]  /*manual*/
  3096: ax ^= r8w
  3097: xchg word ptr [rsp+rsi*2+0x1] ,dx  /*manual*/
  3098: ebx = dword ptr [rsp+rsi*4+0x3]
  3099: ax ^= 0x3d2
  3100: word ptr [rsp+rsi*1+0x6] -= 0x59f6
  3101: ror ax ,0x1  /*manual*/
  3102: inc ecx  /*manual*/
  3103: shr ebp ,cl  /*manual*/
  3104: jbe 0x5d8dcd6b6e44  /*manual*/
  3105: not ax  /*manual*/
  3106: byte ptr [rsp+rbp*2-0x1b] += bh
  3107: sets cl  /*manual*/
  3108: bp -= 0xe8e8
  3109: ax ^= 0xc00f
  3110: shl word ptr [rsp+rbp*1-0x1725] ,0xa4  /*manual*/
  3111: lea rbp ,ptr [rbp+rcx*4-0x86a1cf7]  /*manual*/
  3112: btc dx ,0x38  /*manual*/
  3113: adc ax ,si  /*manual*/
  3114: xadd qword ptr [rsp+rbp*1+0x86a05cc] ,rbx  /*manual*/
  3115: shl ebx ,0x93  /*manual*/
  3116: r8w ^= ax
  3117: ror rcx ,0x55  /*manual*/
  3118: lea rax ,ptr [rsp+rax*1+0x8]  /*manual*/
  3119: ror bp ,0x2e  /*manual*/
  3120: jb 0x5d8dcd54247b  /*manual*/
  3121: qword ptr [rbp+rax*1+0x86a172d] = rdi
  3122: adc qword ptr [rsp+rbp*4+0x21a85cb4] ,rsi  /*manual*/
  3123: adc ebp ,ebx  /*manual*/
  3124: edx = dword ptr [rsi+r11*1+0x2]
  3125: inc sil  /*manual*/
  3126: edx ^= r8d
  3127: jmp 0x5d8dcd599b43  /*manual*/
  3128: call 0x5d8dcd560642
  3129: edx ^= 0x3b46b3e
  3130: rol byte ptr [rsp+rsi*1+0x9] ,0x41  /*manual*/
  3131: not edx  /*manual*/
  3132: qword ptr [rsp+rsi*1-0x1] = rsi
  3133: btc ebx ,0xc0  /*manual*/
  3134: lea edx ,ptr [rdx+rsi*2+0x23124d4f]  /*manual*/
  3135: shl rbx ,0x13  /*manual*/
  3136: bt rcx ,0xd2  /*manual*/
  3137: inc word ptr [rsp+rsi*8-0x7]  /*manual*/
  3138: neg edx  /*manual*/
  3139: bswap edx  /*manual*/
  3140: lea rdi ,ptr [rbp+rcx*4-0x5568066c]  /*manual*/
  3141: shl ebp ,0x38  /*manual*/
  3142: lea edx ,ptr [rsi+rdx*1+0x163aa1cc]  /*manual*/
  3143: setnb bpl  /*manual*/
  3144: qword ptr [rsp+rsi*1+0x7] = r8
  3145: bx += 0x3b4d
  3146: jnz 0x5d8dcd612215  /*manual*/
  3147: dec cx  /*manual*/
  3148: dword ptr [rsp+rsi*1+0x7] ^= edx
  3149: r8 = qword ptr [rsp+rsi*1+0x7]
  3150: movsxd rdx ,edx  /*manual*/
  3151: qword ptr [rsp+rsi*2+0x6] = 0xffffffffdc1fc54b
  3152: r10 += rdx
  3153: rax = qword ptr [r9+rsi*8+0x8]
  3154: lea r9 ,ptr [r9+rsi*1+0x17]  /*manual*/
  3155: lea rdx ,ptr [rdi+rsi*8+0x7203deaa]  /*manual*/
  3156: movzx ebx ,byte ptr [r11+rsi*2+0x4]  /*manual*/
  3157: rol dword ptr [rsp+rsi*1+0x3] ,cl  /*manual*/
  3158: lea r11 ,ptr [r11+rsi*4+0x3]  /*manual*/
  3159: inc si  /*manual*/
  3160: bl ^= r8b
  3161: neg bl  /*manual*/
  3162: bl += 0xaa
  3163: shr qword ptr [rsp+rsi*1+0x6] ,0x7c  /*manual*/
  3164: bl ^= 0x66
  3165: bl -= bpl
  3166: btc rdx ,rbp  /*manual*/
  3167: r8b ^= bl
  3168: lea rbx ,ptr [rsp+rbx*1+0x10]  /*manual*/
  3169: qword ptr [rsi+rbx*1-0x2] = rax
  3170: ecx ^= ecx
  3171: eax = 0x5a11d11b
  3172: jns 0x5d8dcd5ddcc9  /*manual*/
  3173: qword ptr [rsp+rsi*8-0x10] = r10
  3174: return
  3175: ebp = 0x333ecb99
  3176: inc ebp  /*manual*/
  3177: rbx = qword ptr [rbp+r9*1-0x333ecb9a]
  3178: movzx ecx ,bp  /*manual*/
  3179: edx = ecx
  3180: movzx edx ,byte ptr [rbp+r11*1-0x333ecb9a]  /*manual*/
  3181: dl ^= r8b
  3182: lea rdi ,ptr [rbp+rcx*1+0x3f0c4195]  /*manual*/
  3183: or edi ,0xd39ab738  /*manual*/
  3184: inc dl  /*manual*/
  3185: dl ^= 0x34
  3186: neg dl  /*manual*/
  3187: dl += 0x5d
  3188: movsx eax ,bpl  /*manual*/
  3189: ror dl ,0x1  /*manual*/
  3190: dl -= 0xd6
  3191: r8b ^= dl
  3192: shl cl ,0x25  /*manual*/
  3193: rdx += rsp
  3194: xadd ebp ,edi  /*manual*/
  3195: sbb al ,0xe4  /*manual*/
  3196: qword ptr [rdx+rcx*2-0x19680] = rbx
  3197: edx = 0xb833ed2e
  3198: esi = dword ptr [rbp+r11*1-0x271acb92]
  3199: esi ^= r8d
  3200: btr rcx ,rcx  /*manual*/
  3201: call 0x5d8dcd5e21a8
  3202: btr ecx ,edx  /*manual*/
  3203: esi ^= 0x3b46b3e
  3204: shr rdi ,0x98  /*manual*/
  3205: not rcx  /*manual*/
  3206: not esi  /*manual*/
  3207: lea esi ,ptr [rsi+rbp*2-0x2b2349d5]  /*manual*/
  3208: call 0x5d8dcd5dc33a
  3209: qword ptr [rsp+rbp*2-0x4e35971e] = rbp
  3210: inc rax  /*manual*/
  3211: neg esi  /*manual*/
  3212: shl bpl ,0x61  /*manual*/
  3213: bswap esi  /*manual*/
  3214: lea esi ,ptr [rcx+rsi*1+0x163b2d0e]  /*manual*/
  3215: cwde   /*manual*/
  3216: movzx ebx ,bpl  /*manual*/
  3217: qword ptr [rsp+rcx*8+0x45a10] = r8
  3218: bts rbx ,rcx  /*manual*/
  3219: shr dx ,0xaf  /*manual*/
  3220: dword ptr [rsp+rcx*2+0x1168a] ^= esi
  3221: cdq   /*manual*/
  3222: xadd ebx ,ecx  /*manual*/
  3223: qword ptr [rsp+rcx*8-0x130] = rbp
  3224: r8 = qword ptr [rsp+rbp*1-0x271acb1e]
  3225: lea rdi ,ptr [rdx*8-0x3759bb73]  /*manual*/
  3226: data16 cwd  /*manual*/
  3227: pop rdi  /*manual*/
  3228: movsxd rsi ,esi  /*manual*/
  3229: shl dx ,cl  /*manual*/
  3230: dec rbx  /*manual*/
  3231: xadd edx ,ebp  /*manual*/
  3232: r10 += rsi
  3233: qword ptr [rsp+rcx*1-0x26] = rdx
  3234: bp += di
  3235: neg dword ptr [rsp+rcx*4-0x94]  /*manual*/
  3236: rbx = qword ptr [r9+rdi*2-0x4e359644]
  3237: lea r9 ,ptr [r9+rcx*2-0x3c]  /*manual*/
  3238: jp 0x5d8dcd67224f  /*manual*/
  3239: ecx += dword ptr [rsp+rdx*2-0x4e3595cc]
  3240: jp 0x5d8dcd6d762e  /*manual*/
  3241: movzx eax ,byte ptr [r11+rcx*1-0x271acb07]  /*manual*/
  3242: jnb 0x5d8dcd579358  /*manual*/
  3243: adc rdi ,qword ptr [rsp+rcx*1-0x271acb0c]  /*manual*/
  3244: push rbp  /*manual*/
  3245: lea r11 ,ptr [r11+rcx*2-0x4e359612]  /*manual*/
  3246: bpl -= cl
  3247: esi = dword ptr [rsp+rdi*1-0x4e35960a]
  3248: push rsi  /*manual*/
  3249: al ^= r8b
  3250: bp += word ptr [rsp+rcx*1-0x271acaf7]
  3251: sbb al ,0x84  /*manual*/
  3252: btr di ,0x7d  /*manual*/
  3253: al ^= 0x6d
  3254: xchg rdi ,rsi  /*manual*/
  3255: rol dil ,0xe2  /*manual*/
  3256: neg bp  /*manual*/
  3257: adc al ,0xef  /*manual*/
  3258: and word ptr [rsp+rcx*2-0x4e359611] ,dx  /*manual*/
  3259: neg al  /*manual*/
  3260: qword ptr [rsp+rdi*2-0x1fff2] = 0xffffffff9121ed6b
  3261: neg word ptr [rsp+rdi*1-0xfff5]  /*manual*/
  3262: shl byte ptr [rsp+rcx*1-0x271acafe] ,0xe3  /*manual*/
  3263: al ^= 0x80
  3264: or si ,word ptr [rsp+rcx*1-0x271acaf6]  /*manual*/
  3265: ror di ,0x1  /*manual*/
  3266: al += dil
  3267: edi -= 0xb182fcd4
  3268: and bpl ,0xb1  /*manual*/
  3269: r8b ^= al
  3270: lea rsi ,ptr [rdi+rdx*2+0x383e3406]  /*manual*/
  3271: shr qword ptr [rsp+rcx*2-0x4e359608] ,0xe3  /*manual*/
  3272: lea rax ,ptr [rsp+rax*1+0x18]  /*manual*/
  3273: js 0x5d8dcd564b1f  /*manual*/
  3274: dec di  /*manual*/
  3275: not dx  /*manual*/
  3276: qword ptr [rax+rcx*2-0x4e359618] = rbx
  3277: sbb byte ptr [rsp+rdi*1-0x4e7e0321] ,dil  /*manual*/
  3278: qword ptr [rsp+rdi*1-0x4e7e032a] = r10
  3279: return
  3280: ebp = 0x333ecb99
  3281: inc ebp  /*manual*/
  3282: rbx = qword ptr [rbp+r9*1-0x333ecb9a]
  3283: movzx ecx ,bp  /*manual*/
  3284: edx = ecx
  3285: movzx edx ,byte ptr [rbp+r11*1-0x333ecb9a]  /*manual*/
  3286: dl ^= r8b
  3287: lea rdi ,ptr [rbp+rcx*1+0x3f0c4195]  /*manual*/
  3288: or edi ,0xd39ab738  /*manual*/
  3289: inc dl  /*manual*/
  3290: dl ^= 0x34
  3291: neg dl  /*manual*/
  3292: dl += 0x5d
  3293: movsx eax ,bpl  /*manual*/
  3294: ror dl ,0x1  /*manual*/
  3295: dl -= 0xd6
  3296: r8b ^= dl
  3297: shl cl ,0x25  /*manual*/
  3298: rdx += rsp
  3299: xadd ebp ,edi  /*manual*/
  3300: sbb al ,0xe4  /*manual*/
  3301: qword ptr [rdx+rcx*2-0x19680] = rbx
  3302: edx = 0xb833ed2e
  3303: esi = dword ptr [rbp+r11*1-0x271acb92]
  3304: esi ^= r8d
  3305: btr rcx ,rcx  /*manual*/
  3306: call 0x5d8dcd5e21a8
  3307: btr ecx ,edx  /*manual*/
  3308: esi ^= 0x3b46b3e
  3309: shr rdi ,0x98  /*manual*/
  3310: not rcx  /*manual*/
  3311: not esi  /*manual*/
  3312: lea esi ,ptr [rsi+rbp*2-0x2b2349d5]  /*manual*/
  3313: call 0x5d8dcd5dc33a
  3314: qword ptr [rsp+rbp*2-0x4e35971e] = rbp
  3315: inc rax  /*manual*/
  3316: neg esi  /*manual*/
  3317: shl bpl ,0x61  /*manual*/
  3318: bswap esi  /*manual*/
  3319: lea esi ,ptr [rcx+rsi*1+0x163b2d0e]  /*manual*/
  3320: cwde   /*manual*/
  3321: movzx ebx ,bpl  /*manual*/
  3322: qword ptr [rsp+rcx*8+0x45a10] = r8
  3323: bts rbx ,rcx  /*manual*/
  3324: shr dx ,0xaf  /*manual*/
  3325: dword ptr [rsp+rcx*2+0x1168a] ^= esi
  3326: cdq   /*manual*/
  3327: xadd ebx ,ecx  /*manual*/
  3328: qword ptr [rsp+rcx*8-0x130] = rbp
  3329: r8 = qword ptr [rsp+rbp*1-0x271acb1e]
  3330: lea rdi ,ptr [rdx*8-0x3759bb73]  /*manual*/
  3331: data16 cwd  /*manual*/
  3332: pop rdi  /*manual*/
  3333: movsxd rsi ,esi  /*manual*/
  3334: shl dx ,cl  /*manual*/
  3335: dec rbx  /*manual*/
  3336: xadd edx ,ebp  /*manual*/
  3337: r10 += rsi
  3338: qword ptr [rsp+rcx*1-0x26] = rdx
  3339: bp += di
  3340: neg dword ptr [rsp+rcx*4-0x94]  /*manual*/
  3341: rbx = qword ptr [r9+rdi*2-0x4e359644]
  3342: lea r9 ,ptr [r9+rcx*2-0x3c]  /*manual*/
  3343: jp 0x5d8dcd67224f  /*manual*/
  3344: ecx += dword ptr [rsp+rdx*2-0x4e3595cc]
  3345: jp 0x5d8dcd6d762e  /*manual*/
  3346: movzx eax ,byte ptr [r11+rcx*1-0x271acb07]  /*manual*/
  3347: jnb 0x5d8dcd579358  /*manual*/
  3348: adc rdi ,qword ptr [rsp+rcx*1-0x271acb0c]  /*manual*/
  3349: push rbp  /*manual*/
  3350: lea r11 ,ptr [r11+rcx*2-0x4e359612]  /*manual*/
  3351: bpl -= cl
  3352: esi = dword ptr [rsp+rdi*1-0x4e35960a]
  3353: push rsi  /*manual*/
  3354: al ^= r8b
  3355: bp += word ptr [rsp+rcx*1-0x271acaf7]
  3356: sbb al ,0x84  /*manual*/
  3357: btr di ,0x7d  /*manual*/
  3358: al ^= 0x6d
  3359: xchg rdi ,rsi  /*manual*/
  3360: rol dil ,0xe2  /*manual*/
  3361: neg bp  /*manual*/
  3362: adc al ,0xef  /*manual*/
  3363: and word ptr [rsp+rcx*2-0x4e359611] ,dx  /*manual*/
  3364: neg al  /*manual*/
  3365: qword ptr [rsp+rdi*2-0x1fff2] = 0xffffffff9121ed6b
  3366: neg word ptr [rsp+rdi*1-0xfff5]  /*manual*/
  3367: shl byte ptr [rsp+rcx*1-0x271acafe] ,0xe3  /*manual*/
  3368: al ^= 0x80
  3369: or si ,word ptr [rsp+rcx*1-0x271acaf6]  /*manual*/
  3370: ror di ,0x1  /*manual*/
  3371: al += dil
  3372: edi -= 0xb182fcd4
  3373: and bpl ,0xb1  /*manual*/
  3374: r8b ^= al
  3375: lea rsi ,ptr [rdi+rdx*2+0x383e3406]  /*manual*/
  3376: shr qword ptr [rsp+rcx*2-0x4e359608] ,0xe3  /*manual*/
  3377: lea rax ,ptr [rsp+rax*1+0x18]  /*manual*/
  3378: js 0x5d8dcd564b1f  /*manual*/
  3379: dec di  /*manual*/
  3380: not dx  /*manual*/
  3381: qword ptr [rax+rcx*2-0x4e359618] = rbx
  3382: sbb byte ptr [rsp+rdi*1-0x4e7e0321] ,dil  /*manual*/
  3383: qword ptr [rsp+rdi*1-0x4e7e032a] = r10
  3384: return
  3385: ebp = 0x333ecb99
  3386: inc ebp  /*manual*/
  3387: rbx = qword ptr [rbp+r9*1-0x333ecb9a]
  3388: movzx ecx ,bp  /*manual*/
  3389: edx = ecx
  3390: movzx edx ,byte ptr [rbp+r11*1-0x333ecb9a]  /*manual*/
  3391: dl ^= r8b
  3392: lea rdi ,ptr [rbp+rcx*1+0x3f0c4195]  /*manual*/
  3393: or edi ,0xd39ab738  /*manual*/
  3394: inc dl  /*manual*/
  3395: dl ^= 0x34
  3396: neg dl  /*manual*/
  3397: dl += 0x5d
  3398: movsx eax ,bpl  /*manual*/
  3399: ror dl ,0x1  /*manual*/
  3400: dl -= 0xd6
  3401: r8b ^= dl
  3402: shl cl ,0x25  /*manual*/
  3403: rdx += rsp
  3404: xadd ebp ,edi  /*manual*/
  3405: sbb al ,0xe4  /*manual*/
  3406: qword ptr [rdx+rcx*2-0x19680] = rbx
  3407: edx = 0xb833ed2e
  3408: esi = dword ptr [rbp+r11*1-0x271acb92]
  3409: esi ^= r8d
  3410: btr rcx ,rcx  /*manual*/
  3411: call 0x5d8dcd5e21a8
  3412: btr ecx ,edx  /*manual*/
  3413: esi ^= 0x3b46b3e
  3414: shr rdi ,0x98  /*manual*/
  3415: not rcx  /*manual*/
  3416: not esi  /*manual*/
  3417: lea esi ,ptr [rsi+rbp*2-0x2b2349d5]  /*manual*/
  3418: call 0x5d8dcd5dc33a
  3419: qword ptr [rsp+rbp*2-0x4e35971e] = rbp
  3420: inc rax  /*manual*/
  3421: neg esi  /*manual*/
  3422: shl bpl ,0x61  /*manual*/
  3423: bswap esi  /*manual*/
  3424: lea esi ,ptr [rcx+rsi*1+0x163b2d0e]  /*manual*/
  3425: cwde   /*manual*/
  3426: movzx ebx ,bpl  /*manual*/
  3427: qword ptr [rsp+rcx*8+0x45a10] = r8
  3428: bts rbx ,rcx  /*manual*/
  3429: shr dx ,0xaf  /*manual*/
  3430: dword ptr [rsp+rcx*2+0x1168a] ^= esi
  3431: cdq   /*manual*/
  3432: xadd ebx ,ecx  /*manual*/
  3433: qword ptr [rsp+rcx*8-0x130] = rbp
  3434: r8 = qword ptr [rsp+rbp*1-0x271acb1e]
  3435: lea rdi ,ptr [rdx*8-0x3759bb73]  /*manual*/
  3436: data16 cwd  /*manual*/
  3437: pop rdi  /*manual*/
  3438: movsxd rsi ,esi  /*manual*/
  3439: shl dx ,cl  /*manual*/
  3440: dec rbx  /*manual*/
  3441: xadd edx ,ebp  /*manual*/
  3442: r10 += rsi
  3443: qword ptr [rsp+rcx*1-0x26] = rdx
  3444: bp += di
  3445: neg dword ptr [rsp+rcx*4-0x94]  /*manual*/
  3446: rbx = qword ptr [r9+rdi*2-0x4e359644]
  3447: lea r9 ,ptr [r9+rcx*2-0x3c]  /*manual*/
  3448: jp 0x5d8dcd67224f  /*manual*/
  3449: ecx += dword ptr [rsp+rdx*2-0x4e3595cc]
  3450: jp 0x5d8dcd6d762e  /*manual*/
  3451: movzx eax ,byte ptr [r11+rcx*1-0x271acb07]  /*manual*/
  3452: jnb 0x5d8dcd579358  /*manual*/
  3453: adc rdi ,qword ptr [rsp+rcx*1-0x271acb0c]  /*manual*/
  3454: push rbp  /*manual*/
  3455: lea r11 ,ptr [r11+rcx*2-0x4e359612]  /*manual*/
  3456: bpl -= cl
  3457: esi = dword ptr [rsp+rdi*1-0x4e35960a]
  3458: push rsi  /*manual*/
  3459: al ^= r8b
  3460: bp += word ptr [rsp+rcx*1-0x271acaf7]
  3461: sbb al ,0x84  /*manual*/
  3462: btr di ,0x7d  /*manual*/
  3463: al ^= 0x6d
  3464: xchg rdi ,rsi  /*manual*/
  3465: rol dil ,0xe2  /*manual*/
  3466: neg bp  /*manual*/
  3467: adc al ,0xef  /*manual*/
  3468: and word ptr [rsp+rcx*2-0x4e359611] ,dx  /*manual*/
  3469: neg al  /*manual*/
  3470: qword ptr [rsp+rdi*2-0x1fff2] = 0xffffffff9121ed6b
  3471: neg word ptr [rsp+rdi*1-0xfff5]  /*manual*/
  3472: shl byte ptr [rsp+rcx*1-0x271acafe] ,0xe3  /*manual*/
  3473: al ^= 0x80
  3474: or si ,word ptr [rsp+rcx*1-0x271acaf6]  /*manual*/
  3475: ror di ,0x1  /*manual*/
  3476: al += dil
  3477: edi -= 0xb182fcd4
  3478: and bpl ,0xb1  /*manual*/
  3479: r8b ^= al
  3480: lea rsi ,ptr [rdi+rdx*2+0x383e3406]  /*manual*/
  3481: shr qword ptr [rsp+rcx*2-0x4e359608] ,0xe3  /*manual*/
  3482: lea rax ,ptr [rsp+rax*1+0x18]  /*manual*/
  3483: js 0x5d8dcd564b1f  /*manual*/
  3484: dec di  /*manual*/
  3485: not dx  /*manual*/
  3486: qword ptr [rax+rcx*2-0x4e359618] = rbx
  3487: sbb byte ptr [rsp+rdi*1-0x4e7e0321] ,dil  /*manual*/
  3488: qword ptr [rsp+rdi*1-0x4e7e032a] = r10
  3489: return
  3490: ebp = 0x333ecb99
  3491: inc ebp  /*manual*/
  3492: rbx = qword ptr [rbp+r9*1-0x333ecb9a]
  3493: movzx ecx ,bp  /*manual*/
  3494: edx = ecx
  3495: movzx edx ,byte ptr [rbp+r11*1-0x333ecb9a]  /*manual*/
  3496: dl ^= r8b
  3497: lea rdi ,ptr [rbp+rcx*1+0x3f0c4195]  /*manual*/
  3498: or edi ,0xd39ab738  /*manual*/
  3499: inc dl  /*manual*/
  3500: dl ^= 0x34
  3501: neg dl  /*manual*/
  3502: dl += 0x5d
  3503: movsx eax ,bpl  /*manual*/
  3504: ror dl ,0x1  /*manual*/
  3505: dl -= 0xd6
  3506: r8b ^= dl
  3507: shl cl ,0x25  /*manual*/
  3508: rdx += rsp
  3509: xadd ebp ,edi  /*manual*/
  3510: sbb al ,0xe4  /*manual*/
  3511: qword ptr [rdx+rcx*2-0x19680] = rbx
  3512: edx = 0xb833ed2e
  3513: esi = dword ptr [rbp+r11*1-0x271acb92]
  3514: esi ^= r8d
  3515: btr rcx ,rcx  /*manual*/
  3516: call 0x5d8dcd5e21a8
  3517: btr ecx ,edx  /*manual*/
  3518: esi ^= 0x3b46b3e
  3519: shr rdi ,0x98  /*manual*/
  3520: not rcx  /*manual*/
  3521: not esi  /*manual*/
  3522: lea esi ,ptr [rsi+rbp*2-0x2b2349d5]  /*manual*/
  3523: call 0x5d8dcd5dc33a
  3524: qword ptr [rsp+rbp*2-0x4e35971e] = rbp
  3525: inc rax  /*manual*/
  3526: neg esi  /*manual*/
  3527: shl bpl ,0x61  /*manual*/
  3528: bswap esi  /*manual*/
  3529: lea esi ,ptr [rcx+rsi*1+0x163b2d0e]  /*manual*/
  3530: cwde   /*manual*/
  3531: movzx ebx ,bpl  /*manual*/
  3532: qword ptr [rsp+rcx*8+0x45a10] = r8
  3533: bts rbx ,rcx  /*manual*/
  3534: shr dx ,0xaf  /*manual*/
  3535: dword ptr [rsp+rcx*2+0x1168a] ^= esi
  3536: cdq   /*manual*/
  3537: xadd ebx ,ecx  /*manual*/
  3538: qword ptr [rsp+rcx*8-0x130] = rbp
  3539: r8 = qword ptr [rsp+rbp*1-0x271acb1e]
  3540: lea rdi ,ptr [rdx*8-0x3759bb73]  /*manual*/
  3541: data16 cwd  /*manual*/
  3542: pop rdi  /*manual*/
  3543: movsxd rsi ,esi  /*manual*/
  3544: shl dx ,cl  /*manual*/
  3545: dec rbx  /*manual*/
  3546: xadd edx ,ebp  /*manual*/
  3547: r10 += rsi
  3548: qword ptr [rsp+rcx*1-0x26] = rdx
  3549: bp += di
  3550: neg dword ptr [rsp+rcx*4-0x94]  /*manual*/
  3551: rbx = qword ptr [r9+rdi*2-0x4e359644]
  3552: lea r9 ,ptr [r9+rcx*2-0x3c]  /*manual*/
  3553: jp 0x5d8dcd67224f  /*manual*/
  3554: ecx += dword ptr [rsp+rdx*2-0x4e3595cc]
  3555: jp 0x5d8dcd6d762e  /*manual*/
  3556: movzx eax ,byte ptr [r11+rcx*1-0x271acb07]  /*manual*/
  3557: jnb 0x5d8dcd579358  /*manual*/
  3558: adc rdi ,qword ptr [rsp+rcx*1-0x271acb0c]  /*manual*/
  3559: push rbp  /*manual*/
  3560: lea r11 ,ptr [r11+rcx*2-0x4e359612]  /*manual*/
  3561: bpl -= cl
  3562: esi = dword ptr [rsp+rdi*1-0x4e35960a]
  3563: push rsi  /*manual*/
  3564: al ^= r8b
  3565: bp += word ptr [rsp+rcx*1-0x271acaf7]
  3566: sbb al ,0x84  /*manual*/
  3567: btr di ,0x7d  /*manual*/
  3568: al ^= 0x6d
  3569: xchg rdi ,rsi  /*manual*/
  3570: rol dil ,0xe2  /*manual*/
  3571: neg bp  /*manual*/
  3572: adc al ,0xef  /*manual*/
  3573: and word ptr [rsp+rcx*2-0x4e359611] ,dx  /*manual*/
  3574: neg al  /*manual*/
  3575: qword ptr [rsp+rdi*2-0x1fff2] = 0xffffffff9121ed6b
  3576: neg word ptr [rsp+rdi*1-0xfff5]  /*manual*/
  3577: shl byte ptr [rsp+rcx*1-0x271acafe] ,0xe3  /*manual*/
  3578: al ^= 0x80
  3579: or si ,word ptr [rsp+rcx*1-0x271acaf6]  /*manual*/
  3580: ror di ,0x1  /*manual*/
  3581: al += dil
  3582: edi -= 0xb182fcd4
  3583: and bpl ,0xb1  /*manual*/
  3584: r8b ^= al
  3585: lea rsi ,ptr [rdi+rdx*2+0x383e3406]  /*manual*/
  3586: shr qword ptr [rsp+rcx*2-0x4e359608] ,0xe3  /*manual*/
  3587: lea rax ,ptr [rsp+rax*1+0x18]  /*manual*/
  3588: js 0x5d8dcd564b1f  /*manual*/
  3589: dec di  /*manual*/
  3590: not dx  /*manual*/
  3591: qword ptr [rax+rcx*2-0x4e359618] = rbx
  3592: sbb byte ptr [rsp+rdi*1-0x4e7e0321] ,dil  /*manual*/
  3593: qword ptr [rsp+rdi*1-0x4e7e032a] = r10
  3594: return
  3595: ecx = 0xfe2c31cf
  3596: movzx esi ,word ptr [r11]  /*manual*/
  3597: lea rdi ,ptr [rcx*2-0x464c1699]  /*manual*/
  3598: si ^= r8w
  3599: movzx eax ,cx  /*manual*/
  3600: bswap rcx  /*manual*/
  3601: si ^= 0xba6f
  3602: neg si  /*manual*/
  3603: movzx edx ,di  /*manual*/
  3604: cdq   /*manual*/
  3605: ror si ,0x1  /*manual*/
  3606: si += 0xdacc
  3607: sar dil ,0xa6  /*manual*/
  3608: movzx ebp ,dl  /*manual*/
  3609: xchg rdi ,rdx  /*manual*/
  3610: neg si  /*manual*/
  3611: shr ecx ,0x3c  /*manual*/
  3612: r8w ^= si
  3613: qword ptr [rcx+r9*1-0x8] = rsi
  3614: ebx = edi
  3615: movsx esi ,di  /*manual*/
  3616: bl += byte ptr [r11+rdi*2+0x2]
  3617: shr edx ,0x2c  /*manual*/
  3618: data16 cbw  /*manual*/
  3619: and dl ,cl  /*manual*/
  3620: bl ^= r8b
  3621: inc bl  /*manual*/
  3622: shl cx ,0x26  /*manual*/
  3623: not bl  /*manual*/
  3624: lea rax ,ptr [rax*8+0x2923e1bf]  /*manual*/
  3625: cx ^= 0xdb2
  3626: rsi += rax
  3627: adc bl ,0xf0  /*manual*/
  3628: bl ^= 0x14
  3629: xadd rdx ,rax  /*manual*/
  3630: cdqe   /*manual*/
  3631: and dx ,si  /*manual*/
  3632: r8b ^= bl
  3633: rbx += rsp
  3634: sar rbp ,0x6  /*manual*/
  3635: rcx = qword ptr [rcx+rbx*1-0xdb2]
  3636: movzx ebx ,sil  /*manual*/
  3637: push rdx  /*manual*/
  3638: not ebp  /*manual*/
  3639: rax = qword ptr [rdi+r9*1-0x8]
  3640: adc rcx ,rax  /*manual*/
  3641: rol dl ,0xc1  /*manual*/
  3642: qword ptr [r9+rdi*1-0x8] = rcx
  3643: cmovno bx ,dx  /*manual*/
  3644: edi -= 0x6102d13f
  3645: lea r9 ,ptr [r9+rdx*1-0x29374076]  /*manual*/
  3646: adc edi ,edi  /*manual*/
  3647: inc qword ptr [rsp+rsi*2-0x5257c06e]  /*manual*/
  3648: ebp = dword ptr [r11+rdx*2-0x526e80d9]
  3649: lea r11 ,ptr [r11+rdx*2-0x526e80d5]  /*manual*/
  3650: jnl 0x5d8dcd60b227  /*manual*/
  3651: and byte ptr [rsp+rdi*2-0x7bf4bb06] ,dil  /*manual*/
  3652: ebp ^= r8d
  3653: inc rsi  /*manual*/
  3654: lea ebp ,ptr [rbp+rdx*2-0x4aceaa8d]  /*manual*/
  3655: ebp ^= 0x110ebd51
  3656: dec ebx  /*manual*/
  3657: ebp -= 0xbd0c5372
  3658: push rdi  /*manual*/
  3659: rol ebp ,0x2  /*manual*/
  3660: bx -= 0x32a2
  3661: movzx ecx ,sil  /*manual*/
  3662: and bl ,dil  /*manual*/
  3663: lea ebp ,ptr [rbp+rdx*4-0x472b2c07]  /*manual*/
  3664: rol ebp ,0x1  /*manual*/
  3665: qword ptr [rsp+rdi*1-0x3dfa5d7b] = r8
  3666: dword ptr [rsp+rdi*1-0x3dfa5d7b] ^= ebp
  3667: shr rdx ,cl  /*manual*/
  3668: r8 = qword ptr [rsp+rdi*1-0x3dfa5d7b]
  3669: bl ^= 0xee
  3670: dword ptr [rsp+rdi*1-0x3dfa5d81] = edx
  3671: qword ptr [rsp+rdi*2-0x7bf4bafe] = 0xffffffff8298364c
  3672: movsxd rbp ,ebp  /*manual*/
  3673: adc r10 ,rbp  /*manual*/
  3674: jmp 0x5d8dcd6bb349  /*manual*/
  3675: shl qword ptr [rsp+rdi*2-0x7bf4bb06] ,0x98  /*manual*/
  3676: shr cx ,0x5  /*manual*/
  3677: pop rcx  /*manual*/
  3678: pop rcx  /*manual*/
  3679: jbe 0x5d8dcd50cbc3  /*manual*/
  3680: edx = 0x17ac3ca4
  3681: lea rdx ,ptr [rsp+rdx*1-0x17ac3abc]  /*manual*/
  3682: call 0x5d8dcd5bd3dc
  3683: cmp r9 ,rdx  /*manual*/
  3684: call 0x5d8dcd5744a0
  3685: call 0x5d8dcd5d2928
  3686: lea rsp ,ptr [rsp+0x18]  /*manual*/
  3687: jnbe 0x5d8dcd63900c  /*manual*/
  3688: push 0x6c087856  /*manual*/
  3689: jmp 0x5d8dcd5cdbbe  /*manual*/
  3690: lea rsp ,ptr [rsp+0x8]  /*manual*/
  3691: jmp r10  /*manual*/
  3692: ecx = 0xa61076e2
  3693: rdx = qword ptr [r9]
  3694: movsx ebx ,cl  /*manual*/
  3695: movzx esi ,cx  /*manual*/
  3696: lea rsi ,ptr [rsp+rsi*2-0xec9c]  /*manual*/
  3697: movzx eax ,bl  /*manual*/
  3698: movzx edi ,ax  /*manual*/
  3699: rol edi ,cl  /*manual*/
  3700: qword ptr [rsi+rax*8-0x710] = rdx
  3701: ebp = dword ptr [r11+rax*1-0xe2]
  3702: rax += 0x35b81809
  3703: shl rdi ,cl  /*manual*/
  3704: lea r11 ,ptr [rax+r11*1-0x35b818e7]  /*manual*/
  3705: movsx esi ,bx  /*manual*/
  3706: cmovp edi ,esi  /*manual*/
  3707: movsx edx ,cl  /*manual*/
  3708: ebp ^= r8d
  3709: dec ebp  /*manual*/
  3710: call 0x5d8dcd64d3e7
  3711: neg ebp  /*manual*/
  3712: ror ebp ,0x3  /*manual*/
  3713: ebp ^= 0x1c38bf0f
  3714: pop rsi  /*manual*/
  3715: ror cx ,cl  /*manual*/
  3716: push r8  /*manual*/
  3717: dword ptr [rsp+rax*2-0x6b7031d6] ^= ebp
  3718: call 0x5d8dcd5dbf19
  3719: qword ptr [rsp+rax*2-0x6b7031d6] = rdi
  3720: r8 = qword ptr [rsp+rax*1-0x35b818e3]
  3721: not rdx  /*manual*/
  3722: qword ptr [rsp+rax*1-0x35b818e3] = rax
  3723: movsxd rbp ,ebp  /*manual*/
  3724: ror cl ,0x64  /*manual*/
  3725: r10 += rbp
  3726: inc word ptr [rsp+rax*1-0x35b818e1]  /*manual*/
  3727: ror qword ptr [rsp+rax*2-0x6b7031ce] ,0x6c  /*manual*/
  3728: shl eax ,cl  /*manual*/
  3729: lea rdx ,ptr [r9+0x8]  /*manual*/
  3730: xchg rbx ,rcx  /*manual*/
  3731: movzx ebp ,al  /*manual*/
  3732: qword ptr [r9+rbp*2] = rdx
  3733: sar edi ,cl  /*manual*/
  3734: qword ptr [rsp+rbp*8] = r10
  3735: return
  3736: ebx = 0xe62c3579
  3737: edx = dword ptr [r11]
  3738: movsx ecx ,bl  /*manual*/
  3739: edx ^= r8d
  3740: movzx esi ,bx  /*manual*/
  3741: dec edx  /*manual*/
  3742: lea rbx ,ptr [rcx*2+0x8252441]  /*manual*/
  3743: movsx ebp ,bx  /*manual*/
  3744: neg edx  /*manual*/
  3745: or bl ,ch  /*manual*/
  3746: ror edx ,0x3  /*manual*/
  3747: edx ^= 0x1c38bf0f
  3748: movsx eax ,bp  /*manual*/
  3749: push r8  /*manual*/
  3750: sil += cl
  3751: setl sil  /*manual*/
  3752: dword ptr [rsp+rbx*1-0x8252533] ^= edx
  3753: lea r8 ,ptr [rax+rcx*4-0x58629014]  /*manual*/
  3754: dec rcx  /*manual*/
  3755: jnz 0x5d8dcd6bc6be  /*manual*/
  3756: pop r8  /*manual*/
  3757: bswap ecx  /*manual*/
  3758: movzx edi ,ax  /*manual*/
  3759: rol sil ,0x4  /*manual*/
  3760: movsxd rdx ,edx  /*manual*/
  3761: bswap rax  /*manual*/
  3762: inc cx  /*manual*/
  3763: rdi ^= rbp
  3764: adc r10 ,rdx  /*manual*/
  3765: edx = 0x6127bc58
  3766: inc di  /*manual*/
  3767: al += sil
  3768: rdx = qword ptr [r9+rbx*1-0x8252533]
  3769: push rbx  /*manual*/
  3770: jp 0x5d8dcd526a52  /*manual*/
  3771: lea r9 ,ptr [r9+rbx*8-0x41292990]  /*manual*/
  3772: jnb 0x5d8dcd5b5de2  /*manual*/
  3773: btc bp ,di  /*manual*/
  3774: lea rax ,ptr [rsp+rbx*2-0x104a492e]  /*manual*/
  3775: not cx  /*manual*/
  3776: bts esi ,ebx  /*manual*/
  3777: adc bp ,si  /*manual*/
  3778: qword ptr [rax+rbx*4-0x209494cc] = rdx
  3779: movsx edx ,byte ptr [rsp+rbx*1-0x825252f]  /*manual*/
  3780: movzx eax ,byte ptr [r11+rbx*4-0x209494c8]  /*manual*/
  3781: ror bl ,0x23  /*manual*/
  3782: setnb dil  /*manual*/
  3783: sar cx ,0x89  /*manual*/
  3784: lea r11 ,ptr [r11+rbx*4-0x20949593]  /*manual*/
  3785: jbe 0x5d8dcd6b5f38  /*manual*/
  3786: al ^= r8b
  3787: call 0x5d8dcd6512f9
  3788: al += cl
  3789: al ^= cl
  3790: and ebp ,dword ptr [rsp+rbx*1-0x825255c]  /*manual*/
  3791: xchg byte ptr [rsp+rbx*2-0x104a4ac0] ,bpl  /*manual*/
  3792: jnb 0x5d8dcd66f3aa  /*manual*/
  3793: rol al ,0x1  /*manual*/
  3794: neg al  /*manual*/
  3795: push rbp  /*manual*/
  3796: ror al ,0x1  /*manual*/
  3797: al ^= cl
  3798: qword ptr [rsp+rbx*1-0x825255e] = rbp
  3799: al += 0xa7
  3800: r8b ^= al
  3801: lea rbx ,ptr [rcx-0x36c4cbfa]  /*manual*/
  3802: neg byte ptr [rsp+rsi*4-0x20d3f8]  /*manual*/
  3803: lea rax ,ptr [rsp+rax*1+0x18]  /*manual*/
  3804: rol byte ptr [rsp+rcx*1-0x7800fff9] ,0xa4  /*manual*/
  3805: qword ptr [rsp+rbp*1-0x7fa] = 0x729f7930
  3806: rbp = qword ptr [rax+rsi*1-0x83500]
  3807: sar dil ,0xc5  /*manual*/
  3808: push rsi  /*manual*/
  3809: sets sil  /*manual*/
  3810: rsi = rbp
  3811: or byte ptr [rsp+rcx*1-0x7800ffe9] ,ch  /*manual*/
  3812: lea rcx ,ptr [rsp+rdi*1+0x158]  /*manual*/
  3813: qword ptr [rcx+rdi*2] = rsi
  3814: lea rcx ,ptr [rbx+rbx*8-0x6566a572]  /*manual*/
  3815: sbb dword ptr [rsp+rdi*1+0x7] ,ecx  /*manual*/
  3816: push rcx  /*manual*/
  3817: qword ptr [rsp+rbx*1-0x413c3405] = r10
  3818: return
  3819: ecx = 0x8a31be2e
  3820: movzx edx ,cx  /*manual*/
  3821: movzx ebp ,cx  /*manual*/
  3822: ebx = dword ptr [r11+rdx*2-0x17c5c]
  3823: dl += dl
  3824: cmovp dx ,cx  /*manual*/
  3825: movsx edi ,cx  /*manual*/
  3826: ebx ^= r8d
  3827: btc edi ,ebp  /*manual*/
  3828: shl dl ,0x62  /*manual*/
  3829: neg ebx  /*manual*/
  3830: ror ebx ,0x2  /*manual*/
  3831: btc di ,bp  /*manual*/
  3832: adc di ,dx  /*manual*/
  3833: ebx ^= 0x8291848
  3834: movsx eax ,bpl  /*manual*/
  3835: lea ebx ,ptr [rdx+rbx*1-0x348af603]  /*manual*/
  3836: esi = eax
  3837: and ax ,0xe534  /*manual*/
  3838: ror ebx ,0x2  /*manual*/
  3839: not ebx  /*manual*/
  3840: jmp 0x5d8dcd6a7c83  /*manual*/
  3841: push r8  /*manual*/
  3842: shr edi ,cl  /*manual*/
  3843: esi ^= 0x6a9e219e
  3844: dword ptr [rsp+rdx*2-0x17d70] ^= ebx
  3845: pop r8  /*manual*/
  3846: jmp 0x5d8dcd668176  /*manual*/
  3847: movsxd rbx ,ebx  /*manual*/
  3848: r10 += rbx
  3849: bswap rcx  /*manual*/
  3850: movzx edi ,byte ptr [r11+rdx*2-0x17d6c]  /*manual*/
  3851: dil ^= r8b
  3852: movzx ebx ,cx  /*manual*/
  3853: rol edx ,0x7d  /*manual*/
  3854: not dil  /*manual*/
  3855: neg dil  /*manual*/
  3856: dil ^= 0xec
  3857: call 0x5d8dcd603d3d
  3858: dil += 0xc
  3859: not dil  /*manual*/
  3860: pop rdx  /*manual*/
  3861: rdx += 0x15367
  3862: jmp rdx  /*manual*/
  3863: rcx ^= rbp
  3864: rol dil ,0x1  /*manual*/
  3865: dil += 0x96
  3866: lea rcx ,ptr [rsi+rcx*2-0x63df2f67]  /*manual*/
  3867: lea rdx ,ptr [rsi+rbx*8-0x66f6c24c]  /*manual*/
  3868: shr rcx ,cl  /*manual*/
  3869: r8b ^= dil
  3870: rdi += rsp
  3871: not bpl  /*manual*/
  3872: data16 cbw  /*manual*/
  3873: rcx = qword ptr [rdi+rcx*2-0x5d7c630]
  3874: rdi = rcx
  3875: push rbp  /*manual*/
  3876: and rdx ,0xffffffffdd915d63  /*manual*/
  3877: qword ptr [rsp+rbp*2-0x17da2] = 0xffffffffd2353513
  3878: movzx esi ,word ptr [r11+rbp*2-0x17d9d]  /*manual*/
  3879: and dword ptr [rsp+rbp*1-0xbed0] ,ebp  /*manual*/
  3880: not al  /*manual*/
  3881: si ^= r8w
  3882: xchg edx ,ebp  /*manual*/
  3883: not ax  /*manual*/
  3884: dec si  /*manual*/
  3885: btc rbp ,rdx  /*manual*/
  3886: neg si  /*manual*/
  3887: data16 cbw  /*manual*/
  3888: not si  /*manual*/
  3889: shr word ptr [rsp+rbp*2-0x306babb] ,0xe2  /*manual*/
  3890: sbb si ,0xfd8b  /*manual*/
  3891: ecx = edx
  3892: rol word ptr [rsp+rbp*1-0x1835d5e] ,0x2a  /*manual*/
  3893: data16 cbw  /*manual*/
  3894: si ^= 0x6a1d
  3895: inc si  /*manual*/
  3896: bts cx ,0xa5  /*manual*/
  3897: qword ptr [rsp+rbp*4-0x60d7580] += rdx
  3898: word ptr [rsp+rax*1-0x1e] = bp
  3899: si ^= 0xa756
  3900: ror rdx ,cl  /*manual*/
  3901: adc si ,0xf7ca  /*manual*/
  3902: rbp += qword ptr [rsp+rbp*4-0x60d7580]
  3903: sar byte ptr [rsp+rax*4-0x89] ,0xc2  /*manual*/
  3904: not bx  /*manual*/
  3905: r8w ^= si
  3906: xchg dword ptr [rsp+rax*1-0x22] ,edx  /*manual*/
  3907: inc byte ptr [rsp+rax*2-0x44]  /*manual*/
  3908: lea rsi ,ptr [rsp+rsi*1+0x8]  /*manual*/
  3909: xadd word ptr [rsp+rax*1-0x20] ,dx  /*manual*/
  3910: inc rbp  /*manual*/
  3911: qword ptr [rax+rsi*1-0x24] = rdi
  3912: movzx edi ,byte ptr [r11+rax*4-0x89]  /*manual*/
  3913: and qword ptr [rsp+rax*1-0x24] ,0xffffffffbaac4be0  /*manual*/
  3914: dec byte ptr [rsp+rax*2-0x43]  /*manual*/
  3915: ror rcx ,cl  /*manual*/
  3916: lea r11 ,ptr [r11+rax*2-0x40]  /*manual*/
  3917: inc bx  /*manual*/
  3918: xchg dword ptr [rsp+rax*1-0x23] ,ebp  /*manual*/
  3919: dil ^= r8b
  3920: inc dil  /*manual*/
  3921: jmp 0x5d8dcd65cec3  /*manual*/
  3922: qword ptr [rsp+rax*2-0x48] = 0xffffffffd7845ba7
  3923: jmp 0x5d8dcd500c6e  /*manual*/
  3924: neg dil  /*manual*/
  3925: byte ptr [rsp+rbp*1-0x6980004b] += 0xfe
  3926: shr ecx ,0x5b  /*manual*/
  3927: dil ^= 0xf1
  3928: dil -= 0x55
  3929: inc ebx  /*manual*/
  3930: neg bp  /*manual*/
  3931: ror qword ptr [rsp+rbp*1-0x6980ffb5] ,cl  /*manual*/
  3932: r8b ^= dil
  3933: shl dl ,0xe7  /*manual*/
  3934: lea rdi ,ptr [rsp+rdi*1+0x8]  /*manual*/
  3935: cdqe   /*manual*/
  3936: rsi = qword ptr [rdi+rax*2-0x48]
  3937: or bl ,0x92  /*manual*/
  3938: pop rcx  /*manual*/
  3939: qword ptr [r9+rax*1-0x2c] = rsi
  3940: rol rax ,cl  /*manual*/
  3941: lea r9 ,ptr [rax+r9*1-0x12008]  /*manual*/
  3942: ror rbx ,cl  /*manual*/
  3943: jnz 0x5d8dcd50cbc3  /*manual*/
  3944: edx = 0x17ac3ca4
  3945: lea rdx ,ptr [rsp+rdx*1-0x17ac3abc]  /*manual*/
  3946: call 0x5d8dcd5bd3dc
  3947: cmp r9 ,rdx  /*manual*/
  3948: call 0x5d8dcd5744a0
  3949: call 0x5d8dcd5d2928
  3950: lea rsp ,ptr [rsp+0x18]  /*manual*/
  3951: jnbe 0x5d8dcd63900c  /*manual*/
  3952: push 0x6c087856  /*manual*/
  3953: jmp 0x5d8dcd5cdbbe  /*manual*/
  3954: lea rsp ,ptr [rsp+0x8]  /*manual*/
  3955: jmp r10  /*manual*/
  3956: esi = dword ptr [r11]
  3957: ebp = 0x92b1df
  3958: movsx edx ,bp  /*manual*/
  3959: lea r11 ,ptr [r11+rbp*2-0x12563ba]  /*manual*/
  3960: lea rbx ,ptr [rdx+rbp*1-0x6b5142f6]  /*manual*/
  3961: esi ^= r8d
  3962: dx += 0x3dc3
  3963: ecx = ebp
  3964: dec esi  /*manual*/
  3965: lea rax ,ptr [rdx+rbp*1+0x18396b67]  /*manual*/
  3966: not rdx  /*manual*/
  3967: neg esi  /*manual*/
  3968: movzx edi ,al  /*manual*/
  3969: bswap ecx  /*manual*/
  3970: btr rbp ,0xef  /*manual*/
  3971: ror esi ,0x3  /*manual*/
  3972: esi ^= 0x1c38bf0f
  3973: sar al ,0x61  /*manual*/
  3974: sbb dl ,dil  /*manual*/
  3975: setnb dl  /*manual*/
  3976: push r8  /*manual*/
  3977: r8d = edi
  3978: dword ptr [rsp+rbp*1-0x92b1df] ^= esi
  3979: ror al ,0xe1  /*manual*/
  3980: bts bp ,0xfb  /*manual*/
  3981: shl rcx ,0x6f  /*manual*/
  3982: pop r8  /*manual*/
  3983: shr rdx ,0xa9  /*manual*/
  3984: shl rdi ,0x23  /*manual*/
  3985: movsxd rsi ,esi  /*manual*/
  3986: data16 cbw  /*manual*/
  3987: shl eax ,0xec  /*manual*/
  3988: di ^= dx
  3989: adc r10 ,rsi  /*manual*/
  3990: movzx esi ,dx  /*manual*/
  3991: and bx ,0xe951  /*manual*/
  3992: rsi = qword ptr [rbp+r9*1-0x92b9df]
  3993: lea r9 ,ptr [rbp+r9*1-0x92b9d7]  /*manual*/
  3994: dec ecx  /*manual*/
  3995: not cl  /*manual*/
  3996: cqo   /*manual*/
  3997: or dx ,word ptr [r11+rbp*1-0x92b9df]  /*manual*/
  3998: btc edi ,ecx  /*manual*/
  3999: ror di ,0x49  /*manual*/
  4000: lea r11 ,ptr [r11+rbp*8-0x495cef6]  /*manual*/
  4001: and di ,cx  /*manual*/
  4002: dx ^= r8w
  4003: and rdi ,0xfffffffffb03f6b2  /*manual*/
  4004: call 0x5d8dcd5c589a
  4005: shr ebx ,0x82  /*manual*/
  4006: ror dx ,0x1  /*manual*/
  4007: cwde   /*manual*/
  4008: qword ptr [rsp+rbp*2-0x12573be] = 0xffffffffad03fae9
  4009: ror rbx ,0x12  /*manual*/
  4010: inc dx  /*manual*/
  4011: btc bp ,0xa6  /*manual*/
  4012: pop rcx  /*manual*/
  4013: shr dil ,0x7  /*manual*/
  4014: ror dx ,0x1  /*manual*/
  4015: cdqe   /*manual*/
  4016: cl -= dil
  4017: xadd ebp ,edi  /*manual*/
  4018: not dx  /*manual*/
  4019: setnz cl  /*manual*/
  4020: bt ebx ,ebx  /*manual*/
  4021: inc bp  /*manual*/
  4022: r8w ^= dx
  4023: inc bl  /*manual*/
  4024: rdx += rsp
  4025: lea rcx ,ptr [rax*2+0x69b8a0c5]  /*manual*/
  4026: shl bx ,cl  /*manual*/
  4027: qword ptr [rbp+rdx*1-0x93afa0] = rsi
  4028: jmp r10  /*manual*/
  4029: edi = 0xff060c85
  4030: movzx edx ,dil  /*manual*/
  4031: movzx ebp ,byte ptr [r11+rdx*4-0x214]  /*manual*/
  4032: lea rax ,ptr [rdi+rdi*4+0x44bf46a3]  /*manual*/
  4033: shl rdx ,0xaa  /*manual*/
  4034: bpl ^= r8b
  4035: inc bpl  /*manual*/
  4036: cdqe   /*manual*/
  4037: movsx esi ,dl  /*manual*/
  4038: rol bpl ,0x1  /*manual*/
  4039: inc edx  /*manual*/
  4040: setnl dil  /*manual*/
  4041: bpl -= 0xa8
  4042: movzx ecx ,di  /*manual*/
  4043: btc rsi ,rdx  /*manual*/
  4044: ror bpl ,cl  /*manual*/
  4045: bpl += 0x9e
  4046: rdi ^= rax
  4047: r8b ^= bpl
  4048: rsi -= rdi
  4049: cwde   /*manual*/
  4050: adc ax ,ax  /*manual*/
  4051: rbp += rsp
  4052: bts edx ,0x7e  /*manual*/
  4053: rcx = qword ptr [rbp+rcx*2-0x1802]
  4054: lea rbx ,ptr [rax*2-0x21fc366a]  /*manual*/
  4055: cdq   /*manual*/
  4056: lea rbp ,ptr [rdx*4+0x1eb00f3e]  /*manual*/
  4057: rdx = rcx
  4058: not rbx  /*manual*/
  4059: jnb 0x5d8dcd563eb5  /*manual*/
  4060: jb 0x5d8dcd530a67  /*manual*/
  4061: movzx ecx ,word ptr [r11+0x1]  /*manual*/
  4062: or rax ,0xa87796a  /*manual*/
  4063: cx ^= r8w
  4064: ror cx ,0x1  /*manual*/
  4065: or rax ,0x44014dc6  /*manual*/
  4066: not si  /*manual*/
  4067: inc cx  /*manual*/
  4068: ror cx ,0x1  /*manual*/
  4069: not cx  /*manual*/
  4070: shl ebx ,0xa7  /*manual*/
  4071: r8w ^= cx
  4072: xchg ebx ,ebp  /*manual*/
  4073: rcx += rsp
  4074: jmp 0x5d8dcd5d08f6  /*manual*/
  4075: qword ptr [rcx+rbx*4-0x7ac03ce8] = rdx
  4076: bx ^= 0x6547
  4077: btr rax ,0x63  /*manual*/
  4078: edi = dword ptr [rbx+r11*1-0x1eb06a7a]
  4079: bts ax ,ax  /*manual*/
  4080: shl si ,0xc8  /*manual*/
  4081: lea r11 ,ptr [r11+rbx*1-0x1eb06a76]  /*manual*/
  4082: inc eax  /*manual*/
  4083: edi ^= r8d
  4084: rax ^= rax
  4085: dec edi  /*manual*/
  4086: shl rbx ,0x66  /*manual*/
  4087: push rbx  /*manual*/
  4088: movzx edx ,sil  /*manual*/
  4089: neg edi  /*manual*/
  4090: bswap rax  /*manual*/
  4091: shl edx ,0x66  /*manual*/
  4092: ror edi ,0x3  /*manual*/
  4093: sar dx ,0xc1  /*manual*/
  4094: dec word ptr [rsp+rax*1+0x5]  /*manual*/
  4095: edi ^= 0x1c38bf0f
  4096: qword ptr [rsp+rax*1] = r8
  4097: dword ptr [rsp+rax*1] ^= edi
  4098: pop r8  /*manual*/
  4099: rol rax ,0x44  /*manual*/
  4100: movsxd rdi ,edi  /*manual*/
  4101: neg ebp  /*manual*/
  4102: r10 += rdi
  4103: bts rbx ,rax  /*manual*/
  4104: or rax ,r10  /*manual*/
  4105: jmp rax  /*manual*/
  4106: ecx = 0xfe2c31cf
  4107: movzx esi ,word ptr [r11]  /*manual*/
  4108: lea rdi ,ptr [rcx*2-0x464c1699]  /*manual*/
  4109: si ^= r8w
  4110: movzx eax ,cx  /*manual*/
  4111: bswap rcx  /*manual*/
  4112: si ^= 0xba6f
  4113: neg si  /*manual*/
  4114: movzx edx ,di  /*manual*/
  4115: cdq   /*manual*/
  4116: ror si ,0x1  /*manual*/
  4117: si += 0xdacc
  4118: sar dil ,0xa6  /*manual*/
  4119: movzx ebp ,dl  /*manual*/
  4120: xchg rdi ,rdx  /*manual*/
  4121: neg si  /*manual*/
  4122: shr ecx ,0x3c  /*manual*/
  4123: r8w ^= si
  4124: qword ptr [rcx+r9*1-0x8] = rsi
  4125: ebx = edi
  4126: movsx esi ,di  /*manual*/
  4127: bl += byte ptr [r11+rdi*2+0x2]
  4128: shr edx ,0x2c  /*manual*/
  4129: data16 cbw  /*manual*/
  4130: and dl ,cl  /*manual*/
  4131: bl ^= r8b
  4132: inc bl  /*manual*/
  4133: shl cx ,0x26  /*manual*/
  4134: not bl  /*manual*/
  4135: lea rax ,ptr [rax*8+0x2923e1bf]  /*manual*/
  4136: cx ^= 0xdb2
  4137: rsi += rax
  4138: adc bl ,0xf0  /*manual*/
  4139: bl ^= 0x14
  4140: xadd rdx ,rax  /*manual*/
  4141: cdqe   /*manual*/
  4142: and dx ,si  /*manual*/
  4143: r8b ^= bl
  4144: rbx += rsp
  4145: sar rbp ,0x6  /*manual*/
  4146: rcx = qword ptr [rcx+rbx*1-0xdb2]
  4147: movzx ebx ,sil  /*manual*/
  4148: push rdx  /*manual*/
  4149: not ebp  /*manual*/
  4150: rax = qword ptr [rdi+r9*1-0x8]
  4151: adc rcx ,rax  /*manual*/
  4152: rol dl ,0xc1  /*manual*/
  4153: qword ptr [r9+rdi*1-0x8] = rcx
  4154: cmovno bx ,dx  /*manual*/
  4155: edi -= 0x6102d13f
  4156: lea r9 ,ptr [r9+rdx*1-0x29374076]  /*manual*/
  4157: adc edi ,edi  /*manual*/
  4158: inc qword ptr [rsp+rsi*2-0x5257c06e]  /*manual*/
  4159: ebp = dword ptr [r11+rdx*2-0x526e80d9]
  4160: lea r11 ,ptr [r11+rdx*2-0x526e80d5]  /*manual*/
  4161: jnl 0x5d8dcd60b227  /*manual*/
  4162: and byte ptr [rsp+rdi*2-0x7bf4bb06] ,dil  /*manual*/
  4163: ebp ^= r8d
  4164: inc rsi  /*manual*/
  4165: lea ebp ,ptr [rbp+rdx*2-0x4aceaa8d]  /*manual*/
  4166: ebp ^= 0x110ebd51
  4167: dec ebx  /*manual*/
  4168: ebp -= 0xbd0c5372
  4169: push rdi  /*manual*/
  4170: rol ebp ,0x2  /*manual*/
  4171: bx -= 0x32a2
  4172: movzx ecx ,sil  /*manual*/
  4173: and bl ,dil  /*manual*/
  4174: lea ebp ,ptr [rbp+rdx*4-0x472b2c07]  /*manual*/
  4175: rol ebp ,0x1  /*manual*/
  4176: qword ptr [rsp+rdi*1-0x3dfa5d7b] = r8
  4177: dword ptr [rsp+rdi*1-0x3dfa5d7b] ^= ebp
  4178: shr rdx ,cl  /*manual*/
  4179: r8 = qword ptr [rsp+rdi*1-0x3dfa5d7b]
  4180: bl ^= 0xee
  4181: dword ptr [rsp+rdi*1-0x3dfa5d81] = edx
  4182: qword ptr [rsp+rdi*2-0x7bf4bafe] = 0xffffffff8298364c
  4183: movsxd rbp ,ebp  /*manual*/
  4184: adc r10 ,rbp  /*manual*/
  4185: jmp 0x5d8dcd6bb349  /*manual*/
  4186: shl qword ptr [rsp+rdi*2-0x7bf4bb06] ,0x98  /*manual*/
  4187: shr cx ,0x5  /*manual*/
  4188: pop rcx  /*manual*/
  4189: pop rcx  /*manual*/
  4190: jbe 0x5d8dcd50cbc3  /*manual*/
  4191: edx = 0x17ac3ca4
  4192: lea rdx ,ptr [rsp+rdx*1-0x17ac3abc]  /*manual*/
  4193: call 0x5d8dcd5bd3dc
  4194: cmp r9 ,rdx  /*manual*/
  4195: call 0x5d8dcd5744a0
  4196: call 0x5d8dcd5d2928
  4197: lea rsp ,ptr [rsp+0x18]  /*manual*/
  4198: jnbe 0x5d8dcd63900c  /*manual*/
  4199: push 0x6c087856  /*manual*/
  4200: jmp 0x5d8dcd5cdbbe  /*manual*/
  4201: lea rsp ,ptr [rsp+0x8]  /*manual*/
  4202: jmp r10  /*manual*/
  4203: esi = 0xd994a223
  4204: eax = 0x4423a582
  4205: rcx = qword ptr [r9+rax*1-0x4423a582]
  4206: eax = dword ptr [rcx+rax*1-0x4423a582]
  4207: movzx edi ,sil  /*manual*/
  4208: ecx = esi
  4209: dword ptr [r9+rdi*4-0x88] = eax
  4210: ebp = dword ptr [r11+rdi*1-0x23]
  4211: call 0x5d8dcd6c0ce3
  4212: movsx eax ,cl  /*manual*/
  4213: ebp ^= r8d
  4214: neg ebp  /*manual*/
  4215: pop rdx  /*manual*/
  4216: rdx += 0xfffffffffff7e949
  4217: jmp rdx  /*manual*/
  4218: movzx edx ,si  /*manual*/
  4219: sil ^= cl
  4220: rol ebp ,0x2  /*manual*/
  4221: shl rax ,cl  /*manual*/
  4222: inc edx  /*manual*/
  4223: ebp ^= 0x75a3f843
  4224: lea rbx ,ptr [rsi*8-0x5ec32098]  /*manual*/
  4225: not di  /*manual*/
  4226: inc cl  /*manual*/
  4227: neg ebp  /*manual*/
  4228: ebp ^= 0x4da6217e
  4229: neg sil  /*manual*/
  4230: push r8  /*manual*/
  4231: cqo   /*manual*/
  4232: movsx r8d ,ax  /*manual*/
  4233: dword ptr [rsp+rdi*1-0xffdc] ^= ebp
  4234: push rbx  /*manual*/
  4235: btc ax ,dx  /*manual*/
  4236: xadd byte ptr [rsp+rdi*1-0xffd8] ,dil  /*manual*/
  4237: r8 = qword ptr [rsp+rdx*2+0x8]
  4238: shr rcx ,cl  /*manual*/
  4239: qword ptr [rsp+rdi*4-0x3fc10] = 0x535775d
  4240: movsxd rbp ,ebp  /*manual*/
  4241: xadd rdi ,rbx  /*manual*/
  4242: sil ^= dil
  4243: adc r10 ,rbp  /*manual*/
  4244: lea rbp ,ptr [rbx-0x53596fad]  /*manual*/
  4245: shl rax ,0x2  /*manual*/
  4246: lea rdx ,ptr [rax*8-0x58d0f979]  /*manual*/
  4247: edi = dword ptr [r9+rcx*1+0x4]
  4248: sets byte ptr [rsp+rcx*4+0x4]  /*manual*/
  4249: lea r9 ,ptr [r9+rcx*1+0x8]  /*manual*/
  4250: xchg ebx ,esi  /*manual*/
  4251: jnp 0x5d8dcd60899b  /*manual*/
  4252: movzx eax ,byte ptr [r11+rsi*1-0xff02]  /*manual*/
  4253: bswap rdx  /*manual*/
  4254: not rdx  /*manual*/
  4255: byte ptr [rsp+rsi*1-0xfefb] += dh
  4256: lea r11 ,ptr [r11+rsi*1-0xff01]  /*manual*/
  4257: sar edx ,0x1a  /*manual*/
  4258: sbb cx ,cx  /*manual*/
  4259: sbb rdx ,qword ptr [rsp+rsi*2-0x1fe09]  /*manual*/
  4260: al ^= r8b
  4261: al ^= 0x9c
  4262: pop rsi  /*manual*/
  4263: xadd cl ,bpl  /*manual*/
  4264: shl byte ptr [rsp+rsi*1-0x6de1ef65] ,0x66  /*manual*/
  4265: sbb al ,bpl  /*manual*/
  4266: al ^= 0xb5
  4267: call 0x5d8dcd694eb6
  4268: word ptr [rsp+rsi*1-0x6de1ef5c] += si
  4269: ror al ,0x1  /*manual*/
  4270: qword ptr [rsp+rcx*4-0x164] = rdx
  4271: bx -= si
  4272: setb cl  /*manual*/
  4273: al ^= 0xfa
  4274: al += 0x43
  4275: shr dx ,0x2a  /*manual*/
  4276: inc qword ptr [rsp+rcx*2+0x6]  /*manual*/
  4277: al ^= 0xe1
  4278: or cl ,0x5b  /*manual*/
  4279: bts ecx ,0xe6  /*manual*/
  4280: rol ecx ,0x39  /*manual*/
  4281: ror al ,0x1  /*manual*/
  4282: push rsi  /*manual*/
  4283: neg esi  /*manual*/
  4284: not al  /*manual*/
  4285: shl dword ptr [rsp+rbp*1+0x53587114] ,0x77  /*manual*/
  4286: xchg word ptr [rsp+rbp*1+0x5358710b] ,dx  /*manual*/
  4287: rol al ,0x1  /*manual*/
  4288: r8b ^= al
  4289: lea rax ,ptr [rsp+rax*1+0x18]  /*manual*/
  4290: neg bp  /*manual*/
  4291: btc esi ,0x3c  /*manual*/
  4292: ror ebx ,0xf6  /*manual*/
  4293: dword ptr [rbp+rax*1+0x53588f00] = edi
  4294: ecx ^= ebx
  4295: sar bpl ,cl  /*manual*/
  4296: qword ptr [rsp+rbx*1-0x52cc1b66] = r10
  4297: return
  4298: movzx eax ,byte ptr [r11]  /*manual*/
  4299: edx = 0xcb189fa7
  4300: movsx ebx ,dl  /*manual*/
  4301: ecx = 0xb53426b7
  4302: al ^= r8b
  4303: xadd rdx ,rbx  /*manual*/
  4304: lea rsi ,ptr [rcx+rcx*4-0x55598d03]  /*manual*/
  4305: dec esi  /*manual*/
  4306: sbb al ,0xfd  /*manual*/
  4307: dec rcx  /*manual*/
  4308: shl dx ,0x6d  /*manual*/
  4309: neg al  /*manual*/
  4310: and dl ,sil  /*manual*/
  4311: xchg edx ,ebx  /*manual*/
  4312: rol al ,0x1  /*manual*/
  4313: lea rdi ,ptr [rbx*4+0x5e2f6ad4]  /*manual*/
  4314: dec al  /*manual*/
  4315: not dx  /*manual*/
  4316: al ^= 0xcd
  4317: shr dx ,0x26  /*manual*/
  4318: rcx ^= 0xffffffffc78ec81e
  4319: lea rbx ,ptr [rdi*4+0x4f215543]  /*manual*/
  4320: r8b ^= al
  4321: movzx ecx ,byte ptr [r11+rsi*2-0x6956691d]  /*manual*/
  4322: or dx ,0x998d  /*manual*/
  4323: cl ^= r8b
  4324: jmp 0x5d8dcd6d760b  /*manual*/
  4325: shr ebx ,0xaf  /*manual*/
  4326: not bx  /*manual*/
  4327: cl ^= 0x88
  4328: dec cl  /*manual*/
  4329: xchg edx ,esi  /*manual*/
  4330: neg cl  /*manual*/
  4331: cl += 0xd
  4332: and si ,dx  /*manual*/
  4333: movsx ebp ,si  /*manual*/
  4334: shl ebp ,0x39  /*manual*/
  4335: not cl  /*manual*/
  4336: jp 0x5d8dcd631948  /*manual*/
  4337: call 0x5d8dcd6dcf8e
  4338: lea rbp ,ptr [rsi+rsi*8+0x2a1554ce]  /*manual*/
  4339: rol cl ,0x1  /*manual*/
  4340: lea rdx ,ptr [rdx+rdi*8-0x524706e1]  /*manual*/
  4341: r8b ^= cl
  4342: qword ptr [rsp+rbx*1-0xd29] = rdi
  4343: lea rcx ,ptr [rsp+rcx*1+0x8]  /*manual*/
  4344: qword ptr [rsp+rbx*2-0x1a52] = rdi
  4345: xadd qword ptr [rsp+rbx*1-0xd29] ,rdx  /*manual*/
  4346: dword ptr [rcx+rbx*1-0xd29] = eax
  4347: rol bl ,0x3  /*manual*/
  4348: edi = dword ptr [r11+rbx*1-0xd47]
  4349: adc bx ,word ptr [rsp+rbx*1-0xd47]  /*manual*/
  4350: eax = dword ptr [rsp+rbx*1-0xced2]
  4351: inc rsi  /*manual*/
  4352: lea r11 ,ptr [r11+rbx*1-0xcecd]  /*manual*/
  4353: shr qword ptr [rsp+rbx*1-0xced3] ,0xde  /*manual*/
  4354: movsx ecx ,bpl  /*manual*/
  4355: not word ptr [rsp+rbx*1-0xced0]  /*manual*/
  4356: edi ^= r8d
  4357: edi -= 0x9406c025
  4358: not edi  /*manual*/
  4359: qword ptr [rsp+rbx*4-0x33b4c] += rcx
  4360: bt ax ,cx  /*manual*/
  4361: ror bl ,cl  /*manual*/
  4362: lea edi ,ptr [rbx+rdi*1-0x4a99cec7]  /*manual*/
  4363: jnb 0x5d8dcd6d7655  /*manual*/
  4364: shr byte ptr [rsp+rbx*1-0xce73] ,0xc3  /*manual*/
  4365: bswap edi  /*manual*/
  4366: sbb bx ,0x70fe  /*manual*/
  4367: qword ptr [rsp+rbx*2-0xbaf8] = r8
  4368: movzx r8d ,bp  /*manual*/
  4369: sar cx ,cl  /*manual*/
  4370: dword ptr [rsp+rbx*8-0x2ebe0] ^= edi
  4371: sar rdx ,cl  /*manual*/
  4372: pop r8  /*manual*/
  4373: dec eax  /*manual*/
  4374: movsxd rdi ,edi  /*manual*/
  4375: and cx ,cx  /*manual*/
  4376: push rbx  /*manual*/
  4377: adc r10 ,rdi  /*manual*/
  4378: qword ptr [rsp+rdx*1] = r10
  4379: return
  4380: ecx = 0xfe2c31cf
  4381: movzx esi ,word ptr [r11]  /*manual*/
  4382: lea rdi ,ptr [rcx*2-0x464c1699]  /*manual*/
  4383: si ^= r8w
  4384: movzx eax ,cx  /*manual*/
  4385: bswap rcx  /*manual*/
  4386: si ^= 0xba6f
  4387: neg si  /*manual*/
  4388: movzx edx ,di  /*manual*/
  4389: cdq   /*manual*/
  4390: ror si ,0x1  /*manual*/
  4391: si += 0xdacc
  4392: sar dil ,0xa6  /*manual*/
  4393: movzx ebp ,dl  /*manual*/
  4394: xchg rdi ,rdx  /*manual*/
  4395: neg si  /*manual*/
  4396: shr ecx ,0x3c  /*manual*/
  4397: r8w ^= si
  4398: qword ptr [rcx+r9*1-0x8] = rsi
  4399: ebx = edi
  4400: movsx esi ,di  /*manual*/
  4401: bl += byte ptr [r11+rdi*2+0x2]
  4402: shr edx ,0x2c  /*manual*/
  4403: data16 cbw  /*manual*/
  4404: and dl ,cl  /*manual*/
  4405: bl ^= r8b
  4406: inc bl  /*manual*/
  4407: shl cx ,0x26  /*manual*/
  4408: not bl  /*manual*/
  4409: lea rax ,ptr [rax*8+0x2923e1bf]  /*manual*/
  4410: cx ^= 0xdb2
  4411: rsi += rax
  4412: adc bl ,0xf0  /*manual*/
  4413: bl ^= 0x14
  4414: xadd rdx ,rax  /*manual*/
  4415: cdqe   /*manual*/
  4416: and dx ,si  /*manual*/
  4417: r8b ^= bl
  4418: rbx += rsp
  4419: sar rbp ,0x6  /*manual*/
  4420: rcx = qword ptr [rcx+rbx*1-0xdb2]
  4421: movzx ebx ,sil  /*manual*/
  4422: push rdx  /*manual*/
  4423: not ebp  /*manual*/
  4424: rax = qword ptr [rdi+r9*1-0x8]
  4425: adc rcx ,rax  /*manual*/
  4426: rol dl ,0xc1  /*manual*/
  4427: qword ptr [r9+rdi*1-0x8] = rcx
  4428: cmovno bx ,dx  /*manual*/
  4429: edi -= 0x6102d13f
  4430: lea r9 ,ptr [r9+rdx*1-0x29374076]  /*manual*/
  4431: adc edi ,edi  /*manual*/
  4432: inc qword ptr [rsp+rsi*2-0x5257c06e]  /*manual*/
  4433: ebp = dword ptr [r11+rdx*2-0x526e80d9]
  4434: lea r11 ,ptr [r11+rdx*2-0x526e80d5]  /*manual*/
  4435: jnl 0x5d8dcd60b227  /*manual*/
  4436: and byte ptr [rsp+rdi*2-0x7bf4bb06] ,dil  /*manual*/
  4437: ebp ^= r8d
  4438: inc rsi  /*manual*/
  4439: lea ebp ,ptr [rbp+rdx*2-0x4aceaa8d]  /*manual*/
  4440: ebp ^= 0x110ebd51
  4441: dec ebx  /*manual*/
  4442: ebp -= 0xbd0c5372
  4443: push rdi  /*manual*/
  4444: rol ebp ,0x2  /*manual*/
  4445: bx -= 0x32a2
  4446: movzx ecx ,sil  /*manual*/
  4447: and bl ,dil  /*manual*/
  4448: lea ebp ,ptr [rbp+rdx*4-0x472b2c07]  /*manual*/
  4449: rol ebp ,0x1  /*manual*/
  4450: qword ptr [rsp+rdi*1-0x3dfa5d7b] = r8
  4451: dword ptr [rsp+rdi*1-0x3dfa5d7b] ^= ebp
  4452: shr rdx ,cl  /*manual*/
  4453: r8 = qword ptr [rsp+rdi*1-0x3dfa5d7b]
  4454: bl ^= 0xee
  4455: dword ptr [rsp+rdi*1-0x3dfa5d81] = edx
  4456: qword ptr [rsp+rdi*2-0x7bf4bafe] = 0xffffffff8298364c
  4457: movsxd rbp ,ebp  /*manual*/
  4458: adc r10 ,rbp  /*manual*/
  4459: jmp 0x5d8dcd6bb349  /*manual*/
  4460: shl qword ptr [rsp+rdi*2-0x7bf4bb06] ,0x98  /*manual*/
  4461: shr cx ,0x5  /*manual*/
  4462: pop rcx  /*manual*/
  4463: pop rcx  /*manual*/
  4464: jbe 0x5d8dcd50cbc3  /*manual*/
  4465: edx = 0x17ac3ca4
  4466: lea rdx ,ptr [rsp+rdx*1-0x17ac3abc]  /*manual*/
  4467: call 0x5d8dcd5bd3dc
  4468: cmp r9 ,rdx  /*manual*/
  4469: call 0x5d8dcd5744a0
  4470: call 0x5d8dcd5d2928
  4471: lea rsp ,ptr [rsp+0x18]  /*manual*/
  4472: jnbe 0x5d8dcd63900c  /*manual*/
  4473: push 0x6c087856  /*manual*/
  4474: jmp 0x5d8dcd5cdbbe  /*manual*/
  4475: lea rsp ,ptr [rsp+0x8]  /*manual*/
  4476: jmp r10  /*manual*/
  4477: ecx = 0x2ba300aa
  4478: ebp = ecx
  4479: jmp 0x5d8dcd6c748e  /*manual*/
  4480: rbp = qword ptr [r9+rcx*2-0x57460154]
  4481: movsx eax ,cl  /*manual*/
  4482: movsx edi ,cl  /*manual*/
  4483: edi = dword ptr [rbp+rcx*2-0x57460154]
  4484: movsx edx ,al  /*manual*/
  4485: dword ptr [rcx+r9*1-0x2ba300a6] = edi
  4486: edi = dword ptr [rcx+r11*1-0x2ba300aa]
  4487: lea rsi ,ptr [rcx*2-0xc528d9f]  /*manual*/
  4488: movzx ebx ,dx  /*manual*/
  4489: lea r11 ,ptr [rsi+r11*1-0x4af373b1]  /*manual*/
  4490: sar si ,cl  /*manual*/
  4491: esi += ecx
  4492: movzx ebp ,ax  /*manual*/
  4493: edi ^= r8d
  4494: edi ^= 0xc5392b24
  4495: bswap edi  /*manual*/
  4496: shl edx ,cl  /*manual*/
  4497: neg rbp  /*manual*/
  4498: ror edi ,0x2  /*manual*/
  4499: lea edi ,ptr [rdi+rbx*2-0x6c2cc5a9]  /*manual*/
  4500: edx ^= edx
  4501: call 0x5d8dcd5ebaa9
  4502: qword ptr [rsp+rdx*1] = r8
  4503: call 0x5d8dcd55a480
  4504: dword ptr [rsp+rcx*1-0x2ba300a2] ^= edi
  4505: rol ecx ,cl  /*manual*/
  4506: neg rbx  /*manual*/
  4507: r8 = qword ptr [rsp+rbp*2+0x1ff5c]
  4508: movsxd rdi ,edi  /*manual*/
  4509: r10 += rdi
  4510: qword ptr [rsp+rdx*4] = 0xffffffffeb261ca6
  4511: dx ^= word ptr [rsp+rdx*1+0x4]
  4512: cqo   /*manual*/
  4513: lea rax ,ptr [r9+rdx*2+0x4]  /*manual*/
  4514: qword ptr [rsp+rdx*2+0x8] = rsi
  4515: movsx edi ,dx  /*manual*/
  4516: qword ptr [r9+rdx*2-0x4] = rax
  4517: push rdx  /*manual*/
  4518: btc dx ,0x73  /*manual*/
  4519: lea r9 ,ptr [r9+rdx*1-0xc]  /*manual*/
  4520: shl byte ptr [rsp+rdx*8-0x40] ,0x3  /*manual*/
  4521: inc bp  /*manual*/
  4522: sar byte ptr [rsp+rdx*1+0x9] ,0xa3  /*manual*/
  4523: pop rcx  /*manual*/
  4524: pop rcx  /*manual*/
  4525: pop rax  /*manual*/
  4526: jbe 0x5d8dcd50cbc3  /*manual*/
  4527: edx = 0x17ac3ca4
  4528: lea rdx ,ptr [rsp+rdx*1-0x17ac3abc]  /*manual*/
  4529: call 0x5d8dcd5bd3dc
  4530: cmp r9 ,rdx  /*manual*/
  4531: call 0x5d8dcd5744a0
  4532: call 0x5d8dcd5d2928
  4533: lea rsp ,ptr [rsp+0x18]  /*manual*/
  4534: jnbe 0x5d8dcd63900c  /*manual*/
  4535: push 0x6c087856  /*manual*/
  4536: jmp 0x5d8dcd5cdbbe  /*manual*/
  4537: lea rsp ,ptr [rsp+0x8]  /*manual*/
  4538: jmp r10  /*manual*/
  4539: eax = 0x5001fb54
  4540: cqo   /*manual*/
  4541: movzx edi ,al  /*manual*/
  4542: rdx += qword ptr [r9+rdx*1]
  4543: edi = dword ptr [rdx+rdi*2-0xa8]
  4544: movzx ebp ,al  /*manual*/
  4545: movsx esi ,al  /*manual*/
  4546: eax = dword ptr [r9+rax*1-0x5001fb4c]
  4547: si ^= si
  4548: movzx ebx ,si  /*manual*/
  4549: not edi  /*manual*/
  4550: movsx ecx ,bpl  /*manual*/
  4551: edx = ebx
  4552: not eax  /*manual*/
  4553: lea rbx ,ptr [rcx-0x23f545c2]  /*manual*/
  4554: inc rdx  /*manual*/
  4555: jp 0x5d8dcd621c83  /*manual*/
  4556: and edi ,eax  /*manual*/
  4557: rbx += 0x6894b019
  4558: dword ptr [r9+rbp*2-0xa0] = edi
  4559: esi += dword ptr [r11+rbp*2-0xa8]
  4560: xchg ebx ,edx  /*manual*/
  4561: movsx eax ,bx  /*manual*/
  4562: esi ^= r8d
  4563: movsx edi ,al  /*manual*/
  4564: ror esi ,0x3  /*manual*/
  4565: esi -= ebx
  4566: bswap esi  /*manual*/
  4567: esi -= ebx
  4568: cqo   /*manual*/
  4569: neg rbp  /*manual*/
  4570: bts rdi ,rax  /*manual*/
  4571: bswap esi  /*manual*/
  4572: cmovb eax ,edx  /*manual*/
  4573: sar edi ,0xf7  /*manual*/
  4574: neg esi  /*manual*/
  4575: dec ecx  /*manual*/
  4576: push r8  /*manual*/
  4577: not rbp  /*manual*/
  4578: cdq   /*manual*/
  4579: dword ptr [rsp+rbp*8-0x298] ^= esi
  4580: or ecx ,ebx  /*manual*/
  4581: dec ax  /*manual*/
  4582: pop r8  /*manual*/
  4583: push rbp  /*manual*/
  4584: bswap rbp  /*manual*/
  4585: ecx ^= dword ptr [rsp+rbx*1]
  4586: movsxd rsi ,esi  /*manual*/
  4587: dword ptr [rsp+rbx*1-0x1] += edx
  4588: ror bp ,0xcb  /*manual*/
  4589: jns 0x5d8dcd60f2c8  /*manual*/
  4590: adc r10 ,rsi  /*manual*/
  4591: or dil ,byte ptr [r11+rbx*8-0x4]  /*manual*/
  4592: sar dx ,0x67  /*manual*/
  4593: sar rbx ,0xab  /*manual*/
  4594: cdq   /*manual*/
  4595: lea r11 ,ptr [r11+rbx*1+0x5]  /*manual*/
  4596: dil ^= r8b
  4597: data16 cbw  /*manual*/
  4598: xadd byte ptr [rsp+rbx*1+0x4] ,dl  /*manual*/
  4599: qword ptr [rsp+rbx*8] += 0xffffffffe7a4b8de
  4600: dil ^= 0x47
  4601: rol dl ,0x27  /*manual*/
  4602: bts ecx ,0x8  /*manual*/
  4603: inc dil  /*manual*/
  4604: pop rsi  /*manual*/
  4605: rol dil ,0x1  /*manual*/
  4606: and bp ,bp  /*manual*/
  4607: shl rbp ,cl  /*manual*/
  4608: or rcx ,rax  /*manual*/
  4609: neg dil  /*manual*/
  4610: not eax  /*manual*/
  4611: r8b ^= dil
  4612: dec rbp  /*manual*/
  4613: rdi += rsp
  4614: shl ax ,0x8d  /*manual*/
  4615: eax = dword ptr [rdi+rbx*1]
  4616: xadd dl ,bpl  /*manual*/
  4617: movsx edi ,cl  /*manual*/
  4618: call 0x5d8dcd58031f
  4619: dword ptr [r9+rbp*1+0x104] = eax
  4620: btc edi ,ebp  /*manual*/
  4621: lea r9 ,ptr [r9+rbp*1+0x104]  /*manual*/
  4622: xchg ebp ,esi  /*manual*/
  4623: qword ptr [rsp+rbx*2] = r10
  4624: return
  4625: ecx = 0xa3ccd63
  4626: esi = dword ptr [r9+rcx*8-0x51e66b18]
  4627: edi = dword ptr [r9+rcx*8-0x51e66b14]
  4628: edx = 0x57bb3792
  4629: and esi ,edi  /*manual*/
  4630: shl dx ,cl  /*manual*/
  4631: not esi  /*manual*/
  4632: dword ptr [r9+rcx*2-0x14799ac2] = esi
  4633: lea rbx ,ptr [rcx+rcx*8-0x1340d4dd]  /*manual*/
  4634: movzx esi ,dl  /*manual*/
  4635: ebx = dword ptr [r11+rcx*4-0x28f3358c]
  4636: eax = 0xf11c7e7f
  4637: ebp = 0x55023a4a
  4638: ebx ^= r8d
  4639: bts cx ,bp  /*manual*/
  4640: rol bp ,cl  /*manual*/
  4641: rol ebx ,0x1  /*manual*/
  4642: not ebx  /*manual*/
  4643: shl ecx ,cl  /*manual*/
  4644: bswap ebx  /*manual*/
  4645: dl ^= 0x88
  4646: sbb rsi ,rcx  /*manual*/
  4647: xchg edx ,eax  /*manual*/
  4648: lea ebx ,ptr [rsi+rbx*1+0x626bc749]  /*manual*/
  4649: rol ebx ,0x3  /*manual*/
  4650: xchg rbp ,rax  /*manual*/
  4651: push rax  /*manual*/
  4652: push rdx  /*manual*/
  4653: qword ptr [rsp+rcx*1-0x51e66b10] = r8
  4654: call 0x5d8dcd6db466
  4655: dword ptr [rsp+rcx*1-0x51e66b08] ^= ebx
  4656: dx -= si
  4657: qword ptr [rsp+rsi*1+0x51e66a88] = rsi
  4658: and edx ,0xc3213b3d  /*manual*/
  4659: r8 = qword ptr [rsp+rcx*1-0x51e66b08]
  4660: movsxd rbx ,ebx  /*manual*/
  4661: not bp  /*manual*/
  4662: shl bp ,0xcd  /*manual*/
  4663: adc r10 ,rbx  /*manual*/
  4664: call 0x5d8dcd5a4bd3
  4665: sar sil ,0xc2  /*manual*/
  4666: movzx edi ,word ptr [rcx+r11*1-0x51e66b14]  /*manual*/
  4667: dword ptr [rsp+rsi*1+0x51e66af2] -= 0x891a33
  4668: cdq   /*manual*/
  4669: di ^= r8w
  4670: xchg ebp ,ecx  /*manual*/
  4671: data16 cbw  /*manual*/
  4672: and dx ,0xa0cc  /*manual*/
  4673: rol di ,0x1  /*manual*/
  4674: rol cl ,0xe5  /*manual*/
  4675: not rcx  /*manual*/
  4676: sar qword ptr [rsp+rdx*1+0x10] ,0xb7  /*manual*/
  4677: inc di  /*manual*/
  4678: cwde   /*manual*/
  4679: di ^= 0xc1b9
  4680: neg ebp  /*manual*/
  4681: qword ptr [rsp+rcx*1+0x57bbe019] = rax
  4682: ror di ,0x1  /*manual*/
  4683: data16 cwd  /*manual*/
  4684: rdx += 0x43a28efc
  4685: data16 cbw  /*manual*/
  4686: inc di  /*manual*/
  4687: dec dword ptr [rsp+rcx*1+0x57bbe01b]  /*manual*/
  4688: r8w ^= di
  4689: qword ptr [rcx+r9*1+0x57bbdffd] = rdi
  4690: xadd rcx ,rbp  /*manual*/
  4691: sar dword ptr [rsp+rcx*1-0x565db4df] ,0x43  /*manual*/
  4692: movzx ecx ,byte ptr [rsi+r11*1+0x51e66ae8]  /*manual*/
  4693: adc ebp ,0xc036fb9e  /*manual*/
  4694: lea r11 ,ptr [rdx+r11*1-0x43a28ef5]  /*manual*/
  4695: cl ^= r8b
  4696: shl bpl ,0xe7  /*manual*/
  4697: ebx = ebp
  4698: cl ^= 0xd4
  4699: not dx  /*manual*/
  4700: byte ptr [rsp+rax*1-0x35] = sil
  4701: push rsi  /*manual*/
  4702: rol cl ,0x1  /*manual*/
  4703: call 0x5d8dcd5c7f68
  4704: shl eax ,0x3f  /*manual*/
  4705: neg cl  /*manual*/
  4706: neg qword ptr [rsp+rsi*1+0x51e66aea]  /*manual*/
  4707: sbb cl ,0x20  /*manual*/
  4708: cqo   /*manual*/
  4709: ror cl ,0x1  /*manual*/
  4710: r8b ^= cl
  4711: bts rdx ,rbp  /*manual*/
  4712: and al ,al  /*manual*/
  4713: byte ptr [rsp+rdx*2+0xa] = bpl
  4714: lea rcx ,ptr [rsp+rcx*1+0x30]  /*manual*/
  4715: jns 0x5d8dcd577c2b  /*manual*/
  4716: call 0x5d8dcd614040
  4717: dec rax  /*manual*/
  4718: rsi = qword ptr [rcx+rdx*4-0x4]
  4719: qword ptr [r9+rdx*2-0xe] = rsi
  4720: lea r9 ,ptr [rdx+r9*1-0xd]  /*manual*/
  4721: pop rsi  /*manual*/
  4722: word ptr [rsp+rdx*4+0x1f] += 0xd791
  4723: pop rbp  /*manual*/
  4724: pop rbp  /*manual*/
  4725: pop rbp  /*manual*/
  4726: pop rdi  /*manual*/
  4727: pop rdi  /*manual*/
  4728: pop rax  /*manual*/
  4729: jnbe 0x5d8dcd50cbc3  /*manual*/
  4730: edx = 0x17ac3ca4
  4731: lea rdx ,ptr [rsp+rdx*1-0x17ac3abc]  /*manual*/
  4732: call 0x5d8dcd5bd3dc
  4733: cmp r9 ,rdx  /*manual*/
  4734: call 0x5d8dcd5744a0
  4735: call 0x5d8dcd5d2928
  4736: lea rsp ,ptr [rsp+0x18]  /*manual*/
  4737: jnbe 0x5d8dcd63900c  /*manual*/
  4738: push 0x6c087856  /*manual*/
  4739: jmp 0x5d8dcd5cdbbe  /*manual*/
  4740: lea rsp ,ptr [rsp+0x8]  /*manual*/
  4741: jmp r10  /*manual*/
  4742: ebp = 0xeb5d2f7
  4743: edx = dword ptr [r11+rbp*2-0x1d6ba5ee]
  4744: edx ^= r8d
  4745: lea rbp ,ptr [rbp+0x59aa9889]  /*manual*/
  4746: lea edx ,ptr [rbp+rdx*1-0x60c09531]  /*manual*/
  4747: esi = ebp
  4748: movzx ecx ,bp  /*manual*/
  4749: lea rdi ,ptr [rcx-0x57579273]  /*manual*/
  4750: edx ^= 0x110ebd51
  4751: not di  /*manual*/
  4752: lea edx ,ptr [rdx+rdi*2-0xe5ca156]  /*manual*/
  4753: movzx eax ,bp  /*manual*/
  4754: cx -= bp
  4755: rol edx ,0x2  /*manual*/
  4756: lea edx ,ptr [rdx+rbp*2-0x730f014f]  /*manual*/
  4757: ebx = esi
  4758: rol edx ,0x1  /*manual*/
  4759: and dil ,cl  /*manual*/
  4760: push r8  /*manual*/
  4761: xadd dil ,bpl  /*manual*/
  4762: dword ptr [rsp+rsi*1-0x68606b80] ^= edx
  4763: movzx r8d ,bx  /*manual*/
  4764: push rdi  /*manual*/
  4765: bts rax ,0xef  /*manual*/
  4766: r8 = qword ptr [rsp+rcx*1+0x8]
  4767: jnb 0x5d8dcd59c356  /*manual*/
  4768: qword ptr [rsp+rsi*1-0x68606b78] = rax
  4769: bpl -= byte ptr [rsp+rcx*4+0x7]
  4770: movsxd rdx ,edx  /*manual*/
  4771: r10 += rdx
  4772: dec byte ptr [rsp+rsi*1-0x68606b72]  /*manual*/
  4773: rbx = qword ptr [r9+rcx*1]
  4774: shl eax ,0x7  /*manual*/
  4775: or byte ptr [rsp+rbp*1-0x68606aff] ,0x28  /*manual*/
  4776: shl qword ptr [rsp+rbp*1-0x68606afa] ,0xf2  /*manual*/
  4777: rbp = qword ptr [rbp+r9*1-0x68606af9]
  4778: jp 0x5d8dcd65a155  /*manual*/
  4779: adc rbx ,rbp  /*manual*/
  4780: cqo   /*manual*/
  4781: rdi = rbx
  4782: pop rcx  /*manual*/
  4783: ebp = dword ptr [rsp+rax*2-0x6b7ffc]
  4784: bswap rsi  /*manual*/
  4785: edx += dword ptr [rdi+rax*2-0x6b8000]
  4786: cwde   /*manual*/
  4787: dword ptr [r9+rbp*2-0x7f7f4] = edx
  4788: neg word ptr [rsp+rbp*1-0x3fbfd]  /*manual*/
  4789: qword ptr [rsp+rbp*1-0x3fc00] -= rbp
  4790: movzx ecx ,byte ptr [r11+rbp*2-0x7f7fc]  /*manual*/
  4791: movsx edx ,word ptr [rsp+rbp*8-0x1fdffe]  /*manual*/
  4792: lea r11 ,ptr [r11+rbp*1-0x3fbfb]  /*manual*/
  4793: and ebp ,0x98a5daf1  /*manual*/
  4794: inc dl  /*manual*/
  4795: cl ^= r8b
  4796: rol cl ,0x1  /*manual*/
  4797: shl dx ,0xa  /*manual*/
  4798: pop rbx  /*manual*/
  4799: cl ^= 0x16
  4800: inc eax  /*manual*/
  4801: movsx edi ,bx  /*manual*/
  4802: neg rax  /*manual*/
  4803: ror cl ,0x1  /*manual*/
  4804: not rbp  /*manual*/
  4805: cl -= al
  4806: shl al ,0x86  /*manual*/
  4807: rol bl ,0xa6  /*manual*/
  4808: r8b ^= cl
  4809: jmp 0x5d8dcd58716f  /*manual*/
  4810: rcx += rsp
  4811: sar esi ,0xc9  /*manual*/
  4812: not esi  /*manual*/
  4813: bts edi ,0xb5  /*manual*/
  4814: edi = dword ptr [rcx+rbp*1+0x1d801]
  4815: shl bx ,0x89  /*manual*/
  4816: cdqe   /*manual*/
  4817: bx += 0xe8f5
  4818: dword ptr [rax+r9*1-0x3fb8] = edi
  4819: lea r9 ,ptr [r9+rax*2-0x7f78]  /*manual*/
  4820: bt rbx ,0xc3  /*manual*/
  4821: setnb bpl  /*manual*/
  4822: jmp r10  /*manual*/
  4823: esi = 0xc16baf4
  4824: movzx edi ,si  /*manual*/
  4825: movzx ecx ,di  /*manual*/
  4826: movzx esi ,byte ptr [r11+rsi*1-0xc16baf4]  /*manual*/
  4827: movzx ebx ,di  /*manual*/
  4828: dec bx  /*manual*/
  4829: jnz 0x5d8dcd57d7fd  /*manual*/
  4830: sil ^= r8b
  4831: edx = ecx
  4832: shr edi ,cl  /*manual*/
  4833: dec sil  /*manual*/
  4834: call 0x5d8dcd593b4d
  4835: pop rbp  /*manual*/
  4836: not sil  /*manual*/
  4837: sil -= 0x33
  4838: inc ebx  /*manual*/
  4839: shl cl ,0x64  /*manual*/
  4840: ror sil ,0x1  /*manual*/
  4841: movsx ebp ,bl  /*manual*/
  4842: shl edi ,0xe2  /*manual*/
  4843: adc sil ,0x9d  /*manual*/
  4844: xadd bx ,dx  /*manual*/
  4845: r8b ^= sil
  4846: lea rbp ,ptr [rbx+rbx*4-0x72d0eb53]  /*manual*/
  4847: btr di ,0xe2  /*manual*/
  4848: movzx eax ,bx  /*manual*/
  4849: adc rsi ,rsp  /*manual*/
  4850: inc cl  /*manual*/
  4851: shl edi ,0xc3  /*manual*/
  4852: ebx = dword ptr [rdi+rsi*1]
  4853: call 0x5d8dcd58f1ee
  4854: qword ptr [rsp+rdi*4] = rbp
  4855: esi = ecx
  4856: dword ptr [rdi+r9*1-0x4] = ebx
  4857: eax = dword ptr [r11+rdi*1+0x1]
  4858: lea r11 ,ptr [r11+rdi*8+0x5]  /*manual*/
  4859: eax ^= r8d
  4860: xchg bpl ,cl  /*manual*/
  4861: push rdi  /*manual*/
  4862: jmp 0x5d8dcd621e33  /*manual*/
  4863: bswap eax  /*manual*/
  4864: sar dword ptr [rsp+rdi*1+0x6] ,0x5c  /*manual*/
  4865: lea eax ,ptr [rax+rdi*1+0x25888e4d]  /*manual*/
  4866: xchg byte ptr [rsp+rdi*1+0x3] ,sil  /*manual*/
  4867: ror eax ,0x2  /*manual*/
  4868: shr bp ,0x66  /*manual*/
  4869: movsx ebx ,si  /*manual*/
  4870: jnp 0x5d8dcd6374e5  /*manual*/
  4871: lea eax ,ptr [rax+rbp*2+0x4f9a82e2]  /*manual*/
  4872: dx -= word ptr [rsp+rdi*4+0x6]
  4873: seto sil  /*manual*/
  4874: qword ptr [rsp+rdi*1+0x8] = r8
  4875: push rbx  /*manual*/
  4876: bp ^= si
  4877: dword ptr [rsp+rdi*2+0x10] ^= eax
  4878: lea rbp ,ptr [rdx+rdx*2+0x782c53f4]  /*manual*/
  4879: r8 = qword ptr [rsp+rdi*4+0x10]
  4880: and bp ,0x572  /*manual*/
  4881: dec word ptr [rsp+rdi*4+0xa]  /*manual*/
  4882: movsxd rax ,eax  /*manual*/
  4883: bpl -= 0x5c
  4884: shl sil ,0x84  /*manual*/
  4885: shr dl ,0x64  /*manual*/
  4886: r10 += rax
  4887: btr ecx ,0x10  /*manual*/
  4888: qword ptr [rsp+rdi*1+0x10] = rbx
  4889: ecx = dword ptr [r9+rdi*1-0x4]
  4890: sbb bp ,dx  /*manual*/
  4891: lea rdx ,ptr [rbp+rbx*8+0x3e897b09]  /*manual*/
  4892: sar word ptr [rsp+rdi*2+0x9] ,0x2b  /*manual*/
  4893: ebp = dword ptr [r9+rsi*2-0x17400]
  4894: dl += dh
  4895: adc rbx ,qword ptr [rsp+rdi*4+0x10]  /*manual*/
  4896: or ecx ,ebp  /*manual*/
  4897: bts dx ,0xdc  /*manual*/
  4898: jb 0x5d8dcd6821e4  /*manual*/
  4899: not ecx  /*manual*/
  4900: shl ebx ,0x16  /*manual*/
  4901: adc edi ,0x67158647  /*manual*/
  4902: or bl ,sil  /*manual*/
  4903: dword ptr [rdi+r9*1-0x67158648] = ecx
  4904: qword ptr [rsp+rsi*2-0x17400] = r10
  4905: return
  4906: edi = 0xc435a7c9
  4907: rol di ,0x48  /*manual*/
  4908: eax = dword ptr [r11]
  4909: lea rcx ,ptr [rdi*2-0x1c7c7b3e]  /*manual*/
  4910: edi -= 0xc639c478
  4911: edx = 0xd7b2535d
  4912: sbb r11 ,0xfffffffffffffffb  /*manual*/
  4913: ebp = ecx
  4914: push rdi  /*manual*/
  4915: and word ptr [rsp+rbp*1-0x6bef180b] ,bp  /*manual*/
  4916: eax ^= r8d
  4917: btr edx ,edx  /*manual*/
  4918: or di ,cx  /*manual*/
  4919: push rcx  /*manual*/
  4920: neg eax  /*manual*/
  4921: sar dword ptr [rsp+rbp*1-0x6bef180c] ,0x57  /*manual*/
  4922: bswap rbp  /*manual*/
  4923: inc eax  /*manual*/
  4924: neg byte ptr [rsp+0xd]  /*manual*/
  4925: ror edi ,0x92  /*manual*/
  4926: bswap eax  /*manual*/
  4927: lea rsi ,ptr [rdx+rbp*8+0xf2978bb]  /*manual*/
  4928: qword ptr [rsp+rdi*1-0x74fff77] = 0xfffffffff0363039
  4929: call 0x5d8dcd4f0daf
  4930: lea eax ,ptr [rax+rdi*1-0x2a8ed988]  /*manual*/
  4931: sar dword ptr [rsp+rdi*1-0x74fff6c] ,0xef  /*manual*/
  4932: qword ptr [rsp+rdi*8-0x3a7ffbe8] = r8
  4933: shl byte ptr [rsp+rdi*4-0x1d3ffdf0] ,0x83  /*manual*/
  4934: pop rsi  /*manual*/
  4935: adc dil ,cl  /*manual*/
  4936: dword ptr [rsp+rdi*2-0xe9fff16] ^= eax
  4937: qword ptr [rsp+rdi*1-0x74fff8f] ^= 0xffffffffec0d17c2
  4938: inc qword ptr [rsp+rdi*1-0x74fff8f]  /*manual*/
  4939: r8 = qword ptr [rsp+rdi*1-0x74fff87]
  4940: and di ,cx  /*manual*/
  4941: jnz 0x5d8dcd501d83  /*manual*/
  4942: qword ptr [rsp+rdi*1-0x74f17f8] = rcx
  4943: movsxd rax ,eax  /*manual*/
  4944: adc r10 ,rax  /*manual*/
  4945: bts rdx ,rdx  /*manual*/
  4946: movzx eax ,word ptr [rsp+rdi*1-0x74f1800]  /*manual*/
  4947: edi = dword ptr [r9+rdi*2-0xe9e3000]
  4948: edx = dword ptr [r9+rax*2-0x1fa2]
  4949: not edi  /*manual*/
  4950: not bp  /*manual*/
  4951: not edx  /*manual*/
  4952: or cl ,bpl  /*manual*/
  4953: or edi ,edx  /*manual*/
  4954: and rcx ,0x20efe4a  /*manual*/
  4955: cqo   /*manual*/
  4956: word ptr [rsp+rcx*1-0x20e1840] -= dx
  4957: ebx = edi
  4958: setbe al  /*manual*/
  4959: push rcx  /*manual*/
  4960: ecx = dword ptr [r9+rcx*1-0x20e1842]
  4961: jnb 0x5d8dcd54a050  /*manual*/
  4962: and ebx ,ecx  /*manual*/
  4963: ax ^= ax
  4964: word ptr [rsp+rax*2+0x9] ^= dx
  4965: sbb word ptr [rsp+rax*4+0x1] ,0xaef9  /*manual*/
  4966: not ebx  /*manual*/
  4967: dword ptr [r9+rax*1+0x8] = ebx
  4968: lea r9 ,ptr [r9+rax*1+0x8]  /*manual*/
  4969: bpl -= 0x9a
  4970: qword ptr [rsp+rax*2] = r10
  4971: return
  4972: ecx = 0xf1ae002e
  4973: ecx = dword ptr [r9]
  4974: r9 -= 0xfffffffffffffffc
  4975: movzx ebx ,byte ptr [r11]  /*manual*/
  4976: eax = 0xb49be094
  4977: ebp = 0x2e2ae307
  4978: call 0x5d8dcd6e9752
  4979: bl ^= r8b
  4980: esi = eax
  4981: push rbp  /*manual*/
  4982: bl -= 0xe4
  4983: bl ^= 0xde
  4984: sar esi ,0xa1  /*manual*/
  4985: not bl  /*manual*/
  4986: movzx edx ,bpl  /*manual*/
  4987: qword ptr [rsp+rdx*2-0x6] = 0xffffffffb01d4cf8
  4988: adc bl ,0x19  /*manual*/
  4989: lea rbp ,ptr [rbp*4+0x3cb75640]  /*manual*/
  4990: movsx edi ,word ptr [rsp+rdx*1+0x1]  /*manual*/
  4991: ror byte ptr [rsp+rdx*2-0xa] ,0x4  /*manual*/
  4992: ror bl ,0x1  /*manual*/
  4993: shl dl ,0x87  /*manual*/
  4994: rsi -= rdx
  4995: neg bl  /*manual*/
  4996: xchg rdx ,rbp  /*manual*/
  4997: push rbp  /*manual*/
  4998: bl -= 0xb9
  4999: xchg byte ptr [rsp+rbp*1-0x6e] ,ah  /*manual*/
  5000: shl ax ,0xc5  /*manual*/
  5001: sar ax ,0xea  /*manual*/
  5002: r8b ^= bl
  5003: bts rsi ,0xb0  /*manual*/
  5004: ebp += edx
  5005: lea rbx ,ptr [rsp+rbx*1+0x18]  /*manual*/
  5006: rdx += qword ptr [rsp+rdi*4-0x133d3]
  5007: shl rdi ,0xa7  /*manual*/
  5008: dword ptr [rbx] = ecx
  5009: bt dx ,si  /*manual*/
  5010: edi += dword ptr [r11+0x1]
  5011: data16 cwd  /*manual*/
  5012: sar al ,0x42  /*manual*/
  5013: setnp byte ptr [rsp+0x13]  /*manual*/
  5014: edi ^= r8d
  5015: ebx = esi
  5016: pop rbx  /*manual*/
  5017: push rdx  /*manual*/
  5018: ror edi ,0x3  /*manual*/
  5019: ecx = ebx
  5020: dec edi  /*manual*/
  5021: bt rsi ,rsi  /*manual*/
  5022: bswap edi  /*manual*/
  5023: call 0x5d8dcd687528
  5024: inc ax  /*manual*/
  5025: btc dx ,dx  /*manual*/
  5026: dec edi  /*manual*/
  5027: qword ptr [rsp+rbx*1-0x80] = 0xffffffff9926e64e
  5028: shl rbx ,0x61  /*manual*/
  5029: bx += 0x154e
  5030: bswap edi  /*manual*/
  5031: ror bp ,0x9  /*manual*/
  5032: shr ecx ,0xf7  /*manual*/
  5033: neg edi  /*manual*/
  5034: qword ptr [rsp+rcx*8+0x18] = r8
  5035: lea r8 ,ptr [rdx*8+0x48973fc3]  /*manual*/
  5036: dword ptr [rsp+rcx*2+0x18] ^= edi
  5037: not ebp  /*manual*/
  5038: shl dword ptr [rsp+rbp*4-0x2a764638] ,0x5f  /*manual*/
  5039: xadd byte ptr [rsp+rbp*4-0x2a764622] ,dl  /*manual*/
  5040: r8 = qword ptr [rsp+rbp*1-0xa9d9176]
  5041: qword ptr [rsp+rbp*1-0xa9d9176] = 0x7a56b1b
  5042: cx += 0x9808
  5043: rcx -= rbx
  5044: movsxd rdi ,edi  /*manual*/
  5045: pop rdx  /*manual*/
  5046: data16 cbw  /*manual*/
  5047: data16 cbw  /*manual*/
  5048: r10 += rdi
  5049: lea rsi ,ptr [rsp+rbp*1-0xa9d913e]  /*manual*/
  5050: btc rbx ,0xe7  /*manual*/
  5051: rol qword ptr [rsp+rbp*1-0xa9d917e] ,cl  /*manual*/
  5052: eax = dword ptr [rbp+rsi*1-0xa9d918e]
  5053: dword ptr [rsp+rbp*1-0xa9d9186] -= edx
  5054: dec bl  /*manual*/
  5055: ror byte ptr [rsp+rbp*2-0x153b2313] ,0xa6  /*manual*/
  5056: movzx ebp ,byte ptr [r11+rbp*1-0xa9d9189]  /*manual*/
  5057: bswap rdx  /*manual*/
  5058: bts bx ,0x8b  /*manual*/
  5059: sbb r11 ,0xfffffffffffffffa  /*manual*/
  5060: bpl ^= r8b
  5061: ror byte ptr [rsp+0xc] ,0x6  /*manual*/
  5062: rol bpl ,0x1  /*manual*/
  5063: push rcx  /*manual*/
  5064: bpl -= 0xa7
  5065: call 0x5d8dcd6a8a36
  5066: bts rcx ,rbx  /*manual*/
  5067: rol bpl ,0x1  /*manual*/
  5068: movzx esi ,byte ptr [rsp+0xe]  /*manual*/
  5069: sar byte ptr [rsp+rsi*1-0xe0] ,0xe6  /*manual*/
  5070: adc bpl ,dl  /*manual*/
  5071: not rdx  /*manual*/
  5072: r8b ^= bpl
  5073: lea rbp ,ptr [rsp+rbp*1+0x28]  /*manual*/
  5074: qword ptr [rsp+rsi*1-0xff] = rcx
  5075: dec rdx  /*manual*/
  5076: dword ptr [rbp+rsi*1-0xff] = eax
  5077: jle 0x5d8dcd513155  /*manual*/
  5078: movzx eax ,byte ptr [rsp+rsi*2-0x1db]  /*manual*/
  5079: qword ptr [rsp+rsi*2-0x1fe] = r10
  5080: return
  5081: ebp = 0xe53a7a8c
  5082: jmp 0x5d8dcd4feaec  /*manual*/
  5083: movzx edx ,byte ptr [r11]  /*manual*/
  5084: dec bp  /*manual*/
  5085: dl ^= r8b
  5086: ebx = ebp
  5087: push rbx  /*manual*/
  5088: btc rbp ,rbx  /*manual*/
  5089: inc dl  /*manual*/
  5090: word ptr [rsp+0x3] ^= bx
  5091: lea rbp ,ptr [rbp*8+0x3d3b3857]  /*manual*/
  5092: ecx = ebx
  5093: not dl  /*manual*/
  5094: byte ptr [rsp+0x3] -= bpl
  5095: ror dword ptr [rsp] ,0xf0  /*manual*/
  5096: sbb dl ,0x6c  /*manual*/
  5097: movzx esi ,bp  /*manual*/
  5098: push rbp  /*manual*/
  5099: xchg qword ptr [rsp+rsi*8-0x66570] ,rbx  /*manual*/
  5100: not dl  /*manual*/
  5101: jmp 0x5d8dcd6b3f2b  /*manual*/
  5102: bx += 0x4ab3
  5103: r8b ^= dl
  5104: push rbx  /*manual*/
  5105: or esi ,0x7820fe52  /*manual*/
  5106: dword ptr [r9+rsi*1-0x7820ff03] = edx
  5107: jno 0x5d8dcd4f0cba  /*manual*/
  5108: lea rdx ,ptr [rsp+rsi*1-0x7820fe87]  /*manual*/
  5109: xadd bl ,cl  /*manual*/
  5110: lea rdi ,ptr [rbp*8+0x1d895484]  /*manual*/
  5111: ror rbx ,0x29  /*manual*/
  5112: ebp = dword ptr [rdx+rsi*1-0x7820feff]
  5113: eax = ebx
  5114: cmovs eax ,ecx  /*manual*/
  5115: dword ptr [rsi+r9*1-0x7820ff07] = ebp
  5116: sbb bl ,ch  /*manual*/
  5117: not edi  /*manual*/
  5118: bl += 0xe0
  5119: eax = dword ptr [rsi+r11*1-0x7820fefe]
  5120: qword ptr [rsp+rsi*1-0x7820fef4] = rbx
  5121: movsx edx ,sil  /*manual*/
  5122: eax ^= r8d
  5123: and ebx ,edi  /*manual*/
  5124: sets dil  /*manual*/
  5125: rol eax ,0x1  /*manual*/
  5126: lea rbp ,ptr [rsi+rcx*1-0x7e443b2d]  /*manual*/
  5127: dec rcx  /*manual*/
  5128: bt rbp ,rcx  /*manual*/
  5129: eax ^= edx
  5130: sar bpl ,0xe4  /*manual*/
  5131: js 0x5d8dcd5f341b  /*manual*/
  5132: bswap eax  /*manual*/
  5133: lea eax ,ptr [rax+rsi*1-0x679ba23e]  /*manual*/
  5134: shl qword ptr [rsp+rsi*1-0x7820feff] ,0x87  /*manual*/
  5135: rol eax ,0x3  /*manual*/
  5136: dl -= byte ptr [rsp+rsi*1-0x7820fee8]
  5137: dil += 0x64
  5138: qword ptr [rsp+rsi*1-0x7820feef] = r8
  5139: dword ptr [rsp+rsi*1-0x7820feef] ^= eax
  5140: sar dword ptr [rsp+rsi*1-0x7820fef9] ,cl  /*manual*/
  5141: movzx r8d ,cl  /*manual*/
  5142: r8 = qword ptr [rsp+rsi*1-0x7820feef]
  5143: jns 0x5d8dcd6b06ab  /*manual*/
  5144: movsxd rax ,eax  /*manual*/
  5145: inc rbp  /*manual*/
  5146: push rdx  /*manual*/
  5147: adc r10 ,rax  /*manual*/
  5148: bt ebx ,0x63  /*manual*/
  5149: movzx ebx ,word ptr [r11+rsi*1-0x7820fefa]  /*manual*/
  5150: lea r11 ,ptr [r11+rsi*1-0x7820fef8]  /*manual*/
  5151: movzx eax ,bp  /*manual*/
  5152: and word ptr [rsp+rsi*1-0x7820fef0] ,di  /*manual*/
  5153: bx ^= r8w
  5154: and ecx ,eax  /*manual*/
  5155: btr rax ,0xc  /*manual*/
  5156: rol bx ,0x1  /*manual*/
  5157: shl word ptr [rsp+rcx*1-0x3add] ,cl  /*manual*/
  5158: lea rdx ,ptr [rdi+rcx*1-0x72c8c5e8]  /*manual*/
  5159: inc bx  /*manual*/
  5160: ror si ,cl  /*manual*/
  5161: shr rsi ,cl  /*manual*/
  5162: btr rdx ,0x48  /*manual*/
  5163: neg bx  /*manual*/
  5164: and dword ptr [rsp+rcx*1-0x3ae7] ,0x13111567  /*manual*/
  5165: rol bx ,0x1  /*manual*/
  5166: jmp 0x5d8dcd5fc8cf  /*manual*/
  5167: r8w ^= bx
  5168: pop rcx  /*manual*/
  5169: qword ptr [r9+rsi*1-0x10] = rbx
  5170: push rax  /*manual*/
  5171: push rax  /*manual*/
  5172: cdqe   /*manual*/
  5173: lea r9 ,ptr [r9+rsi*8-0x10]  /*manual*/
  5174: pop rcx  /*manual*/
  5175: pop rdi  /*manual*/
  5176: pop rdx  /*manual*/
  5177: pop rbx  /*manual*/
  5178: pop rdx  /*manual*/
  5179: jmp 0x5d8dcd50cbc3  /*manual*/
  5180: edx = 0x17ac3ca4
  5181: lea rdx ,ptr [rsp+rdx*1-0x17ac3abc]  /*manual*/
  5182: call 0x5d8dcd5bd3dc
  5183: cmp r9 ,rdx  /*manual*/
  5184: call 0x5d8dcd5744a0
  5185: call 0x5d8dcd5d2928
  5186: lea rsp ,ptr [rsp+0x18]  /*manual*/
  5187: jnbe 0x5d8dcd63900c  /*manual*/
  5188: push 0x6c087856  /*manual*/
  5189: jmp 0x5d8dcd5cdbbe  /*manual*/
  5190: lea rsp ,ptr [rsp+0x8]  /*manual*/
  5191: jmp r10  /*manual*/
  5192: edi = 0xfb91ed47
  5193: movzx esi ,byte ptr [r11]  /*manual*/
  5194: jmp 0x5d8dcd524f3c  /*manual*/
  5195: movsx ebp ,dil  /*manual*/
  5196: lea r11 ,ptr [r11+rbp*2-0x8d]  /*manual*/
  5197: sil ^= r8b
  5198: sil -= 0x22
  5199: lea rdx ,ptr [rdi+rbp*4+0x10326583]  /*manual*/
  5200: lea rbx ,ptr [rbp+0x49290b2a]  /*manual*/
  5201: sil ^= 0xe0
  5202: sil -= 0xbd
  5203: sil ^= 0x64
  5204: r8b ^= sil
  5205: btr rdx ,rdi  /*manual*/
  5206: ecx = ebp
  5207: rsi += rsp
  5208: xadd rbp ,rdi  /*manual*/
  5209: shr rdi ,0x5c  /*manual*/
  5210: rdx = qword ptr [rdi+rsi*1]
  5211: adc edi ,0x718e118a  /*manual*/
  5212: shr rbp ,cl  /*manual*/
  5213: rol bx ,cl  /*manual*/
  5214: lea r9 ,ptr [rdi+r9*1-0x718e1192]  /*manual*/
  5215: qword ptr [r9+rbp*4-0x7dc8f6c] = rdx
  5216: movzx eax ,cl  /*manual*/
  5217: jb 0x5d8dcd5b9065  /*manual*/
  5218: ebx = dword ptr [rbp+r11*1-0x1f723db]
  5219: call 0x5d8dcd584e8b
  5220: pop rdi  /*manual*/
  5221: lea r11 ,ptr [r11+rbp*4-0x7dc8f68]  /*manual*/
  5222: movzx edx ,bpl  /*manual*/
  5223: or cl ,0x76  /*manual*/
  5224: ebx ^= r8d
  5225: call 0x5d8dcd568816
  5226: pop rbp  /*manual*/
  5227: rbp += 0x111cc5
  5228: jmp rbp  /*manual*/
  5229: rol edx ,cl  /*manual*/
  5230: neg ebx  /*manual*/
  5231: jmp 0x5d8dcd58d229  /*manual*/
  5232: movzx ebp ,al  /*manual*/
  5233: shl ecx ,0xc3  /*manual*/
  5234: ror ebx ,0x2  /*manual*/
  5235: ebx ^= 0x8291848
  5236: lea rdi ,ptr [rax*2+0x7a1d412a]  /*manual*/
  5237: movzx esi ,ax  /*manual*/
  5238: not bp  /*manual*/
  5239: lea ebx ,ptr [rbx+rcx*1-0x348a3b03]  /*manual*/
  5240: edi -= 0xbea75476
  5241: ror ebx ,0x2  /*manual*/
  5242: data16 cwd  /*manual*/
  5243: lea rbp ,ptr [rdx*2-0x3af0cfe1]  /*manual*/
  5244: xadd rax ,rcx  /*manual*/
  5245: not ebx  /*manual*/
  5246: neg bp  /*manual*/
  5247: xadd ax ,cx  /*manual*/
  5248: push r8  /*manual*/
  5249: jns 0x5d8dcd53f341  /*manual*/
  5250: dword ptr [rsp+rcx*2-0x7fe] ^= ebx
  5251: pop r8  /*manual*/
  5252: or dx ,si  /*manual*/
  5253: movsxd rbx ,ebx  /*manual*/
  5254: adc r10 ,rbx  /*manual*/
  5255: jmp 0x5d8dcd50cbc3  /*manual*/
  5256: edx = 0x17ac3ca4
  5257: lea rdx ,ptr [rsp+rdx*1-0x17ac3abc]  /*manual*/
  5258: call 0x5d8dcd5bd3dc
  5259: cmp r9 ,rdx  /*manual*/
  5260: call 0x5d8dcd5744a0
  5261: call 0x5d8dcd5d2928
  5262: lea rsp ,ptr [rsp+0x18]  /*manual*/
  5263: jnbe 0x5d8dcd63900c  /*manual*/
  5264: push 0x6c087856  /*manual*/
  5265: jmp 0x5d8dcd5cdbbe  /*manual*/
  5266: lea rsp ,ptr [rsp+0x8]  /*manual*/
  5267: jmp r10  /*manual*/
  5268: edx = 0xab1e5a86
  5269: shl edx ,0x78  /*manual*/
  5270: ecx = dword ptr [r11]
  5271: jnz 0x5d8dcd5d1da4  /*manual*/
  5272: eax = edx
  5273: sbb r11 ,0xfffffffffffffffc  /*manual*/
  5274: ecx ^= r8d
  5275: lea rdx ,ptr [rax+rdx*4-0xafad9d6]  /*manual*/
  5276: jmp 0x5d8dcd6c5d40  /*manual*/
  5277: lea ecx ,ptr [rcx+rax*1-0x7e6029b1]  /*manual*/
  5278: ecx ^= 0x110ebd51
  5279: or ax ,ax  /*manual*/
  5280: sbb ecx ,0xbd0c5372  /*manual*/
  5281: sar al ,0xc3  /*manual*/
  5282: movzx ebp ,ax  /*manual*/
  5283: lea rdi ,ptr [rdx+0x41b22b36]  /*manual*/
  5284: rol ecx ,0x2  /*manual*/
  5285: push rbp  /*manual*/
  5286: cdq   /*manual*/
  5287: bts edx ,0xf3  /*manual*/
  5288: lea ecx ,ptr [rax+rcx*1-0x284e2a4f]  /*manual*/
  5289: rol ecx ,0x1  /*manual*/
  5290: rdi -= rax
  5291: adc qword ptr [rsp+rbp*2] ,r8  /*manual*/
  5292: dword ptr [rsp+rbp*2] ^= ecx
  5293: data16 cwd  /*manual*/
  5294: pop r8  /*manual*/
  5295: movsxd rcx ,ecx  /*manual*/
  5296: shl di ,0x4b  /*manual*/
  5297: r10 += rcx
  5298: movsx ecx ,bp  /*manual*/
  5299: rbp += qword ptr [rbp+r9*1]
  5300: rdx += rax
  5301: lea rsi ,ptr [rcx*2+0x388ef977]  /*manual*/
  5302: lea rbx ,ptr [rax+0x19a7ccbf]  /*manual*/
  5303: or rcx ,qword ptr [r9+rcx*2+0x8]  /*manual*/
  5304: rbp += rcx
  5305: ecx = dword ptr [r9+rsi*2-0x711df2de]
  5306: neg dl  /*manual*/
  5307: sbb rdx ,rdi  /*manual*/
  5308: lea r9 ,ptr [r9+rsi*1-0x388ef963]  /*manual*/
  5309: jbe 0x5d8dcd611376  /*manual*/
  5310: xadd si ,di  /*manual*/
  5311: setnz dl  /*manual*/
  5312: dword ptr [rbp+rsi*2-0x711df2ee] = ecx
  5313: jmp r10  /*manual*/
  5314: call 0x5d8dcd65459d
  5315: ecx = dword ptr [r9]
  5316: ebx = 0x21180dbb
  5317: lea rdi ,ptr [rbx+rbx*2+0x512e8359]  /*manual*/
  5318: lea rax ,ptr [rdi+rbx*2-0x74c0d819]  /*manual*/
  5319: movzx ebx ,byte ptr [rbx+r11*1-0x21180dbb]  /*manual*/
  5320: lea rdx ,ptr [rax+0x1789986b]  /*manual*/
  5321: rdi ^= rdx
  5322: qword ptr [rsp+rdi*2-0x5a3249b0] = rdi
  5323: bl ^= r8b
  5324: ror bl ,0x1  /*manual*/
  5325: rol rdi ,0xcf  /*manual*/
  5326: dec dl  /*manual*/
  5327: movzx ebp ,di  /*manual*/
  5328: bl ^= 0x42
  5329: pop rdx  /*manual*/
  5330: ror bl ,0x1  /*manual*/
  5331: not bl  /*manual*/
  5332: movzx esi ,dl  /*manual*/
  5333: r8b ^= bl
  5334: inc rsi  /*manual*/
  5335: cdq   /*manual*/
  5336: lea rbp ,ptr [rsi*4-0x6dd18b09]  /*manual*/
  5337: rbx += rsp
  5338: xchg ebp ,esi  /*manual*/
  5339: not rdi  /*manual*/
  5340: dword ptr [rbp+rbx*1-0xd9] = ecx
  5341: ecx = eax
  5342: eax = dword ptr [r11+rbp*1-0xd8]
  5343: xchg si ,dx  /*manual*/
  5344: neg rdi  /*manual*/
  5345: shl ebp ,cl  /*manual*/
  5346: eax ^= r8d
  5347: not eax  /*manual*/
  5348: btr di ,0x96  /*manual*/
  5349: ror eax ,0x2  /*manual*/
  5350: shl edi ,0xe6  /*manual*/
  5351: inc eax  /*manual*/
  5352: rol eax ,0x1  /*manual*/
  5353: call 0x5d8dcd69de05
  5354: pop rbx  /*manual*/
  5355: rbx += 0x12492
  5356: jmp rbx  /*manual*/
  5357: inc eax  /*manual*/
  5358: jmp 0x5d8dcd6c3972  /*manual*/
  5359: edi += 0x8408760f
  5360: push r8  /*manual*/
  5361: dword ptr [rsp+rdi*2-0x3e10ec9e] ^= eax
  5362: ror dx ,cl  /*manual*/
  5363: pop r8  /*manual*/
  5364: movsxd rax ,eax  /*manual*/
  5365: r10 += rax
  5366: lea rax ,ptr [rsi+rdx*4-0x2c43e62d]  /*manual*/
  5367: movsx ebx ,ax  /*manual*/
  5368: rbp = qword ptr [r11+rdi*1-0x1f08764a]
  5369: lea r11 ,ptr [r11+rdi*4-0x7c21d92f]  /*manual*/
  5370: rbp ^= r8
  5371: dec dil  /*manual*/
  5372: not rbp  /*manual*/
  5373: inc rbp  /*manual*/
  5374: btc ebx ,ecx  /*manual*/
  5375: sar edi ,0x1  /*manual*/
  5376: setnz sil  /*manual*/
  5377: rol rbp ,0x1  /*manual*/
  5378: or ebx ,ecx  /*manual*/
  5379: call 0x5d8dcd6b3164
  5380: qword ptr [rsp+rdi*2-0x1f08764e] = 0x3807c53d
  5381: rbp ^= 0x161421e1
  5382: r8 ^= rbp
  5383: xadd qword ptr [rsp+rdi*2-0x1f08764e] ,rax  /*manual*/
  5384: ror qword ptr [rsp+rdi*1-0xf843b27] ,0x81  /*manual*/
  5385: not word ptr [rsp+rdi*1-0xf843b23]  /*manual*/
  5386: qword ptr [r9+rdi*1-0xf843b2b] = rbp
  5387: lea rdi ,ptr [rsp+rdi*1-0xf843a7f]  /*manual*/
  5388: jz 0x5d8dcd675f47  /*manual*/
  5389: movsx ebp ,al  /*manual*/
  5390: rdx = qword ptr [rdi+rbp*2-0x7a]
  5391: rol ebp ,0xaf  /*manual*/
  5392: lea rdi ,ptr [rbp+rbx*1-0x7cfeab32]  /*manual*/
  5393: neg ax  /*manual*/
  5394: qword ptr [rbp+r9*1-0x1e800c] = rdx
  5395: lea r9 ,ptr [r9+rax*2-0x700e7592]  /*manual*/
  5396: sbb bpl ,byte ptr [rsp+rax*1-0x38073ac3]  /*manual*/
  5397: jp 0x5d8dcd6aad1c  /*manual*/
  5398: pop rbp  /*manual*/
  5399: jb 0x5d8dcd50cbc3  /*manual*/
  5400: edx = 0x17ac3ca4
  5401: lea rdx ,ptr [rsp+rdx*1-0x17ac3abc]  /*manual*/
  5402: call 0x5d8dcd5bd3dc
  5403: cmp r9 ,rdx  /*manual*/
  5404: call 0x5d8dcd5744a0
  5405: call 0x5d8dcd5d2928
  5406: lea rsp ,ptr [rsp+0x18]  /*manual*/
  5407: jnbe 0x5d8dcd63900c  /*manual*/
  5408: push 0x6c087856  /*manual*/
  5409: jmp 0x5d8dcd5cdbbe  /*manual*/
  5410: lea rsp ,ptr [rsp+0x8]  /*manual*/
  5411: jmp r10  /*manual*/
  5412: esi = dword ptr [r11]
  5413: ebx = 0xd99c1dc3
  5414: movzx ecx ,bl  /*manual*/
  5415: esi ^= r8d
  5416: movsx edi ,cl  /*manual*/
  5417: btc ecx ,ecx  /*manual*/
  5418: btr cx ,0xf9  /*manual*/
  5419: lea esi ,ptr [rsi+rcx*1+0x79fd584]  /*manual*/
  5420: esi ^= 0x110ebd51
  5421: lea rdi ,ptr [rdi*2+0x3182657e]  /*manual*/
  5422: lea rax ,ptr [rbx+rbx*1-0x347a9006]  /*manual*/
  5423: xadd rbx ,rcx  /*manual*/
  5424: sbb esi ,0xbd0c5372  /*manual*/
  5425: lea rbx ,ptr [rbx+rax*4-0x26c03d9c]  /*manual*/
  5426: and ebx ,0x252c8b41  /*manual*/
  5427: movsx edx ,al  /*manual*/
  5428: rol esi ,0x2  /*manual*/
  5429: xadd eax ,ecx  /*manual*/
  5430: lea esi ,ptr [rsi+rbx*2+0x13b0c131]  /*manual*/
  5431: jns 0x5d8dcd559ba9  /*manual*/
  5432: call 0x5d8dcd67741d
  5433: rol esi ,0x1  /*manual*/
  5434: eax -= edi
  5435: qword ptr [rsp+rbx*2-0x4a011480] = r8
  5436: call 0x5d8dcd5384c5
  5437: dword ptr [rsp+rbx*2-0x4a011478] ^= esi
  5438: sar bl ,0x61  /*manual*/
  5439: qword ptr [rsp+rax*1-0x26d7643f] = rax
  5440: data16 cbw  /*manual*/
  5441: r8 = qword ptr [rsp+rbx*1-0x25008a18]
  5442: movsxd rsi ,esi  /*manual*/
  5443: adc r10 ,rsi  /*manual*/
  5444: push rdi  /*manual*/
  5445: rbp = qword ptr [r9+rbx*2-0x4a011440]
  5446: bx -= di
  5447: shr qword ptr [rsp+rbx*1-0x25002515] ,0xcb  /*manual*/
  5448: movzx esi ,bx  /*manual*/
  5449: rcx = qword ptr [r9+rax*2-0x4dae0076]
  5450: shl rsi ,0xbe  /*manual*/
  5451: byte ptr [rsp+rax*1-0x26d7003c] -= dil
  5452: adc rbp ,rcx  /*manual*/
  5453: btr edi ,ebx  /*manual*/
  5454: shl rbx ,0xbd  /*manual*/
  5455: ror qword ptr [rsp+rbx*8+0x8] ,0xf9  /*manual*/
  5456: qword ptr [r9+rbx*4+0x8] = rbp
  5457: jp 0x5d8dcd5ae1da  /*manual*/
  5458: or rsi ,qword ptr [r11+rbx*8+0x4]  /*manual*/
  5459: rsi ^= r8
  5460: call 0x5d8dcd5e5451
  5461: qword ptr [rsp+rbx*8] = rbx
  5462: neg rsi  /*manual*/
  5463: cwde   /*manual*/
  5464: bswap rax  /*manual*/
  5465: lea rsi ,ptr [rsi+rbx*8+0x1230cfe3]  /*manual*/
  5466: push rdi  /*manual*/
  5467: qword ptr [rsp+rbx*4+0x20] = 0xffffffff9b3cded4
  5468: rol rsi ,0x5  /*manual*/
  5469: neg rsi  /*manual*/
  5470: inc rsi  /*manual*/
  5471: r8 ^= rsi
  5472: qword ptr [r9+rbx*2] = rsi
  5473: movsx esi ,word ptr [rsp+rbx*8+0x21]  /*manual*/
  5474: neg rsi  /*manual*/
  5475: jnz 0x5d8dcd6d7224  /*manual*/
  5476: movzx edi ,byte ptr [r11+rbx*4+0xc]  /*manual*/
  5477: lea r11 ,ptr [r11+rbx*8+0xd]  /*manual*/
  5478: push rbx  /*manual*/
  5479: dil ^= r8b
  5480: shl word ptr [rsp+rbx*2] ,0x63  /*manual*/
  5481: sbb dil ,0xba  /*manual*/
  5482: push rax  /*manual*/
  5483: movzx ebp ,word ptr [rsp+rbx*2+0x24]  /*manual*/
  5484: ror dil ,0x1  /*manual*/
  5485: inc dil  /*manual*/
  5486: ebp += esi
  5487: dil ^= 0x76
  5488: r8b ^= dil
  5489: inc rbx  /*manual*/
  5490: lea rdi ,ptr [rsp+rdi*1+0x38]  /*manual*/
  5491: rdx = qword ptr [rdi+rbx*2-0x2]
  5492: qword ptr [r9+rbx*4-0xc] = rdx
  5493: sar qword ptr [rsp+rbx*2+0x2e] ,0x42  /*manual*/
  5494: lea r9 ,ptr [r9+rsi*1+0x3cd6]  /*manual*/
  5495: pop rcx  /*manual*/
  5496: pop rax  /*manual*/
  5497: pop rsi  /*manual*/
  5498: pop rbp  /*manual*/
  5499: pop rdi  /*manual*/
  5500: pop rsi  /*manual*/
  5501: pop rsi  /*manual*/
  5502: jnb 0x5d8dcd50cbc3  /*manual*/
  5503: edx = 0x17ac3ca4
  5504: lea rdx ,ptr [rsp+rdx*1-0x17ac3abc]  /*manual*/
  5505: call 0x5d8dcd5bd3dc
  5506: cmp r9 ,rdx  /*manual*/
  5507: call 0x5d8dcd5744a0
  5508: call 0x5d8dcd5d2928
  5509: lea rsp ,ptr [rsp+0x18]  /*manual*/
  5510: jnbe 0x5d8dcd63900c  /*manual*/
  5511: push 0x6c087856  /*manual*/
  5512: jmp 0x5d8dcd5cdbbe  /*manual*/
  5513: lea rsp ,ptr [rsp+0x8]  /*manual*/
  5514: jmp r10  /*manual*/
  5515: call 0x5d8dcd545141
  5516: qword ptr [rsp] = 0xffffffffd893a504
  5517: rcx = qword ptr [r9]
  5518: pop rdi  /*manual*/
  5519: movzx edx ,di  /*manual*/
  5520: rdi = qword ptr [rdi+r9*1+0x276c5b04]
  5521: rol edx ,0x6e  /*manual*/
  5522: adc rcx ,rdi  /*manual*/
  5523: movzx esi ,dx  /*manual*/
  5524: jmp 0x5d8dcd64f007  /*manual*/
  5525: not dx  /*manual*/
  5526: qword ptr [r9+rdx*2-0x5283fff6] = rcx
  5527: and si ,si  /*manual*/
  5528: or sil ,dl  /*manual*/
  5529: movzx ecx ,byte ptr [r11+rdx*1-0x2941ffff]  /*manual*/
  5530: dec esi  /*manual*/
  5531: cl ^= r8b
  5532: lea rax ,ptr [rsi+rsi*2-0x3e733a81]  /*manual*/
  5533: movsx ebp ,sil  /*manual*/
  5534: cl -= 0x22
  5535: and ax ,si  /*manual*/
  5536: cl ^= 0xe0
  5537: rol rbp ,0x24  /*manual*/
  5538: sbb cl ,0xbc  /*manual*/
  5539: dec ebp  /*manual*/
  5540: cl ^= 0x64
  5541: r8b ^= cl
  5542: ax ^= ax
  5543: adc rcx ,rsp  /*manual*/
  5544: inc si  /*manual*/
  5545: rdi = qword ptr [rcx+rdx*1-0x2941ffff]
  5546: lea rcx ,ptr [rdx*4-0x506fd37a]  /*manual*/
  5547: qword ptr [r9+rdx*2-0x5283fffe] = rdi
  5548: cwde   /*manual*/
  5549: bpl = byte ptr [r11+rdx*2-0x5283fffd]
  5550: cmovnz rax ,rdx  /*manual*/
  5551: shr rsi ,0xc9  /*manual*/
  5552: bpl ^= r8b
  5553: lea rdi ,ptr [rcx*2-0x6f651994]  /*manual*/
  5554: cqo   /*manual*/
  5555: cwde   /*manual*/
  5556: neg bpl  /*manual*/
  5557: or ecx ,0xbaaef2a  /*manual*/
  5558: movzx ebx ,cl  /*manual*/
  5559: adc bpl ,al  /*manual*/
  5560: jmp 0x5d8dcd5707be  /*manual*/
  5561: or sil ,0x71  /*manual*/
  5562: or rsi ,0xffffffffb92baaef  /*manual*/
  5563: neg bpl  /*manual*/
  5564: xchg rcx ,rbx  /*manual*/
  5565: bts di ,si  /*manual*/
  5566: adc bpl ,sil  /*manual*/
  5567: shl rdi ,cl  /*manual*/
  5568: rol bpl ,0x1  /*manual*/
  5569: push rax  /*manual*/
  5570: bpl += sil
  5571: neg bpl  /*manual*/
  5572: si += bx
  5573: r8b ^= bpl
  5574: xchg dword ptr [rsp+rdx*1+0x3] ,ebx  /*manual*/
  5575: lea rbp ,ptr [rsp+rbp*1+0x8]  /*manual*/
  5576: bt edi ,0xc1  /*manual*/
  5577: shl rdx ,0x4a  /*manual*/
  5578: data16 cwd  /*manual*/
  5579: rbx = qword ptr [rbp+rdx*8-0x7fff8]
  5580: not qword ptr [rsp+rdx*2-0x1fffe]  /*manual*/
  5581: qword ptr [rdx+r9*1-0x10007] = rbx
  5582: push rdx  /*manual*/
  5583: lea r9 ,ptr [r9+rdx*8-0x80000]  /*manual*/
  5584: bt rdi ,rdx  /*manual*/
  5585: pop rdx  /*manual*/
  5586: ebp = dword ptr [r11+rdx*1-0xfffd]
  5587: bt rcx ,rax  /*manual*/
  5588: data16 cwd  /*manual*/
  5589: movsx ebx ,dl  /*manual*/
  5590: lea r11 ,ptr [r11+rdx*4-0x3fff6]  /*manual*/
  5591: ebp ^= r8d
  5592: cdqe   /*manual*/
  5593: bt ebx ,0x3e  /*manual*/
  5594: jb 0x5d8dcd6bb462  /*manual*/
  5595: neg ebp  /*manual*/
  5596: ror ebp ,0x2  /*manual*/
  5597: ebx ^= 0x53b58eef
  5598: inc byte ptr [rsp+rdx*1-0xfffc]  /*manual*/
  5599: sil ^= 0x4c
  5600: ebp ^= 0x8291848
  5601: dword ptr [rsp+rdx*1-0xfffd] ^= 0xa3a46ba2
  5602: pop rdi  /*manual*/
  5603: di ^= ax
  5604: lea ebp ,ptr [rbp+rdx*4-0x348e3747]  /*manual*/
  5605: btr rsi ,rsi  /*manual*/
  5606: xadd sil ,bl  /*manual*/
  5607: ror ebp ,0x2  /*manual*/
  5608: shr cl ,0xe2  /*manual*/
  5609: ebp ^= eax
  5610: push r8  /*manual*/
  5611: btc ebx ,0xdf  /*manual*/
  5612: adc rsi ,rcx  /*manual*/
  5613: or rcx ,0xffffffff8f1dfc73  /*manual*/
  5614: dword ptr [rsp+rdx*1-0xffff] ^= ebp
  5615: ror di ,0x66  /*manual*/
  5616: call 0x5d8dcd4fd183
  5617: qword ptr [rsp+rdx*1-0xffff] = rbx
  5618: r8 = qword ptr [rsp+rdx*2-0x1fff6]
  5619: movsxd rbp ,ebp  /*manual*/
  5620: qword ptr [rsp+rdx*2-0x1fff6] = rbx
  5621: r10 += rbp
  5622: sar bl ,0x81  /*manual*/
  5623: word ptr [rsp+rdx*1-0xfffc] ^= si
  5624: xchg qword ptr [rsp+rdx*1-0xfff7] ,rax  /*manual*/
  5625: pop rax  /*manual*/
  5626: pop rbp  /*manual*/
  5627: js 0x5d8dcd50cbc3  /*manual*/
  5628: edx = 0x17ac3ca4
  5629: lea rdx ,ptr [rsp+rdx*1-0x17ac3abc]  /*manual*/
  5630: call 0x5d8dcd5bd3dc
  5631: cmp r9 ,rdx  /*manual*/
  5632: call 0x5d8dcd5744a0
  5633: call 0x5d8dcd5d2928
  5634: lea rsp ,ptr [rsp+0x18]  /*manual*/
  5635: jnbe 0x5d8dcd63900c  /*manual*/
  5636: push 0x6c087856  /*manual*/
  5637: jmp 0x5d8dcd5cdbbe  /*manual*/
  5638: lea rsp ,ptr [rsp+0x8]  /*manual*/
  5639: jmp r10  /*manual*/
  5640: edx = 0x6b0c44c4
  5641: lea rax ,ptr [rdx+rdx*4+0x6f9d0c39]  /*manual*/
  5642: movzx ecx ,byte ptr [r11+rdx*1-0x6b0c44c4]  /*manual*/
  5643: ebp = 0x2530afbb
  5644: neg rbp  /*manual*/
  5645: cl ^= r8b
  5646: not cl  /*manual*/
  5647: cl += 0x70
  5648: cl ^= 0xd2
  5649: shl dl ,0xc1  /*manual*/
  5650: movsx esi ,dl  /*manual*/
  5651: jbe 0x5d8dcd6622f7  /*manual*/
  5652: adc cl ,0x21  /*manual*/
  5653: movsx edi ,bpl  /*manual*/
  5654: btc esi ,edi  /*manual*/
  5655: neg cl  /*manual*/
  5656: xadd di ,dx  /*manual*/
  5657: shl ebp ,0x1f  /*manual*/
  5658: xchg rdi ,rax  /*manual*/
  5659: r8b ^= cl
  5660: shl si ,0x22  /*manual*/
  5661: jb 0x5d8dcd5c581f  /*manual*/
  5662: cdq   /*manual*/
  5663: word ptr [rdx+r9*1-0x2] = cx
  5664: cdqe   /*manual*/
  5665: bts rbp ,rdx  /*manual*/
  5666: not dl  /*manual*/
  5667: ecx = dword ptr [r11+rdx*1-0xfe]
  5668: ecx ^= r8d
  5669: bts eax ,esi  /*manual*/
  5670: push rsi  /*manual*/
  5671: bswap ecx  /*manual*/
  5672: setnb byte ptr [rsp+rdx*2-0x1fe]  /*manual*/
  5673: neg ecx  /*manual*/
  5674: inc ecx  /*manual*/
  5675: jmp 0x5d8dcd552356  /*manual*/
  5676: rol ecx ,0x2  /*manual*/
  5677: lea rax ,ptr [rbp*8+0x2c1b8cf2]  /*manual*/
  5678: btc rax ,rdx  /*manual*/
  5679: inc ecx  /*manual*/
  5680: rdx ^= qword ptr [rsp+rdx*2-0x1fe]
  5681: btr rdi ,0xd0  /*manual*/
  5682: qword ptr [rsp] = r8
  5683: shl dil ,0xa7  /*manual*/
  5684: inc dx  /*manual*/
  5685: dword ptr [rsp] ^= ecx
  5686: ebx = edx
  5687: pop r8  /*manual*/
  5688: or rbx ,0x6a1d9ee6  /*manual*/
  5689: movsxd rcx ,ecx  /*manual*/
  5690: adc r10 ,rcx  /*manual*/
  5691: sar bpl ,0xc2  /*manual*/
  5692: dl ^= 0xd
  5693: lea rcx ,ptr [rdx+rax*8+0x3402e3e8]  /*manual*/
  5694: movzx ebx ,byte ptr [r11+rbp*1-0x7ffffffb]  /*manual*/
  5695: shr bp ,0xc1  /*manual*/
  5696: shl ebp ,0xe4  /*manual*/
  5697: cdqe   /*manual*/
  5698: lea r11 ,ptr [rax+r11*1-0x2c1b8cf4]  /*manual*/
  5699: ror bp ,cl  /*manual*/
  5700: or bpl ,dil  /*manual*/
  5701: bl ^= r8b
  5702: not bl  /*manual*/
  5703: jmp 0x5d8dcd6d1e29  /*manual*/
  5704: bt esi ,edx  /*manual*/
  5705: ror bl ,0x1  /*manual*/
  5706: bl -= 0x4f
  5707: ror ecx ,cl  /*manual*/
  5708: shl dl ,0x43  /*manual*/
  5709: not bl  /*manual*/
  5710: sbb bl ,0xd6  /*manual*/
  5711: dil -= 0x9e
  5712: not rsi  /*manual*/
  5713: r8b ^= bl
  5714: btc edx ,eax  /*manual*/
  5715: bswap ecx  /*manual*/
  5716: dword ptr [r9+rax*1-0x2c1b8d00] = ebx
  5717: jnb 0x5d8dcd5fb504  /*manual*/
  5718: lea rbp ,ptr [rsp+rbp*2-0xc8]  /*manual*/
  5719: eax = dword ptr [rbp+rcx*1-0x56faa62c]
  5720: neg sil  /*manual*/
  5721: esi -= 0x3f8332bb
  5722: dword ptr [r9+rcx*1-0x56faa636] = eax
  5723: shl dx ,cl  /*manual*/
  5724: btr edx ,edi  /*manual*/
  5725: shl edx ,cl  /*manual*/
  5726: lea r9 ,ptr [r9+rcx*1-0x56faa636]  /*manual*/
  5727: rol esi ,0x7f  /*manual*/
  5728: movsx ebp ,dil  /*manual*/
  5729: jb 0x5d8dcd50cbc3  /*manual*/
  5730: edx = 0x17ac3ca4
  5731: lea rdx ,ptr [rsp+rdx*1-0x17ac3abc]  /*manual*/
  5732: call 0x5d8dcd5bd3dc
  5733: cmp r9 ,rdx  /*manual*/
  5734: call 0x5d8dcd5744a0
  5735: call 0x5d8dcd5d2928
  5736: lea rsp ,ptr [rsp+0x18]  /*manual*/
  5737: jnbe 0x5d8dcd63900c  /*manual*/
  5738: push 0x6c087856  /*manual*/
  5739: jmp 0x5d8dcd5cdbbe  /*manual*/
  5740: lea rsp ,ptr [rsp+0x8]  /*manual*/
  5741: jmp r10  /*manual*/
  5742: call 0x5d8dcd64fcb2
  5743: pop rdx  /*manual*/
  5744: ebp = 0x83a6582c
  5745: movzx eax ,byte ptr [r11]  /*manual*/
  5746: lea rcx ,ptr [rbp+rbp*1-0x6f60f3d9]  /*manual*/
  5747: movsx esi ,cl  /*manual*/
  5748: lea r11 ,ptr [r11+rsi*8-0x3f7]  /*manual*/
  5749: jmp 0x5d8dcd684b8c  /*manual*/
  5750: not cx  /*manual*/
  5751: call 0x5d8dcd5f777a
  5752: al ^= r8b
  5753: shl bpl ,0xc2  /*manual*/
  5754: rol al ,0x1  /*manual*/
  5755: al ^= 0x16
  5756: qword ptr [rsp+rsi*1-0x7f] = rsi
  5757: and sil ,cl  /*manual*/
  5758: ror al ,0x1  /*manual*/
  5759: dec dword ptr [rsp+rsi*8+0x1]  /*manual*/
  5760: pop rsi  /*manual*/
  5761: inc al  /*manual*/
  5762: ebx = esi
  5763: ror ebx ,0x6a  /*manual*/
  5764: btc ecx ,ebx  /*manual*/
  5765: r8b ^= al
  5766: inc cl  /*manual*/
  5767: rax += rsp
  5768: edx = dword ptr [rax+rcx*4-0x5fad0e04]
  5769: shl rbp ,0xdf  /*manual*/
  5770: jnz 0x5d8dcd6d0cc9  /*manual*/
  5771: ecx -= ecx
  5772: lea r9 ,ptr [rcx+r9*1-0x4]  /*manual*/
  5773: dword ptr [rcx+r9*1] = edx
  5774: movsx edx ,sil  /*manual*/
  5775: eax = dword ptr [r11+rcx*1]
  5776: lea r11 ,ptr [r11+rcx*2+0x4]  /*manual*/
  5777: not bp  /*manual*/
  5778: jnl 0x5d8dcd632aa1  /*manual*/
  5779: jnb 0x5d8dcd5a3ea9  /*manual*/
  5780: eax ^= r8d
  5781: movzx edi ,cx  /*manual*/
  5782: inc bpl  /*manual*/
  5783: sar bp ,0xeb  /*manual*/
  5784: ror eax ,0x3  /*manual*/
  5785: and edx ,edi  /*manual*/
  5786: dec eax  /*manual*/
  5787: shl rcx ,0x8  /*manual*/
  5788: bl ^= 0x4d
  5789: bswap eax  /*manual*/
  5790: push rbx  /*manual*/
  5791: shl rbp ,0xa5  /*manual*/
  5792: dec eax  /*manual*/
  5793: dec dword ptr [rsp+rcx*1+0x3]  /*manual*/
  5794: bswap eax  /*manual*/
  5795: push rbp  /*manual*/
  5796: shl rdx ,0x47  /*manual*/
  5797: bx += 0x8d49
  5798: neg eax  /*manual*/
  5799: jmp 0x5d8dcd5a3f74  /*manual*/
  5800: shl dx ,0xc4  /*manual*/
  5801: qword ptr [rsp+rcx*8+0x8] = r8
  5802: lea r8 ,ptr [rdi+rcx*2-0xff2a6fc]  /*manual*/
  5803: pop rdx  /*manual*/
  5804: sbb r8 ,rcx  /*manual*/
  5805: dword ptr [rsp+rcx*1] ^= eax
  5806: inc dl  /*manual*/
  5807: jz 0x5d8dcd534808  /*manual*/
  5808: btr rdx ,0xb6  /*manual*/
  5809: pop r8  /*manual*/
  5810: xchg cl ,sil  /*manual*/
  5811: jnb 0x5d8dcd5f4b94  /*manual*/
  5812: shr bl ,0x1  /*manual*/
  5813: movsxd rax ,eax  /*manual*/
  5814: jo 0x5d8dcd5ab373  /*manual*/
  5815: shl rbx ,cl  /*manual*/
  5816: adc r10 ,rax  /*manual*/
  5817: call 0x5d8dcd54d7a0
  5818: lea rax ,ptr [rbx+0x65a3bc61]  /*manual*/
  5819: rol dl ,0x45  /*manual*/
  5820: pop rax  /*manual*/
  5821: jnb 0x5d8dcd50cbc3  /*manual*/
  5822: edx = 0x17ac3ca4
  5823: lea rdx ,ptr [rsp+rdx*1-0x17ac3abc]  /*manual*/
  5824: call 0x5d8dcd5bd3dc
  5825: cmp r9 ,rdx  /*manual*/
  5826: call 0x5d8dcd5744a0
  5827: call 0x5d8dcd5d2928
  5828: lea rsp ,ptr [rsp+0x18]  /*manual*/
  5829: jnbe 0x5d8dcd63900c  /*manual*/
  5830: push 0x6c087856  /*manual*/
  5831: jmp 0x5d8dcd5cdbbe  /*manual*/
  5832: lea rsp ,ptr [rsp+0x8]  /*manual*/
  5833: jmp r10  /*manual*/
  5834: eax = 0x913787c1
  5835: movzx ebx ,ax  /*manual*/
  5836: eax = dword ptr [r11+rbx*2-0x10f82]
  5837: btr rbx ,0xe8  /*manual*/
  5838: btc bx ,bx  /*manual*/
  5839: lea rdx ,ptr [rbx*4+0x17be63a6]  /*manual*/
  5840: eax ^= r8d
  5841: neg eax  /*manual*/
  5842: movsx edi ,bl  /*manual*/
  5843: movzx esi ,dx  /*manual*/
  5844: inc eax  /*manual*/
  5845: lea rbp ,ptr [rbx+rdi*8+0x51957e7a]  /*manual*/
  5846: bswap eax  /*manual*/
  5847: edx ^= edi
  5848: sbb edi ,ebx  /*manual*/
  5849: neg rdi  /*manual*/
  5850: lea eax ,ptr [rax+rsi*4-0x2340e4d1]  /*manual*/
  5851: not dl  /*manual*/
  5852: push r8  /*manual*/
  5853: and sil ,0xd4  /*manual*/
  5854: btc rdi ,rbx  /*manual*/
  5855: dword ptr [rsp+rbx*4-0x21f0c] ^= eax
  5856: pop r8  /*manual*/
  5857: ror di ,0x64  /*manual*/
  5858: sar rbx ,0xbf  /*manual*/
  5859: xadd rsi ,rbx  /*manual*/
  5860: movsxd rax ,eax  /*manual*/
  5861: shl di ,0x23  /*manual*/
  5862: adc r10 ,rax  /*manual*/
  5863: rdi += rbx
  5864: edi = dword ptr [rsi+r9*1-0x8290]
  5865: shl ebx ,0xc5  /*manual*/
  5866: lea rdx ,ptr [rdx*8+0x5c8189d8]  /*manual*/
  5867: ebx = dword ptr [r9+rbx*1-0x1051fc]
  5868: and dl ,0xd0  /*manual*/
  5869: rol rbp ,0x83  /*manual*/
  5870: movzx eax ,bpl  /*manual*/
  5871: and edi ,ebx  /*manual*/
  5872: not edi  /*manual*/
  5873: ebx = ebp
  5874: dword ptr [r9+rsi*2-0x1051c] = edi
  5875: movzx ecx ,bp  /*manual*/
  5876: sil ^= 0x5d
  5877: shl al ,0xe5  /*manual*/
  5878: edi = dword ptr [rsi+r11*1-0x82c9]
  5879: jp 0x5d8dcd640ec0  /*manual*/
  5880: lea r11 ,ptr [r11+rax*2+0x8]  /*manual*/
  5881: cx -= dx
  5882: setnbe al  /*manual*/
  5883: edi ^= r8d
  5884: inc edi  /*manual*/
  5885: shr ebp ,cl  /*manual*/
  5886: xadd bl ,ch  /*manual*/
  5887: cmovs eax ,ebp  /*manual*/
  5888: neg edi  /*manual*/
  5889: xchg esi ,eax  /*manual*/
  5890: bswap edi  /*manual*/
  5891: ror rsi ,cl  /*manual*/
  5892: sar ebx ,0x8c  /*manual*/
  5893: ror edi ,0x3  /*manual*/
  5894: eax -= 0x67aa95b3
  5895: adc bp ,0x62b  /*manual*/
  5896: lea rsi ,ptr [rbx+rax*1+0x710a86f2]  /*manual*/
  5897: push r8  /*manual*/
  5898: bts rbp ,0xc5  /*manual*/
  5899: dword ptr [rsp+rbp*4-0x232d9b8] ^= edi
  5900: pop r8  /*manual*/
  5901: dword ptr [rbp+r9*1-0x8cb66e] = edi
  5902: jmp r10  /*manual*/
  5903: esi = 0x880ef760
  5904: eax = dword ptr [r9]
  5905: lea rbx ,ptr [rsi+rsi*2-0x394aa22a]  /*manual*/
  5906: movzx edi ,bl  /*manual*/
  5907: esi = dword ptr [r9+rdi*2-0x1e8]
  5908: movsx edx ,di  /*manual*/
  5909: bt bx ,bx  /*manual*/
  5910: movsx ecx ,di  /*manual*/
  5911: not eax  /*manual*/
  5912: adc cx ,bx  /*manual*/
  5913: shl bx ,cl  /*manual*/
  5914: xadd edi ,edx  /*manual*/
  5915: not esi  /*manual*/
  5916: btc ebx ,ecx  /*manual*/
  5917: and eax ,esi  /*manual*/
  5918: bts edx ,0x8b  /*manual*/
  5919: dword ptr [rbx+r9*1-0x5ee2dffc] = eax
  5920: edx = dword ptr [rbx+r11*1-0x5ee2e000]
  5921: edx ^= r8d
  5922: call 0x5d8dcd67e57f
  5923: qword ptr [rsp+rbx*1-0x5ee2e000] = rdi
  5924: movzx esi ,bx  /*manual*/
  5925: inc edx  /*manual*/
  5926: shl dword ptr [rsp+rbx*1-0x5ee2dffe] ,0x9f  /*manual*/
  5927: jz 0x5d8dcd5c5dab  /*manual*/
  5928: edx ^= 0xdeb98db7
  5929: and cl ,ch  /*manual*/
  5930: ror edx ,0x1  /*manual*/
  5931: pop rbp  /*manual*/
  5932: lea rax ,ptr [rdi*2-0x1f5ad3ee]  /*manual*/
  5933: dec edx  /*manual*/
  5934: btr rdi ,rbp  /*manual*/
  5935: shl bp ,0xae  /*manual*/
  5936: xchg edi ,ebx  /*manual*/
  5937: push r8  /*manual*/
  5938: lea r8 ,ptr [rbx*4-0x2e7dee2d]  /*manual*/
  5939: rbx ^= rbp
  5940: dword ptr [rsp+rbx*1-0x1ec] ^= edx
  5941: pop r8  /*manual*/
  5942: movsxd rdx ,edx  /*manual*/
  5943: inc ecx  /*manual*/
  5944: rol eax ,0xff  /*manual*/
  5945: r10 += rdx
  5946: btr rbx ,rdi  /*manual*/
  5947: ebp += esi
  5948: rdi = qword ptr [r9+rbx*4-0x7ac]
  5949: cl = byte ptr [r9+rcx*2-0x887e]
  5950: inc sil  /*manual*/
  5951: ror si ,0x6c  /*manual*/
  5952: shr rdi ,cl  /*manual*/
  5953: movzx edx ,bp  /*manual*/
  5954: cwde   /*manual*/
  5955: qword ptr [r9+rbx*1-0x1e6] = rdi
  5956: neg rdx  /*manual*/
  5957: inc rax  /*manual*/
  5958: movzx eax ,byte ptr [r11+rbx*2-0x3d4]  /*manual*/
  5959: bt rdx ,rdx  /*manual*/
  5960: movsx edi ,bp  /*manual*/
  5961: jnb 0x5d8dcd6bfc5d  /*manual*/
  5962: lea r11 ,ptr [rbx+r11*1-0x1e7]  /*manual*/
  5963: al ^= r8b
  5964: neg al  /*manual*/
  5965: rol al ,0x1  /*manual*/
  5966: call 0x5d8dcd6b8600
  5967: dec al  /*manual*/
  5968: qword ptr [rsp+rbx*1-0x1ec] = 0xffffffff943afb55
  5969: ecx = esi
  5970: push rbp  /*manual*/
  5971: ror al ,0x1  /*manual*/
  5972: neg dl  /*manual*/
  5973: r8b ^= al
  5974: push rbx  /*manual*/
  5975: ror si ,0xc9  /*manual*/
  5976: word ptr [r9+rsi*1-0xefc] = ax
  5977: neg byte ptr [rsp+rbx*1-0x1e0]  /*manual*/
  5978: call 0x5d8dcd66cf6a
  5979: cl -= byte ptr [rsp+rbx*2-0x3bb]
  5980: lea r9 ,ptr [r9+rbx*1-0x1e8]  /*manual*/
  5981: xadd word ptr [rsp+rbx*1-0x1dd] ,cx  /*manual*/
  5982: byte ptr [rsp+rbx*2-0x3d0] = cl
  5983: ror esi ,0xa4  /*manual*/
  5984: qword ptr [rsp+rbx*2-0x3d8] = r10
  5985: return
  5986: ebp = 0xfe1057f8
  5987: movzx eax ,bpl  /*manual*/
  5988: movzx edi ,byte ptr [r11+rax*2-0x1f0]  /*manual*/
  5989: dil ^= r8b
  5990: esi = 0x843390e0
  5991: shl bpl ,0xe5  /*manual*/
  5992: or sil ,0xe6  /*manual*/
  5993: ror dil ,0x1  /*manual*/
  5994: inc dil  /*manual*/
  5995: ror dil ,0x1  /*manual*/
  5996: or rax ,rsi  /*manual*/
  5997: bt si ,si  /*manual*/
  5998: sbb rsi ,rsi  /*manual*/
  5999: dil ^= 0xc5
  6000: bswap esi  /*manual*/
  6001: movsx ecx ,ax  /*manual*/
  6002: dil -= 0x30
  6003: ror al ,0x66  /*manual*/
  6004: si += ax
  6005: rol dil ,0x1  /*manual*/
  6006: movsx edx ,si  /*manual*/
  6007: inc dl  /*manual*/
  6008: dil ^= 0xaa
  6009: shl rbp ,cl  /*manual*/
  6010: bp -= 0x9d56
  6011: btc ecx ,0xf1  /*manual*/
  6012: neg dil  /*manual*/
  6013: jmp 0x5d8dcd4f30f0  /*manual*/
  6014: dec bp  /*manual*/
  6015: movsx ebx ,bpl  /*manual*/
  6016: ror dil ,0x1  /*manual*/
  6017: inc ebp  /*manual*/
  6018: and edx ,0x37321744  /*manual*/
  6019: dil ^= 0x74
  6020: r8b ^= dil
  6021: btc rcx ,0x9d  /*manual*/
  6022: xchg rdx ,rbp  /*manual*/
  6023: shl dl ,0x65  /*manual*/
  6024: dword ptr [r9+rbp*1-0x37321044] = edi
  6025: movzx edi ,si  /*manual*/
  6026: esi = dword ptr [r11+rbp*1-0x3732103f]
  6027: esi ^= r8d
  6028: bswap esi  /*manual*/
  6029: rol esi ,0x1  /*manual*/
  6030: neg edx  /*manual*/
  6031: rdx ^= rax
  6032: not esi  /*manual*/
  6033: cmovl edi ,eax  /*manual*/
  6034: adc cl ,cl  /*manual*/
  6035: shl edx ,0x5e  /*manual*/
  6036: lea esi ,ptr [rsi+rbp*1-0x3d6d3ba4]  /*manual*/
  6037: cqo   /*manual*/
  6038: shl bpl ,0x42  /*manual*/
  6039: push r8  /*manual*/
  6040: shr bp ,0x83  /*manual*/
  6041: lea r8 ,ptr [rax+rcx*4+0x609427d4]  /*manual*/
  6042: adc rdx ,0x11b4731e  /*manual*/
  6043: dword ptr [rsp+rbp*1-0x37320200] ^= esi
  6044: neg cx  /*manual*/
  6045: push r8  /*manual*/
  6046: r8 = qword ptr [rsp+rdx*1-0x11b47316]
  6047: sbb bx ,cx  /*manual*/
  6048: adc dx ,0xc6cc  /*manual*/
  6049: dword ptr [rbp+r9*1-0x37320208] = esi
  6050: call 0x5d8dcd5182c7
  6051: qword ptr [rsp+rbp*1-0x37320200] = 0x1881f0f5
  6052: inc ecx  /*manual*/
  6053: esi = dword ptr [r11+rbp*2-0x6e6403fb]
  6054: qword ptr [rsp+rbp*2-0x6e6403f0] = rax
  6055: shl bp ,0x23  /*manual*/
  6056: byte ptr [rsp+rbp*1-0x37320fea] -= bpl
  6057: esi ^= r8d
  6058: shr cl ,0xe5  /*manual*/
  6059: setbe al  /*manual*/
  6060: adc bx ,word ptr [rsp+rbp*2-0x6e641ffd]  /*manual*/
  6061: ror esi ,0x3  /*manual*/
  6062: bts edx ,0xe7  /*manual*/
  6063: dec esi  /*manual*/
  6064: ebp += 0xd09e544f
  6065: neg word ptr [rsp+rbp*2-0xfa0c88b]  /*manual*/
  6066: bts cx ,ax  /*manual*/
  6067: bswap esi  /*manual*/
  6068: cqo   /*manual*/
  6069: sbb qword ptr [rsp+rbp*1-0x7d0643f] ,0x50896067  /*manual*/
  6070: dec esi  /*manual*/
  6071: byte ptr [rsp+rbp*1-0x7d0643c] ^= 0x1
  6072: jnl 0x5d8dcd6888b4  /*manual*/
  6073: sar edx ,0x74  /*manual*/
  6074: bswap esi  /*manual*/
  6075: btr dx ,0xa2  /*manual*/
  6076: sbb ecx ,dword ptr [rsp+rbp*2-0xfa0c88d]  /*manual*/
  6077: neg esi  /*manual*/
  6078: qword ptr [rsp+rbp*1-0x7d0643f] = r8
  6079: byte ptr [rsp+rdx*1+0xa] -= 0xdd
  6080: al ^= bh
  6081: call 0x5d8dcd62c26b
  6082: dword ptr [rsp+rbp*2-0xfa0c886] ^= esi
  6083: qword ptr [rsp+rbp*1-0x7d0644f] = rax
  6084: r8 = qword ptr [rsp+rbp*2-0xfa0c886]
  6085: cl ^= 0x13
  6086: movsxd rsi ,esi  /*manual*/
  6087: call 0x5d8dcd62a831
  6088: adc r10 ,rsi  /*manual*/
  6089: dec bx  /*manual*/
  6090: shl ecx ,0xb0  /*manual*/
  6091: shl rax ,0x5a  /*manual*/
  6092: movzx ebx ,byte ptr [r11+rbp*2-0xfa0c895]  /*manual*/
  6093: lea r11 ,ptr [r11+rbp*4-0x1f419132]  /*manual*/
  6094: jns 0x5d8dcd5499e9  /*manual*/
  6095: bl ^= r8b
  6096: xadd rdx ,rax  /*manual*/
  6097: sbb ecx ,0xf223349d  /*manual*/
  6098: movzx esi ,byte ptr [rsp+rbp*1-0x7d06446]  /*manual*/
  6099: adc bl ,al  /*manual*/
  6100: neg bl  /*manual*/
  6101: bl ^= 0xe4
  6102: pop rax  /*manual*/
  6103: rax += 0x319c0
  6104: jmp rax  /*manual*/
  6105: shr qword ptr [rsp+rbp*1-0x7d0644d] ,cl  /*manual*/
  6106: inc bl  /*manual*/
  6107: bl ^= 0x4a
  6108: rol bl ,0x1  /*manual*/
  6109: qword ptr [rsp+rbp*1-0x7d06437] = rdx
  6110: shl qword ptr [rsp+rbp*1-0x7d0643b] ,cl  /*manual*/
  6111: sar ecx ,0xf5  /*manual*/
  6112: r8b ^= bl
  6113: shr bpl ,0xa2  /*manual*/
  6114: lea rbx ,ptr [rsp+rbx*1+0x20]  /*manual*/
  6115: shr byte ptr [rsp+rdi*2-0x121d9] ,0x43  /*manual*/
  6116: ecx = dword ptr [rbx+rbp*1-0x7d06413]
  6117: jns 0x5d8dcd5cab5d  /*manual*/
  6118: dword ptr [r9+rdi*1-0x9106] = ecx
  6119: movsx ecx ,word ptr [rsp+rbp*1-0x7d063fa]  /*manual*/
  6120: dec word ptr [rsp+rbp*4-0x1f419031]  /*manual*/
  6121: jnb 0x5d8dcd5e5e06  /*manual*/
  6122: lea r9 ,ptr [rbp+r9*1-0x7d0641f]  /*manual*/
  6123: shr cx ,0xce  /*manual*/
  6124: cmovnz rdx ,qword ptr [rsp+rbp*2-0xfa0c823]  /*manual*/
  6125: movzx eax ,dl  /*manual*/
  6126: pop rsi  /*manual*/
  6127: pop rsi  /*manual*/
  6128: pop rbx  /*manual*/
  6129: pop rdi  /*manual*/
  6130: jp 0x5d8dcd50cbc3  /*manual*/
  6131: edx = 0x17ac3ca4
  6132: lea rdx ,ptr [rsp+rdx*1-0x17ac3abc]  /*manual*/
  6133: call 0x5d8dcd5bd3dc
  6134: cmp r9 ,rdx  /*manual*/
  6135: call 0x5d8dcd5744a0
  6136: call 0x5d8dcd5d2928
  6137: lea rsp ,ptr [rsp+0x18]  /*manual*/
  6138: jnbe 0x5d8dcd63900c  /*manual*/
  6139: push 0x6c087856  /*manual*/
  6140: jmp 0x5d8dcd5cdbbe  /*manual*/
  6141: lea rsp ,ptr [rsp+0x8]  /*manual*/
  6142: jmp r10  /*manual*/
  6143: jmp 0x5d8dcd576d82  /*manual*/
  6144: edx = 0x96b31a17
  6145: movzx ebp ,dx  /*manual*/
  6146: ecx = dword ptr [rbp+r9*1-0x1a17]
  6147: lea rbx ,ptr [rdx+0x229d7dc2]  /*manual*/
  6148: movsx esi ,bx  /*manual*/
  6149: eax = 0xf9223a45
  6150: edi = dword ptr [r9+rbp*8-0xd0b4]
  6151: dec edx  /*manual*/
  6152: xchg esi ,ebx  /*manual*/
  6153: shr ax ,0xad  /*manual*/
  6154: lea r9 ,ptr [r9+rbp*2-0x342a]  /*manual*/
  6155: neg dx  /*manual*/
  6156: and rax ,rax  /*manual*/
  6157: adc ecx ,edi  /*manual*/
  6158: inc dl  /*manual*/
  6159: dword ptr [rbp+r9*1-0x1a17] = ecx
  6160: or ax ,0x25a4  /*manual*/
  6161: ebp = dword ptr [rbp+r11*1-0x1a17]
  6162: cwde   /*manual*/
  6163: bt edx ,eax  /*manual*/
  6164: jb 0x5d8dcd558d53  /*manual*/
  6165: lea r11 ,ptr [r11+rax*2-0x4b46]  /*manual*/
  6166: jb 0x5d8dcd6a42d0  /*manual*/
  6167: and rbx ,0xffffffffdfaeb2c6  /*manual*/
  6168: sbb bl ,sil  /*manual*/
  6169: ebp ^= r8d
  6170: rol si ,0x27  /*manual*/
  6171: lea ebp ,ptr [rbp+rsi*1-0x7abb37f7]  /*manual*/
  6172: not ebp  /*manual*/
  6173: ror sil ,0x61  /*manual*/
  6174: jno 0x5d8dcd55e99d  /*manual*/
  6175: edi = 0xf21186ea
  6176: lea ebp ,ptr [rbp+rdx*1-0x19b10d8b]  /*manual*/
  6177: rol edi ,0xa7  /*manual*/
  6178: ror al ,0x65  /*manual*/
  6179: neg rdi  /*manual*/
  6180: rol ebp ,0x1  /*manual*/
  6181: rol edi ,0xa7  /*manual*/
  6182: push r8  /*manual*/
  6183: ecx = 0x19112ca4
  6184: dword ptr [rsp+rax*1-0x252d] ^= ebp
  6185: inc bl  /*manual*/
  6186: rol cl ,0xa1  /*manual*/
  6187: pop r8  /*manual*/
  6188: not ecx  /*manual*/
  6189: data16 cwd  /*manual*/
  6190: not edx  /*manual*/
  6191: movsxd rbp ,ebp  /*manual*/
  6192: r10 += rbp
  6193: jmp r10  /*manual*/
  6194: esi = 0xc16baf4
  6195: movzx edi ,si  /*manual*/
  6196: movzx ecx ,di  /*manual*/
  6197: movzx esi ,byte ptr [r11+rsi*1-0xc16baf4]  /*manual*/
  6198: movzx ebx ,di  /*manual*/
  6199: dec bx  /*manual*/
  6200: jnz 0x5d8dcd57d7fd  /*manual*/
  6201: sil ^= r8b
  6202: edx = ecx
  6203: shr edi ,cl  /*manual*/
  6204: dec sil  /*manual*/
  6205: call 0x5d8dcd593b4d
  6206: pop rbp  /*manual*/
  6207: not sil  /*manual*/
  6208: sil -= 0x33
  6209: inc ebx  /*manual*/
  6210: shl cl ,0x64  /*manual*/
  6211: ror sil ,0x1  /*manual*/
  6212: movsx ebp ,bl  /*manual*/
  6213: shl edi ,0xe2  /*manual*/
  6214: adc sil ,0x9d  /*manual*/
  6215: xadd bx ,dx  /*manual*/
  6216: r8b ^= sil
  6217: lea rbp ,ptr [rbx+rbx*4-0x72d0eb53]  /*manual*/
  6218: btr di ,0xe2  /*manual*/
  6219: movzx eax ,bx  /*manual*/
  6220: adc rsi ,rsp  /*manual*/
  6221: inc cl  /*manual*/
  6222: shl edi ,0xc3  /*manual*/
  6223: ebx = dword ptr [rdi+rsi*1]
  6224: call 0x5d8dcd58f1ee
  6225: qword ptr [rsp+rdi*4] = rbp
  6226: esi = ecx
  6227: dword ptr [rdi+r9*1-0x4] = ebx
  6228: eax = dword ptr [r11+rdi*1+0x1]
  6229: lea r11 ,ptr [r11+rdi*8+0x5]  /*manual*/
  6230: eax ^= r8d
  6231: xchg bpl ,cl  /*manual*/
  6232: push rdi  /*manual*/
  6233: jmp 0x5d8dcd621e33  /*manual*/
  6234: bswap eax  /*manual*/
  6235: sar dword ptr [rsp+rdi*1+0x6] ,0x5c  /*manual*/
  6236: lea eax ,ptr [rax+rdi*1+0x25888e4d]  /*manual*/
  6237: xchg byte ptr [rsp+rdi*1+0x3] ,sil  /*manual*/
  6238: ror eax ,0x2  /*manual*/
  6239: shr bp ,0x66  /*manual*/
  6240: movsx ebx ,si  /*manual*/
  6241: jnp 0x5d8dcd6374e5  /*manual*/
  6242: lea eax ,ptr [rax+rbp*2+0x4f9a82e2]  /*manual*/
  6243: dx -= word ptr [rsp+rdi*4+0x6]
  6244: seto sil  /*manual*/
  6245: qword ptr [rsp+rdi*1+0x8] = r8
  6246: push rbx  /*manual*/
  6247: bp ^= si
  6248: dword ptr [rsp+rdi*2+0x10] ^= eax
  6249: lea rbp ,ptr [rdx+rdx*2+0x782c53f4]  /*manual*/
  6250: r8 = qword ptr [rsp+rdi*4+0x10]
  6251: and bp ,0x572  /*manual*/
  6252: dec word ptr [rsp+rdi*4+0xa]  /*manual*/
  6253: movsxd rax ,eax  /*manual*/
  6254: bpl -= 0x5c
  6255: shl sil ,0x84  /*manual*/
  6256: shr dl ,0x64  /*manual*/
  6257: r10 += rax
  6258: btr ecx ,0x10  /*manual*/
  6259: qword ptr [rsp+rdi*1+0x10] = rbx
  6260: ecx = dword ptr [r9+rdi*1-0x4]
  6261: sbb bp ,dx  /*manual*/
  6262: lea rdx ,ptr [rbp+rbx*8+0x3e897b09]  /*manual*/
  6263: sar word ptr [rsp+rdi*2+0x9] ,0x2b  /*manual*/
  6264: ebp = dword ptr [r9+rsi*2-0x17400]
  6265: dl += dh
  6266: adc rbx ,qword ptr [rsp+rdi*4+0x10]  /*manual*/
  6267: or ecx ,ebp  /*manual*/
  6268: bts dx ,0xdc  /*manual*/
  6269: jb 0x5d8dcd6821e4  /*manual*/
  6270: not ecx  /*manual*/
  6271: shl ebx ,0x16  /*manual*/
  6272: adc edi ,0x67158647  /*manual*/
  6273: or bl ,sil  /*manual*/
  6274: dword ptr [rdi+r9*1-0x67158648] = ecx
  6275: qword ptr [rsp+rsi*2-0x17400] = r10
  6276: return
  6277: ecx = 0x8039eef4
  6278: eax = dword ptr [r11]
  6279: movzx esi ,cx  /*manual*/
  6280: lea r11 ,ptr [rsi+r11*1-0xeef0]  /*manual*/
  6281: movsx ebp ,cx  /*manual*/
  6282: movsx edx ,sil  /*manual*/
  6283: lea rbx ,ptr [rbp+rdx*2+0x6c8605c6]  /*manual*/
  6284: eax ^= r8d
  6285: inc eax  /*manual*/
  6286: jmp 0x5d8dcd502cbe  /*manual*/
  6287: push rbx  /*manual*/
  6288: ror qword ptr [rsp+rsi*1-0xeef4] ,0x95  /*manual*/
  6289: neg eax  /*manual*/
  6290: edx += edx
  6291: shl rbx ,cl  /*manual*/
  6292: bswap eax  /*manual*/
  6293: jbe 0x5d8dcd6e9617  /*manual*/
  6294: ror eax ,0x3  /*manual*/
  6295: qword ptr [rsp+rsi*1-0xeef4] = r8
  6296: sar bp ,0x63  /*manual*/
  6297: dword ptr [rsp+rsi*1-0xeef4] ^= eax
  6298: lea rsi ,ptr [rdx+rcx*8+0x2953790]  /*manual*/
  6299: and dl ,0xa5  /*manual*/
  6300: pop r8  /*manual*/
  6301: setnp dl  /*manual*/
  6302: cl ^= 0xf2
  6303: sbb r9 ,0x4  /*manual*/
  6304: dword ptr [r9] = eax
  6305: eax = dword ptr [r11]
  6306: ecx ^= 0x9b21c5c2
  6307: lea r11 ,ptr [r11+rcx*4-0x6c60af0c]  /*manual*/
  6308: eax ^= r8d
  6309: ror eax ,0x2  /*manual*/
  6310: ecx += ebx
  6311: lea rbx ,ptr [rbx+rcx*1-0x70ce9815]  /*manual*/
  6312: ebx += esi
  6313: bswap eax  /*manual*/
  6314: ror eax ,0x2  /*manual*/
  6315: bts bx ,0x8e  /*manual*/
  6316: neg rbx  /*manual*/
  6317: and ebp ,ebx  /*manual*/
  6318: dec eax  /*manual*/
  6319: ror rcx ,cl  /*manual*/
  6320: cl -= cl
  6321: push r8  /*manual*/
  6322: dword ptr [rsp+rcx*4-0x6c60800] ^= eax
  6323: not rdx  /*manual*/
  6324: movsx edi ,cl  /*manual*/
  6325: lea rcx ,ptr [rdi*4-0x73fc314d]  /*manual*/
  6326: pop r8  /*manual*/
  6327: btr di ,0x6  /*manual*/
  6328: and ebp ,0xc888e180  /*manual*/
  6329: movsxd rax ,eax  /*manual*/
  6330: rol ebp ,0xb9  /*manual*/
  6331: adc r10 ,rax  /*manual*/
  6332: shl edi ,cl  /*manual*/
  6333: call 0x5d8dcd690a50
  6334: qword ptr [rsp+rbp*8-0x4000a10] = 0xffffffffb6834f22
  6335: pop rcx  /*manual*/
  6336: jp 0x5d8dcd50cbc3  /*manual*/
  6337: edx = 0x17ac3ca4
  6338: lea rdx ,ptr [rsp+rdx*1-0x17ac3abc]  /*manual*/
  6339: call 0x5d8dcd5bd3dc
  6340: cmp r9 ,rdx  /*manual*/
  6341: call 0x5d8dcd5744a0
  6342: call 0x5d8dcd5d2928
  6343: lea rsp ,ptr [rsp+0x18]  /*manual*/
  6344: jnbe 0x5d8dcd63900c  /*manual*/
  6345: push 0x6c087856  /*manual*/
  6346: jmp 0x5d8dcd5cdbbe  /*manual*/
  6347: lea rsp ,ptr [rsp+0x8]  /*manual*/
  6348: jmp r10  /*manual*/
  6349: ecx = 0xb30ce7f
  6350: movzx esi ,cx  /*manual*/
  6351: ecx = dword ptr [r9+rcx*4-0x2cc339fc]
  6352: lea rbp ,ptr [rsi*4-0x67c678e]  /*manual*/
  6353: or bp ,0xa55f  /*manual*/
  6354: ebp = dword ptr [r9+rsi*1-0xce7b]
  6355: ebx = esi
  6356: and ecx ,ebp  /*manual*/
  6357: inc ebx  /*manual*/
  6358: not ecx  /*manual*/
  6359: bts esi ,esi  /*manual*/
  6360: jnb 0x5d8dcd6b8ced  /*manual*/
  6361: dword ptr [r9+rbx*1-0xce7c] = ecx
  6362: movsx edi ,bx  /*manual*/
  6363: setnb sil  /*manual*/
  6364: eax = dword ptr [rbx+r11*1-0xce80]
  6365: shr si ,0x8d  /*manual*/
  6366: lea r11 ,ptr [r11+rbx*2-0x19cfc]  /*manual*/
  6367: edx = 0x1f0f8aef
  6368: jnb 0x5d8dcd652365  /*manual*/
  6369: jnb 0x5d8dcd6436c7  /*manual*/
  6370: eax ^= r8d
  6371: shl rsi ,0x67  /*manual*/
  6372: movsx ebp ,dl  /*manual*/
  6373: sar bl ,0xc1  /*manual*/
  6374: neg eax  /*manual*/
  6375: push rbp  /*manual*/
  6376: shr edx ,0x86  /*manual*/
  6377: dword ptr [rsp+rbx*1-0xcebe] -= 0xd91f18cd
  6378: adc eax ,esi  /*manual*/
  6379: shr edx ,0x92  /*manual*/
  6380: shl dl ,0x23  /*manual*/
  6381: bswap eax  /*manual*/
  6382: jnb 0x5d8dcd5934ad  /*manual*/
  6383: lea rcx ,ptr [rdi*8+0x4f1cf76c]  /*manual*/
  6384: js 0x5d8dcd6d40f8  /*manual*/
  6385: lea eax ,ptr [rax+rbx*4-0x23421509]  /*manual*/
  6386: qword ptr [rsp+rbx*1-0xcec0] = r8
  6387: neg rbx  /*manual*/
  6388: dec cl  /*manual*/
  6389: xchg dl ,sil  /*manual*/
  6390: dword ptr [rsp+rbx*1+0xcec0] ^= eax
  6391: pop r8  /*manual*/
  6392: not ecx  /*manual*/
  6393: call 0x5d8dcd6a4ecc
  6394: movsxd rax ,eax  /*manual*/
  6395: qword ptr [rsp+rbx*1+0xcec0] = rdi
  6396: and dword ptr [rsp+rbx*1+0xcec1] ,ebx  /*manual*/
  6397: inc bp  /*manual*/
  6398: adc r10 ,rax  /*manual*/
  6399: bt si ,0x5f  /*manual*/
  6400: push rdx  /*manual*/
  6401: lea rdi ,ptr [r9+rbx*4+0x33b04]  /*manual*/
  6402: lea rcx ,ptr [rbp*2+0x2b1edbfa]  /*manual*/
  6403: qword ptr [rsp+rbx*1+0xcec8] ^= rcx
  6404: sar bpl ,0x23  /*manual*/
  6405: qword ptr [r9+rbx*1+0xcebc] = rdi
  6406: or byte ptr [rsp+rbx*4+0x33b0d] ,cl  /*manual*/
  6407: lea r9 ,ptr [r9+rbx*1+0xcebc]  /*manual*/
  6408: movzx edi ,cx  /*manual*/
  6409: seto byte ptr [rsp+rbx*2+0x19d80]  /*manual*/
  6410: push rdx  /*manual*/
  6411: pop rbx  /*manual*/
  6412: pop rbx  /*manual*/
  6413: pop rbx  /*manual*/
  6414: jnb 0x5d8dcd50cbc3  /*manual*/
  6415: edx = 0x17ac3ca4
  6416: lea rdx ,ptr [rsp+rdx*1-0x17ac3abc]  /*manual*/
  6417: call 0x5d8dcd5bd3dc
  6418: cmp r9 ,rdx  /*manual*/
  6419: call 0x5d8dcd5744a0
  6420: call 0x5d8dcd5d2928
  6421: lea rsp ,ptr [rsp+0x18]  /*manual*/
  6422: jnbe 0x5d8dcd63900c  /*manual*/
  6423: push 0x6c087856  /*manual*/
  6424: jmp 0x5d8dcd5cdbbe  /*manual*/
  6425: lea rsp ,ptr [rsp+0x8]  /*manual*/
  6426: jmp r10  /*manual*/
  6427: eax = 0x28bd6a46
  6428: movzx edi ,al  /*manual*/
  6429: movsx ebx ,dil  /*manual*/
  6430: rbp = qword ptr [rax+r9*1-0x28bd6a46]
  6431: or rdi ,rdi  /*manual*/
  6432: movsx ecx ,bx  /*manual*/
  6433: ebx = dword ptr [rbp+rax*1-0x28bd6a46]
  6434: lea rbp ,ptr [rax*2-0x1d4d4a91]  /*manual*/
  6435: and ecx ,ebp  /*manual*/
  6436: ebp = ebx
  6437: call 0x5d8dcd56eea8
  6438: lea rsi ,ptr [rcx+rcx*2+0x292d46c1]  /*manual*/
  6439: eax = dword ptr [rax+r9*1-0x28bd6a3e]
  6440: or ebp ,eax  /*manual*/
  6441: movsx edx ,si  /*manual*/
  6442: not ebp  /*manual*/
  6443: qword ptr [rsp+rdi*1-0x46] = rsi
  6444: rdx += rsi
  6445: shl dword ptr [rsp+rdi*1-0x46] ,0x6  /*manual*/
  6446: dword ptr [r9+rdi*2-0x84] = ebp
  6447: cl ^= 0x6f
  6448: shl esi ,cl  /*manual*/
  6449: ecx = dword ptr [r11+rcx*4-0xb4]
  6450: lea rbx ,ptr [rdi+rdi*1-0x18781b06]  /*manual*/
  6451: lea r11 ,ptr [r11+rdi*8-0x22c]  /*manual*/
  6452: movsx ebp ,bl  /*manual*/
  6453: xadd ebx ,esi  /*manual*/
  6454: ecx ^= r8d
  6455: bswap ecx  /*manual*/
  6456: lea ecx ,ptr [rdi+rcx*1+0x25888e07]  /*manual*/
  6457: xchg edx ,ebp  /*manual*/
  6458: ror ecx ,0x2  /*manual*/
  6459: ror dil ,0x81  /*manual*/
  6460: sbb ecx ,0x96037a0c  /*manual*/
  6461: call 0x5d8dcd60c044
  6462: qword ptr [rsp+rdi*4-0x84] = r8
  6463: r8d = esi
  6464: qword ptr [rsp+rdi*1-0x23] = 0x51b15b86
  6465: lea rax ,ptr [rsi*2+0x1c225682]  /*manual*/
  6466: dword ptr [rsp+rdi*2-0x3e] ^= ecx
  6467: ror rdx ,0xf8  /*manual*/
  6468: xchg dil ,bl  /*manual*/
  6469: r8 = qword ptr [rsp+rdi*2-0x104]
  6470: or dword ptr [rsp+rdi*1-0x84] ,esi  /*manual*/
  6471: movsxd rcx ,ecx  /*manual*/
  6472: qword ptr [rsp+rdi*1-0x7e] = 0x6bb69495
  6473: shl qword ptr [rsp+rdi*1-0x7e] ,0x62  /*manual*/
  6474: pop rsi  /*manual*/
  6475: r10 += rcx
  6476: shr dword ptr [rsp+rdi*2-0x10c] ,0xc5  /*manual*/
  6477: rol dword ptr [rsp+rdi*1-0x85] ,0xa7  /*manual*/
  6478: rax = qword ptr [r9+rdi*4-0x210]
  6479: dil += dil
  6480: jle 0x5d8dcd633ddd  /*manual*/
  6481: cl = byte ptr [r9+rdi*2-0x8]
  6482: shr rax ,cl  /*manual*/
  6483: movzx ecx ,bl  /*manual*/
  6484: bpl += dl
  6485: qword ptr [rdi+r9*1-0x2] = rax
  6486: lea r9 ,ptr [rdi+r9*1-0x2]  /*manual*/
  6487: push rdx  /*manual*/
  6488: inc dl  /*manual*/
  6489: call 0x5d8dcd63301d
  6490: qword ptr [rsp+rdi*1-0xc] = r10
  6491: return
  6492: ebx = 0x1e0908b0
  6493: edx = 0xce1c2242
  6494: lea rax ,ptr [rbx*2+0x37bc5f06]  /*manual*/
  6495: rsi = qword ptr [rbx+r9*1-0x1e0908b0]
  6496: jmp 0x5d8dcd6b1481  /*manual*/
  6497: lea rcx ,ptr [rax-0x53560314]  /*manual*/
  6498: inc rdx  /*manual*/
  6499: rdi = qword ptr [r9+rbx*1-0x1e0908a8]
  6500: or cx ,ax  /*manual*/
  6501: lea rdx ,ptr [rbx*8+0xa39d021]  /*manual*/
  6502: adc rsi ,rdi  /*manual*/
  6503: xchg cx ,dx  /*manual*/
  6504: btr edx ,0x9  /*manual*/
  6505: or rdx ,rcx  /*manual*/
  6506: qword ptr [r9+rbx*1-0x1e0908a8] = rsi
  6507: edi = dword ptr [r11+rbx*2-0x3c121160]
  6508: lea rbp ,ptr [rcx+rbx*2+0x4a86c8f1]  /*manual*/
  6509: edi ^= r8d
  6510: cdq   /*manual*/
  6511: bp -= 0x1aaf
  6512: sets bl  /*manual*/
  6513: bswap edi  /*manual*/
  6514: rol edi ,cl  /*manual*/
  6515: bswap edi  /*manual*/
  6516: xadd rbx ,rcx  /*manual*/
  6517: lea edi ,ptr [rdi+rbx*2-0x19e1858c]  /*manual*/
  6518: edx -= 0x1ba35d28
  6519: push rbx  /*manual*/
  6520: qword ptr [rsp+rbx*1-0x3e811da2] = r8
  6521: jnb 0x5d8dcd6cf734  /*manual*/
  6522: movzx r8d ,cl  /*manual*/
  6523: bswap ebx  /*manual*/
  6524: dword ptr [rsp+rcx*4-0x78242004] ^= edi
  6525: rbx += 0x4fb1dfbe
  6526: shl rcx ,0xcd  /*manual*/
  6527: pop r8  /*manual*/
  6528: movsxd rdi ,edi  /*manual*/
  6529: sbb edx ,0x7b86a924  /*manual*/
  6530: adc r10 ,rdi  /*manual*/
  6531: ror bp ,0xcf  /*manual*/
  6532: lea rsi ,ptr [rbp*2-0x1f6b007c]  /*manual*/
  6533: movzx ebx ,byte ptr [r11+rdx*1-0x68d5f9b0]  /*manual*/
  6534: xadd ax ,si  /*manual*/
  6535: bl ^= r8b
  6536: not bl  /*manual*/
  6537: push rdx  /*manual*/
  6538: pop rsi  /*manual*/
  6539: inc bl  /*manual*/
  6540: bts rdx ,rdx  /*manual*/
  6541: rol bl ,0x1  /*manual*/
  6542: rol bpl ,0x44  /*manual*/
  6543: jnb 0x5d8dcd522429  /*manual*/
  6544: bl ^= 0x51
  6545: btr esi ,0x16  /*manual*/
  6546: adc bl ,cl  /*manual*/
  6547: neg si  /*manual*/
  6548: dec bpl  /*manual*/
  6549: and edx ,eax  /*manual*/
  6550: r8b ^= bl
  6551: rbp ^= rax
  6552: word ptr [r9+rdx*1-0x60c4c0aa] = bx
  6553: movsx edi ,sil  /*manual*/
  6554: shl rdx ,0xf6  /*manual*/
  6555: movzx eax ,byte ptr [r11+rax*1-0x73cec4f3]  /*manual*/
  6556: jp 0x5d8dcd5cfbd9  /*manual*/
  6557: lea r11 ,ptr [r11+rdi*2-0x92]  /*manual*/
  6558: ebx = 0x82b991e4
  6559: al ^= r8b
  6560: rbx += rdx
  6561: not al  /*manual*/
  6562: sbb dx ,bp  /*manual*/
  6563: shl bp ,0x64  /*manual*/
  6564: rol al ,0x1  /*manual*/
  6565: rbp ^= rdx
  6566: not cx  /*manual*/
  6567: shl rcx ,0x28  /*manual*/
  6568: not al  /*manual*/
  6569: adc rbx ,rdx  /*manual*/
  6570: neg al  /*manual*/
  6571: btc ecx ,esi  /*manual*/
  6572: r8b ^= al
  6573: neg sil  /*manual*/
  6574: rax += rsp
  6575: and edi ,esi  /*manual*/
  6576: xadd rbp ,rdx  /*manual*/
  6577: btc esi ,ecx  /*manual*/
  6578: movzx si ,byte ptr [rax+rcx*2-0x2000]  /*manual*/
  6579: lea rbp ,ptr [rbx+rdx*8+0x69367d7]  /*manual*/
  6580: bts cx ,di  /*manual*/
  6581: bx ^= cx
  6582: word ptr [r9+rcx*2-0x201c] = si
  6583: call 0x5d8dcd6eb698
  6584: btr di ,bx  /*manual*/
  6585: call 0x5d8dcd5bac65
  6586: adc r9 ,rdi  /*manual*/
  6587: not bx  /*manual*/
  6588: qword ptr [rsp+rcx*1-0x1010] = rcx
  6589: qword ptr [rsp+rcx*2-0x2020] = r10
  6590: return
  6591: jmp 0x5d8dcd52f4e1  /*manual*/
  6592: ebx = 0xa92d86e0
  6593: shr rbx ,0xb7  /*manual*/
  6594: movzx ax ,byte ptr [r9+rbx*4]  /*manual*/
  6595: cl = byte ptr [rbx+r9*1+0x2]
  6596: lea rdi ,ptr [rbx*2-0x1a425a1a]  /*manual*/
  6597: lea r9 ,ptr [r9+rbx*4+0x2]  /*manual*/
  6598: lea rbp ,ptr [rdi*8-0x3ed8f736]  /*manual*/
  6599: jbe 0x5d8dcd62f064  /*manual*/
  6600: shr al ,cl  /*manual*/
  6601: esi = ebp
  6602: dec bp  /*manual*/
  6603: bt rsi ,rbx  /*manual*/
  6604: word ptr [rbx+r9*1] = ax
  6605: lea rdx ,ptr [rbp+0x55a4d924]  /*manual*/
  6606: ebp = dword ptr [r11+rbx*1]
  6607: eax = 0xf730c32e
  6608: btc si ,0x31  /*manual*/
  6609: cqo   /*manual*/
  6610: lea r11 ,ptr [r11+rbx*4+0x4]  /*manual*/
  6611: ebp ^= r8d
  6612: ror ebp ,0x2  /*manual*/
  6613: rbx -= rax
  6614: ebp ^= 0x189c9e4d
  6615: ecx = edi
  6616: lea rcx ,ptr [rsi*8+0x3a0961e9]  /*manual*/
  6617: bswap ebp  /*manual*/
  6618: shl esi ,cl  /*manual*/
  6619: or ebx ,0xda9a936b  /*manual*/
  6620: inc ebp  /*manual*/
  6621: cx -= 0x127d
  6622: ror dl ,0xc1  /*manual*/
  6623: xadd rdx ,rbx  /*manual*/
  6624: push r8  /*manual*/
  6625: xadd sil ,cl  /*manual*/
  6626: not bx  /*manual*/
  6627: dword ptr [rsp+rbx*1-0xffff] ^= ebp
  6628: lea r8 ,ptr [rcx*2-0x2bdb60c6]  /*manual*/
  6629: shl cx ,0xcf  /*manual*/
  6630: pop r8  /*manual*/
  6631: call 0x5d8dcd65aa84
  6632: qword ptr [rsp+rbx*2-0x1fffe] = rdx
  6633: shl byte ptr [rsp+rbx*8-0x7fff5] ,0xa4  /*manual*/
  6634: movsxd rbp ,ebp  /*manual*/
  6635: bt ebx ,0x19  /*manual*/
  6636: push rdx  /*manual*/
  6637: adc r10 ,rbp  /*manual*/
  6638: bx ^= si
  6639: shr word ptr [rsp+rbx*1-0xfd2] ,0xac  /*manual*/
  6640: dword ptr [rsp+rbx*1-0xfd1] = 0x4c2a9b6e
  6641: qword ptr [rsp+rbx*1-0xfd3] = r10
  6642: return
  6643: ecx = 0x842b0cb2
  6644: ebx = ecx
  6645: movsx esi ,bx  /*manual*/
  6646: ax = word ptr [r9+rsi*8-0x6590]
  6647: movzx ebx ,byte ptr [r11+rsi*1-0xcb2]  /*manual*/
  6648: call 0x5d8dcd6da9dd
  6649: lea rdx ,ptr [rcx+rsi*2-0x774bedfd]  /*manual*/
  6650: qword ptr [rsp+rsi*4-0x32c8] = rcx
  6651: bl ^= r8b
  6652: inc word ptr [rsp+rsi*2-0x195f]  /*manual*/
  6653: neg bl  /*manual*/
  6654: bl ^= 0x28
  6655: rol word ptr [rsp+rsi*2-0x195f] ,0x4b  /*manual*/
  6656: sbb bl ,0x72  /*manual*/
  6657: bt si ,cx  /*manual*/
  6658: cl ^= byte ptr [rsp+rsi*2-0x195d]
  6659: movsx ebp ,cx  /*manual*/
  6660: bl ^= 0xde
  6661: sar cx ,0xc5  /*manual*/
  6662: not dword ptr [rsp+rsi*8-0x6590]  /*manual*/
  6663: inc qword ptr [rsp+rsi*2-0x1964]  /*manual*/
  6664: not bl  /*manual*/
  6665: r8b ^= bl
  6666: rol cx ,0x6d  /*manual*/
  6667: lea rbx ,ptr [rsp+rbx*1+0x8]  /*manual*/
  6668: movsx edi ,si  /*manual*/
  6669: byte ptr [rbx+rsi*1-0xcb2] = al
  6670: movzx ebx ,dil  /*manual*/
  6671: ecx = dword ptr [r11+rsi*2-0x1963]
  6672: ror byte ptr [rsp+rbp*1-0xcb2] ,0xe4  /*manual*/
  6673: push rbp  /*manual*/
  6674: ecx ^= r8d
  6675: xadd rbp ,rbx  /*manual*/
  6676: pop rax  /*manual*/
  6677: sbb al ,0x6c  /*manual*/
  6678: ror ecx ,0x3  /*manual*/
  6679: not ecx  /*manual*/
  6680: sar edx ,0x10  /*manual*/
  6681: not dl  /*manual*/
  6682: dec ecx  /*manual*/
  6683: cwde   /*manual*/
  6684: or rbx ,rbp  /*manual*/
  6685: lea rsi ,ptr [rsi+0x10236282]  /*manual*/
  6686: ror ecx ,0x1  /*manual*/
  6687: bt bx ,ax  /*manual*/
  6688: qword ptr [rsp+rsi*1-0x10236f34] = r8
  6689: dword ptr [rsp+rsi*1-0x10236f34] ^= ecx
  6690: neg esi  /*manual*/
  6691: not rsi  /*manual*/
  6692: shl eax ,0x9b  /*manual*/
  6693: pop r8  /*manual*/
  6694: movsxd rcx ,ecx  /*manual*/
  6695: sbb rbx ,0x158800f0  /*manual*/
  6696: bts ax ,bx  /*manual*/
  6697: btr rdi ,0xfd  /*manual*/
  6698: adc r10 ,rcx  /*manual*/
  6699: lea rcx ,ptr [rdi+rsi*2+0xbb5cb23]  /*manual*/
  6700: neg al  /*manual*/
  6701: bts rcx ,rbp  /*manual*/
  6702: movzx eax ,byte ptr [r11+rdx*1-0xc1b]  /*manual*/
  6703: sbb rbp ,0x1d9df0f7  /*manual*/
  6704: jz 0x5d8dcd6447f3  /*manual*/
  6705: lea r11 ,ptr [r11+rdx*2-0x183a]  /*manual*/
  6706: call 0x5d8dcd64fcd5
  6707: al ^= r8b
  6708: not rcx  /*manual*/
  6709: btc ebx ,0xe6  /*manual*/
  6710: sbb al ,0x82  /*manual*/
  6711: qword ptr [rsp+rbp*1+0x1d9de394] = rcx
  6712: shl di ,0xe7  /*manual*/
  6713: not qword ptr [rsp+rdx*8-0x6100]  /*manual*/
  6714: al ^= 0x91
  6715: and rsi ,0x6d071a1f  /*manual*/
  6716: not al  /*manual*/
  6717: sar sil ,0x86  /*manual*/
  6718: sbb al ,0x1  /*manual*/
  6719: neg word ptr [rsp+rsi*4-0xc27fb]  /*manual*/
  6720: r8b ^= al
  6721: word ptr [r9+rsi*2-0x61400] = ax
  6722: shl cx ,0x2f  /*manual*/
  6723: neg edi  /*manual*/
  6724: dil -= 0xea
  6725: qword ptr [rsp+rsi*1-0x30a00] = r10
  6726: return
  6727: ecx = 0x189ee079
  6728: movzx edx ,byte ptr [rcx+r11*1-0x189ee079]  /*manual*/
  6729: dec cl  /*manual*/
  6730: jno 0x5d8dcd57aa3d  /*manual*/
  6731: lea r11 ,ptr [r11+rcx*4-0x627b81df]  /*manual*/
  6732: movzx eax ,cl  /*manual*/
  6733: sar ax ,0x6e  /*manual*/
  6734: push rcx  /*manual*/
  6735: dl ^= r8b
  6736: rol dl ,0x1  /*manual*/
  6737: neg dl  /*manual*/
  6738: lea rbx ,ptr [rcx+rcx*2+0x784d89f]  /*manual*/
  6739: movsx esi ,cl  /*manual*/
  6740: lea rbp ,ptr [rsi+rbx*1+0x111a9bc9]  /*manual*/
  6741: ror dl ,0x1  /*manual*/
  6742: rol rbp ,0xa1  /*manual*/
  6743: movzx edi ,bpl  /*manual*/
  6744: btc edi ,0x5b  /*manual*/
  6745: dec dl  /*manual*/
  6746: word ptr [rsp+rax*1+0x6] = 0xeb65
  6747: inc dword ptr [rsp+rcx*1-0x189ee077]  /*manual*/
  6748: inc qword ptr [rsp+rcx*4-0x627b81e0]  /*manual*/
  6749: r8b ^= dl
  6750: cwde   /*manual*/
  6751: word ptr [rsp+rcx*1-0x189ee077] -= ax
  6752: rol dil ,0xa3  /*manual*/
  6753: lea r9 ,ptr [r9+rcx*1-0x189ee07a]  /*manual*/
  6754: word ptr [r9+rcx*2-0x313dc0f0] = dx
  6755: xchg si ,di  /*manual*/
  6756: btr rax ,rdi  /*manual*/
  6757: ecx = dword ptr [rcx+r11*1-0x189ee078]
  6758: inc ebx  /*manual*/
  6759: rbp -= qword ptr [rsp+rax*4]
  6760: sar bpl ,0x2  /*manual*/
  6761: lea r11 ,ptr [r11+rax*2+0x4]  /*manual*/
  6762: shr rax ,0x1d  /*manual*/
  6763: ecx ^= r8d
  6764: or word ptr [rsp+rax*8+0x3] ,bx  /*manual*/
  6765: lea rbx ,ptr [rbp-0x664d79da]  /*manual*/
  6766: bswap ecx  /*manual*/
  6767: cqo   /*manual*/
  6768: not rax  /*manual*/
  6769: rol ecx ,0x1  /*manual*/
  6770: shl bx ,0x44  /*manual*/
  6771: not rdi  /*manual*/
  6772: bswap ecx  /*manual*/
  6773: shl byte ptr [rsp+rax*4+0x4] ,0xe2  /*manual*/
  6774: lea ecx ,ptr [rax+rcx*1+0x6320b5b9]  /*manual*/
  6775: qword ptr [rsp+rax*8+0x8] = r8
  6776: lea r8 ,ptr [rdi+rsi*8+0x713f4c59]  /*manual*/
  6777: or rbp ,0xffffffffc4313aa6  /*manual*/
  6778: shl ebp ,0x45  /*manual*/
  6779: dword ptr [rsp+rax*1+0x1] ^= ecx
  6780: pop r8  /*manual*/
  6781: edx ^= 0x520c275a
  6782: movsxd rcx ,ecx  /*manual*/
  6783: adc r10 ,rcx  /*manual*/
  6784: bt edi ,0x2f  /*manual*/
  6785: jb 0x5d8dcd50cbc3  /*manual*/
  6786: edx = 0x17ac3ca4
  6787: lea rdx ,ptr [rsp+rdx*1-0x17ac3abc]  /*manual*/
  6788: call 0x5d8dcd5bd3dc
  6789: cmp r9 ,rdx  /*manual*/
  6790: call 0x5d8dcd5744a0
  6791: call 0x5d8dcd5d2928
  6792: lea rsp ,ptr [rsp+0x18]  /*manual*/
  6793: jnbe 0x5d8dcd63900c  /*manual*/
  6794: push 0x6c087856  /*manual*/
  6795: jmp 0x5d8dcd5cdbbe  /*manual*/
  6796: lea rsp ,ptr [rsp+0x8]  /*manual*/
  6797: jmp r10  /*manual*/
  6798: ebx = 0xc6041dbf
  6799: neg ebx  /*manual*/
  6800: movsx eax ,bx  /*manual*/
  6801: esi = dword ptr [r11+rbx*2-0x73f7c482]
  6802: esi ^= r8d
  6803: bswap esi  /*manual*/
  6804: jmp 0x5d8dcd59efce  /*manual*/
  6805: not eax  /*manual*/
  6806: movzx ecx ,bx  /*manual*/
  6807: neg esi  /*manual*/
  6808: lea rbp ,ptr [rax+0x6b3d7796]  /*manual*/
  6809: inc esi  /*manual*/
  6810: rol al ,cl  /*manual*/
  6811: rol esi ,0x2  /*manual*/
  6812: inc esi  /*manual*/
  6813: data16 cbw  /*manual*/
  6814: edx = ecx
  6815: shr rax ,cl  /*manual*/
  6816: push r8  /*manual*/
  6817: movsx r8d ,bp  /*manual*/
  6818: push rcx  /*manual*/
  6819: ror byte ptr [rsp+rbx*1-0x39fbe23c] ,cl  /*manual*/
  6820: dword ptr [rsp+rbx*1-0x39fbe239] ^= esi
  6821: rol dword ptr [rsp+rbx*1-0x39fbe23f] ,cl  /*manual*/
  6822: r8 = qword ptr [rsp+rax*4-0xf0]
  6823: rax -= rdx
  6824: dec qword ptr [rsp+rbx*2-0x73f7c482]  /*manual*/
  6825: movsxd rsi ,esi  /*manual*/
  6826: shr bx ,0x8a  /*manual*/
  6827: r10 += rsi
  6828: sar ebp ,0xcf  /*manual*/
  6829: esi = 0x89294d19
  6830: movzx eax ,byte ptr [rax+r11*1+0xe207]  /*manual*/
  6831: al ^= r8b
  6832: movsx edi ,dx  /*manual*/
  6833: neg al  /*manual*/
  6834: rol dil ,0x83  /*manual*/
  6835: sbb al ,0xa0  /*manual*/
  6836: not al  /*manual*/
  6837: bx += si
  6838: sbb edx ,0x95b53450  /*manual*/
  6839: neg al  /*manual*/
  6840: shl dword ptr [rsp+rbx*2-0x73f69aa2] ,0x90  /*manual*/
  6841: r8b ^= al
  6842: btr dx ,bp  /*manual*/
  6843: neg ebp  /*manual*/
  6844: dword ptr [r9+rbx*2-0x73f69aa6] = eax
  6845: dec edx  /*manual*/
  6846: call 0x5d8dcd60bb34
  6847: movzx ecx ,byte ptr [rbx+r11*1-0x39fb4d4c]  /*manual*/
  6848: lea r11 ,ptr [r11+rbx*1-0x39fb4d4b]  /*manual*/
  6849: xadd byte ptr [rsp+rdx*1-0x6a4ba5e4] ,sil  /*manual*/
  6850: cl ^= r8b
  6851: cl -= 0x4d
  6852: shr byte ptr [rsp+rdx*1-0x6a4ba5e2] ,0x62  /*manual*/
  6853: lea rbp ,ptr [rbx+0x47a95270]  /*manual*/
  6854: neg cl  /*manual*/
  6855: qword ptr [rsp+rbx*1-0x39fb4d51] = 0x1e29f8d7
  6856: qword ptr [rsp+rdx*1-0x6a4ba5e0] = rbx
  6857: jmp 0x5d8dcd522fa4  /*manual*/
  6858: inc cl  /*manual*/
  6859: pop rbp  /*manual*/
  6860: rol ebx ,0x82  /*manual*/
  6861: cl ^= 0xf4
  6862: call 0x5d8dcd6dcb08
  6863: ror cl ,0x1  /*manual*/
  6864: qword ptr [rsp+rbp*1-0x1e29f8d7] = 0xffffffffc98720c3
  6865: neg qword ptr [rsp+rbp*2-0x3c53f1a5]  /*manual*/
  6866: adc cl ,sil  /*manual*/
  6867: dec rbp  /*manual*/
  6868: jnp 0x5d8dcd547f7b  /*manual*/
  6869: r8b ^= cl
  6870: call 0x5d8dcd69fc9e
  6871: xchg bp ,dx  /*manual*/
  6872: shl di ,0xa9  /*manual*/
  6873: lea rcx ,ptr [rsp+rcx*1+0x20]  /*manual*/
  6874: or dword ptr [rsp+rdx*1-0x6a4bf8ba] ,ebp  /*manual*/
  6875: movsx eax ,byte ptr [rsp+rbp*1-0x1e29a5d4]  /*manual*/
  6876: qword ptr [rsp+rbp*2-0x3c534be0] = 0x99edf2a
  6877: movzx dx ,byte ptr [rcx+rbp*2-0x3c534be0]  /*manual*/
  6878: word ptr [rbp+r9*1-0x1e29a5f6] = dx
  6879: lea r9 ,ptr [rbp+r9*1-0x1e29a5f6]  /*manual*/
  6880: pop rdi  /*manual*/
  6881: pop rbx  /*manual*/
  6882: pop rbx  /*manual*/
  6883: pop rdx  /*manual*/
  6884: jno 0x5d8dcd50cbc3  /*manual*/
  6885: edx = 0x17ac3ca4
  6886: lea rdx ,ptr [rsp+rdx*1-0x17ac3abc]  /*manual*/
  6887: call 0x5d8dcd5bd3dc
  6888: cmp r9 ,rdx  /*manual*/
  6889: call 0x5d8dcd5744a0
  6890: call 0x5d8dcd5d2928
  6891: lea rsp ,ptr [rsp+0x18]  /*manual*/
  6892: jnbe 0x5d8dcd63900c  /*manual*/
  6893: push 0x6c087856  /*manual*/
  6894: jmp 0x5d8dcd5cdbbe  /*manual*/
  6895: lea rsp ,ptr [rsp+0x8]  /*manual*/
  6896: jmp r10  /*manual*/
  6897: eax = 0xb19f98ca
  6898: lea rsi ,ptr [rax*8+0x610c269b]  /*manual*/
  6899: esi = dword ptr [r11]
  6900: r11 += 0x4
  6901: esi ^= r8d
  6902: lea rcx ,ptr [rax*4+0x2b955b78]  /*manual*/
  6903: dec esi  /*manual*/
  6904: not esi  /*manual*/
  6905: ebx = 0xf2b7049b
  6906: movzx edx ,bl  /*manual*/
  6907: lea rbp ,ptr [rbx-0x29639baa]  /*manual*/
  6908: bswap esi  /*manual*/
  6909: xchg ah ,dl  /*manual*/
  6910: dec edx  /*manual*/
  6911: lea esi ,ptr [rdx+rsi*1-0x3a84a50e]  /*manual*/
  6912: or dl ,bpl  /*manual*/
  6913: neg esi  /*manual*/
  6914: esi ^= 0xf5a3f321
  6915: shl bx ,0x2f  /*manual*/
  6916: and rax ,rbx  /*manual*/
  6917: push r8  /*manual*/
  6918: movzx r8d ,bx  /*manual*/
  6919: dword ptr [rsp+rdx*1-0xf7] ^= esi
  6920: jmp 0x5d8dcd504879  /*manual*/
  6921: pop r8  /*manual*/
  6922: movsxd rsi ,esi  /*manual*/
  6923: edi = 0xb0b45cf3
  6924: or rax ,0xffffffff9299da4e  /*manual*/
  6925: adc r10 ,rsi  /*manual*/
  6926: push rbx  /*manual*/
  6927: pop rcx  /*manual*/
  6928: movzx ebp ,byte ptr [r11+rax*1+0x4d6025b2]  /*manual*/
  6929: cqo   /*manual*/
  6930: btr cx ,di  /*manual*/
  6931: lea r11 ,ptr [rdx+r11*1+0x2]  /*manual*/
  6932: neg cx  /*manual*/
  6933: shl di ,0xcc  /*manual*/
  6934: xchg bx ,ax  /*manual*/
  6935: bpl ^= r8b
  6936: btr eax ,ebx  /*manual*/
  6937: bl += cl
  6938: sar ax ,0xc9  /*manual*/
  6939: neg bpl  /*manual*/
  6940: bts edx ,edi  /*manual*/
  6941: xadd edx ,ecx  /*manual*/
  6942: bpl ^= 0xde
  6943: bpl ^= cl
  6944: esi = eax
  6945: bpl += cl
  6946: r8b ^= bpl
  6947: sar cl ,0xa3  /*manual*/
  6948: rbp += rsp
  6949: inc rax  /*manual*/
  6950: jns 0x5d8dcd6c10c9  /*manual*/
  6951: js 0x5d8dcd593b81  /*manual*/
  6952: movzx si ,byte ptr [rbp]  /*manual*/
  6953: bt rax ,rdi  /*manual*/
  6954: sbb r9 ,0x1  /*manual*/
  6955: xadd al ,cl  /*manual*/
  6956: cdqe   /*manual*/
  6957: cdq   /*manual*/
  6958: word ptr [r9+rax*1+0x4d600040] = si
  6959: bswap edx  /*manual*/
  6960: call 0x5d8dcd6c74f2
  6961: and dl ,ah  /*manual*/
  6962: pop rbx  /*manual*/
  6963: jno 0x5d8dcd50cbc3  /*manual*/
  6964: edx = 0x17ac3ca4
  6965: lea rdx ,ptr [rsp+rdx*1-0x17ac3abc]  /*manual*/
  6966: call 0x5d8dcd5bd3dc
  6967: cmp r9 ,rdx  /*manual*/
  6968: call 0x5d8dcd5744a0
  6969: call 0x5d8dcd5d2928
  6970: lea rsp ,ptr [rsp+0x18]  /*manual*/
  6971: jnbe 0x5d8dcd63900c  /*manual*/
  6972: push 0x6c087856  /*manual*/
  6973: jmp 0x5d8dcd5cdbbe  /*manual*/
  6974: lea rsp ,ptr [rsp+0x8]  /*manual*/
  6975: jmp r10  /*manual*/
  6976: edi = 0x5488df99
  6977: movzx ecx ,di  /*manual*/
  6978: movsx eax ,di  /*manual*/
  6979: ecx = dword ptr [rcx+r11*1-0xdf99]
  6980: movzx ebx ,ax  /*manual*/
  6981: movzx edx ,bx  /*manual*/
  6982: ecx ^= r8d
  6983: ebp = edi
  6984: lea ecx ,ptr [rdi+rcx*1+0x36322e68]  /*manual*/
  6985: rbp += 0xfffffffff9af1251
  6986: btc ebx ,ebx  /*manual*/
  6987: not ax  /*manual*/
  6988: ror ecx ,0x2  /*manual*/
  6989: jmp 0x5d8dcd6cb297  /*manual*/
  6990: bswap ecx  /*manual*/
  6991: ror ecx ,0x3  /*manual*/
  6992: lea ecx ,ptr [rcx+rdi*4-0x74fbdec7]  /*manual*/
  6993: sar ax ,0x87  /*manual*/
  6994: setnz bl  /*manual*/
  6995: not ecx  /*manual*/
  6996: movsx esi ,di  /*manual*/
  6997: btr ebx ,edi  /*manual*/
  6998: bswap ecx  /*manual*/
  6999: push rdx  /*manual*/
  7000: xchg byte ptr [rsp+rbx*4-0x37c01] ,sil  /*manual*/
  7001: adc edi ,ebx  /*manual*/
  7002: lea ecx ,ptr [rcx+rdi*1-0x7a1f9529]  /*manual*/
  7003: neg dword ptr [rsp+rdi*1-0x5489be98]  /*manual*/
  7004: qword ptr [rsp+rdi*1-0x5489be9b] = r8
  7005: dword ptr [rsp+rdx*1-0xdf99] ^= ecx
  7006: inc bx  /*manual*/
  7007: rsi -= rsi
  7008: and rdi ,rax  /*manual*/
  7009: pop r8  /*manual*/
  7010: sbb edx ,edx  /*manual*/
  7011: cqo   /*manual*/
  7012: jnz 0x5d8dcd6bb5f0  /*manual*/
  7013: movsxd rcx ,ecx  /*manual*/
  7014: neg sil  /*manual*/
  7015: xadd bx ,di  /*manual*/
  7016: adc r10 ,rcx  /*manual*/
  7017: bp -= ax
  7018: movzx cx ,byte ptr [rbx+r9*1-0xdf02]  /*manual*/
  7019: bpl = byte ptr [r9+rbx*4-0x37c06]
  7020: shl rdi ,0x68  /*manual*/
  7021: cqo   /*manual*/
  7022: dec bl  /*manual*/
  7023: not cl  /*manual*/
  7024: dec dil  /*manual*/
  7025: adc si ,di  /*manual*/
  7026: xchg rbx ,rsi  /*manual*/
  7027: bpl ^= dil
  7028: and edi ,esi  /*manual*/
  7029: rol rdi ,0xe7  /*manual*/
  7030: and cl ,bpl  /*manual*/
  7031: word ptr [r9+rbx*1-0xfd] = cx
  7032: movzx eax ,byte ptr [r11+rbx*4-0x3f8]  /*manual*/
  7033: movzx ecx ,dx  /*manual*/
  7034: lea r11 ,ptr [r11+rbx*1-0xfa]  /*manual*/
  7035: al ^= r8b
  7036: lea rbp ,ptr [rdi+rcx*4-0x2c4387db]  /*manual*/
  7037: ror al ,0x1  /*manual*/
  7038: ecx ^= 0xfb9836a7
  7039: bswap rdi  /*manual*/
  7040: lea rsi ,ptr [rbp*4-0x6f45ac5e]  /*manual*/
  7041: sbb al ,0xf3  /*manual*/
  7042: and bpl ,0xc2  /*manual*/
  7043: or si ,bx  /*manual*/
  7044: ror al ,0x1  /*manual*/
  7045: and dx ,cx  /*manual*/
  7046: sbb al ,bl  /*manual*/
  7047: lea rbx ,ptr [rbx+rdi*4-0x35596419]  /*manual*/
  7048: shr dil ,0xa5  /*manual*/
  7049: ror al ,0x1  /*manual*/
  7050: and bpl ,0x72  /*manual*/
  7051: r8b ^= al
  7052: si -= 0xea1f
  7053: jo 0x5d8dcd676fb3  /*manual*/
  7054: rax += rsp
  7055: movzx bp ,byte ptr [rax+rdi*1-0x80000000]  /*manual*/
  7056: push rdx  /*manual*/
  7057: neg esi  /*manual*/
  7058: call 0x5d8dcd5f909a
  7059: di += bp
  7060: pop rbx  /*manual*/
  7061: rbx += 0xffffffffffe6df3a
  7062: jmp rbx  /*manual*/
  7063: movzx di ,dil  /*manual*/
  7064: dec dword ptr [rsp+rdx*1+0x3]  /*manual*/
  7065: cl = byte ptr [r9+rdx*2+0x2]
  7066: movzx ebp ,sil  /*manual*/
  7067: inc qword ptr [rsp+rdx*1]  /*manual*/
  7068: pop rdx  /*manual*/
  7069: not dil  /*manual*/
  7070: not cl  /*manual*/
  7071: or dil ,cl  /*manual*/
  7072: rbp += rdx
  7073: and rdx ,rsi  /*manual*/
  7074: word ptr [r9+rdx*1-0x1ffffffe] = di
  7075: movzx ebx ,si  /*manual*/
  7076: lea r9 ,ptr [r9+rdx*1-0x1ffffffe]  /*manual*/
  7077: si -= 0xd126
  7078: lea rdi ,ptr [rsi+rsi*2-0x2c531228]  /*manual*/
  7079: jmp r10  /*manual*/
  7080: ecx = 0x5d0d6fe9
  7081: movsx eax ,cx  /*manual*/
  7082: movzx esi ,ax  /*manual*/
  7083: movzx ebp ,byte ptr [rcx+r11*1-0x5d0d6fe9]  /*manual*/
  7084: si -= si
  7085: sbb rax ,rax  /*manual*/
  7086: bpl ^= r8b
  7087: movzx edi ,cl  /*manual*/
  7088: neg bpl  /*manual*/
  7089: esi -= ecx
  7090: rol bpl ,0x1  /*manual*/
  7091: data16 cbw  /*manual*/
  7092: dec esi  /*manual*/
  7093: bpl += 0xc7
  7094: ror bpl ,0x1  /*manual*/
  7095: cdq   /*manual*/
  7096: r8b ^= bpl
  7097: shl dil ,0xe2  /*manual*/
  7098: rbp += rsp
  7099: movzx cx ,byte ptr [rcx+rbp*1-0x5d0d6fe9]  /*manual*/
  7100: word ptr [r9+rax*4-0x2] = cx
  7101: ebx = dword ptr [rax+r11*1+0x1]
  7102: ebp = edi
  7103: neg rax  /*manual*/
  7104: seto dl  /*manual*/
  7105: ebx ^= r8d
  7106: xadd dil ,sil  /*manual*/
  7107: dec ebx  /*manual*/
  7108: ecx = 0xb428f39b
  7109: push rcx  /*manual*/
  7110: and dword ptr [rsp+rax*1+0x3] ,ecx  /*manual*/
  7111: not ebx  /*manual*/
  7112: btc eax ,eax  /*manual*/
  7113: setb al  /*manual*/
  7114: bswap ebx  /*manual*/
  7115: not byte ptr [rsp+rax*1]  /*manual*/
  7116: lea ebx ,ptr [rbx+rax*2-0x3a84a477]  /*manual*/
  7117: neg ebx  /*manual*/
  7118: shl cl ,0x2  /*manual*/
  7119: data16 cbw  /*manual*/
  7120: ebx ^= 0xf5a3f321
  7121: sar word ptr [rsp+rax*8+0x3] ,cl  /*manual*/
  7122: cl ^= dl
  7123: pop rdx  /*manual*/
  7124: push r8  /*manual*/
  7125: lea r8 ,ptr [rcx-0x45e7847f]  /*manual*/
  7126: btr r8d ,ebp  /*manual*/
  7127: shl eax ,0x64  /*manual*/
  7128: dword ptr [rsp+rdi*2-0x174] ^= ebx
  7129: pop r8  /*manual*/
  7130: jmp 0x5d8dcd5bd2c1  /*manual*/
  7131: dil -= dl
  7132: movsxd rbx ,ebx  /*manual*/
  7133: btr ecx ,ecx  /*manual*/
  7134: rbp -= rcx
  7135: shl edi ,cl  /*manual*/
  7136: adc r10 ,rbx  /*manual*/
  7137: xchg dil ,bpl  /*manual*/
  7138: movzx esi ,byte ptr [rax+r11*1+0x5]  /*manual*/
  7139: xadd di ,ax  /*manual*/
  7140: lea r11 ,ptr [r11+rax*1-0x6032]  /*manual*/
  7141: bswap rbp  /*manual*/
  7142: sil ^= r8b
  7143: movsx ebx ,al  /*manual*/
  7144: dec bx  /*manual*/
  7145: and bl ,0x7  /*manual*/
  7146: rol sil ,0x1  /*manual*/
  7147: sil += bpl
  7148: jmp 0x5d8dcd5142d4  /*manual*/
  7149: or al ,0xfc  /*manual*/
  7150: sil ^= bpl
  7151: cx += dx
  7152: and ecx ,edi  /*manual*/
  7153: ror sil ,0x1  /*manual*/
  7154: al -= dil
  7155: adc sil ,0xc0  /*manual*/
  7156: rol sil ,0x1  /*manual*/
  7157: xchg dh ,bl  /*manual*/
  7158: sil += bpl
  7159: neg sil  /*manual*/
  7160: not rbx  /*manual*/
  7161: shr al ,0x82  /*manual*/
  7162: ror sil ,0x1  /*manual*/
  7163: cqo   /*manual*/
  7164: and rdi ,rdi  /*manual*/
  7165: r8b ^= sil
  7166: rsi += rsp
  7167: inc ebp  /*manual*/
  7168: btc bp ,0x4e  /*manual*/
  7169: adc dl ,byte ptr [rsi+rax*8-0x30188]  /*manual*/
  7170: word ptr [r9+rax*2-0xc066] = dx
  7171: xadd rcx ,rbx  /*manual*/
  7172: shl ax ,0x61  /*manual*/
  7173: neg rbx  /*manual*/
  7174: lea r9 ,ptr [r9+rax*2-0x180c8]  /*manual*/
  7175: jl 0x5d8dcd50cbc3  /*manual*/
  7176: edx = 0x17ac3ca4
  7177: lea rdx ,ptr [rsp+rdx*1-0x17ac3abc]  /*manual*/
  7178: call 0x5d8dcd5bd3dc
  7179: cmp r9 ,rdx  /*manual*/
  7180: call 0x5d8dcd5744a0
  7181: call 0x5d8dcd5d2928
  7182: lea rsp ,ptr [rsp+0x18]  /*manual*/
  7183: jnbe 0x5d8dcd63900c  /*manual*/
  7184: push 0x6c087856  /*manual*/
  7185: jmp 0x5d8dcd5cdbbe  /*manual*/
  7186: lea rsp ,ptr [rsp+0x8]  /*manual*/
  7187: jmp r10  /*manual*/
  7188: edi = 0x90ad8248
  7189: push rdi  /*manual*/
  7190: movsx ecx ,word ptr [rsp+0x1]  /*manual*/
  7191: movzx esi ,byte ptr [r11]  /*manual*/
  7192: rol cl ,cl  /*manual*/
  7193: push rcx  /*manual*/
  7194: lea rbx ,ptr [rcx+rdi*2+0xb3670eb]  /*manual*/
  7195: adc r11 ,0x1  /*manual*/
  7196: sil ^= r8b
  7197: neg sil  /*manual*/
  7198: shr rdi ,cl  /*manual*/
  7199: call 0x5d8dcd6d7952
  7200: and dword ptr [rsp+rdi*2-0x4856ad] ,ebx  /*manual*/
  7201: sil ^= 0xde
  7202: movzx ebp ,word ptr [rsp+rdi*1-0x242b53]  /*manual*/
  7203: shr rcx ,0x72  /*manual*/
  7204: not sil  /*manual*/
  7205: dec sil  /*manual*/
  7206: inc word ptr [rsp+rdi*2-0x4856ac]  /*manual*/
  7207: r8b ^= sil
  7208: pop rdx  /*manual*/
  7209: rdx += 0x7c5cd
  7210: jmp rdx  /*manual*/
  7211: lea rsi ,ptr [rsp+rsi*1+0x10]  /*manual*/
  7212: eax = 0xd82983d1
  7213: movzx di ,byte ptr [rsi+rdi*2-0x4856c0]  /*manual*/
  7214: lea r9 ,ptr [r9+rcx*2-0x2]  /*manual*/
  7215: or ecx ,dword ptr [rsp+rbp*1+0xb]  /*manual*/
  7216: neg rax  /*manual*/
  7217: esi = dword ptr [rsp+rcx*2-0x2fd]
  7218: word ptr [r9+rbp*8] = di
  7219: edi = dword ptr [r11+rcx*1-0x180]
  7220: eax -= dword ptr [rsp+rcx*2-0x2f5]
  7221: or dword ptr [rsp+rcx*1-0x177] ,ebx  /*manual*/
  7222: lea r11 ,ptr [r11+rcx*2-0x2fc]  /*manual*/
  7223: shl esi ,0x69  /*manual*/
  7224: edx = 0xf82d1084
  7225: edi ^= r8d
  7226: and bl ,cl  /*manual*/
  7227: dec edi  /*manual*/
  7228: xchg rdx ,rax  /*manual*/
  7229: shr al ,0x81  /*manual*/
  7230: not edi  /*manual*/
  7231: bpl ^= 0x2e
  7232: bswap edi  /*manual*/
  7233: and edx ,dword ptr [rsp+rcx*2-0x2f7]  /*manual*/
  7234: setb cl  /*manual*/
  7235: data16 cwd  /*manual*/
  7236: lea edi ,ptr [rdi+rcx*2-0x3a84a677]  /*manual*/
  7237: neg edi  /*manual*/
  7238: dec dword ptr [rsp+rbp*1-0x26]  /*manual*/
  7239: cdq   /*manual*/
  7240: edi ^= 0xf5a3f321
  7241: jmp 0x5d8dcd583b5a  /*manual*/
  7242: qword ptr [rsp+rcx*1-0xf8] = r8
  7243: dword ptr [rsp+rcx*1-0xf8] ^= edi
  7244: xchg qword ptr [rsp+rcx*2-0x200] ,rbp  /*manual*/
  7245: sar ecx ,0x81  /*manual*/
  7246: r8 = qword ptr [rsp+rsi*8-0xfeff8]
  7247: cdqe   /*manual*/
  7248: neg esi  /*manual*/
  7249: sbb al ,byte ptr [rsp+rax*1+0x7d2efbf]  /*manual*/
  7250: movsxd rdi ,edi  /*manual*/
  7251: adc r10 ,rdi  /*manual*/
  7252: shl rbx ,0xc  /*manual*/
  7253: pop rsi  /*manual*/
  7254: pop rdi  /*manual*/
  7255: jnb 0x5d8dcd50cbc3  /*manual*/
  7256: edx = 0x17ac3ca4
  7257: lea rdx ,ptr [rsp+rdx*1-0x17ac3abc]  /*manual*/
  7258: call 0x5d8dcd5bd3dc
  7259: cmp r9 ,rdx  /*manual*/
  7260: call 0x5d8dcd5744a0
  7261: call 0x5d8dcd5d2928
  7262: lea rsp ,ptr [rsp+0x18]  /*manual*/
  7263: jnbe 0x5d8dcd63900c  /*manual*/
  7264: push 0x6c087856  /*manual*/
  7265: jmp 0x5d8dcd5cdbbe  /*manual*/
  7266: lea rsp ,ptr [rsp+0x8]  /*manual*/
  7267: jmp r10  /*manual*/
  7268: movzx cx ,byte ptr [r9]  /*manual*/
  7269: push 0x22a7005c  /*manual*/
  7270: al = byte ptr [r9+0x2]
  7271: ebp = dword ptr [rsp+0x4]
  7272: or cl ,al  /*manual*/
  7273: ebx = ebp
  7274: not cl  /*manual*/
  7275: lea rdx ,ptr [rbp+rbx*8-0x5af8e44b]  /*manual*/
  7276: esi = 0xfd1bb7e4
  7277: di = cx
  7278: movzx di ,dil  /*manual*/
  7279: movsx ecx ,sil  /*manual*/
  7280: or bl ,byte ptr [r9+rbp*1+0x4]  /*manual*/
  7281: lea rcx ,ptr [rcx*4+0x3522af04]  /*manual*/
  7282: call 0x5d8dcd69f304
  7283: or byte ptr [rsp+rbp*1+0xe] ,bpl  /*manual*/
  7284: and dil ,bl  /*manual*/
  7285: push rsi  /*manual*/
  7286: bp += word ptr [rsp+rbp*1+0x10]
  7287: not dword ptr [rsp+rbp*2-0xb4]  /*manual*/
  7288: not dil  /*manual*/
  7289: qword ptr [rsp+rbp*1-0x54] = rdx
  7290: word ptr [r9+rbp*1-0x58] = di
  7291: dl += bpl
  7292: ebx = dword ptr [rbp+r11*1-0x5c]
  7293: adc rdx ,0x6133e037  /*manual*/
  7294: xchg qword ptr [rsp+rbp*1-0x50] ,rbp  /*manual*/
  7295: lea r11 ,ptr [r11+rdx*4-0x18ebed20]  /*manual*/
  7296: call 0x5d8dcd5c87e3
  7297: ebx ^= r8d
  7298: xchg esi ,ecx  /*manual*/
  7299: call 0x5d8dcd6ec60f
  7300: ebx -= ebp
  7301: and byte ptr [rsp+rdx*2-0xc75f680] ,0x3c  /*manual*/
  7302: ror ebx ,0x2  /*manual*/
  7303: bswap ebx  /*manual*/
  7304: edi = ebp
  7305: and rdi ,rsi  /*manual*/
  7306: rol ecx ,cl  /*manual*/
  7307: ebx ^= ebp
  7308: qword ptr [rsp+rdx*8-0x31d7da28] += r8
  7309: dec cx  /*manual*/
  7310: dword ptr [rsp+rdx*1-0x63afb29] ^= ebx
  7311: r8 = qword ptr [rsp+rdx*2-0xc75f672]
  7312: movsxd rbx ,ebx  /*manual*/
  7313: lea rsi ,ptr [rcx*8-0x3fa2f75]  /*manual*/
  7314: not byte ptr [rsp+rdx*2-0xc75f673]  /*manual*/
  7315: r10 += rbx
  7316: pop rax  /*manual*/
  7317: call 0x5d8dcd572908
  7318: movzx bx ,byte ptr [r9+rdx*2-0xc75f68e]  /*manual*/
  7319: movsx eax ,word ptr [rsp+rdx*2-0xc75f682]  /*manual*/
  7320: cl = byte ptr [r9+rdx*1-0x63afb43]
  7321: bl ^= bpl
  7322: data16 cbw  /*manual*/
  7323: qword ptr [rsp+rdx*2-0xc75f692] = 0x1a3ca277
  7324: pop rdx  /*manual*/
  7325: cl ^= bpl
  7326: push rax  /*manual*/
  7327: or bl ,cl  /*manual*/
  7328: or word ptr [rsp+rdx*1-0x1a3ca272] ,ax  /*manual*/
  7329: sar qword ptr [rsp+rdx*4-0x68f289cb] ,0xbc  /*manual*/
  7330: word ptr [rdx+r9*1-0x1a3ca271] = bx
  7331: sar dil ,0x84  /*manual*/
  7332: lea r9 ,ptr [r9+rdx*1-0x1a3ca271]  /*manual*/
  7333: qword ptr [rsp+rdi*1-0x3522aef9] = r10
  7334: return
  7335: edi = dword ptr [r11]
  7336: r11 += 0x4
  7337: edi ^= r8d
  7338: jmp 0x5d8dcd5bb63f  /*manual*/
  7339: bswap edi  /*manual*/
  7340: rol edi ,0x1  /*manual*/
  7341: bswap edi  /*manual*/
  7342: edx = 0xa4116a77
  7343: lea rcx ,ptr [rdx+rdx*1+0x44023103]  /*manual*/
  7344: eax = 0x280f60ed
  7345: lea edi ,ptr [rdx+rdi*1-0x40f0b4bf]  /*manual*/
  7346: call 0x5d8dcd6636f7
  7347: pop rsi  /*manual*/
  7348: bswap ecx  /*manual*/
  7349: push r8  /*manual*/
  7350: lea rbx ,ptr [rdx+rcx*1+0x6f90a6a2]  /*manual*/
  7351: btc rbx ,rax  /*manual*/
  7352: dword ptr [rsp+rax*1-0x280f60ed] ^= edi
  7353: movzx r8d ,dl  /*manual*/
  7354: rol r8d ,0xc  /*manual*/
  7355: rax ^= r8
  7356: pop r8  /*manual*/
  7357: rol cx ,cl  /*manual*/
  7358: shl al ,0x63  /*manual*/
  7359: shr rdx ,0x2d  /*manual*/
  7360: movsxd rdi ,edi  /*manual*/
  7361: adc r10 ,rdi  /*manual*/
  7362: esi = 0xf698fc80
  7363: rol rsi ,cl  /*manual*/
  7364: sar esi ,0xf0  /*manual*/
  7365: movzx ebp ,byte ptr [r11+rdx*1]  /*manual*/
  7366: si -= bx
  7367: call 0x5d8dcd5de8aa
  7368: lea r11 ,ptr [rdx+r11*1+0x1]  /*manual*/
  7369: bpl ^= r8b
  7370: qword ptr [rsp+rdx*1] = 0xffffffffa70ca471
  7371: rol bpl ,0x1  /*manual*/
  7372: neg bpl  /*manual*/
  7373: push rax  /*manual*/
  7374: lea rdi ,ptr [rcx*4-0x5559e7ce]  /*manual*/
  7375: eax -= edx
  7376: ror bpl ,0x1  /*manual*/
  7377: and esi ,dword ptr [rsp+rdx*1+0x3]  /*manual*/
  7378: shl qword ptr [rsp+rdx*8+0x7] ,cl  /*manual*/
  7379: push rsi  /*manual*/
  7380: sbb bpl ,dl  /*manual*/
  7381: call 0x5d8dcd59b286
  7382: shl dx ,0x6d  /*manual*/
  7383: r8b ^= bpl
  7384: lea rdx ,ptr [rcx-0x6dfb52c3]  /*manual*/
  7385: bswap rsi  /*manual*/
  7386: pop rdx  /*manual*/
  7387: rdx += 0xfffffffffffd362b
  7388: jmp rdx  /*manual*/
  7389: lea r9 ,ptr [r9+rax*2-0x501020d2]  /*manual*/
  7390: rol dword ptr [rsp+rax*1-0x28081061] ,cl  /*manual*/
  7391: word ptr [r9+rax*1-0x28081068] = bp
  7392: cdqe   /*manual*/
  7393: call 0x5d8dcd6a952a
  7394: pop rax  /*manual*/
  7395: pop rdx  /*manual*/
  7396: pop rdi  /*manual*/
  7397: pop rsi  /*manual*/
  7398: jnb 0x5d8dcd50cbc3  /*manual*/
  7399: edx = 0x17ac3ca4
  7400: lea rdx ,ptr [rsp+rdx*1-0x17ac3abc]  /*manual*/
  7401: call 0x5d8dcd5bd3dc
  7402: cmp r9 ,rdx  /*manual*/
  7403: call 0x5d8dcd5744a0
  7404: call 0x5d8dcd5d2928
  7405: lea rsp ,ptr [rsp+0x18]  /*manual*/
  7406: jnbe 0x5d8dcd63900c  /*manual*/
  7407: push 0x6c087856  /*manual*/
  7408: jmp 0x5d8dcd5cdbbe  /*manual*/
  7409: lea rsp ,ptr [rsp+0x8]  /*manual*/
  7410: jmp r10  /*manual*/
  7411: ebp = 0x742e4088
  7412: dx = word ptr [r9+rbp*1-0x742e4088]
  7413: di = word ptr [r9+rbp*1-0x742e4086]
  7414: movzx esi ,bpl  /*manual*/
  7415: and dx ,di  /*manual*/
  7416: ecx = esi
  7417: lea rbx ,ptr [rcx+rsi*8+0xcbef252]  /*manual*/
  7418: neg rbx  /*manual*/
  7419: not dx  /*manual*/
  7420: movsx eax ,si  /*manual*/
  7421: jnb 0x5d8dcd6d2182  /*manual*/
  7422: btr esi ,eax  /*manual*/
  7423: word ptr [r9+rsi*2-0x10e] = dx
  7424: lea rdi ,ptr [r9+rbp*1-0x742e4086]  /*manual*/
  7425: cdqe   /*manual*/
  7426: rbp = rdi
  7427: adc rbx ,rcx  /*manual*/
  7428: rol al ,0x86  /*manual*/
  7429: si = word ptr [rbp+rsi*2-0x110]
  7430: btc cx ,ax  /*manual*/
  7431: data16 cbw  /*manual*/
  7432: and bl ,bl  /*manual*/
  7433: word ptr [rcx+r9*1-0x8c] = si
  7434: lea rax ,ptr [rcx*4+0x1305a1df]  /*manual*/
  7435: lea rsi ,ptr [rcx*8-0x495d55a0]  /*manual*/
  7436: movzx ebp ,bl  /*manual*/
  7437: ecx = dword ptr [r11+rcx*2-0x118]
  7438: lea r11 ,ptr [rbx+r11*1+0xcbef696]  /*manual*/
  7439: ecx ^= r8d
  7440: ror ecx ,0x2  /*manual*/
  7441: or bp ,bx  /*manual*/
  7442: dec ecx  /*manual*/
  7443: cqo   /*manual*/
  7444: bswap ecx  /*manual*/
  7445: neg ecx  /*manual*/
  7446: dl ^= bpl
  7447: push rbp  /*manual*/
  7448: qword ptr [rsp+rbx*1+0xcbef692] = r8
  7449: edi = edx
  7450: data16 cbw  /*manual*/
  7451: dword ptr [rsp+rbx*1+0xcbef692] ^= ecx
  7452: sar ebp ,0xfd  /*manual*/
  7453: not rsi  /*manual*/
  7454: shl dl ,0x5  /*manual*/
  7455: pop r8  /*manual*/
  7456: sbb edx ,ebx  /*manual*/
  7457: movsxd rcx ,ecx  /*manual*/
  7458: call 0x5d8dcd66c89f
  7459: call 0x5d8dcd6b0ef3
  7460: r10 += rcx
  7461: qword ptr [rsp+rbx*8+0x65f7b498] = rdx
  7462: qword ptr [rsp+rbx*2+0x197ded24] = r10
  7463: return
  7464: edi = 0x640ecb77
  7465: movsx esi ,di  /*manual*/
  7466: bx = word ptr [r9+rdi*1-0x640ecb77]
  7467: ebp = 0xb93e3db0
  7468: ax = word ptr [rdi+r9*1-0x640ecb75]
  7469: movzx edx ,dil  /*manual*/
  7470: push rdi  /*manual*/
  7471: lea rcx ,ptr [rdx+rbp*1+0x1036fe64]  /*manual*/
  7472: and bx ,ax  /*manual*/
  7473: eax = edi
  7474: not bx  /*manual*/
  7475: word ptr [r9+rdi*1-0x640ecb75] = bx
  7476: ecx = dword ptr [r11+rdi*1-0x640ecb77]
  7477: shl dword ptr [rsp+rdx*1-0x74] ,0x21  /*manual*/
  7478: lea rbx ,ptr [rdi+rax*1+0x4cae12d4]  /*manual*/
  7479: ecx ^= r8d
  7480: bswap ecx  /*manual*/
  7481: dec byte ptr [rsp+rdi*1-0x640ecb74]  /*manual*/
  7482: setnl byte ptr [rsp+rdx*2-0xeb]  /*manual*/
  7483: neg si  /*manual*/
  7484: dec ecx  /*manual*/
  7485: jmp 0x5d8dcd56a5ea  /*manual*/
  7486: push rsi  /*manual*/
  7487: lea rdi ,ptr [rax*4-0x515550ac]  /*manual*/
  7488: ecx ^= 0xd580919c
  7489: inc ecx  /*manual*/
  7490: dword ptr [rsp+rdx*1-0x71] = ebx
  7491: qword ptr [rsp+rdx*2-0xe6] = r8
  7492: lea r8 ,ptr [rsi+rsi*4-0x4b736d64]  /*manual*/
  7493: shl word ptr [rsp+rdx*1-0x71] ,0xab  /*manual*/
  7494: dword ptr [rsp+rdx*8-0x3b0] ^= ecx
  7495: and rsi ,qword ptr [rsp+rdx*1-0x77]  /*manual*/
  7496: inc word ptr [rsp+rdx*1-0x72]  /*manual*/
  7497: setnb byte ptr [rsp+rdx*2-0xee]  /*manual*/
  7498: r8 = qword ptr [rsp+rdx*1-0x6f]
  7499: movsxd rcx ,ecx  /*manual*/
  7500: jl 0x5d8dcd5917ae  /*manual*/
  7501: qword ptr [rsp+rdx*4-0x1d4] = 0x5e1a21af
  7502: xchg byte ptr [rsp+rdx*1-0x77] ,dil  /*manual*/
  7503: adc r10 ,rcx  /*manual*/
  7504: shl sil ,0xe1  /*manual*/
  7505: dx = word ptr [r11+rdx*8-0x3b4]
  7506: bt rsi ,0x78  /*manual*/
  7507: ecx = 0xf89c5899
  7508: call 0x5d8dcd69f02f
  7509: lea r11 ,ptr [r11+rax*1-0x640ecb71]  /*manual*/
  7510: cmovnb di ,bx  /*manual*/
  7511: qword ptr [rsp+rax*1-0x640ecb6d] = rax
  7512: dx ^= r8w
  7513: dx -= 0x613d
  7514: ror dx ,0x1  /*manual*/
  7515: dec word ptr [rsp+rax*1-0x640ecb61]  /*manual*/
  7516: pop rdi  /*manual*/
  7517: dx += 0xed40
  7518: ror bx ,0x6e  /*manual*/
  7519: sbb si ,ax  /*manual*/
  7520: shl rax ,cl  /*manual*/
  7521: rol dx ,0x1  /*manual*/
  7522: jmp 0x5d8dcd5cba23  /*manual*/
  7523: not qword ptr [rsp+0x8]  /*manual*/
  7524: shl ax ,0x6  /*manual*/
  7525: r8w ^= dx
  7526: inc rax  /*manual*/
  7527: ror qword ptr [rsp] ,0xd8  /*manual*/
  7528: shl dword ptr [rsp+0x3] ,cl  /*manual*/
  7529: word ptr [r9] = dx
  7530: pop rsi  /*manual*/
  7531: pop rcx  /*manual*/
  7532: jmp r10  /*manual*/
  7533: ebx = 0x221ced18
  7534: movsx edx ,bl  /*manual*/
  7535: esi = dword ptr [rdx+r11*1-0x18]
  7536: lea r11 ,ptr [r11+rdx*2-0x2c]  /*manual*/
  7537: movsx ecx ,dx  /*manual*/
  7538: jmp 0x5d8dcd6c9bc1  /*manual*/
  7539: esi ^= r8d
  7540: not esi  /*manual*/
  7541: movsx ebp ,bx  /*manual*/
  7542: ror esi ,0x3  /*manual*/
  7543: push rdx  /*manual*/
  7544: not esi  /*manual*/
  7545: bswap esi  /*manual*/
  7546: qword ptr [rsp+rbx*2-0x4439da30] = r8
  7547: dword ptr [rsp+rbx*1-0x221ced18] ^= esi
  7548: movsx edi ,dx  /*manual*/
  7549: pop r8  /*manual*/
  7550: eax = edi
  7551: rbx -= rcx
  7552: movsxd rsi ,esi  /*manual*/
  7553: adc r10 ,rsi  /*manual*/
  7554: rol rcx ,0xa  /*manual*/
  7555: shl ax ,0x2f  /*manual*/
  7556: bx = word ptr [r9+rbx*2-0x4439da00]
  7557: cmovs rcx ,rbp  /*manual*/
  7558: sbb dx ,bp  /*manual*/
  7559: or cl ,byte ptr [rdx+r9*1-0x12fe]  /*manual*/
  7560: cwde   /*manual*/
  7561: btr rdx ,0x2  /*manual*/
  7562: shr bx ,cl  /*manual*/
  7563: data16 cwd  /*manual*/
  7564: word ptr [rdi+r9*1-0x16] = bx
  7565: ror dil ,0xa1  /*manual*/
  7566: di = 0x1
  7567: movsx ebx ,dx  /*manual*/
  7568: word ptr [r9+rdx*1] = di
  7569: lea rsi ,ptr [rdx+rbx*4+0x4d962516]  /*manual*/
  7570: movsx edi ,al  /*manual*/
  7571: shr dx ,0x22  /*manual*/
  7572: rdx += r10
  7573: jmp rdx  /*manual*/
  7574: ebp = 0x742e4088
  7575: dx = word ptr [r9+rbp*1-0x742e4088]
  7576: di = word ptr [r9+rbp*1-0x742e4086]
  7577: movzx esi ,bpl  /*manual*/
  7578: and dx ,di  /*manual*/
  7579: ecx = esi
  7580: lea rbx ,ptr [rcx+rsi*8+0xcbef252]  /*manual*/
  7581: neg rbx  /*manual*/
  7582: not dx  /*manual*/
  7583: movsx eax ,si  /*manual*/
  7584: jnb 0x5d8dcd6d2182  /*manual*/
  7585: btr esi ,eax  /*manual*/
  7586: word ptr [r9+rsi*2-0x10e] = dx
  7587: lea rdi ,ptr [r9+rbp*1-0x742e4086]  /*manual*/
  7588: cdqe   /*manual*/
  7589: rbp = rdi
  7590: adc rbx ,rcx  /*manual*/
  7591: rol al ,0x86  /*manual*/
  7592: si = word ptr [rbp+rsi*2-0x110]
  7593: btc cx ,ax  /*manual*/
  7594: data16 cbw  /*manual*/
  7595: and bl ,bl  /*manual*/
  7596: word ptr [rcx+r9*1-0x8c] = si
  7597: lea rax ,ptr [rcx*4+0x1305a1df]  /*manual*/
  7598: lea rsi ,ptr [rcx*8-0x495d55a0]  /*manual*/
  7599: movzx ebp ,bl  /*manual*/
  7600: ecx = dword ptr [r11+rcx*2-0x118]
  7601: lea r11 ,ptr [rbx+r11*1+0xcbef696]  /*manual*/
  7602: ecx ^= r8d
  7603: ror ecx ,0x2  /*manual*/
  7604: or bp ,bx  /*manual*/
  7605: dec ecx  /*manual*/
  7606: cqo   /*manual*/
  7607: bswap ecx  /*manual*/
  7608: neg ecx  /*manual*/
  7609: dl ^= bpl
  7610: push rbp  /*manual*/
  7611: qword ptr [rsp+rbx*1+0xcbef692] = r8
  7612: edi = edx
  7613: data16 cbw  /*manual*/
  7614: dword ptr [rsp+rbx*1+0xcbef692] ^= ecx
  7615: sar ebp ,0xfd  /*manual*/
  7616: not rsi  /*manual*/
  7617: shl dl ,0x5  /*manual*/
  7618: pop r8  /*manual*/
  7619: sbb edx ,ebx  /*manual*/
  7620: movsxd rcx ,ecx  /*manual*/
  7621: call 0x5d8dcd66c89f
  7622: call 0x5d8dcd6b0ef3
  7623: r10 += rcx
  7624: qword ptr [rsp+rbx*8+0x65f7b498] = rdx
  7625: qword ptr [rsp+rbx*2+0x197ded24] = r10
  7626: return
  7627: cx = word ptr [r9]
  7628: bx = word ptr [r9+0x2]
  7629: edx = 0xca0a1446
  7630: movsx edi ,dl  /*manual*/
  7631: movzx eax ,dil  /*manual*/
  7632: lea r9 ,ptr [r9+rdi*1-0x44]  /*manual*/
  7633: call 0x5d8dcd4fc4e3
  7634: qword ptr [rsp+rdi*2-0x8c] = rax
  7635: not cx  /*manual*/
  7636: shl dx ,0x2c  /*manual*/
  7637: not bx  /*manual*/
  7638: and cx ,bx  /*manual*/
  7639: word ptr [r9+rdi*1-0x46] = cx
  7640: shl rdx ,0xe6  /*manual*/
  7641: rdx -= rdx
  7642: ebx = dword ptr [r11+rdx*2]
  7643: cwde   /*manual*/
  7644: movzx ebp ,al  /*manual*/
  7645: lea r11 ,ptr [r11+rdx*2+0x4]  /*manual*/
  7646: jz 0x5d8dcd554482  /*manual*/
  7647: ebx ^= r8d
  7648: call 0x5d8dcd5ae986
  7649: qword ptr [rsp+rdx*1] = 0xffffffffa4100930
  7650: not ebx  /*manual*/
  7651: esi = 0x50bfc3b5
  7652: ebx ^= 0xf956ec6
  7653: cwde   /*manual*/
  7654: byte ptr [rsp+rdx*2+0xc] ^= 0xc9
  7655: jnb 0x5d8dcd585fbb  /*manual*/
  7656: not ebx  /*manual*/
  7657: inc sil  /*manual*/
  7658: cqo   /*manual*/
  7659: rol ebx ,0x3  /*manual*/
  7660: shr qword ptr [rsp+rdx*2+0x8] ,0xb3  /*manual*/
  7661: inc ebx  /*manual*/
  7662: not word ptr [rsp+rdx*1+0x5]  /*manual*/
  7663: pop rcx  /*manual*/
  7664: shr cx ,0xd  /*manual*/
  7665: adc qword ptr [rsp+rdx*1] ,r8  /*manual*/
  7666: cdqe   /*manual*/
  7667: movzx r8d ,di  /*manual*/
  7668: xadd r8d ,eax  /*manual*/
  7669: dword ptr [rsp+rdi*2-0x8c] ^= ebx
  7670: neg sil  /*manual*/
  7671: xadd bp ,cx  /*manual*/
  7672: neg bpl  /*manual*/
  7673: pop r8  /*manual*/
  7674: bt rdi ,0x40  /*manual*/
  7675: xadd cl ,al  /*manual*/
  7676: movsxd rbx ,ebx  /*manual*/
  7677: not rsi  /*manual*/
  7678: adc r10 ,rbx  /*manual*/
  7679: rdx += r10
  7680: jmp rdx  /*manual*/
  7681: eax = 0x8b349c52
  7682: cqo   /*manual*/
  7683: movzx esi ,al  /*manual*/
  7684: esi = dword ptr [rdx+r11*1]
  7685: movsx ebx ,al  /*manual*/
  7686: and edx ,ebx  /*manual*/
  7687: push rbx  /*manual*/
  7688: lea r11 ,ptr [rdx+r11*1+0x4]  /*manual*/
  7689: esi ^= r8d
  7690: or qword ptr [rsp+rdx*1] ,0x232576e2  /*manual*/
  7691: inc ebx  /*manual*/
  7692: shr dword ptr [rsp+rdx*1+0x2] ,0xd3  /*manual*/
  7693: inc esi  /*manual*/
  7694: jmp 0x5d8dcd686a40  /*manual*/
  7695: neg esi  /*manual*/
  7696: shr qword ptr [rsp+rdx*1] ,0x1f  /*manual*/
  7697: bswap rbx  /*manual*/
  7698: rol esi ,0x1  /*manual*/
  7699: word ptr [rsp+rdx*1+0x2] = bx
  7700: dec esi  /*manual*/
  7701: bswap esi  /*manual*/
  7702: dec byte ptr [rsp+rdx*1+0x4]  /*manual*/
  7703: cdq   /*manual*/
  7704: qword ptr [rsp] = r8
  7705: xchg rdx ,rbx  /*manual*/
  7706: shl rbx ,0x62  /*manual*/
  7707: r8d = 0xabbfbeb6
  7708: dword ptr [rsp] ^= esi
  7709: cwde   /*manual*/
  7710: movzx ecx ,bl  /*manual*/
  7711: lea rbp ,ptr [rcx*2+0x20bafa04]  /*manual*/
  7712: pop r8  /*manual*/
  7713: shl bp ,0xc1  /*manual*/
  7714: movsxd rsi ,esi  /*manual*/
  7715: cx += bx
  7716: cdqe   /*manual*/
  7717: adc r10 ,rsi  /*manual*/
  7718: rdi = qword ptr [r9+rcx*4]
  7719: cl ^= byte ptr [r9+rax*1+0x63b6]
  7720: ror edx ,0xb3  /*manual*/
  7721: lea r9 ,ptr [r9+rax*2+0xc75e]  /*manual*/
  7722: shl rdi ,cl  /*manual*/
  7723: rol rbx ,0x49  /*manual*/
  7724: jb 0x5d8dcd66fa2e  /*manual*/
  7725: jb 0x5d8dcd62bff1  /*manual*/
  7726: qword ptr [r9+rax*1+0x63ae] = rdi
  7727: rdx += r10
  7728: jmp rdx  /*manual*/
  7729: call 0x5d8dcd545141
  7730: qword ptr [rsp] = 0xffffffffd893a504
  7731: rcx = qword ptr [r9]
  7732: pop rdi  /*manual*/
  7733: movzx edx ,di  /*manual*/
  7734: rdi = qword ptr [rdi+r9*1+0x276c5b04]
  7735: rol edx ,0x6e  /*manual*/
  7736: adc rcx ,rdi  /*manual*/
  7737: movzx esi ,dx  /*manual*/
  7738: jmp 0x5d8dcd64f007  /*manual*/
  7739: not dx  /*manual*/
  7740: qword ptr [r9+rdx*2-0x5283fff6] = rcx
  7741: and si ,si  /*manual*/
  7742: or sil ,dl  /*manual*/
  7743: movzx ecx ,byte ptr [r11+rdx*1-0x2941ffff]  /*manual*/
  7744: dec esi  /*manual*/
  7745: cl ^= r8b
  7746: lea rax ,ptr [rsi+rsi*2-0x3e733a81]  /*manual*/
  7747: movsx ebp ,sil  /*manual*/
  7748: cl -= 0x22
  7749: and ax ,si  /*manual*/
  7750: cl ^= 0xe0
  7751: rol rbp ,0x24  /*manual*/
  7752: sbb cl ,0xbc  /*manual*/
  7753: dec ebp  /*manual*/
  7754: cl ^= 0x64
  7755: r8b ^= cl
  7756: ax ^= ax
  7757: adc rcx ,rsp  /*manual*/
  7758: inc si  /*manual*/
  7759: rdi = qword ptr [rcx+rdx*1-0x2941ffff]
  7760: lea rcx ,ptr [rdx*4-0x506fd37a]  /*manual*/
  7761: qword ptr [r9+rdx*2-0x5283fffe] = rdi
  7762: cwde   /*manual*/
  7763: bpl = byte ptr [r11+rdx*2-0x5283fffd]
  7764: cmovnz rax ,rdx  /*manual*/
  7765: shr rsi ,0xc9  /*manual*/
  7766: bpl ^= r8b
  7767: lea rdi ,ptr [rcx*2-0x6f651994]  /*manual*/
  7768: cqo   /*manual*/
  7769: cwde   /*manual*/
  7770: neg bpl  /*manual*/
  7771: or ecx ,0xbaaef2a  /*manual*/
  7772: movzx ebx ,cl  /*manual*/
  7773: adc bpl ,al  /*manual*/
  7774: jmp 0x5d8dcd5707be  /*manual*/
  7775: or sil ,0x71  /*manual*/
  7776: or rsi ,0xffffffffb92baaef  /*manual*/
  7777: neg bpl  /*manual*/
  7778: xchg rcx ,rbx  /*manual*/
  7779: bts di ,si  /*manual*/
  7780: adc bpl ,sil  /*manual*/
  7781: shl rdi ,cl  /*manual*/
  7782: rol bpl ,0x1  /*manual*/
  7783: push rax  /*manual*/
  7784: bpl += sil
  7785: neg bpl  /*manual*/
  7786: si += bx
  7787: r8b ^= bpl
  7788: xchg dword ptr [rsp+rdx*1+0x3] ,ebx  /*manual*/
  7789: lea rbp ,ptr [rsp+rbp*1+0x8]  /*manual*/
  7790: bt edi ,0xc1  /*manual*/
  7791: shl rdx ,0x4a  /*manual*/
  7792: data16 cwd  /*manual*/
  7793: rbx = qword ptr [rbp+rdx*8-0x7fff8]
  7794: not qword ptr [rsp+rdx*2-0x1fffe]  /*manual*/
  7795: qword ptr [rdx+r9*1-0x10007] = rbx
  7796: push rdx  /*manual*/
  7797: lea r9 ,ptr [r9+rdx*8-0x80000]  /*manual*/
  7798: bt rdi ,rdx  /*manual*/
  7799: pop rdx  /*manual*/
  7800: ebp = dword ptr [r11+rdx*1-0xfffd]
  7801: bt rcx ,rax  /*manual*/
  7802: data16 cwd  /*manual*/
  7803: movsx ebx ,dl  /*manual*/
  7804: lea r11 ,ptr [r11+rdx*4-0x3fff6]  /*manual*/
  7805: ebp ^= r8d
  7806: cdqe   /*manual*/
  7807: bt ebx ,0x3e  /*manual*/
  7808: jb 0x5d8dcd6bb462  /*manual*/
  7809: neg ebp  /*manual*/
  7810: ror ebp ,0x2  /*manual*/
  7811: ebx ^= 0x53b58eef
  7812: inc byte ptr [rsp+rdx*1-0xfffc]  /*manual*/
  7813: sil ^= 0x4c
  7814: ebp ^= 0x8291848
  7815: dword ptr [rsp+rdx*1-0xfffd] ^= 0xa3a46ba2
  7816: pop rdi  /*manual*/
  7817: di ^= ax
  7818: lea ebp ,ptr [rbp+rdx*4-0x348e3747]  /*manual*/
  7819: btr rsi ,rsi  /*manual*/
  7820: xadd sil ,bl  /*manual*/
  7821: ror ebp ,0x2  /*manual*/
  7822: shr cl ,0xe2  /*manual*/
  7823: ebp ^= eax
  7824: push r8  /*manual*/
  7825: btc ebx ,0xdf  /*manual*/
  7826: adc rsi ,rcx  /*manual*/
  7827: or rcx ,0xffffffff8f1dfc73  /*manual*/
  7828: dword ptr [rsp+rdx*1-0xffff] ^= ebp
  7829: ror di ,0x66  /*manual*/
  7830: call 0x5d8dcd4fd183
  7831: qword ptr [rsp+rdx*1-0xffff] = rbx
  7832: r8 = qword ptr [rsp+rdx*2-0x1fff6]
  7833: movsxd rbp ,ebp  /*manual*/
  7834: qword ptr [rsp+rdx*2-0x1fff6] = rbx
  7835: r10 += rbp
  7836: sar bl ,0x81  /*manual*/
  7837: word ptr [rsp+rdx*1-0xfffc] ^= si
  7838: xchg qword ptr [rsp+rdx*1-0xfff7] ,rax  /*manual*/
  7839: pop rax  /*manual*/
  7840: pop rbp  /*manual*/
  7841: js 0x5d8dcd50cbc3  /*manual*/
  7842: edx = 0x17ac3ca4
  7843: lea rdx ,ptr [rsp+rdx*1-0x17ac3abc]  /*manual*/
  7844: call 0x5d8dcd5bd3dc
  7845: cmp r9 ,rdx  /*manual*/
  7846: call 0x5d8dcd5744a0
  7847: call 0x5d8dcd5d2928
  7848: lea rsp ,ptr [rsp+0x18]  /*manual*/
  7849: jnbe 0x5d8dcd63900c  /*manual*/
  7850: push 0x6c087856  /*manual*/
  7851: jmp 0x5d8dcd5cdbbe  /*manual*/
  7852: lea rsp ,ptr [rsp+0x8]  /*manual*/
  7853: jmp r10  /*manual*/
  7854: ebp = 0xc41254d5
  7855: eax = 0x77114b2e
  7856: or rax ,rbp  /*manual*/
  7857: rdi = qword ptr [r9]
  7858: rol bpl ,0x67  /*manual*/
  7859: lea rbx ,ptr [rbp+rax*2-0x6c783855]  /*manual*/
  7860: lea rsi ,ptr [rax+rbp*2+0x4189be99]  /*manual*/
  7861: rcx = qword ptr [r9+0x8]
  7862: or rdi ,rcx  /*manual*/
  7863: not rdi  /*manual*/
  7864: movsx ecx ,bpl  /*manual*/
  7865: shl rsi ,cl  /*manual*/
  7866: qword ptr [r9+0x8] = rdi
  7867: ecx = dword ptr [r11]
  7868: bpl -= 0x1e
  7869: edi = ebp
  7870: setnp al  /*manual*/
  7871: ecx ^= r8d
  7872: lea rdx ,ptr [rbx+rsi*1-0x72603c85]  /*manual*/
  7873: lea rdx ,ptr [rbp+rax*2-0x604d5e0c]  /*manual*/
  7874: ecx -= 0x723d2522
  7875: and dil ,dil  /*manual*/
  7876: rbp += rdi
  7877: ror ecx ,0x1  /*manual*/
  7878: inc ecx  /*manual*/
  7879: bpl ^= al
  7880: ror ecx ,0x3  /*manual*/
  7881: shr edi ,0x7e  /*manual*/
  7882: jz 0x5d8dcd654355  /*manual*/
  7883: push r8  /*manual*/
  7884: dword ptr [rsp+rdi*1-0x3] ^= ecx
  7885: bswap eax  /*manual*/
  7886: or rdi ,0x19b07e5a  /*manual*/
  7887: cwde   /*manual*/
  7888: pop r8  /*manual*/
  7889: dec rbx  /*manual*/
  7890: movsxd rcx ,ecx  /*manual*/
  7891: setb dl  /*manual*/
  7892: inc esi  /*manual*/
  7893: sil ^= 0xb7
  7894: adc r10 ,rcx  /*manual*/
  7895: shl edi ,0x1f  /*manual*/
  7896: movzx ebx ,word ptr [rax+r11*1-0x13f3]  /*manual*/
  7897: lea r11 ,ptr [rax+r11*1-0x13f1]  /*manual*/
  7898: ax += dx
  7899: bx ^= r8w
  7900: bx ^= 0x651f
  7901: inc rdi  /*manual*/
  7902: not bx  /*manual*/
  7903: bt bp ,dx  /*manual*/
  7904: rol bx ,0x1  /*manual*/
  7905: not bx  /*manual*/
  7906: data16 cbw  /*manual*/
  7907: shl ebp ,0x55  /*manual*/
  7908: inc bp  /*manual*/
  7909: r8w ^= bx
  7910: push rsi  /*manual*/
  7911: qword ptr [r9+rax*1-0xfff7] = rbx
  7912: data16 cwd  /*manual*/
  7913: neg bpl  /*manual*/
  7914: cdq   /*manual*/
  7915: qword ptr [rsp+rbp*1-0x330000ff] = r10
  7916: return
  7917: ecx = 0x748b4a24
  7918: movzx esi ,cl  /*manual*/
  7919: bt rcx ,rcx  /*manual*/
  7920: rbp = qword ptr [rcx+r9*1-0x748b4a24]
  7921: lea rax ,ptr [rsi*8+0x4c10dc22]  /*manual*/
  7922: jnb 0x5d8dcd52fc4f  /*manual*/
  7923: rcx = qword ptr [r9+rcx*1-0x748b4a1c]
  7924: cwde   /*manual*/
  7925: or rbp ,rcx  /*manual*/
  7926: movsx edi ,sil  /*manual*/
  7927: shl dil ,0x85  /*manual*/
  7928: not rbp  /*manual*/
  7929: rcx = rbp
  7930: lea rbx ,ptr [rax*8-0x5772aa75]  /*manual*/
  7931: neg si  /*manual*/
  7932: or esi ,esi  /*manual*/
  7933: rbx = qword ptr [rsi+r9*1-0xffcc]
  7934: adc rcx ,rbx  /*manual*/
  7935: qword ptr [r9+rsi*8-0x7fed0] = rcx
  7936: lea r9 ,ptr [r9+rsi*8-0x7fed0]  /*manual*/
  7937: edi = dword ptr [rsi+r11*1-0xffdc]
  7938: lea r11 ,ptr [r11+rsi*1-0xffd8]  /*manual*/
  7939: movsx ecx ,sil  /*manual*/
  7940: call 0x5d8dcd58a730
  7941: qword ptr [rsp+rsi*1-0xffdc] = 0x2e965550
  7942: edi ^= r8d
  7943: push rcx  /*manual*/
  7944: lea edi ,ptr [rdi+rsi*4+0x79bd6df]  /*manual*/
  7945: data16 cbw  /*manual*/
  7946: edi ^= 0x110ebd51
  7947: call 0x5d8dcd4f595c
  7948: lea rbx ,ptr [rax*8-0x494a3a3f]  /*manual*/
  7949: edi -= 0xbd0c5372
  7950: call 0x5d8dcd5926a9
  7951: cdq   /*manual*/
  7952: shl sil ,0x21  /*manual*/
  7953: rol edi ,0x2  /*manual*/
  7954: and ax ,0xd383  /*manual*/
  7955: sbb word ptr [rsp+rsi*1-0xff9d] ,ax  /*manual*/
  7956: sbb al ,cl  /*manual*/
  7957: lea edi ,ptr [rdi+rsi*2+0x5dafd641]  /*manual*/
  7958: bt rdx ,rdx  /*manual*/
  7959: setb sil  /*manual*/
  7960: cqo   /*manual*/
  7961: rol edi ,0x1  /*manual*/
  7962: lea rbp ,ptr [rdx+0x7e93b4ca]  /*manual*/
  7963: word ptr [rsp+rsi*1-0xfee8] -= cx
  7964: not dword ptr [rsp+rsi*1-0xfeee]  /*manual*/
  7965: qword ptr [rsp+rsi*1-0xfee8] = r8
  7966: qword ptr [rsp+rsi*4-0x3fc00] = rbx
  7967: r8 = qword ptr [rsp+0x8]
  7968: r8 += 0x1062d5
  7969: jmp r8  /*manual*/
  7970: dword ptr [rsp+rsi*4-0x3fbe8] ^= edi
  7971: cl += 0xe
  7972: r8 = qword ptr [rsp+rsi*2-0x1fde8]
  7973: movsxd rdi ,edi  /*manual*/
  7974: word ptr [rsp+rsi*2-0x1fded] -= 0x4a17
  7975: dec bp  /*manual*/
  7976: call 0x5d8dcd518628
  7977: adc r10 ,rdi  /*manual*/
  7978: qword ptr [rsp+rsi*1-0xff00] = r10
  7979: return
  7980: ecx = 0x56b2d875
  7981: lea rax ,ptr [rcx*8-0x3041debf]  /*manual*/
  7982: edi = dword ptr [r11+rcx*1-0x56b2d875]
  7983: ebx = ecx
  7984: edi ^= r8d
  7985: movsx edx ,cx  /*manual*/
  7986: ecx += edx
  7987: ror al ,0x47  /*manual*/
  7988: edi ^= 0x3b46b3e
  7989: shl edx ,0xeb  /*manual*/
  7990: bl -= 0x63
  7991: inc cl  /*manual*/
  7992: not edi  /*manual*/
  7993: cmovp bx ,dx  /*manual*/
  7994: lea edi ,ptr [rdi+rcx*1-0x33a0639a]  /*manual*/
  7995: neg edi  /*manual*/
  7996: rax -= rdx
  7997: movsx esi ,dl  /*manual*/
  7998: movsx ebp ,dx  /*manual*/
  7999: bswap edi  /*manual*/
  8000: lea edi ,ptr [rdi+rcx*1-0x40780f1e]  /*manual*/
  8001: or ebx ,eax  /*manual*/
  8002: shr ecx ,0x50  /*manual*/
  8003: push r8  /*manual*/
  8004: neg eax  /*manual*/
  8005: dword ptr [rsp+rcx*2-0xad64] ^= edi
  8006: pop r8  /*manual*/
  8007: rax += rcx
  8008: xchg rcx ,rax  /*manual*/
  8009: movsxd rdi ,edi  /*manual*/
  8010: btc bx ,bp  /*manual*/
  8011: dec rbp  /*manual*/
  8012: xchg cx ,si  /*manual*/
  8013: r10 += rdi
  8014: jmp 0x5d8dcd5286de  /*manual*/
  8015: sil -= al
  8016: rsi = qword ptr [rax+r9*1-0x56b2]
  8017: push rcx  /*manual*/
  8018: byte ptr [rsp+rax*1-0x56ad] ^= al
  8019: movzx ecx ,byte ptr [r11+rax*2-0xad60]  /*manual*/
  8020: js 0x5d8dcd5d0a94  /*manual*/
  8021: cl ^= r8b
  8022: rax ^= qword ptr [rsp+rax*1-0x56b2]
  8023: ror cl ,0x1  /*manual*/
  8024: cl ^= 0x5f
  8025: cl -= bpl
  8026: pop rbx  /*manual*/
  8027: ror rax ,0xd3  /*manual*/
  8028: neg cl  /*manual*/
  8029: lea rdi ,ptr [rdx*2+0x3e06f660]  /*manual*/
  8030: neg rdi  /*manual*/
  8031: neg rdx  /*manual*/
  8032: cl ^= bpl
  8033: push rbx  /*manual*/
  8034: cl -= 0xf1
  8035: cl ^= 0x7e
  8036: not di  /*manual*/
  8037: r8b ^= cl
  8038: lea rcx ,ptr [rsp+rcx*1+0x8]  /*manual*/
  8039: qword ptr [rcx] = rsi
  8040: cdqe   /*manual*/
  8041: dec ebp  /*manual*/
  8042: movzx ecx ,byte ptr [r11+rax*4-0x59003caf]  /*manual*/
  8043: lea r11 ,ptr [r11+rax*4-0x59003cae]  /*manual*/
  8044: bts bx ,0x66  /*manual*/
  8045: btr rdx ,0x52  /*manual*/
  8046: inc byte ptr [rsp+rax*1-0x16400f2b]  /*manual*/
  8047: cl ^= r8b
  8048: cl -= 0x22
  8049: pop rbp  /*manual*/
  8050: lea rsi ,ptr [rbp+0x52346d35]  /*manual*/
  8051: cl ^= 0xe0
  8052: and bp ,0x17e7  /*manual*/
  8053: inc ebp  /*manual*/
  8054: inc ebp  /*manual*/
  8055: sbb cl ,0xbd  /*manual*/
  8056: cl ^= 0x64
  8057: push rbp  /*manual*/
  8058: r8b ^= cl
  8059: dec rbp  /*manual*/
  8060: bswap rdx  /*manual*/
  8061: or dword ptr [rsp+rax*4-0x59003cb2] ,ebp  /*manual*/
  8062: lea rcx ,ptr [rsp+rcx*1+0x8]  /*manual*/
  8063: inc dword ptr [rsp+rax*1-0x16400f29]  /*manual*/
  8064: rbp = qword ptr [rcx+rax*1-0x16400f2d]
  8065: pop rbx  /*manual*/
  8066: cmovs rsi ,rbx  /*manual*/
  8067: qword ptr [r9+rax*2-0x2c801e5a] = rbp
  8068: jmp r10  /*manual*/
  8069: ecx = 0xa326c6c
  8070: movzx edi ,byte ptr [r11+rcx*8-0x51936360]  /*manual*/
  8071: dil ^= r8b
  8072: jmp 0x5d8dcd59fb28  /*manual*/
  8073: dil -= 0x22
  8074: ebx = ecx
  8075: movzx ebp ,cl  /*manual*/
  8076: movzx esi ,bl  /*manual*/
  8077: dil ^= 0xe0
  8078: dil -= 0xbd
  8079: dil ^= 0x64
  8080: lea rax ,ptr [rbp*8-0x4f1404f]  /*manual*/
  8081: btc rax ,0x30  /*manual*/
  8082: movzx edx ,si  /*manual*/
  8083: r8b ^= dil
  8084: bswap rcx  /*manual*/
  8085: rdi += rsp
  8086: rol cx ,0xe4  /*manual*/
  8087: and cl ,sil  /*manual*/
  8088: xchg rsi ,rax  /*manual*/
  8089: rsi = qword ptr [rdi+rbx*1-0xa326c6c]
  8090: btc ebx ,edx  /*manual*/
  8091: qword ptr [rbx+r9*1-0xa327c74] = rsi
  8092: movsx edi ,al  /*manual*/
  8093: dl = byte ptr [rbx+r11*1-0xa327c6b]
  8094: push rdi  /*manual*/
  8095: movsx esi ,bpl  /*manual*/
  8096: dec bl  /*manual*/
  8097: dl ^= r8b
  8098: not bx  /*manual*/
  8099: dl -= 0x22
  8100: shr cl ,0xe4  /*manual*/
  8101: dl ^= 0xe0
  8102: shr esi ,0xc5  /*manual*/
  8103: shr byte ptr [rsp+rbx*1-0xa32838d] ,0x61  /*manual*/
  8104: sbb dl ,0xbd  /*manual*/
  8105: dl ^= 0x64
  8106: rcx ^= 0x1aa643b2
  8107: shr eax ,0xce  /*manual*/
  8108: r8b ^= dl
  8109: not rbp  /*manual*/
  8110: dec rsi  /*manual*/
  8111: neg bpl  /*manual*/
  8112: lea rdx ,ptr [rsp+rdx*1+0x8]  /*manual*/
  8113: rax += qword ptr [rdx+rbx*1-0xa328394]
  8114: edx = edi
  8115: qword ptr [r9+rbx*1-0xa3283a4] = rax
  8116: dec edi  /*manual*/
  8117: edi = dword ptr [rbx+r11*1-0xa328392]
  8118: ror ecx ,0x62  /*manual*/
  8119: shr rsi ,0xc1  /*manual*/
  8120: shl bl ,0xe1  /*manual*/
  8121: edi ^= r8d
  8122: xadd byte ptr [rsp+rbp*1+0x93] ,bpl  /*manual*/
  8123: neg edi  /*manual*/
  8124: ror edi ,0x2  /*manual*/
  8125: edi ^= 0x8291848
  8126: neg word ptr [rsp+rbx*2-0x1465064a]  /*manual*/
  8127: sbb si ,0xb5f4  /*manual*/
  8128: lea edi ,ptr [rdi+rbx*1-0x3ebcba73]  /*manual*/
  8129: eax = 0x933a97b5
  8130: ror edi ,0x2  /*manual*/
  8131: cdq   /*manual*/
  8132: bx += word ptr [rsp+rbx*1-0xa328327]
  8133: inc dword ptr [rsp+rbx*2-0x1465064f]  /*manual*/
  8134: edi ^= edx
  8135: pop rbp  /*manual*/
  8136: push r8  /*manual*/
  8137: push rsi  /*manual*/
  8138: dword ptr [rsp+rbx*1-0xa328320] ^= edi
  8139: or bp ,0x68c5  /*manual*/
  8140: jns 0x5d8dcd6a7885  /*manual*/
  8141: xchg edx ,eax  /*manual*/
  8142: r8 = qword ptr [rsp+rbx*1-0xa328320]
  8143: jp 0x5d8dcd69e123  /*manual*/
  8144: btr bp ,0xee  /*manual*/
  8145: movsxd rdi ,edi  /*manual*/
  8146: inc rsi  /*manual*/
  8147: neg cl  /*manual*/
  8148: r10 += rdi
  8149: movsx edi ,bl  /*manual*/
  8150: bt si ,dx  /*manual*/
  8151: movzx ecx ,byte ptr [rbx+r11*1-0xa328322]  /*manual*/
  8152: lea r11 ,ptr [r11+rbx*2-0x14650649]  /*manual*/
  8153: edi += dword ptr [rsp+rbx*2-0x1465064c]
  8154: xchg bpl ,al  /*manual*/
  8155: rbx += rdi
  8156: cl ^= r8b
  8157: not ebx  /*manual*/
  8158: data16 cbw  /*manual*/
  8159: cl += 0x9f
  8160: xadd rdi ,rbp  /*manual*/
  8161: qword ptr [rsp+rbp*1-0x20] = 0xffffffffa4a12aab
  8162: cmovs esi ,dword ptr [rsp+rbp*1-0x23]  /*manual*/
  8163: rol cl ,0x1  /*manual*/
  8164: inc cl  /*manual*/
  8165: neg cl  /*manual*/
  8166: r8b ^= cl
  8167: sar rbp ,0x5  /*manual*/
  8168: qword ptr [rsp+rbp*1+0x4] ^= 0x328fa6b5
  8169: cqo   /*manual*/
  8170: lea rcx ,ptr [rsp+rcx*1+0x10]  /*manual*/
  8171: jno 0x5d8dcd515976  /*manual*/
  8172: rax = qword ptr [rbp+rcx*1-0x1]
  8173: edx -= esi
  8174: or bx ,word ptr [rsp+rbp*1+0x9]  /*manual*/
  8175: adc bpl ,sil  /*manual*/
  8176: qword ptr [r9+rbp*1-0x27] = rax
  8177: ror dx ,0xa1  /*manual*/
  8178: lea r9 ,ptr [rbp+r9*1-0x27]  /*manual*/
  8179: sbb ebx ,dword ptr [rsp+rbp*4-0x33]  /*manual*/
  8180: btr rdx ,rsi  /*manual*/
  8181: pop rdi  /*manual*/
  8182: pop rdi  /*manual*/
  8183: jb 0x5d8dcd50cbc3  /*manual*/
  8184: edx = 0x17ac3ca4
  8185: lea rdx ,ptr [rsp+rdx*1-0x17ac3abc]  /*manual*/
  8186: call 0x5d8dcd5bd3dc
  8187: cmp r9 ,rdx  /*manual*/
  8188: call 0x5d8dcd5744a0
  8189: call 0x5d8dcd5d2928
  8190: lea rsp ,ptr [rsp+0x18]  /*manual*/
  8191: jnbe 0x5d8dcd63900c  /*manual*/
  8192: push 0x6c087856  /*manual*/
  8193: jmp 0x5d8dcd5cdbbe  /*manual*/
  8194: lea rsp ,ptr [rsp+0x8]  /*manual*/
  8195: jmp r10  /*manual*/
  8196: edi = 0xfb91ed47
  8197: movzx esi ,byte ptr [r11]  /*manual*/
  8198: jmp 0x5d8dcd524f3c  /*manual*/
  8199: movsx ebp ,dil  /*manual*/
  8200: lea r11 ,ptr [r11+rbp*2-0x8d]  /*manual*/
  8201: sil ^= r8b
  8202: sil -= 0x22
  8203: lea rdx ,ptr [rdi+rbp*4+0x10326583]  /*manual*/
  8204: lea rbx ,ptr [rbp+0x49290b2a]  /*manual*/
  8205: sil ^= 0xe0
  8206: sil -= 0xbd
  8207: sil ^= 0x64
  8208: r8b ^= sil
  8209: btr rdx ,rdi  /*manual*/
  8210: ecx = ebp
  8211: rsi += rsp
  8212: xadd rbp ,rdi  /*manual*/
  8213: shr rdi ,0x5c  /*manual*/
  8214: rdx = qword ptr [rdi+rsi*1]
  8215: adc edi ,0x718e118a  /*manual*/
  8216: shr rbp ,cl  /*manual*/
  8217: rol bx ,cl  /*manual*/
  8218: lea r9 ,ptr [rdi+r9*1-0x718e1192]  /*manual*/
  8219: qword ptr [r9+rbp*4-0x7dc8f6c] = rdx
  8220: movzx eax ,cl  /*manual*/
  8221: jb 0x5d8dcd5b9065  /*manual*/
  8222: ebx = dword ptr [rbp+r11*1-0x1f723db]
  8223: call 0x5d8dcd584e8b
  8224: pop rdi  /*manual*/
  8225: lea r11 ,ptr [r11+rbp*4-0x7dc8f68]  /*manual*/
  8226: movzx edx ,bpl  /*manual*/
  8227: or cl ,0x76  /*manual*/
  8228: ebx ^= r8d
  8229: call 0x5d8dcd568816
  8230: pop rbp  /*manual*/
  8231: rbp += 0x111cc5
  8232: jmp rbp  /*manual*/
  8233: rol edx ,cl  /*manual*/
  8234: neg ebx  /*manual*/
  8235: jmp 0x5d8dcd58d229  /*manual*/
  8236: movzx ebp ,al  /*manual*/
  8237: shl ecx ,0xc3  /*manual*/
  8238: ror ebx ,0x2  /*manual*/
  8239: ebx ^= 0x8291848
  8240: lea rdi ,ptr [rax*2+0x7a1d412a]  /*manual*/
  8241: movzx esi ,ax  /*manual*/
  8242: not bp  /*manual*/
  8243: lea ebx ,ptr [rbx+rcx*1-0x348a3b03]  /*manual*/
  8244: edi -= 0xbea75476
  8245: ror ebx ,0x2  /*manual*/
  8246: data16 cwd  /*manual*/
  8247: lea rbp ,ptr [rdx*2-0x3af0cfe1]  /*manual*/
  8248: xadd rax ,rcx  /*manual*/
  8249: not ebx  /*manual*/
  8250: neg bp  /*manual*/
  8251: xadd ax ,cx  /*manual*/
  8252: push r8  /*manual*/
  8253: jns 0x5d8dcd53f341  /*manual*/
  8254: dword ptr [rsp+rcx*2-0x7fe] ^= ebx
  8255: pop r8  /*manual*/
  8256: or dx ,si  /*manual*/
  8257: movsxd rbx ,ebx  /*manual*/
  8258: adc r10 ,rbx  /*manual*/
  8259: jmp 0x5d8dcd50cbc3  /*manual*/
  8260: edx = 0x17ac3ca4
  8261: lea rdx ,ptr [rsp+rdx*1-0x17ac3abc]  /*manual*/
  8262: call 0x5d8dcd5bd3dc
  8263: cmp r9 ,rdx  /*manual*/
  8264: call 0x5d8dcd5744a0
  8265: call 0x5d8dcd5d2928
  8266: lea rsp ,ptr [rsp+0x18]  /*manual*/
  8267: jnbe 0x5d8dcd63900c  /*manual*/
  8268: push 0x6c087856  /*manual*/
  8269: jmp 0x5d8dcd5cdbbe  /*manual*/
  8270: lea rsp ,ptr [rsp+0x8]  /*manual*/
  8271: jmp r10  /*manual*/
  8272: edx = dword ptr [r11]
  8273: ecx = 0x813dbb8
  8274: movsx ebp ,cx  /*manual*/
  8275: lea r11 ,ptr [r11+rcx*2-0x1027b76c]  /*manual*/
  8276: movsx edi ,bp  /*manual*/
  8277: inc rdi  /*manual*/
  8278: edx ^= r8d
  8279: rol ebp ,0x5e  /*manual*/
  8280: neg edx  /*manual*/
  8281: shl edi ,0x4f  /*manual*/
  8282: lea rbx ,ptr [rdi*4-0x12466861]  /*manual*/
  8283: eax = ebp
  8284: ror edx ,0x2  /*manual*/
  8285: edx ^= 0x8291848
  8286: rcx += 0xffffffffbaa0b560
  8287: lea edx ,ptr [rdx+rax*1-0x748a2e39]  /*manual*/
  8288: lea rsi ,ptr [rdi+rbx*4+0x3d9303c8]  /*manual*/
  8289: neg rbp  /*manual*/
  8290: or al ,al  /*manual*/
  8291: ror edx ,0x2  /*manual*/
  8292: btr si ,si  /*manual*/
  8293: not edx  /*manual*/
  8294: bswap rax  /*manual*/
  8295: not cx  /*manual*/
  8296: shl rsi ,cl  /*manual*/
  8297: push r8  /*manual*/
  8298: dword ptr [rsp+rcx*1+0x3d4b9119] ^= edx
  8299: pop r8  /*manual*/
  8300: neg cl  /*manual*/
  8301: movsxd rdx ,edx  /*manual*/
  8302: lea rsi ,ptr [rbp+rax*4-0x306eb02b]  /*manual*/
  8303: btr rbp ,rbx  /*manual*/
  8304: sbb cl ,dil  /*manual*/
  8305: adc r10 ,rdx  /*manual*/
  8306: xchg bp ,ax  /*manual*/
  8307: xadd bl ,bpl  /*manual*/
  8308: cmovo rbp ,rbx  /*manual*/
  8309: movzx esi ,byte ptr [r11+rcx*2+0x7a9723d0]  /*manual*/
  8310: btc bp ,cx  /*manual*/
  8311: lea r11 ,ptr [r11+rcx*1+0x3d4b91e9]  /*manual*/
  8312: movsx edx ,cl  /*manual*/
  8313: bswap eax  /*manual*/
  8314: lea rax ,ptr [rdi+rcx*2+0x420be0a4]  /*manual*/
  8315: sil ^= r8b
  8316: shl ebx ,0xe7  /*manual*/
  8317: bl ^= ch
  8318: sbb sil ,0x22  /*manual*/
  8319: xchg rbx ,rcx  /*manual*/
  8320: bt di ,0x41  /*manual*/
  8321: sil ^= 0xe0
  8322: sil -= 0xbd
  8323: inc rdi  /*manual*/
  8324: bts rbp ,rbx  /*manual*/
  8325: sil ^= 0x64
  8326: r8b ^= sil
  8327: bt di ,di  /*manual*/
  8328: push rbx  /*manual*/
  8329: lea rsi ,ptr [rsp+rsi*1+0x8]  /*manual*/
  8330: cx -= di
  8331: qword ptr [rsp+rbx*1+0x3d4b91e8] += rdi
  8332: pop rax  /*manual*/
  8333: rax = qword ptr [rbx+rsi*1+0x3d4b91e8]
  8334: and cl ,dil  /*manual*/
  8335: neg rdx  /*manual*/
  8336: lea r9 ,ptr [rdx+r9*1+0x10]  /*manual*/
  8337: shl cl ,cl  /*manual*/
  8338: inc rbp  /*manual*/
  8339: qword ptr [r9+rbx*1+0x3d4b91e8] = rax
  8340: not dl  /*manual*/
  8341: rdx ^= rdx
  8342: jp 0x5d8dcd50cbc3  /*manual*/
  8343: edx = 0x17ac3ca4
  8344: lea rdx ,ptr [rsp+rdx*1-0x17ac3abc]  /*manual*/
  8345: call 0x5d8dcd5bd3dc
  8346: cmp r9 ,rdx  /*manual*/
  8347: call 0x5d8dcd5744a0
  8348: call 0x5d8dcd5d2928
  8349: lea rsp ,ptr [rsp+0x18]  /*manual*/
  8350: jnbe 0x5d8dcd63900c  /*manual*/
  8351: push 0x6c087856  /*manual*/
  8352: jmp 0x5d8dcd5cdbbe  /*manual*/
  8353: lea rsp ,ptr [rsp+0x8]  /*manual*/
  8354: jmp r10  /*manual*/
  8355: movzx edi ,word ptr [r11]  /*manual*/
  8356: ecx = 0x9bac0ef5
  8357: di ^= r8w
  8358: movzx ebp ,cl  /*manual*/
  8359: bp ^= bp
  8360: dec di  /*manual*/
  8361: rcx -= 0xffffffffa4a24624
  8362: rol di ,0x1  /*manual*/
  8363: movsx esi ,cx  /*manual*/
  8364: bt cx ,0x47  /*manual*/
  8365: movzx edx ,bp  /*manual*/
  8366: neg di  /*manual*/
  8367: sar rcx ,0x27  /*manual*/
  8368: not di  /*manual*/
  8369: movsx ebx ,bp  /*manual*/
  8370: r8w ^= di
  8371: call 0x5d8dcd612898
  8372: lea rsi ,ptr [rcx*8-0x78fc41a2]  /*manual*/
  8373: lea rdi ,ptr [rsp+rdi*1+0x8]  /*manual*/
  8374: sar bp ,0xcb  /*manual*/
  8375: pop rcx  /*manual*/
  8376: movzx eax ,sil  /*manual*/
  8377: rsi = qword ptr [rdi+rbp*2]
  8378: cdqe   /*manual*/
  8379: qword ptr [rbp+r9*1-0x8] = rsi
  8380: push rdx  /*manual*/
  8381: cdq   /*manual*/
  8382: adc ebx ,dword ptr [r11+rbp*4+0x2]  /*manual*/
  8383: ebx ^= r8d
  8384: cwde   /*manual*/
  8385: shr rbp ,0x43  /*manual*/
  8386: neg ebx  /*manual*/
  8387: dec word ptr [rsp+rbp*1+0x2]  /*manual*/
  8388: ror ebx ,0x2  /*manual*/
  8389: pop rcx  /*manual*/
  8390: esi = 0x7db9b8ad
  8391: ebx ^= 0x8291848
  8392: cqo   /*manual*/
  8393: rbp += 0xffffffffadbff7c7
  8394: lea ebx ,ptr [rbx+rbp*2+0x6ff5d927]  /*manual*/
  8395: cl += dl
  8396: lea rdi ,ptr [rsi-0x2c451e5a]  /*manual*/
  8397: ror ebx ,0x2  /*manual*/
  8398: xadd rax ,rdx  /*manual*/
  8399: jl 0x5d8dcd674198  /*manual*/
  8400: not ebx  /*manual*/
  8401: shr rdx ,0x15  /*manual*/
  8402: neg rbp  /*manual*/
  8403: push r8  /*manual*/
  8404: neg rdx  /*manual*/
  8405: movsx r8d ,si  /*manual*/
  8406: setb cl  /*manual*/
  8407: dword ptr [rsp+rdx*1] ^= ebx
  8408: neg r8  /*manual*/
  8409: xchg bpl ,r8b  /*manual*/
  8410: pop r8  /*manual*/
  8411: bt edx ,ecx  /*manual*/
  8412: movsxd rbx ,ebx  /*manual*/
  8413: and edx ,ecx  /*manual*/
  8414: cmovnp ax ,cx  /*manual*/
  8415: lea rdi ,ptr [rsi-0x7ddc7f31]  /*manual*/
  8416: adc r10 ,rbx  /*manual*/
  8417: or bpl ,cl  /*manual*/
  8418: lea rsi ,ptr [rsp+rdx*1+0x40]  /*manual*/
  8419: dec bp  /*manual*/
  8420: push rdx  /*manual*/
  8421: rbx = qword ptr [rax+rsi*1-0x5e]
  8422: shl rdx ,0xcc  /*manual*/
  8423: qword ptr [r9+rdx*1-0x10] = rbx
  8424: xadd di ,dx  /*manual*/
  8425: movsx ebx ,byte ptr [rsp+rax*1-0x5d]  /*manual*/
  8426: xchg dword ptr [rsp+rbp*1-0x52400852] ,ebx  /*manual*/
  8427: movzx ebp ,byte ptr [r11+rdx*4-0xe5ea]  /*manual*/
  8428: lea r11 ,ptr [rdx+r11*1-0x3975]  /*manual*/
  8429: sar word ptr [rsp+rdx*1-0x3976] ,0xc7  /*manual*/
  8430: pop rdx  /*manual*/
  8431: bpl ^= r8b
  8432: not bx  /*manual*/
  8433: bpl += bl
  8434: bpl ^= bl
  8435: bpl -= 0xf4
  8436: rol bpl ,0x1  /*manual*/
  8437: esi = 0x579ba725
  8438: bpl ^= 0x80
  8439: rax -= rbx
  8440: lea rcx ,ptr [rbx+rdi*2+0x34ab43a9]  /*manual*/
  8441: sar edx ,0x24  /*manual*/
  8442: ror bpl ,0x1  /*manual*/
  8443: xchg edx ,eax  /*manual*/
  8444: r8b ^= bpl
  8445: or di ,di  /*manual*/
  8446: adc rbp ,rsp  /*manual*/
  8447: inc dl  /*manual*/
  8448: rdx = qword ptr [rbp+rax*8]
  8449: neg bl  /*manual*/
  8450: qword ptr [r9+rax*2-0x18] = rdx
  8451: lea r9 ,ptr [r9+rax*2-0x18]  /*manual*/
  8452: shl eax ,0x94  /*manual*/
  8453: rax += rdi
  8454: shl rax ,0x2d  /*manual*/
  8455: js 0x5d8dcd50cbc3  /*manual*/
  8456: edx = 0x17ac3ca4
  8457: lea rdx ,ptr [rsp+rdx*1-0x17ac3abc]  /*manual*/
  8458: call 0x5d8dcd5bd3dc
  8459: cmp r9 ,rdx  /*manual*/
  8460: call 0x5d8dcd5744a0
  8461: call 0x5d8dcd5d2928
  8462: lea rsp ,ptr [rsp+0x18]  /*manual*/
  8463: jnbe 0x5d8dcd63900c  /*manual*/
  8464: push 0x6c087856  /*manual*/
  8465: jmp 0x5d8dcd5cdbbe  /*manual*/
  8466: lea rsp ,ptr [rsp+0x8]  /*manual*/
  8467: jmp r10  /*manual*/
  8468: movzx ecx ,byte ptr [r11]  /*manual*/
  8469: ebx = 0x7cbcb95b
  8470: movzx edx ,bl  /*manual*/
  8471: cl ^= r8b
  8472: cl -= 0x22
  8473: cl ^= 0xe0
  8474: movzx eax ,bl  /*manual*/
  8475: call 0x5d8dcd641cc7
  8476: neg ax  /*manual*/
  8477: sbb cl ,0xbc  /*manual*/
  8478: qword ptr [rsp+rdx*1-0x5b] = 0x22a65ce7
  8479: cl ^= 0x64
  8480: r8b ^= cl
  8481: xchg byte ptr [rsp+rbx*1-0x7cbcb959] ,dl  /*manual*/
  8482: xadd word ptr [rsp+rbx*1-0x7cbcb958] ,dx  /*manual*/
  8483: lea rcx ,ptr [rsp+rcx*1+0x8]  /*manual*/
  8484: jb 0x5d8dcd5e346a  /*manual*/
  8485: rbx = qword ptr [rcx+rbx*1-0x7cbcb95b]
  8486: call 0x5d8dcd679727
  8487: xadd rax ,rdx  /*manual*/
  8488: movzx ecx ,byte ptr [rsp+rdx*2-0x1ff3e]  /*manual*/
  8489: qword ptr [r9+rdx*1-0xffad] = rbx
  8490: pop rax  /*manual*/
  8491: movzx edi ,word ptr [r11+rdx*1-0xffa4]  /*manual*/
  8492: not rdx  /*manual*/
  8493: esi = edx
  8494: di ^= r8w
  8495: neg di  /*manual*/
  8496: di -= 0xbfc
  8497: eax = esi
  8498: shl al ,0xa3  /*manual*/
  8499: ror di ,0x1  /*manual*/
  8500: cqo   /*manual*/
  8501: jmp 0x5d8dcd4f8f23  /*manual*/
  8502: di -= 0x38c8
  8503: lea rbp ,ptr [rdx+0x7688f960]  /*manual*/
  8504: call 0x5d8dcd52c267
  8505: not di  /*manual*/
  8506: push rcx  /*manual*/
  8507: lea rbx ,ptr [rsi+rbp*8+0x5398f491]  /*manual*/
  8508: r8w ^= di
  8509: lea rdi ,ptr [rsp+rdi*1+0x18]  /*manual*/
  8510: rcx ^= qword ptr [rsp+0x8]
  8511: rcx += 0x37ed3
  8512: jmp rcx  /*manual*/
  8513: cwde   /*manual*/
  8514: qword ptr [rsp+rdx*2+0x8] = 0x3485cb65
  8515: rcx = qword ptr [rdi+rdx*1]
  8516: shl al ,0x44  /*manual*/
  8517: pop rsi  /*manual*/
  8518: adc bpl ,0xba  /*manual*/
  8519: qword ptr [r9+rdx*4-0x10] = rcx
  8520: bt rdx ,rdx  /*manual*/
  8521: and esi ,0x9e98a0a4  /*manual*/
  8522: btr bx ,bx  /*manual*/
  8523: sil ^= byte ptr [rdx+r11*1+0x3]
  8524: neg byte ptr [rsp+rdx*1+0x8]  /*manual*/
  8525: sil ^= r8b
  8526: inc sil  /*manual*/
  8527: jmp 0x5d8dcd5b195f  /*manual*/
  8528: sar ax ,0x4f  /*manual*/
  8529: neg sil  /*manual*/
  8530: rol al ,0x46  /*manual*/
  8531: ror sil ,0x1  /*manual*/
  8532: rdx -= 0x771c63a8
  8533: shl al ,0xe2  /*manual*/
  8534: neg sil  /*manual*/
  8535: sil -= 0x5d
  8536: btr rdx ,rdx  /*manual*/
  8537: pop rdi  /*manual*/
  8538: not sil  /*manual*/
  8539: xchg word ptr [rsp+rdx*1+0x771c63a9] ,ax  /*manual*/
  8540: adc byte ptr [rsp+rax*1-0x5b55] ,0x8a  /*manual*/
  8541: inc sil  /*manual*/
  8542: r8b ^= sil
  8543: lea rsi ,ptr [rsp+rsi*1+0x8]  /*manual*/
  8544: neg al  /*manual*/
  8545: shl edx ,0xf9  /*manual*/
  8546: movzx ecx ,dil  /*manual*/
  8547: rdi = qword ptr [rax+rsi*1-0x5ba4]
  8548: qword ptr [rax+r9*1-0x5bbc] = rdi
  8549: jnb 0x5d8dcd6a6026  /*manual*/
  8550: data16 cbw  /*manual*/
  8551: shl edx ,cl  /*manual*/
  8552: lea r9 ,ptr [r9+rdx*1-0x18]  /*manual*/
  8553: lea rsi ,ptr [rbx*8-0x37f2de41]  /*manual*/
  8554: edi = dword ptr [r11+rdx*1+0x4]
  8555: pop rbp  /*manual*/
  8556: lea r11 ,ptr [rdx+r11*1+0x8]  /*manual*/
  8557: si ^= bp
  8558: shr rbp ,cl  /*manual*/
  8559: edi ^= r8d
  8560: neg edi  /*manual*/
  8561: bts dx ,0x68  /*manual*/
  8562: ror edi ,0x2  /*manual*/
  8563: bts rax ,rbx  /*manual*/
  8564: edi ^= 0x8291848
  8565: jmp 0x5d8dcd51e93d  /*manual*/
  8566: ebx -= ecx
  8567: adc si ,bp  /*manual*/
  8568: lea edi ,ptr [rdi+rdx*8-0x348a3f4b]  /*manual*/
  8569: ror ebp ,0xc7  /*manual*/
  8570: data16 cbw  /*manual*/
  8571: shl rsi ,cl  /*manual*/
  8572: ror edi ,0x2  /*manual*/
  8573: sar rdx ,0x8a  /*manual*/
  8574: dec bpl  /*manual*/
  8575: not edi  /*manual*/
  8576: call 0x5d8dcd67614a
  8577: call 0x5d8dcd64be7e
  8578: setno bl  /*manual*/
  8579: qword ptr [rsp+rdx*1+0x8] = r8
  8580: qword ptr [rsp+rdx*1] = 0x73b950a2
  8581: bt ebx ,eax  /*manual*/
  8582: dword ptr [rsp+rdx*1+0x8] ^= edi
  8583: not ecx  /*manual*/
  8584: r8 = qword ptr [rsp+rdx*4+0x8]
  8585: ror eax ,0x75  /*manual*/
  8586: qword ptr [rsp+rdx*1+0x8] = rsi
  8587: bp -= ax
  8588: movsxd rdi ,edi  /*manual*/
  8589: jl 0x5d8dcd65ced1  /*manual*/
  8590: pop rax  /*manual*/
  8591: adc r10 ,rdi  /*manual*/
  8592: movsx edi ,bx  /*manual*/
  8593: pop rsi  /*manual*/
  8594: shl cl ,0x6  /*manual*/
  8595: jnz 0x5d8dcd50cbc3  /*manual*/
  8596: edx = 0x17ac3ca4
  8597: lea rdx ,ptr [rsp+rdx*1-0x17ac3abc]  /*manual*/
  8598: call 0x5d8dcd5bd3dc
  8599: cmp r9 ,rdx  /*manual*/
  8600: call 0x5d8dcd5744a0
  8601: call 0x5d8dcd5d2928
  8602: lea rsp ,ptr [rsp+0x18]  /*manual*/
  8603: jnbe 0x5d8dcd63900c  /*manual*/
  8604: push 0x6c087856  /*manual*/
  8605: jmp 0x5d8dcd5cdbbe  /*manual*/
  8606: lea rsp ,ptr [rsp+0x8]  /*manual*/
  8607: jmp r10  /*manual*/
  8608: ecx = 0x53009256
  8609: movzx eax ,byte ptr [r11+rcx*1-0x53009256]  /*manual*/
  8610: movzx edx ,cl  /*manual*/
  8611: lea rdi ,ptr [rdx*2+0x7b9ff7e9]  /*manual*/
  8612: jmp 0x5d8dcd641de7  /*manual*/
  8613: al ^= r8b
  8614: movzx esi ,dx  /*manual*/
  8615: ebx = edi
  8616: al += 0x91
  8617: shl dx ,0x62  /*manual*/
  8618: lea rdi ,ptr [rdi+rsi*1+0x7ba48b9b]  /*manual*/
  8619: neg al  /*manual*/
  8620: movzx ebp ,dl  /*manual*/
  8621: rol bx ,0xac  /*manual*/
  8622: bts rsi ,rbx  /*manual*/
  8623: not al  /*manual*/
  8624: btr rdi ,rbp  /*manual*/
  8625: btr ebx ,0xb  /*manual*/
  8626: xadd rcx ,rdx  /*manual*/
  8627: sbb al ,0x57  /*manual*/
  8628: sar rsi ,cl  /*manual*/
  8629: neg al  /*manual*/
  8630: ecx += 0xe7017436
  8631: r8b ^= al
  8632: jmp 0x5d8dcd69ea4f  /*manual*/
  8633: dx += si
  8634: shl dl ,0xc7  /*manual*/
  8635: rax += rsp
  8636: rbx = qword ptr [rcx+rax*1-0x3a0207e4]
  8637: shr ebp ,cl  /*manual*/
  8638: shl edi ,cl  /*manual*/
  8639: dec di  /*manual*/
  8640: qword ptr [r9+rcx*1-0x3a0207ec] = rbx
  8641: dec ebp  /*manual*/
  8642: ecx = dword ptr [rcx+r11*1-0x3a0207e3]
  8643: movzx ebx ,dl  /*manual*/
  8644: ecx ^= r8d
  8645: movzx eax ,dl  /*manual*/
  8646: ror edi ,0xe4  /*manual*/
  8647: neg ecx  /*manual*/
  8648: btc di ,bp  /*manual*/
  8649: dec dil  /*manual*/
  8650: push rsi  /*manual*/
  8651: ror ecx ,0x2  /*manual*/
  8652: ecx ^= 0x8291848
  8653: lea ecx ,ptr [rcx+rbp*2-0x348a3753]  /*manual*/
  8654: ror ecx ,0x2  /*manual*/
  8655: pop rdi  /*manual*/
  8656: jmp 0x5d8dcd60a8fd  /*manual*/
  8657: not ecx  /*manual*/
  8658: call 0x5d8dcd61b610
  8659: bt si ,dx  /*manual*/
  8660: adc rbx ,0x2315a43e  /*manual*/
  8661: qword ptr [rsp+rdx*1-0x53009200] = r8
  8662: dword ptr [rsp+rdi*2] ^= ecx
  8663: btc bx ,dx  /*manual*/
  8664: pop r8  /*manual*/
  8665: jnb 0x5d8dcd6d639d  /*manual*/
  8666: ror bp ,0x4a  /*manual*/
  8667: movsxd rcx ,ecx  /*manual*/
  8668: adc r10 ,rcx  /*manual*/
  8669: dx -= 0xc8ed
  8670: shl ebx ,0xa5  /*manual*/
  8671: shl rsi ,0xe4  /*manual*/
  8672: movzx ebx ,byte ptr [r11+rdi*4+0x5]  /*manual*/
  8673: shl rax ,0xea  /*manual*/
  8674: jnz 0x5d8dcd566956  /*manual*/
  8675: lea r11 ,ptr [rdx+r11*1-0x5300c90d]  /*manual*/
  8676: ecx = 0x23975a14
  8677: shl di ,0x21  /*manual*/
  8678: bt eax ,eax  /*manual*/
  8679: bl ^= r8b
  8680: lea rbp ,ptr [rbp+rdi*4-0x704839e2]  /*manual*/
  8681: bswap esi  /*manual*/
  8682: edx -= 0x50a840d2
  8683: sbb bl ,0x22  /*manual*/
  8684: dec sil  /*manual*/
  8685: bl ^= 0xe0
  8686: bt ax ,si  /*manual*/
  8687: bswap rsi  /*manual*/
  8688: ax += 0x6999
  8689: sbb bl ,0xbd  /*manual*/
  8690: push rsi  /*manual*/
  8691: ax ^= 0x3011
  8692: word ptr [rsp+rdx*2-0x4b1107f] = bp
  8693: bl ^= 0x64
  8694: data16 cbw  /*manual*/
  8695: r8b ^= bl
  8696: and rdi ,0x419d588a  /*manual*/
  8697: bt si ,0xa1  /*manual*/
  8698: call 0x5d8dcd4ef14a
  8699: lea rbx ,ptr [rsp+rbx*1+0x10]  /*manual*/
  8700: rsi = qword ptr [rbx+rdx*2-0x4b11082]
  8701: movzx ebx ,word ptr [rsp+rdi*1+0xb]  /*manual*/
  8702: qword ptr [r9+rdx*1-0x2588851] = rsi
  8703: not al  /*manual*/
  8704: xadd rcx ,rdx  /*manual*/
  8705: shl rax ,cl  /*manual*/
  8706: lea r9 ,ptr [rdx+r9*1-0x23975a24]  /*manual*/
  8707: cmovp ecx ,dword ptr [rsp+rdx*1-0x23975a09]  /*manual*/
  8708: setz bl  /*manual*/
  8709: pop rbp  /*manual*/
  8710: pop rsi  /*manual*/
  8711: jnz 0x5d8dcd50cbc3  /*manual*/
  8712: edx = 0x17ac3ca4
  8713: lea rdx ,ptr [rsp+rdx*1-0x17ac3abc]  /*manual*/
  8714: call 0x5d8dcd5bd3dc
  8715: cmp r9 ,rdx  /*manual*/
  8716: call 0x5d8dcd5744a0
  8717: call 0x5d8dcd5d2928
  8718: lea rsp ,ptr [rsp+0x18]  /*manual*/
  8719: jnbe 0x5d8dcd63900c  /*manual*/
  8720: push 0x6c087856  /*manual*/
  8721: jmp 0x5d8dcd5cdbbe  /*manual*/
  8722: lea rsp ,ptr [rsp+0x8]  /*manual*/
  8723: jmp r10  /*manual*/
  8724: rsp = r9
  8725: r10d = 0x3900bbfc
  8726: pop r13  /*manual*/
  8727: pop r9  /*manual*/
  8728: pop r11  /*manual*/
  8729: movsx ecx ,r10w  /*manual*/
  8730: edi = 0x4a9b9045
  8731: pop rcx  /*manual*/
  8732: pop rdx  /*manual*/
  8733: pop rbx  /*manual*/
  8734: pop rbp  /*manual*/
  8735: jmp 0x5d8dcd53965c  /*manual*/
  8736: pop r10  /*manual*/
  8737: movzx r12d ,dil  /*manual*/
  8738: movzx eax ,r12b  /*manual*/
  8739: pop r15  /*manual*/
  8740: pop r12  /*manual*/
  8741: pop r8  /*manual*/
  8742: inc edi  /*manual*/
  8743: ax ^= di
  8744: pop rsi  /*manual*/
  8745: sbb di ,ax  /*manual*/
  8746: di ^= ax
  8747: inc rdi  /*manual*/
  8748: pop rdi  /*manual*/
  8749: push rax  /*manual*/
  8750: push qword ptr [rsp+0x8]  /*manual*/
  8751: popfq   /*manual*/
  8752: push rax  /*manual*/
  8753: not ax  /*manual*/
  8754: push rax  /*manual*/
  8755: rax = qword ptr [rsp+rax*4-0x1bfd0]
  8756: pop r14  /*manual*/
  8757: not r14d  /*manual*/
  8758: r14 = qword ptr [rsp+0x20]
  8759: jmp 0x5d8dcd68ae8d  /*manual*/
  8760: jmp 0x5d8dcd656b55  /*manual*/
  8761: lea rsp ,ptr [rsp+0x28]  /*manual*/
  8762: return
  8763: nop edx ,edi  /*manual*/
  8764: return
  8765: call 0x5d8dcd6cc6d4
  8766: call 0x5d8dcd5092bf
  8767: qword ptr [rsp+0x8] = 0x6b4f1ca0
  8768: lea rsp ,ptr [rsp+0x8]  /*manual*/
  8769: call 0x5d8dcd529629
  8770: call 0x5d8dcd6d8b00
  8771: qword ptr [rsp] = r11
  8772: r11d = 0xed8a53d9
  8773: bswap r11  /*manual*/
  8774: push rbx  /*manual*/
  8775: not r11w  /*manual*/
  8776: movzx ebx ,r11w  /*manual*/
  8777: push rdx  /*manual*/
  8778: call 0x5d8dcd532623
  8779: qword ptr [rsp+rbx*2-0x1fffe] = r14
  8780: not bx  /*manual*/
  8781: movzx edx ,bx  /*manual*/
  8782: push r9  /*manual*/
  8783: jmp 0x5d8dcd6ab432  /*manual*/
  8784: push r13  /*manual*/
  8785: call 0x5d8dcd67e1f4
  8786: movzx r9d ,r11b  /*manual*/
  8787: pop rdx  /*manual*/
  8788: lea rdx ,ptr [rdx+rbx*4-0x74b1c]  /*manual*/
  8789: jmp rdx  /*manual*/
  8790: push r10  /*manual*/
  8791: movzx edx ,r9b  /*manual*/
  8792: call 0x5d8dcd634ae6
  8793: call 0x5d8dcd4fcd0a
  8794: qword ptr [rsp+rbx*8+0x8] = r12
  8795: bswap edx  /*manual*/
  8796: pop rdx  /*manual*/
  8797: lea rdx ,ptr [rdx+rbx*4-0x10b8c4]  /*manual*/
  8798: jmp rdx  /*manual*/
  8799: push r11  /*manual*/
  8800: qword ptr [rsp+rbx*4] = r15
  8801: push rsi  /*manual*/
  8802: jmp 0x5d8dcd531b25  /*manual*/
  8803: movzx edx ,r9b  /*manual*/
  8804: push rcx  /*manual*/
  8805: push rdx  /*manual*/
  8806: jmp 0x5d8dcd5022b4  /*manual*/
  8807: qword ptr [rsp+rbx*1] = r8
  8808: push rdi  /*manual*/
  8809: movsx esi ,r9b  /*manual*/
  8810: xchg esi ,r11d  /*manual*/
  8811: push r10  /*manual*/
  8812: xchg si ,bx  /*manual*/
  8813: push r11  /*manual*/
  8814: pushfq   /*manual*/
  8815: pop rdi  /*manual*/
  8816: qword ptr [rsp+rbx*4-0x3fffc] = rdi
  8817: dl -= 0x8
  8818: r9 = 0x5d8dcd4ea000
  8819: jnle 0x5d8dcd54d5cc  /*manual*/
  8820: qword ptr [rsp+rbx*1-0xfff7] = r9
  8821: neg sil  /*manual*/
  8822: btr edx ,esi  /*manual*/
  8823: edi = dword ptr [rsp+rbx*1-0xff7f]
  8824: lea rsi ,ptr [rbx*8+0x67aa478f]  /*manual*/
  8825: movzx r8d ,dx  /*manual*/
  8826: neg edi  /*manual*/
  8827: edi ^= 0xae180164
  8828: bts rbx ,rsi  /*manual*/
  8829: lea rbx ,ptr [r8*8+0x7390031]  /*manual*/
  8830: lea edi ,ptr [rdi+rbx*4-0x578d062a]  /*manual*/
  8831: call 0x5d8dcd5d12f4
  8832: edi ^= r11d
  8833: rdi += r9
  8834: qword ptr [rsp+rbx*2-0xe720f42] = rbp
  8835: movzx ecx ,r8w  /*manual*/
  8836: movzx r10d ,r8w  /*manual*/
  8837: qword ptr [rsp+rbx*4-0x1ce41f84] = rbx
  8838: qword ptr [rsp+rbx*1-0x7390759] = rax
  8839: shl rcx ,0xc  /*manual*/
  8840: push rsi  /*manual*/
  8841: lea r10 ,ptr [rsp+rbx*1-0x73907d1]  /*manual*/
  8842: push rsi  /*manual*/
  8843: lea rbp ,ptr [r8*8+0x1a974f68]  /*manual*/
  8844: ebx -= ebp
  8845: lea rcx ,ptr [r10+rdx*4-0x640]  /*manual*/
  8846: dec qword ptr [rsp+rdx*4-0x3d8]  /*manual*/
  8847: and cl ,0xf0  /*manual*/
  8848: shr rbp ,0x5c  /*manual*/
  8849: rsp = rcx
  8850: r11d = 0xd51d756d
  8851: movzx r8d ,r11b  /*manual*/
  8852: rbp = rdi
  8853: r9 = 0x5d8dcd4ea000
  8854: rbp -= r9
  8855: push 0x3995ecd0  /*manual*/
  8856: rol word ptr [rsp+0x3] ,0xa1  /*manual*/
  8857: shl dword ptr [rsp+0x2] ,0xa1  /*manual*/
  8858: lea r11 ,ptr [rip-0x17]  /*manual*/
  8859: dec dword ptr [rsp+0x2]  /*manual*/
  8860: jns 0x5d8dcd4f4d7a  /*manual*/
  8861: eax = 0x5983ba63
  8862: eax = dword ptr [rdi+rax*1-0x5983ba63]
  8863: adc rdi ,0x4  /*manual*/
  8864: ecx = 0xc73edd1b
  8865: shl byte ptr [rsp+0x7] ,0x84  /*manual*/
  8866: eax ^= ebp
  8867: ror eax ,0x2  /*manual*/
  8868: ebx = ecx
  8869: shl word ptr [rsp+0x4] ,0xc2  /*manual*/
  8870: sbb rcx ,qword ptr [rsp]  /*manual*/
  8871: inc eax  /*manual*/
  8872: push rbx  /*manual*/
  8873: qword ptr [rsp+rcx*1+0x1deb0fbd] -= rcx
  8874: movzx edx ,bx  /*manual*/
  8875: eax ^= 0x1824631d
  8876: movsx r9d ,cx  /*manual*/
  8877: r8d = dword ptr [rsp+rcx*4+0x77ac3ed7]
  8878: call 0x5d8dcd55422b
  8879: rol eax ,0x3  /*manual*/
  8880: xadd r9 ,rdx  /*manual*/
  8881: esi = dword ptr [rsp+rcx*4+0x77ac3ee4]
  8882: qword ptr [rsp+rcx*1+0x1deb0fb5] = r8
  8883: bswap eax  /*manual*/
  8884: shl dword ptr [rsp+rcx*1+0x1deb0fc1] ,0x52  /*manual*/
  8885: neg eax  /*manual*/
  8886: lea rdx ,ptr [rcx+rdx*2+0x903c2e]  /*manual*/
  8887: not r9d  /*manual*/
  8888: jmp 0x5d8dcd51ec67  /*manual*/
  8889: qword ptr [rsp+rcx*2+0x3bd61f7a] = rbp
  8890: pop r9  /*manual*/
  8891: dword ptr [rsp+rcx*1+0x1deb0fbd] ^= eax
  8892: and r9d ,0x508809fc  /*manual*/
  8893: rol dword ptr [rsp+rcx*1+0x1deb0fb8] ,0x9f  /*manual*/
  8894: lea rbp ,ptr [rdx-0x2f78c25f]  /*manual*/
  8895: rbp = qword ptr [rsp+rcx*1+0x1deb0fbd]
  8896: dec dx  /*manual*/
  8897: qword ptr [rsp+rcx*2+0x3bd61f72] = rcx
  8898: movsxd rax ,eax  /*manual*/
  8899: call 0x5d8dcd6061bd
  8900: r11 += rax
  8901: cx ^= bx
  8902: pop rbx  /*manual*/
  8903: ebx = dword ptr [rsp+rcx*4+0x77af4ac9]
  8904: qword ptr [rsp+rcx*2+0x3bd7a560] = r11
  8905: return
  8906: push 0xffffffffa53faea3  /*manual*/
  8907: ecx = dword ptr [rsp+0x1]
  8908: movsx edx ,cl  /*manual*/
  8909: r8 = qword ptr [r10]
  8910: movsx eax ,dx  /*manual*/
  8911: movzx r9d ,byte ptr [rdi]  /*manual*/
  8912: r9b ^= bpl
  8913: ror r9b ,0x1  /*manual*/
  8914: lea rsi ,ptr [rdx*4+0x75151dd3]  /*manual*/
  8915: sar byte ptr [rsp+0x4] ,0x6  /*manual*/
  8916: sbb r9b ,0x77  /*manual*/
  8917: neg r9b  /*manual*/
  8918: rsi ^= rax
  8919: jns 0x5d8dcd59f0b7  /*manual*/
  8920: call 0x5d8dcd69712d
  8921: r9b ^= 0xf9
  8922: btc edx ,0x88  /*manual*/
  8923: btc dx ,0xd6  /*manual*/
  8924: bpl ^= r9b
  8925: dec rcx  /*manual*/
  8926: rol word ptr [rsp+0xc] ,0x6d  /*manual*/
  8927: lea r9 ,ptr [rsp+r9*1+0x10]  /*manual*/
  8928: call 0x5d8dcd6171ff
  8929: lea rsi ,ptr [rsi*4-0x57fbd8bc]  /*manual*/
  8930: qword ptr [r9] = r8
  8931: lea rbx ,ptr [rcx*2-0x115c45da]  /*manual*/
  8932: qword ptr [rsp] = rsi
  8933: ecx = dword ptr [rdi+0x1]
  8934: sar eax ,0xcc  /*manual*/
  8935: ecx ^= ebp
  8936: r8d = esi
  8937: dec rdx  /*manual*/
  8938: dec rdx  /*manual*/
  8939: bswap ecx  /*manual*/
  8940: ecx ^= eax
  8941: neg rsi  /*manual*/
  8942: sil -= 0x7b
  8943: call 0x5d8dcd6a3714
  8944: bswap ecx  /*manual*/
  8945: pop rsi  /*manual*/
  8946: rsi += 0xa7519
  8947: jmp rsi  /*manual*/
  8948: ecx -= eax
  8949: qword ptr [rsp+0x10] = rbp
  8950: dword ptr [rsp+0x10] ^= ecx
  8951: rbp = qword ptr [rsp+0x10]
  8952: movzx esi ,bx  /*manual*/
  8953: movsxd rcx ,ecx  /*manual*/
  8954: movsx r9d ,dl  /*manual*/
  8955: r8d ^= dword ptr [rsp+rsi*1-0x397c]
  8956: adc r11 ,rcx  /*manual*/
  8957: or r9d ,dword ptr [rsp+rsi*1-0x397e]  /*manual*/
  8958: rol si ,0x81  /*manual*/
  8959: jnle 0x5d8dcd51dd3c  /*manual*/
  8960: rdx = qword ptr [rsi+r10*1-0x72f8]
  8961: call 0x5d8dcd66c4d7
  8962: lea rax ,ptr [rsp+rsi*1-0x7260]  /*manual*/
  8963: qword ptr [rsp+rsi*4-0x1cbe8] = r9
  8964: word ptr [rsp+rsi*4-0x1cbe6] = r9w
  8965: qword ptr [rax+rsi*8-0x39800] = rdx
  8966: shl r8d ,0xb9  /*manual*/
  8967: call 0x5d8dcd5b2a2d
  8968: r8 = qword ptr [r10+rsi*1-0x72f0]
  8969: rol rsi ,0x81  /*manual*/
  8970: lea r10 ,ptr [r10+rsi*2-0x1cbe8]  /*manual*/
  8971: movzx edx ,byte ptr [rsi+rdi*1-0xe5fb]  /*manual*/
  8972: xadd ebx ,r9d  /*manual*/
  8973: qword ptr [rsp+rsi*2-0x1cbe8] = rsi
  8974: lea rdi ,ptr [rdi+rsi*8-0x72ffa]  /*manual*/
  8975: or sil ,0x53  /*manual*/
  8976: dl ^= bpl
  8977: dl ^= 0xad
  8978: push r9  /*manual*/
  8979: dec dl  /*manual*/
  8980: rol dword ptr [rsp+rsi*1-0xe650] ,0xde  /*manual*/
  8981: movsx eax ,r9b  /*manual*/
  8982: dl ^= 0xe2
  8983: dec dl  /*manual*/
  8984: bts esi ,r9d  /*manual*/
  8985: ecx = 0x99ab7b9e
  8986: bpl ^= dl
  8987: not al  /*manual*/
  8988: and qword ptr [rsp+rsi*1-0xe653] ,rax  /*manual*/
  8989: lea rdx ,ptr [rsp+rdx*1+0x30]  /*manual*/
  8990: and bl ,0x2f  /*manual*/
  8991: adc dword ptr [rsp+rsi*1-0xe633] ,r9d  /*manual*/
  8992: r9b += byte ptr [rsp+rsi*2-0x1cc85]
  8993: qword ptr [rsi+rdx*1-0xe653] = r8
  8994: qword ptr [rsp+rsi*8-0x73288] = 0xfffffffffb144095
  8995: qword ptr [rsp+rsi*1-0xe64b] = r9
  8996: sbb rax ,r9  /*manual*/
  8997: qword ptr [rsp+rsi*1-0xe653] = r11
  8998: return
  8999: ecx = 0xc1b40d4b
  9000: r8d = ecx
  9001: ecx = dword ptr [rdi]
  9002: jmp 0x5d8dcd67b547  /*manual*/
  9003: movzx esi ,r8w  /*manual*/
  9004: lea rdi ,ptr [rdi+rsi*8-0x6a54]  /*manual*/
  9005: sil ^= r8b
  9006: ecx ^= ebp
  9007: movzx ebx ,r8w  /*manual*/
  9008: push rsi  /*manual*/
  9009: bswap ecx  /*manual*/
  9010: bl -= bh
  9011: not ecx  /*manual*/
  9012: jns 0x5d8dcd68d837  /*manual*/
  9013: call 0x5d8dcd5f5a96
  9014: adc esi ,r8d  /*manual*/
  9015: bswap ecx  /*manual*/
  9016: inc ecx  /*manual*/
  9017: rsi -= rsi
  9018: qword ptr [rsp+rsi*2] = 0xffffffffe72a03d4
  9019: xchg rbx ,r8  /*manual*/
  9020: qword ptr [rsp+r8*4-0x34f0] = rbp
  9021: dword ptr [rsp+r8*1-0xd36] ^= ecx
  9022: xchg byte ptr [rsp+r8*2-0x1a75] ,r8b  /*manual*/
  9023: rbp = qword ptr [rsp+r8*2-0x1bf6]
  9024: and dword ptr [rsp+r8*4-0x37f9] ,ebx  /*manual*/
  9025: jbe 0x5d8dcd5ecbbf  /*manual*/
  9026: call 0x5d8dcd64e8ad
  9027: movsxd rcx ,ecx  /*manual*/
  9028: jnz 0x5d8dcd61891f  /*manual*/
  9029: inc bl  /*manual*/
  9030: qword ptr [rsp+r8*1-0xdff] = rsi
  9031: adc r11 ,rcx  /*manual*/
  9032: r9d = dword ptr [rsp+r8*2-0x1bfc]
  9033: jmp 0x5d8dcd5b55a9  /*manual*/
  9034: movzx edx ,bx  /*manual*/
  9035: rdx = qword ptr [r10+r8*2-0x1bfe]
  9036: and r9 ,r9  /*manual*/
  9037: qword ptr [rsp+r8*1-0xdef] = rsi
  9038: lea r10 ,ptr [r8+r10*1-0xdf7]  /*manual*/
  9039: movzx r8d ,byte ptr [rdi+r8*1-0xdff]  /*manual*/
  9040: lea rdi ,ptr [rdi+rsi*1+0x1]  /*manual*/
  9041: movsx ecx ,r9w  /*manual*/
  9042: cmovnl rcx ,qword ptr [rsp+rsi*8+0x10]  /*manual*/
  9043: r8b ^= bpl
  9044: lea rbx ,ptr [r9+rbx*4-0x23d67163]  /*manual*/
  9045: ror r8b ,0x1  /*manual*/
  9046: byte ptr [rsp+rsi*1+0x8] += 0xd2
  9047: jz 0x5d8dcd5f89b9  /*manual*/
  9048: sbb r8b ,0x77  /*manual*/
  9049: neg r8b  /*manual*/
  9050: r8b ^= 0xf9
  9051: push rcx  /*manual*/
  9052: dec rbx  /*manual*/
  9053: not sil  /*manual*/
  9054: bpl ^= r8b
  9055: neg qword ptr [rsp+rsi*2-0x1fb]  /*manual*/
  9056: lea r8 ,ptr [rsp+r8*1+0x20]  /*manual*/
  9057: qword ptr [r8+rsi*1-0xff] = rdx
  9058: qword ptr [rsp+rsi*4-0x3fc] += r11
  9059: return
  9060: push 0xffffffffdeaae34d  /*manual*/
  9061: rsi = qword ptr [r10]
  9062: movzx ecx ,word ptr [rdi]  /*manual*/
  9063: r9d = dword ptr [rsp]
  9064: word ptr [rsp+0x6] -= r9w
  9065: push r9  /*manual*/
  9066: cx ^= bp
  9067: rol r9b ,0x25  /*manual*/
  9068: not cx  /*manual*/
  9069: rol cx ,0x1  /*manual*/
  9070: edx = dword ptr [rsp+0x7]
  9071: neg cx  /*manual*/
  9072: inc qword ptr [rsp+0x8]  /*manual*/
  9073: xchg byte ptr [rsp+0xc] ,r9b  /*manual*/
  9074: movzx ebx ,r9w  /*manual*/
  9075: ror cx ,0x1  /*manual*/
  9076: xchg word ptr [rsp+rbx*1-0xe3f5] ,dx  /*manual*/
  9077: inc qword ptr [rsp+rbx*1-0xe3f7]  /*manual*/
  9078: movsx r8d ,dx  /*manual*/
  9079: bp ^= cx
  9080: push r9  /*manual*/
  9081: lea rcx ,ptr [rsp+rcx*1+0x18]  /*manual*/
  9082: qword ptr [rcx+rbx*4-0x38ffc] = rsi
  9083: and word ptr [rsp+rbx*1-0xe3eb] ,bx  /*manual*/
  9084: shl bx ,0xc3  /*manual*/
  9085: ror word ptr [rsp+rbx*1-0x1ff1] ,0xa  /*manual*/
  9086: ecx = dword ptr [rbx+rdi*1-0x1ff6]
  9087: ecx ^= ebp
  9088: bswap ecx  /*manual*/
  9089: btr r9 ,0x4b  /*manual*/
  9090: not ecx  /*manual*/
  9091: r8d ^= r8d
  9092: movsx esi ,bl  /*manual*/
  9093: rol r9w ,0xaa  /*manual*/
  9094: bswap ecx  /*manual*/
  9095: and rsi ,qword ptr [rsp+rbx*8-0xffb1]  /*manual*/
  9096: inc ecx  /*manual*/
  9097: pop rax  /*manual*/
  9098: inc ax  /*manual*/
  9099: qword ptr [rsp+rbx*1-0x1ff0] = rbp
  9100: dword ptr [rsp+rbx*1-0x1ff0] ^= ecx
  9101: r9d += r9d
  9102: rbp = qword ptr [rsp+rbx*1-0x1ff0]
  9103: data16 cwd  /*manual*/
  9104: inc word ptr [rsp+rbx*2-0x3fea]  /*manual*/
  9105: movsxd rcx ,ecx  /*manual*/
  9106: push rbx  /*manual*/
  9107: adc esi ,r8d  /*manual*/
  9108: sbb si ,si  /*manual*/
  9109: adc r11 ,rcx  /*manual*/
  9110: btc si ,0xea  /*manual*/
  9111: dec sil  /*manual*/
  9112: rbx = qword ptr [rbx+r10*1-0x1ff0]
  9113: jnb 0x5d8dcd622764  /*manual*/
  9114: or byte ptr [rsp+r8*2+0xe] ,al  /*manual*/
  9115: movzx ecx ,word ptr [rsp+r8*2+0x3]  /*manual*/
  9116: movzx edx ,byte ptr [rdi+r8*8+0x6]  /*manual*/
  9117: dl ^= bpl
  9118: not r8b  /*manual*/
  9119: not rsi  /*manual*/
  9120: ror dl ,0x1  /*manual*/
  9121: jmp 0x5d8dcd53aa7d  /*manual*/
  9122: dec rsi  /*manual*/
  9123: neg dl  /*manual*/
  9124: dl += r8b
  9125: rol dl ,0x1  /*manual*/
  9126: bts ecx ,0xcc  /*manual*/
  9127: btr rsi ,rcx  /*manual*/
  9128: bpl ^= dl
  9129: neg word ptr [rsp+r8*8-0x7f4]  /*manual*/
  9130: qword ptr [rsp+r8*2-0x1fa] ^= rcx
  9131: lea rdx ,ptr [rsp+rdx*1+0x18]  /*manual*/
  9132: lea rsi ,ptr [rsi+rcx*4-0x61efdd58]  /*manual*/
  9133: qword ptr [r8+rdx*1-0xff] = rbx
  9134: lea rbx ,ptr [r8+rsi*8+0x6d921a6e]  /*manual*/
  9135: edx = dword ptr [rsp+r8*1-0xf6]
  9136: rdx = qword ptr [r10+r8*1-0xef]
  9137: lea r10 ,ptr [r10+r8*8-0x7e0]  /*manual*/
  9138: btc r8 ,0x1d  /*manual*/
  9139: qword ptr [rsp+r8*1-0x200000ef] = rsi
  9140: movzx r9d ,byte ptr [rdi+r8*2-0x400001f7]  /*manual*/
  9141: bts rax ,0x4f  /*manual*/
  9142: ebx ^= esi
  9143: xchg dword ptr [rsp+r8*1-0x200000eb] ,ebx  /*manual*/
  9144: lea rdi ,ptr [rdi+r8*2-0x400001f6]  /*manual*/
  9145: r9b ^= bpl
  9146: r9b ^= 0x67
  9147: cwde   /*manual*/
  9148: shl rax ,0xe  /*manual*/
  9149: r9b ^= bl
  9150: ror r9b ,0x1  /*manual*/
  9151: r9b += r8b
  9152: bpl ^= r9b
  9153: and word ptr [rsp+r8*1-0x200000f9] ,0x132a  /*manual*/
  9154: push r8  /*manual*/
  9155: lea r9 ,ptr [rsp+r9*1+0x20]  /*manual*/
  9156: dec bl  /*manual*/
  9157: cx ^= word ptr [rsp+r8*1-0x200000f2]
  9158: qword ptr [r9+r8*1-0x200000ff] = rdx
  9159: not qword ptr [rsp+r8*1-0x200000ea]  /*manual*/
  9160: jnl 0x5d8dcd4fcb83  /*manual*/
  9161: qword ptr [rsp+rcx*2-0x2020] = r11
  9162: return
  9163: r8d = 0xea8486c0
  9164: rcx = qword ptr [r10]
  9165: movzx r8d ,byte ptr [rdi]  /*manual*/
  9166: edx = 0x3039e9f5
  9167: movsx eax ,dl  /*manual*/
  9168: movsx ebx ,al  /*manual*/
  9169: r8b ^= bpl
  9170: neg bx  /*manual*/
  9171: push rax  /*manual*/
  9172: and qword ptr [rsp+rdx*2-0x6073d3ea] ,rbx  /*manual*/
  9173: ror r8b ,0x1  /*manual*/
  9174: r8b -= 0x63
  9175: pop rsi  /*manual*/
  9176: sar rdx ,0xf1  /*manual*/
  9177: ror r8b ,0x1  /*manual*/
  9178: btr eax ,esi  /*manual*/
  9179: rax -= rsi
  9180: sbb r8b ,sil  /*manual*/
  9181: ror rsi ,0xa6  /*manual*/
  9182: ror r8b ,0x1  /*manual*/
  9183: or edx ,0xe91bdc36  /*manual*/
  9184: adc r8b ,0xff  /*manual*/
  9185: eax += 0x6c278fc5
  9186: dec rdx  /*manual*/
  9187: and bx ,ax  /*manual*/
  9188: ror r8b ,0x1  /*manual*/
  9189: shl rax ,0xf3  /*manual*/
  9190: dec rdx  /*manual*/
  9191: dec r8b  /*manual*/
  9192: not r8b  /*manual*/
  9193: cwde   /*manual*/
  9194: movzx r9d ,al  /*manual*/
  9195: bpl ^= r8b
  9196: inc r9b  /*manual*/
  9197: r8 += rsp
  9198: jmp 0x5d8dcd61cef9  /*manual*/
  9199: sar r9b ,0x41  /*manual*/
  9200: qword ptr [r8+rax*2] = rcx
  9201: adc dx ,0xfea9  /*manual*/
  9202: lea r8 ,ptr [rbx+rdx*8+0x2a229bd7]  /*manual*/
  9203: call 0x5d8dcd6c9c66
  9204: edx = dword ptr [rax+rdi*1+0x1]
  9205: edx ^= ebp
  9206: qword ptr [rsp+rax*8] = 0xffffffffa31ef0ed
  9207: rbx -= qword ptr [rsp+rax*1]
  9208: ebx += eax
  9209: bswap edx  /*manual*/
  9210: shr bl ,0x87  /*manual*/
  9211: adc dword ptr [rsp+rax*4+0x2] ,0xeb26adb  /*manual*/
  9212: not edx  /*manual*/
  9213: rol bx ,0xaa  /*manual*/
  9214: bswap edx  /*manual*/
  9215: cdqe   /*manual*/
  9216: dec r9  /*manual*/
  9217: sbb edx ,r9d  /*manual*/
  9218: shl dword ptr [rsp+rax*4+0x2] ,0x19  /*manual*/
  9219: adc word ptr [rsp+rax*1+0x1] ,0x8144  /*manual*/
  9220: qword ptr [rsp+rax*2] = rbp
  9221: sar r8 ,0x29  /*manual*/
  9222: dword ptr [rsp+rax*1] ^= edx
  9223: shr r8b ,0xe6  /*manual*/
  9224: movsx ebp ,bx  /*manual*/
  9225: pop rbp  /*manual*/
  9226: bx -= 0xd39b
  9227: xchg bx ,si  /*manual*/
  9228: movsxd rdx ,edx  /*manual*/
  9229: lea r9 ,ptr [rax*2-0x1ac47a2a]  /*manual*/
  9230: and rax ,rsi  /*manual*/
  9231: dec r9b  /*manual*/
  9232: adc r11 ,rdx  /*manual*/
  9233: push rbx  /*manual*/
  9234: rax ^= qword ptr [rax+r10*1+0x8]
  9235: movzx edx ,bx  /*manual*/
  9236: dl += byte ptr [rdi+rbx*1-0x5cdffffb]
  9237: push r8  /*manual*/
  9238: rol r9b ,0x1  /*manual*/
  9239: dl ^= bpl
  9240: dec ebx  /*manual*/
  9241: neg dl  /*manual*/
  9242: rol dl ,0x1  /*manual*/
  9243: ror rbx ,0x99  /*manual*/
  9244: jnb 0x5d8dcd690e64  /*manual*/
  9245: inc dl  /*manual*/
  9246: neg dl  /*manual*/
  9247: xadd bx ,si  /*manual*/
  9248: pop r8  /*manual*/
  9249: lea r8 ,ptr [rsi+rbx*8+0x7cb1eaa7]  /*manual*/
  9250: adc dl ,0xf9  /*manual*/
  9251: xadd byte ptr [rsp+r9*1+0x1ac47a5c] ,r8b  /*manual*/
  9252: bpl ^= dl
  9253: lea rdx ,ptr [rsp+rdx*1+0x8]  /*manual*/
  9254: ror r9 ,0xa0  /*manual*/
  9255: qword ptr [rdx] = rax
  9256: jb 0x5d8dcd577203  /*manual*/
  9257: lea rdx ,ptr [rbx+rsi*2+0x6143e41]  /*manual*/
  9258: rdx = qword ptr [r10+0x10]
  9259: rol r8b ,0x42  /*manual*/
  9260: setb byte ptr [rsp+0x1]  /*manual*/
  9261: sbb word ptr [rsp+0x4] ,0x6809  /*manual*/
  9262: adc r10 ,0x17  /*manual*/
  9263: xadd r9b ,bl  /*manual*/
  9264: movzx ebx ,byte ptr [rdi+0x6]  /*manual*/
  9265: inc r9w  /*manual*/
  9266: rol byte ptr [rsp+0x3] ,0x43  /*manual*/
  9267: xadd r9b ,r8b  /*manual*/
  9268: adc rdi ,0x7  /*manual*/
  9269: bl ^= bpl
  9270: dec bl  /*manual*/
  9271: rol bl ,0x1  /*manual*/
  9272: movzx ecx ,r8w  /*manual*/
  9273: qword ptr [rsp+rcx*4-0x1473c] = r8
  9274: bl -= 0x2d
  9275: xadd dword ptr [rsp+rcx*1-0x51cb] ,r9d  /*manual*/
  9276: shl rcx ,cl  /*manual*/
  9277: neg bl  /*manual*/
  9278: rol bl ,0x1  /*manual*/
  9279: shl r9d ,0x3e  /*manual*/
  9280: adc bl ,0x23  /*manual*/
  9281: dec si  /*manual*/
  9282: bpl ^= bl
  9283: rol ecx ,0xea  /*manual*/
  9284: lea rbx ,ptr [rsp+rbx*1+0x8]  /*manual*/
  9285: shl cx ,cl  /*manual*/
  9286: rol sil ,0x25  /*manual*/
  9287: qword ptr [rsp+r9*1] -= 0x3a34dbd5
  9288: qword ptr [rbx+r9*2] = rdx
  9289: movzx ebx ,r8w  /*manual*/
  9290: edx = ebx
  9291: qword ptr [rsp+r9*1] = r11
  9292: return
  9293: r8d = 0xea8486c0
  9294: rcx = qword ptr [r10]
  9295: movzx r8d ,byte ptr [rdi]  /*manual*/
  9296: edx = 0x3039e9f5
  9297: movsx eax ,dl  /*manual*/
  9298: movsx ebx ,al  /*manual*/
  9299: r8b ^= bpl
  9300: neg bx  /*manual*/
  9301: push rax  /*manual*/
  9302: and qword ptr [rsp+rdx*2-0x6073d3ea] ,rbx  /*manual*/
  9303: ror r8b ,0x1  /*manual*/
  9304: r8b -= 0x63
  9305: pop rsi  /*manual*/
  9306: sar rdx ,0xf1  /*manual*/
  9307: ror r8b ,0x1  /*manual*/
  9308: btr eax ,esi  /*manual*/
  9309: rax -= rsi
  9310: sbb r8b ,sil  /*manual*/
  9311: ror rsi ,0xa6  /*manual*/
  9312: ror r8b ,0x1  /*manual*/
  9313: or edx ,0xe91bdc36  /*manual*/
  9314: adc r8b ,0xff  /*manual*/
  9315: eax += 0x6c278fc5
  9316: dec rdx  /*manual*/
  9317: and bx ,ax  /*manual*/
  9318: ror r8b ,0x1  /*manual*/
  9319: shl rax ,0xf3  /*manual*/
  9320: dec rdx  /*manual*/
  9321: dec r8b  /*manual*/
  9322: not r8b  /*manual*/
  9323: cwde   /*manual*/
  9324: movzx r9d ,al  /*manual*/
  9325: bpl ^= r8b
  9326: inc r9b  /*manual*/
  9327: r8 += rsp
  9328: jmp 0x5d8dcd61cef9  /*manual*/
  9329: sar r9b ,0x41  /*manual*/
  9330: qword ptr [r8+rax*2] = rcx
  9331: adc dx ,0xfea9  /*manual*/
  9332: lea r8 ,ptr [rbx+rdx*8+0x2a229bd7]  /*manual*/
  9333: call 0x5d8dcd6c9c66
  9334: edx = dword ptr [rax+rdi*1+0x1]
  9335: edx ^= ebp
  9336: qword ptr [rsp+rax*8] = 0xffffffffa31ef0ed
  9337: rbx -= qword ptr [rsp+rax*1]
  9338: ebx += eax
  9339: bswap edx  /*manual*/
  9340: shr bl ,0x87  /*manual*/
  9341: adc dword ptr [rsp+rax*4+0x2] ,0xeb26adb  /*manual*/
  9342: not edx  /*manual*/
  9343: rol bx ,0xaa  /*manual*/
  9344: bswap edx  /*manual*/
  9345: cdqe   /*manual*/
  9346: dec r9  /*manual*/
  9347: sbb edx ,r9d  /*manual*/
  9348: shl dword ptr [rsp+rax*4+0x2] ,0x19  /*manual*/
  9349: adc word ptr [rsp+rax*1+0x1] ,0x8144  /*manual*/
  9350: qword ptr [rsp+rax*2] = rbp
  9351: sar r8 ,0x29  /*manual*/
  9352: dword ptr [rsp+rax*1] ^= edx
  9353: shr r8b ,0xe6  /*manual*/
  9354: movsx ebp ,bx  /*manual*/
  9355: pop rbp  /*manual*/
  9356: bx -= 0xd39b
  9357: xchg bx ,si  /*manual*/
  9358: movsxd rdx ,edx  /*manual*/
  9359: lea r9 ,ptr [rax*2-0x1ac47a2a]  /*manual*/
  9360: and rax ,rsi  /*manual*/
  9361: dec r9b  /*manual*/
  9362: adc r11 ,rdx  /*manual*/
  9363: push rbx  /*manual*/
  9364: rax ^= qword ptr [rax+r10*1+0x8]
  9365: movzx edx ,bx  /*manual*/
  9366: dl += byte ptr [rdi+rbx*1-0x5cdffffb]
  9367: push r8  /*manual*/
  9368: rol r9b ,0x1  /*manual*/
  9369: dl ^= bpl
  9370: dec ebx  /*manual*/
  9371: neg dl  /*manual*/
  9372: rol dl ,0x1  /*manual*/
  9373: ror rbx ,0x99  /*manual*/
  9374: jnb 0x5d8dcd690e64  /*manual*/
  9375: inc dl  /*manual*/
  9376: neg dl  /*manual*/
  9377: xadd bx ,si  /*manual*/
  9378: pop r8  /*manual*/
  9379: lea r8 ,ptr [rsi+rbx*8+0x7cb1eaa7]  /*manual*/
  9380: adc dl ,0xf9  /*manual*/
  9381: xadd byte ptr [rsp+r9*1+0x1ac47a5c] ,r8b  /*manual*/
  9382: bpl ^= dl
  9383: lea rdx ,ptr [rsp+rdx*1+0x8]  /*manual*/
  9384: ror r9 ,0xa0  /*manual*/
  9385: qword ptr [rdx] = rax
  9386: jb 0x5d8dcd577203  /*manual*/
  9387: lea rdx ,ptr [rbx+rsi*2+0x6143e41]  /*manual*/
  9388: rdx = qword ptr [r10+0x10]
  9389: rol r8b ,0x42  /*manual*/
  9390: setb byte ptr [rsp+0x1]  /*manual*/
  9391: sbb word ptr [rsp+0x4] ,0x6809  /*manual*/
  9392: adc r10 ,0x17  /*manual*/
  9393: xadd r9b ,bl  /*manual*/
  9394: movzx ebx ,byte ptr [rdi+0x6]  /*manual*/
  9395: inc r9w  /*manual*/
  9396: rol byte ptr [rsp+0x3] ,0x43  /*manual*/
  9397: xadd r9b ,r8b  /*manual*/
  9398: adc rdi ,0x7  /*manual*/
  9399: bl ^= bpl
  9400: dec bl  /*manual*/
  9401: rol bl ,0x1  /*manual*/
  9402: movzx ecx ,r8w  /*manual*/
  9403: qword ptr [rsp+rcx*4-0x1473c] = r8
  9404: bl -= 0x2d
  9405: xadd dword ptr [rsp+rcx*1-0x51cb] ,r9d  /*manual*/
  9406: shl rcx ,cl  /*manual*/
  9407: neg bl  /*manual*/
  9408: rol bl ,0x1  /*manual*/
  9409: shl r9d ,0x3e  /*manual*/
  9410: adc bl ,0x23  /*manual*/
  9411: dec si  /*manual*/
  9412: bpl ^= bl
  9413: rol ecx ,0xea  /*manual*/
  9414: lea rbx ,ptr [rsp+rbx*1+0x8]  /*manual*/
  9415: shl cx ,cl  /*manual*/
  9416: rol sil ,0x25  /*manual*/
  9417: qword ptr [rsp+r9*1] -= 0x3a34dbd5
  9418: qword ptr [rbx+r9*2] = rdx
  9419: movzx ebx ,r8w  /*manual*/
  9420: edx = ebx
  9421: qword ptr [rsp+r9*1] = r11
  9422: return
  9423: ebx = 0xf0a28d09
  9424: lea rsi ,ptr [rbx+rbx*2-0x49712f8a]  /*manual*/
  9425: rbx = qword ptr [r10]
  9426: r8d = esi
  9427: movsx eax ,r8w  /*manual*/
  9428: ror r8w ,0xae  /*manual*/
  9429: lea r10 ,ptr [r10+rax*1-0x7789]  /*manual*/
  9430: movsx edx ,r8b  /*manual*/
  9431: lea rcx ,ptr [rdx*8+0x19beef6f]  /*manual*/
  9432: neg r8d  /*manual*/
  9433: movzx ecx ,byte ptr [r8+rdi*1-0x778921bb]  /*manual*/
  9434: sar r8d ,0x33  /*manual*/
  9435: movzx r9d ,al  /*manual*/
  9436: neg edx  /*manual*/
  9437: lea rdi ,ptr [rdi+r8*2-0x1de1]  /*manual*/
  9438: and dl ,0x3f  /*manual*/
  9439: cl ^= bpl
  9440: ror cl ,0x1  /*manual*/
  9441: dec r9d  /*manual*/
  9442: cl -= 0x78
  9443: data16 cwd  /*manual*/
  9444: r9 ^= 0x3e8683e3
  9445: xchg r9w ,ax  /*manual*/
  9446: neg cl  /*manual*/
  9447: cl ^= 0xf9
  9448: xadd r9w ,ax  /*manual*/
  9449: xchg edx ,r9d  /*manual*/
  9450: bpl ^= cl
  9451: bts r9d ,eax  /*manual*/
  9452: shr r8 ,0x27  /*manual*/
  9453: sbb r8d ,r9d  /*manual*/
  9454: rcx += rsp
  9455: btc r8 ,r9  /*manual*/
  9456: qword ptr [rcx+r8*4-0x40004] = rbx
  9457: cqo   /*manual*/
  9458: eax = dword ptr [rdi+rax*2-0xef22]
  9459: dx -= si
  9460: jnle 0x5d8dcd6ab5b5  /*manual*/
  9461: r8b -= 0x1c
  9462: lea rdi ,ptr [r8+rdi*1-0x100e1]  /*manual*/
  9463: push r8  /*manual*/
  9464: movsx ecx ,byte ptr [rsp+r8*2-0x201c6]  /*manual*/
  9465: eax ^= ebp
  9466: push rsi  /*manual*/
  9467: xadd qword ptr [rsp+r8*2-0x201c2] ,rsi  /*manual*/
  9468: bswap eax  /*manual*/
  9469: shl sil ,0x24  /*manual*/
  9470: not eax  /*manual*/
  9471: jnbe 0x5d8dcd621099  /*manual*/
  9472: bswap eax  /*manual*/
  9473: and qword ptr [rsp+rsi*2-0x20098] ,r8  /*manual*/
  9474: shl r9b ,0x61  /*manual*/
  9475: movzx ebx ,word ptr [rsp+rsi*2-0x20095]  /*manual*/
  9476: inc eax  /*manual*/
  9477: shl ebx ,0xcb  /*manual*/
  9478: dec r8  /*manual*/
  9479: jo 0x5d8dcd57040b  /*manual*/
  9480: qword ptr [rsp+rsi*2-0x20098] = rbp
  9481: xchg rcx ,r8  /*manual*/
  9482: jnz 0x5d8dcd602d14  /*manual*/
  9483: dword ptr [rsp+rsi*1-0x10048] ^= eax
  9484: rbp = qword ptr [rsp+rsi*1-0x10048]
  9485: r9b ^= bl
  9486: qword ptr [rsp+rsi*4-0x40138] = rsi
  9487: inc word ptr [rsp+rsi*8-0x80278]  /*manual*/
  9488: movsxd rax ,eax  /*manual*/
  9489: adc r11 ,rax  /*manual*/
  9490: lea rax ,ptr [r9+0x65ad8773]  /*manual*/
  9491: push r9  /*manual*/
  9492: qword ptr [rsp+rsi*2-0x200a0] = r11
  9493: return
  9494: eax = 0xb7a8f414
  9495: movzx r9d ,ax  /*manual*/
  9496: rbx = qword ptr [r10+r9*1-0xf414]
  9497: movzx esi ,al  /*manual*/
  9498: cwde   /*manual*/
  9499: dec ax  /*manual*/
  9500: r9w = word ptr [rdi+r9*4-0x3d050]
  9501: movsx r8d ,al  /*manual*/
  9502: r9w ^= bp
  9503: lea rdx ,ptr [rsi*8-0x14ef1ebb]  /*manual*/
  9504: not r8b  /*manual*/
  9505: movzx ecx ,r8w  /*manual*/
  9506: rol r9w ,0x1  /*manual*/
  9507: bts rsi ,0xb7  /*manual*/
  9508: dec r9w  /*manual*/
  9509: data16 cwd  /*manual*/
  9510: jmp 0x5d8dcd63bdd5  /*manual*/
  9511: r9w ^= dx
  9512: call 0x5d8dcd52b437
  9513: qword ptr [rsp+r8*1-0xec] = r8
  9514: r9w -= dx
  9515: sar dword ptr [rsp+r8*8-0x75d] ,0xc1  /*manual*/
  9516: bts rcx ,rsi  /*manual*/
  9517: bp ^= r9w
  9518: lea r9 ,ptr [rsp+r9*1+0x8]  /*manual*/
  9519: xadd esi ,r8d  /*manual*/
  9520: qword ptr [rsi+r9*1-0x100] = rbx
  9521: edx = dword ptr [rsi+rdi*1-0xfe]
  9522: jb 0x5d8dcd50497a  /*manual*/
  9523: push rax  /*manual*/
  9524: pop r9  /*manual*/
  9525: edx ^= ebp
  9526: pop rax  /*manual*/
  9527: edx -= 0xac23056b
  9528: and si ,0x29c6  /*manual*/
  9529: adc r8b ,0x3c  /*manual*/
  9530: not edx  /*manual*/
  9531: dec edx  /*manual*/
  9532: btr esi ,eax  /*manual*/
  9533: setnb r8b  /*manual*/
  9534: neg eax  /*manual*/
  9535: neg edx  /*manual*/
  9536: or r8b ,r8b  /*manual*/
  9537: push rbp  /*manual*/
  9538: cmovo r8w ,r9w  /*manual*/
  9539: dword ptr [rsp+rsi*4-0x400] ^= edx
  9540: xadd cx ,r9w  /*manual*/
  9541: and rcx ,0xfffffffff0984c87  /*manual*/
  9542: call 0x5d8dcd59af7f
  9543: rbp = qword ptr [rsp+rsi*2-0x1f8]
  9544: movsxd rdx ,edx  /*manual*/
  9545: qword ptr [rsp+rsi*2-0x1f8] = rax
  9546: and rax ,qword ptr [rsp+rsi*1-0xf8]  /*manual*/
  9547: adc r11 ,rdx  /*manual*/
  9548: r8 = qword ptr [r10+rsi*2-0x1f8]
  9549: and ecx ,ecx  /*manual*/
  9550: lea r10 ,ptr [rsi+r10*1-0xf0]  /*manual*/
  9551: cl -= 0x9c
  9552: qword ptr [rsp+rsi*4-0x400] = 0x5129e3ad
  9553: movzx r9d ,word ptr [rdi+rsi*1-0xfa]  /*manual*/
  9554: xchg dword ptr [rsp+rsi*4-0x3f4] ,esi  /*manual*/
  9555: push rax  /*manual*/
  9556: lea rdi ,ptr [rdi+rsi*2+0x8]  /*manual*/
  9557: qword ptr [rsp+rsi*4+0x9] -= rsi
  9558: call 0x5d8dcd66069d
  9559: r9w ^= bp
  9560: call 0x5d8dcd5b542b
  9561: dec r9w  /*manual*/
  9562: push rax  /*manual*/
  9563: shr word ptr [rsp+rsi*1+0x27] ,0x25  /*manual*/
  9564: not r9w  /*manual*/
  9565: qword ptr [rsp+rsi*2+0x10] = rsi
  9566: rol r9w ,0x1  /*manual*/
  9567: ecx ^= eax
  9568: pop rax  /*manual*/
  9569: call 0x5d8dcd621571
  9570: dec r9w  /*manual*/
  9571: bp ^= r9w
  9572: lea r9 ,ptr [rsp+r9*1+0x30]  /*manual*/
  9573: push rcx  /*manual*/
  9574: pop rdx  /*manual*/
  9575: qword ptr [rsi+r9*1] = r8
  9576: qword ptr [rsp+rsi*1] = r11
  9577: return
  9578: r9d = dword ptr [rdi]
  9579: jmp 0x5d8dcd6b8ba0  /*manual*/
  9580: rdi += 0x4
  9581: eax = 0x4f0d793f
  9582: movsx r8d ,al  /*manual*/
  9583: movzx esi ,al  /*manual*/
  9584: r9d ^= ebp
  9585: ebx = 0xc636e3e1
  9586: lea rbx ,ptr [r8+rbx*8-0x7f6069c3]  /*manual*/
  9587: bswap r9d  /*manual*/
  9588: xadd si ,r8w  /*manual*/
  9589: not r9d  /*manual*/
  9590: bswap r9d  /*manual*/
  9591: movzx edx ,al  /*manual*/
  9592: jl 0x5d8dcd4f44fa  /*manual*/
  9593: inc r9d  /*manual*/
  9594: bswap rsi  /*manual*/
  9595: bl += sil
  9596: push rbp  /*manual*/
  9597: sbb esi ,eax  /*manual*/
  9598: setle bl  /*manual*/
  9599: not dx  /*manual*/
  9600: dword ptr [rsp+r8*4-0xfc] ^= r9d
  9601: bswap rsi  /*manual*/
  9602: btc si ,si  /*manual*/
  9603: pop rbp  /*manual*/
  9604: movsxd r9 ,r9d  /*manual*/
  9605: shl edx ,0x68  /*manual*/
  9606: rol edx ,0xf1  /*manual*/
  9607: r11 += r9
  9608: jmp 0x5d8dcd690f0b  /*manual*/
  9609: rdx = qword ptr [r10+rax*1-0x4f0d793f]
  9610: bts bx ,0x25  /*manual*/
  9611: lea r10 ,ptr [rax+r10*1-0x4f0d7937]  /*manual*/
  9612: ecx = esi
  9613: r8w ^= 0xbf58
  9614: movzx esi ,byte ptr [rax+rdi*1-0x4f0d793f]  /*manual*/
  9615: adc rdi ,rcx  /*manual*/
  9616: xadd ecx ,ebx  /*manual*/
  9617: bts rax ,rax  /*manual*/
  9618: sil ^= bpl
  9619: ror sil ,0x1  /*manual*/
  9620: sar bx ,cl  /*manual*/
  9621: cmovp r8d ,eax  /*manual*/
  9622: adc rcx ,r8  /*manual*/
  9623: sbb sil ,0x78  /*manual*/
  9624: neg sil  /*manual*/
  9625: movzx r9d ,bl  /*manual*/
  9626: dec r9w  /*manual*/
  9627: or al ,r8b  /*manual*/
  9628: sil ^= 0xf9
  9629: btc rcx ,0xe9  /*manual*/
  9630: bpl ^= sil
  9631: inc cx  /*manual*/
  9632: bt cx ,r8w  /*manual*/
  9633: not ecx  /*manual*/
  9634: adc rsi ,rsp  /*manual*/
  9635: qword ptr [rsi+rbx*1] = rdx
  9636: not bx  /*manual*/
  9637: xchg ebx ,r8d  /*manual*/
  9638: jmp r11  /*manual*/
  9639: r8d = 0xfa36b1ad
  9640: movzx r9d ,r8b  /*manual*/
  9641: movzx eax ,r9w  /*manual*/
  9642: esi = dword ptr [rdi+r9*1-0xad]
  9643: bswap r9  /*manual*/
  9644: lea rbx ,ptr [rax+r9*8-0x64c7d04c]  /*manual*/
  9645: xadd bx ,r8w  /*manual*/
  9646: lea rdi ,ptr [rdi+rax*8-0x564]  /*manual*/
  9647: movzx ecx ,r9w  /*manual*/
  9648: esi ^= ebp
  9649: inc esi  /*manual*/
  9650: shl r8w ,0x87  /*manual*/
  9651: ror esi ,0x3  /*manual*/
  9652: xadd r8d ,ecx  /*manual*/
  9653: esi ^= 0xdb188437
  9654: jmp 0x5d8dcd5e45c2  /*manual*/
  9655: bt r9 ,rcx  /*manual*/
  9656: bswap esi  /*manual*/
  9657: r9w -= ax
  9658: rol esi ,0x1  /*manual*/
  9659: lea rdx ,ptr [rcx-0xd608b5]  /*manual*/
  9660: esi ^= 0x178c310b
  9661: dx ^= 0xdf5f
  9662: dec ebx  /*manual*/
  9663: push rbp  /*manual*/
  9664: dword ptr [rsp+rax*4-0x2b4] ^= esi
  9665: xadd al ,ch  /*manual*/
  9666: cdqe   /*manual*/
  9667: xchg cx ,dx  /*manual*/
  9668: pop rbp  /*manual*/
  9669: jp 0x5d8dcd5fcc03  /*manual*/
  9670: cmovnb r8w ,r9w  /*manual*/
  9671: call 0x5d8dcd4f39a3
  9672: movsxd rsi ,esi  /*manual*/
  9673: dec r9w  /*manual*/
  9674: cdq   /*manual*/
  9675: adc r11 ,rsi  /*manual*/
  9676: shr rbx ,0xf6  /*manual*/
  9677: pop r8  /*manual*/
  9678: movzx r8d ,word ptr [rdi+rax*1-0xdd]  /*manual*/
  9679: neg ebx  /*manual*/
  9680: lea rdi ,ptr [rax+rdi*1-0xdb]  /*manual*/
  9681: r8w ^= bp
  9682: r8w ^= 0xcd97
  9683: shr rbx ,0x20  /*manual*/
  9684: adc r8w ,0xcd99  /*manual*/
  9685: btr dx ,cx  /*manual*/
  9686: ror r8w ,0x1  /*manual*/
  9687: inc dl  /*manual*/
  9688: sar cx ,0x28  /*manual*/
  9689: sbb r8w ,bx  /*manual*/
  9690: bx -= r9w
  9691: neg r8w  /*manual*/
  9692: bt rcx ,r9  /*manual*/
  9693: inc eax  /*manual*/
  9694: bt ax ,ax  /*manual*/
  9695: bp ^= r8w
  9696: lea r10 ,ptr [r10+rax*1-0xe6]  /*manual*/
  9697: rax += rcx
  9698: qword ptr [rbx+r10*1-0xae] = r8
  9699: r9d ^= ebx
  9700: jnbe 0x5d8dcd5144bf  /*manual*/
  9701: lea rbx ,ptr [rsp+0x1e8]  /*manual*/
  9702: push 0xffffffff832c199f  /*manual*/
  9703: call 0x5d8dcd4f8dac
  9704: qword ptr [rsp] = 0x7facf1be
  9705: cmp r10 ,rbx  /*manual*/
  9706: jmp 0x5d8dcd622205  /*manual*/
  9707: jmp 0x5d8dcd57a37d  /*manual*/
  9708: lea rsp ,ptr [rsp+0x10]  /*manual*/
  9709: jnbe 0x5d8dcd509723  /*manual*/
  9710: call 0x5d8dcd54ef97
  9711: qword ptr [rsp] = 0x7a3d4f9d
  9712: lea rsp ,ptr [rsp+0x8]  /*manual*/
  9713: jmp r11  /*manual*/
  9714: movzx eax ,byte ptr [rdi]  /*manual*/
  9715: al ^= bpl
  9716: esi = 0xfa1bc50e
  9717: call 0x5d8dcd6d7826
  9718: r8d = esi
  9719: ror al ,0x1  /*manual*/
  9720: neg al  /*manual*/
  9721: qword ptr [rsp] = r8
  9722: al += 0x5c
  9723: neg al  /*manual*/
  9724: btr r8d ,0xbb  /*manual*/
  9725: bpl ^= al
  9726: edx = 0xdaa7a3fa
  9727: call 0x5d8dcd4f6c14
  9728: btc rdx ,rdx  /*manual*/
  9729: lea rax ,ptr [rsp+rax*1+0x10]  /*manual*/
  9730: qword ptr [rsp] = 0xffffffff8ea86ff0
  9731: rsi = qword ptr [rax]
  9732: pop rbx  /*manual*/
  9733: neg dword ptr [rsp+rbx*1+0x71579014]  /*manual*/
  9734: movzx ecx ,r8b  /*manual*/
  9735: qword ptr [r10+rcx*2-0x24] = rsi
  9736: btc edx ,r8d  /*manual*/
  9737: r8d = dword ptr [rbx+rdi*1+0x71579011]
  9738: rcx -= rbx
  9739: rol qword ptr [rsp+rbx*1+0x71579010] ,cl  /*manual*/
  9740: lea rdi ,ptr [rdi+rcx*1-0x71579019]  /*manual*/
  9741: sets cl  /*manual*/
  9742: movzx r9d ,bl  /*manual*/
  9743: r8d ^= ebp
  9744: movzx eax ,dl  /*manual*/
  9745: not r8d  /*manual*/
  9746: bts r9d ,ecx  /*manual*/
  9747: and r9b ,dl  /*manual*/
  9748: lea r8d ,ptr [r8+rbx*1-0x5cafb953]  /*manual*/
  9749: bswap r8d  /*manual*/
  9750: rol r8d ,0x1  /*manual*/
  9751: qword ptr [rsp+rcx*1-0x71579000] = rbp
  9752: dword ptr [rsp+rcx*1-0x71579000] ^= r8d
  9753: or rbx ,rbx  /*manual*/
  9754: pop rbp  /*manual*/
  9755: movsxd r8 ,r8d  /*manual*/
  9756: adc r11 ,r8  /*manual*/
  9757: ror ebx ,0x23  /*manual*/
  9758: not r9w  /*manual*/
  9759: r8 = qword ptr [r10+rbx*4-0x47543800]
  9760: bts rdx ,0x24  /*manual*/
  9761: rbx = qword ptr [r10+rbx*2-0x23aa1bfc]
  9762: adc r8 ,rbx  /*manual*/
  9763: qword ptr [r10+rcx*1-0x71579000] = r8
  9764: movzx esi ,cl  /*manual*/
  9765: data16 cbw  /*manual*/
  9766: rsi += r11
  9767: jmp rsi  /*manual*/
  9768: eax = 0x4a0e9aac
  9769: ebx = dword ptr [rax+rdi*1-0x4a0e9aac]
  9770: movsx ecx ,al  /*manual*/
  9771: shl rcx ,cl  /*manual*/
  9772: movsx r8d ,cx  /*manual*/
  9773: lea rdi ,ptr [rax+rdi*1-0x4a0e9aa8]  /*manual*/
  9774: ebx ^= ebp
  9775: edx = eax
  9776: ebx -= 0xac23056b
  9777: cwde   /*manual*/
  9778: xchg r8d ,eax  /*manual*/
  9779: not ebx  /*manual*/
  9780: dec ebx  /*manual*/
  9781: esi = ecx
  9782: xchg rcx ,r8  /*manual*/
  9783: neg ebx  /*manual*/
  9784: lea r9 ,ptr [rsi+rax*4-0x42c1aafc]  /*manual*/
  9785: push rbp  /*manual*/
  9786: dword ptr [rsp+rax*4] ^= ebx
  9787: pop rbp  /*manual*/
  9788: movsxd rbx ,ebx  /*manual*/
  9789: cdq   /*manual*/
  9790: push r8  /*manual*/
  9791: rol r8d ,cl  /*manual*/
  9792: adc r11 ,rbx  /*manual*/
  9793: sar r8 ,0x2b  /*manual*/
  9794: rcx = qword ptr [r10+rax*1]
  9795: and dword ptr [rsp+rax*2+0x2] ,0xf32ed216  /*manual*/
  9796: lea r10 ,ptr [r10+rax*2+0x8]  /*manual*/
  9797: dec dword ptr [rsp+rax*1+0x1]  /*manual*/
  9798: adc dx ,word ptr [rdi+rax*2]  /*manual*/
  9799: lea rdi ,ptr [rdi+rax*1+0x2]  /*manual*/
  9800: dx ^= bp
  9801: btr eax ,0xd9  /*manual*/
  9802: lea rax ,ptr [r8*2+0x3bb916f8]  /*manual*/
  9803: jnb 0x5d8dcd5857f4  /*manual*/
  9804: not dx  /*manual*/
  9805: rol dx ,0x1  /*manual*/
  9806: neg dx  /*manual*/
  9807: esi ^= r9d
  9808: lea rbx ,ptr [r9*4-0x2f75a144]  /*manual*/
  9809: not rsi  /*manual*/
  9810: ror dx ,0x1  /*manual*/
  9811: bp ^= dx
  9812: push r8  /*manual*/
  9813: pop r9  /*manual*/
  9814: lea rsi ,ptr [r8+r9*1-0xadbf984]  /*manual*/
  9815: lea rdx ,ptr [rsp+rdx*1+0x8]  /*manual*/
  9816: inc r8b  /*manual*/
  9817: sar rsi ,0x2b  /*manual*/
  9818: qword ptr [rax+rdx*1-0x3bb916f8] = rcx
  9819: setnp sil  /*manual*/
  9820: pop r9  /*manual*/
  9821: bts esi ,esi  /*manual*/
  9822: jmp r11  /*manual*/
  9823: eax = 0x550173ee
  9824: lea r9 ,ptr [rax*2-0x686e88d2]  /*manual*/
  9825: jmp 0x5d8dcd6a8736  /*manual*/
  9826: eax = dword ptr [rdi+r9*1-0x41945f0a]
  9827: movsx r8d ,r9b  /*manual*/
  9828: lea rdi ,ptr [rdi+r8*1-0x6]  /*manual*/
  9829: push r8  /*manual*/
  9830: r8b += byte ptr [rsp+r8*1-0x3]
  9831: lea rcx ,ptr [r8+r8*8+0x6135e90a]  /*manual*/
  9832: eax ^= ebp
  9833: ror word ptr [rsp+r8*4-0x26] ,0xec  /*manual*/
  9834: ror byte ptr [rsp+r9*1-0x41945f03] ,cl  /*manual*/
  9835: ror eax ,0x2  /*manual*/
  9836: call 0x5d8dcd51b092
  9837: not eax  /*manual*/
  9838: pop rbx  /*manual*/
  9839: rbx += 0xfffffffffff41a43
  9840: jmp rbx  /*manual*/
  9841: lea eax ,ptr [rax+r9*1-0x632387b4]  /*manual*/
  9842: inc r8  /*manual*/
  9843: ror eax ,0x2  /*manual*/
  9844: not eax  /*manual*/
  9845: dec eax  /*manual*/
  9846: sar byte ptr [rsp+r8*2-0x12] ,cl  /*manual*/
  9847: eax ^= 0x2dbcdff8
  9848: movzx esi ,r9w  /*manual*/
  9849: call 0x5d8dcd6730e5
  9850: movzx edx ,r9w  /*manual*/
  9851: qword ptr [rsp+r8*2-0xe] = rbp
  9852: push rdx  /*manual*/
  9853: push rdx  /*manual*/
  9854: movsx ebp ,cx  /*manual*/
  9855: dword ptr [rsp+r9*1-0x41945ef2] ^= eax
  9856: rbp = qword ptr [rsp+r8*1+0xd]
  9857: dec r9d  /*manual*/
  9858: shl word ptr [rsp+r8*4-0x2a] ,cl  /*manual*/
  9859: movsxd rax ,eax  /*manual*/
  9860: adc r11 ,rax  /*manual*/
  9861: rdx = r10
  9862: lea r10 ,ptr [r10+r9*1-0x41945f11]  /*manual*/
  9863: qword ptr [rsp+r9*1-0x41945ef9] = rcx
  9864: call 0x5d8dcd57acb2
  9865: ror cx ,cl  /*manual*/
  9866: qword ptr [r10+r8*2-0x16] = rdx
  9867: movsx eax ,sil  /*manual*/
  9868: r8d -= 0xc095d2f0
  9869: pop r8  /*manual*/
  9870: pop rsi  /*manual*/
  9871: pop r8  /*manual*/
  9872: pop rcx  /*manual*/
  9873: pop rsi  /*manual*/
  9874: jnle 0x5d8dcd5144bf  /*manual*/
  9875: lea rbx ,ptr [rsp+0x1e8]  /*manual*/
  9876: push 0xffffffff832c199f  /*manual*/
  9877: call 0x5d8dcd4f8dac
  9878: qword ptr [rsp] = 0x7facf1be
  9879: cmp r10 ,rbx  /*manual*/
  9880: jmp 0x5d8dcd622205  /*manual*/
  9881: jmp 0x5d8dcd57a37d  /*manual*/
  9882: lea rsp ,ptr [rsp+0x10]  /*manual*/
  9883: jnbe 0x5d8dcd509723  /*manual*/
  9884: call 0x5d8dcd54ef97
  9885: qword ptr [rsp] = 0x7a3d4f9d
  9886: lea rsp ,ptr [rsp+0x8]  /*manual*/
  9887: jmp r11  /*manual*/
  9888: rsi = qword ptr [r10]
  9889: edx = 0x7613ea21
  9890: lea r10 ,ptr [rdx+r10*1-0x7613ea19]  /*manual*/
  9891: r8d = edx
  9892: movzx edx ,word ptr [rdi+r8*1-0x7613ea21]  /*manual*/
  9893: dx ^= bp
  9894: not dx  /*manual*/
  9895: neg dx  /*manual*/
  9896: movzx r9d ,r8b  /*manual*/
  9897: rol dx ,0x1  /*manual*/
  9898: movzx ecx ,r9w  /*manual*/
  9899: inc dx  /*manual*/
  9900: r9d ^= ecx
  9901: movzx ebx ,r9b  /*manual*/
  9902: movsx eax ,r8w  /*manual*/
  9903: not dx  /*manual*/
  9904: neg r9  /*manual*/
  9905: inc dx  /*manual*/
  9906: btr rcx ,rcx  /*manual*/
  9907: call 0x5d8dcd58499b
  9908: bp ^= dx
  9909: push r9  /*manual*/
  9910: xchg qword ptr [rsp+0x8] ,rax  /*manual*/
  9911: rax += 0xffffffffffef6301
  9912: jmp rax  /*manual*/
  9913: ebx ^= dword ptr [rsp+r9*2+0x1]
  9914: lea rdx ,ptr [rsp+rdx*1+0x10]  /*manual*/
  9915: shr dword ptr [rsp+r8*1-0x7613ea1e] ,cl  /*manual*/
  9916: jno 0x5d8dcd6a2c95  /*manual*/
  9917: qword ptr [r8+rdx*1-0x7613ea21] = rsi
  9918: and cx ,0x2f9a  /*manual*/
  9919: inc byte ptr [rsp+r8*1-0x7613ea20]  /*manual*/
  9920: esi = dword ptr [rdi+r9*1+0x2]
  9921: call 0x5d8dcd5614c9
  9922: not r8  /*manual*/
  9923: bts bx ,cx  /*manual*/
  9924: esi ^= ebp
  9925: pop rdx  /*manual*/
  9926: bswap esi  /*manual*/
  9927: sar bx ,0xaf  /*manual*/
  9928: lea rdx ,ptr [r9+rbx*4-0x6472abac]  /*manual*/
  9929: pop r9  /*manual*/
  9930: not esi  /*manual*/
  9931: eax = r8d
  9932: pop rax  /*manual*/
  9933: neg esi  /*manual*/
  9934: xadd cl ,ah  /*manual*/
  9935: jnbe 0x5d8dcd6b0ad0  /*manual*/
  9936: not r9d  /*manual*/
  9937: esi ^= 0x42a97d79
  9938: not r8w  /*manual*/
  9939: btr bx ,0x7b  /*manual*/
  9940: push rbp  /*manual*/
  9941: dword ptr [rsp+rcx*1-0xea] ^= esi
  9942: data16 cbw  /*manual*/
  9943: btr r9 ,0xa  /*manual*/
  9944: pop rbp  /*manual*/
  9945: dx -= 0xe5a6
  9946: movsxd rsi ,esi  /*manual*/
  9947: r11 += rsi
  9948: lea rsi ,ptr [rdx*4-0x1dda8042]  /*manual*/
  9949: shr cx ,0xc4  /*manual*/
  9950: lea rcx ,ptr [rsp+rcx*4+0xd8]  /*manual*/
  9951: r9b ^= sil
  9952: setz bl  /*manual*/
  9953: rbx += qword ptr [rbx+rcx*1]
  9954: xadd rdx ,r9  /*manual*/
  9955: rdx = rbx
  9956: movzx ecx ,word ptr [rdi+r9*1+0x64729158]  /*manual*/
  9957: sbb r8 ,0xffffffffd5b7b4de  /*manual*/
  9958: cdqe   /*manual*/
  9959: neg r9w  /*manual*/
  9960: lea rdi ,ptr [rdi+r8*1+0x4bcacac6]  /*manual*/
  9961: lea rsi ,ptr [rsi-0x527135b8]  /*manual*/
  9962: r9d ^= r9d
  9963: cx ^= bp
  9964: ror r9 ,0x8e  /*manual*/
  9965: call 0x5d8dcd5b258e
  9966: qword ptr [rsp+r8*1+0x4bcacabe] = r9
  9967: ror cx ,0x1  /*manual*/
  9968: sar dword ptr [rsp+r9*2+0x3] ,0x1  /*manual*/
  9969: jnbe 0x5d8dcd61fe17  /*manual*/
  9970: inc cx  /*manual*/
  9971: movzx ebx ,word ptr [rsp+r8*1+0x4bcacabe]  /*manual*/
  9972: neg cx  /*manual*/
  9973: lea rbx ,ptr [r8+0x588e28c]  /*manual*/
  9974: ror eax ,0x64  /*manual*/
  9975: pop rsi  /*manual*/
  9976: rol cx ,0x1  /*manual*/
  9977: neg r8d  /*manual*/
  9978: sbb cx ,r9w  /*manual*/
  9979: not rax  /*manual*/
  9980: bp ^= cx
  9981: rcx += rsp
  9982: push rbx  /*manual*/
  9983: lea rax ,ptr [rbx*4+0x5c01f17c]  /*manual*/
  9984: qword ptr [rcx+r9*1] = rdx
  9985: xadd byte ptr [rsp+r9*4] ,al  /*manual*/
  9986: movzx edx ,al  /*manual*/
  9987: qword ptr [rsp+r8*1-0x4bcacabe] = r11
  9988: return
  9989: esi = 0x8c1dcd99
  9990: movzx r8d ,si  /*manual*/
  9991: lea rax ,ptr [rsp+r8*1-0xcd91]  /*manual*/
  9992: lea rcx ,ptr [rsi*2+0x521920a9]  /*manual*/
  9993: rdx = qword ptr [rax+r8*4-0x33664]
  9994: push rsi  /*manual*/
  9995: rol sil ,0x21  /*manual*/
  9996: lea r9 ,ptr [rcx*8+0x70a1078c]  /*manual*/
  9997: qword ptr [r10+r8*8-0x66cd0] = rdx
  9998: call 0x5d8dcd51bddc
  9999: qword ptr [rsp+r8*1-0xcd99] = r9
 10000: movzx eax ,cx  /*manual*/
 10001: r9d = dword ptr [rdi+r8*4-0x33664]
 10002: shl word ptr [rsp+r8*1-0xcd92] ,0x4  /*manual*/
 10003: r9d ^= ebp
 10004: not eax  /*manual*/
 10005: shr cx ,0x86  /*manual*/
 10006: sbb r9d ,0xac23056b  /*manual*/
 10007: shr r8 ,cl  /*manual*/
 10008: not r9d  /*manual*/
 10009: dec r9d  /*manual*/
 10010: ror rcx ,0x5a  /*manual*/
 10011: movsx edx ,r8b  /*manual*/
 10012: lea rsi ,ptr [rcx+0x7d96ac47]  /*manual*/
 10013: neg r9d  /*manual*/
 10014: ror word ptr [rsp+r8*8] ,0xa1  /*manual*/
 10015: btr esi ,0x39  /*manual*/
 10016: qword ptr [rsp+rsi*1-0x7d96ac9a] -= rax
 10017: qword ptr [rsp+rsi*1-0x7d96ac99] = rbp
 10018: cdq   /*manual*/
 10019: dword ptr [rsp+rsi*1-0x7d96ac99] ^= r9d
 10020: rbp = qword ptr [rsp+rsi*1-0x7d96ac99]
 10021: sar edx ,cl  /*manual*/
 10022: movsxd r9 ,r9d  /*manual*/
 10023: r11 += r9
 10024: qword ptr [rsp+r8*2+0x8] = rsi
 10025: btr ax ,0x7e  /*manual*/
 10026: rax = qword ptr [r8+r10*1-0x8]
 10027: shl r8w ,0xee  /*manual*/
 10028: shl edx ,cl  /*manual*/
 10029: movzx ebx ,word ptr [rsi+rdi*1-0x7d96ac9d]  /*manual*/
 10030: pop rsi  /*manual*/
 10031: shl edx ,0x8b  /*manual*/
 10032: lea rdi ,ptr [rdi+r8*1+0x6]  /*manual*/
 10033: bx ^= bp
 10034: not bx  /*manual*/
 10035: lea rdx ,ptr [rsi*4+0x35816ecd]  /*manual*/
 10036: shr word ptr [rsp+r8*4+0x3] ,0x22  /*manual*/
 10037: pop rdx  /*manual*/
 10038: rol bx ,0x1  /*manual*/
 10039: xadd cx ,dx  /*manual*/
 10040: jno 0x5d8dcd6eb368  /*manual*/
 10041: neg bx  /*manual*/
 10042: neg r8  /*manual*/
 10043: ror bx ,0x1  /*manual*/
 10044: r9d = 0x9b372426
 10045: call 0x5d8dcd619f58
 10046: bp ^= bx
 10047: pop rsi  /*manual*/
 10048: rsi += 0xffffffffffe3261e
 10049: jmp rsi  /*manual*/
 10050: dec ecx  /*manual*/
 10051: movzx esi ,cl  /*manual*/
 10052: rbx += rsp
 10053: qword ptr [rbx+r8*1] = rax
 10054: or r8 ,r11  /*manual*/
 10055: jmp r8  /*manual*/
 10056: movzx eax ,byte ptr [rdi]  /*manual*/
 10057: al ^= bpl
 10058: neg al  /*manual*/
 10059: ebx = 0x9b07ac2c
 10060: lea r9 ,ptr [rbx+rbx*8+0x43adbf0c]  /*manual*/
 10061: movzx r8d ,r9w  /*manual*/
 10062: rol al ,0x1  /*manual*/
 10063: dec al  /*manual*/
 10064: movsx ecx ,r9b  /*manual*/
 10065: ror al ,0x1  /*manual*/
 10066: al ^= 0x4c
 10067: movzx esi ,bx  /*manual*/
 10068: call 0x5d8dcd6decec
 10069: bpl ^= al
 10070: pop rsi  /*manual*/
 10071: movzx edx ,r8w  /*manual*/
 10072: call 0x5d8dcd5759eb
 10073: lea rax ,ptr [rsp+rax*1+0x8]  /*manual*/
 10074: qword ptr [rsp+r8*1-0xcc98] = 0x18950208
 10075: rbx = qword ptr [rax+r8*4-0x33260]
 10076: btc r9 ,0x21  /*manual*/
 10077: r9 = rbx
 10078: dx = word ptr [r8+rdi*1-0xcc97]
 10079: rol r8d ,cl  /*manual*/
 10080: pop rcx  /*manual*/
 10081: dx ^= bp
 10082: lea rax ,ptr [r8*4-0xfd87044]  /*manual*/
 10083: rol r8b ,0x41  /*manual*/
 10084: btc ecx ,eax  /*manual*/
 10085: not dx  /*manual*/
 10086: neg r8b  /*manual*/
 10087: shl cx ,0xe8  /*manual*/
 10088: rol dx ,0x1  /*manual*/
 10089: ror ax ,0x62  /*manual*/
 10090: sar cl ,0xa7  /*manual*/
 10091: neg dx  /*manual*/
 10092: ebx = 0xe184ec77
 10093: ror dx ,0x1  /*manual*/
 10094: r8b += 0xad
 10095: shl r8b ,0x61  /*manual*/
 10096: esi = 0x4832bd66
 10097: bp ^= dx
 10098: xadd r8 ,rax  /*manual*/
 10099: adc rdx ,rsp  /*manual*/
 10100: shr bx ,0x83  /*manual*/
 10101: inc r8d  /*manual*/
 10102: jo 0x5d8dcd5cf9be  /*manual*/
 10103: qword ptr [rsi+rdx*1-0x4832bd66] = r9
 10104: xchg rsi ,rcx  /*manual*/
 10105: movzx edx ,sil  /*manual*/
 10106: movzx eax ,byte ptr [rdi+rcx*1-0x4832bd63]  /*manual*/
 10107: movsx r9d ,r8w  /*manual*/
 10108: al ^= bpl
 10109: shr ebx ,0x35  /*manual*/
 10110: r9w -= dx
 10111: or sil ,0x1d  /*manual*/
 10112: dec al  /*manual*/
 10113: sar bl ,cl  /*manual*/
 10114: not r8d  /*manual*/
 10115: ror ebx ,cl  /*manual*/
 10116: rol al ,0x1  /*manual*/
 10117: jmp 0x5d8dcd5f3ea1  /*manual*/
 10118: or rsi ,r9  /*manual*/
 10119: sbb al ,cl  /*manual*/
 10120: esi ^= ecx
 10121: ror al ,0x1  /*manual*/
 10122: ror esi ,0x2f  /*manual*/
 10123: neg dx  /*manual*/
 10124: sar bx ,0xaf  /*manual*/
 10125: dec al  /*manual*/
 10126: rbx -= 0x7196dc9f
 10127: ror al ,0x1  /*manual*/
 10128: bpl ^= al
 10129: call 0x5d8dcd531846
 10130: ror r8d ,cl  /*manual*/
 10131: lea rax ,ptr [rsp+rax*1+0x8]  /*manual*/
 10132: xchg esi ,edx  /*manual*/
 10133: rdx = qword ptr [rsi+rax*1]
 10134: qword ptr [r10+rcx*1-0x4832bd6e] = rdx
 10135: xadd ecx ,r8d  /*manual*/
 10136: lea r10 ,ptr [r10+r8*1-0x4832bd6e]  /*manual*/
 10137: ror cl ,0xc5  /*manual*/
 10138: push rcx  /*manual*/
 10139: ebx = dword ptr [rdi+r9*4-0x938c]
 10140: lea rdi ,ptr [rdi+rsi*1+0x8]  /*manual*/
 10141: movsx edx ,r9b  /*manual*/
 10142: ebx ^= ebp
 10143: not ebx  /*manual*/
 10144: ebx -= 0xce074963
 10145: rol byte ptr [rsp+rsi*1+0x1] ,0x6  /*manual*/
 10146: shl r8 ,cl  /*manual*/
 10147: bswap ebx  /*manual*/
 10148: push r8  /*manual*/
 10149: push r8  /*manual*/
 10150: inc rcx  /*manual*/
 10151: rol ebx ,0x1  /*manual*/
 10152: pop rcx  /*manual*/
 10153: qword ptr [rsp+rsi*1+0x10] = rbp
 10154: movzx eax ,sil  /*manual*/
 10155: xchg dx ,si  /*manual*/
 10156: dword ptr [rsp+rsi*2-0x1ffb8] ^= ebx
 10157: call 0x5d8dcd5405df
 10158: rbp = qword ptr [rsp+rsi*2-0x1ffb0]
 10159: movsxd rbx ,ebx  /*manual*/
 10160: xadd cx ,si  /*manual*/
 10161: neg ecx  /*manual*/
 10162: r11 += rbx
 10163: shr sil ,0xa1  /*manual*/
 10164: push r8  /*manual*/
 10165: and rdx ,qword ptr [rsp+rsi*2]  /*manual*/
 10166: pop rcx  /*manual*/
 10167: pop rax  /*manual*/
 10168: pop r9  /*manual*/
 10169: pop rax  /*manual*/
 10170: pop rax  /*manual*/
 10171: jp 0x5d8dcd5144bf  /*manual*/
 10172: lea rbx ,ptr [rsp+0x1e8]  /*manual*/
 10173: push 0xffffffff832c199f  /*manual*/
 10174: call 0x5d8dcd4f8dac
 10175: qword ptr [rsp] = 0x7facf1be
 10176: cmp r10 ,rbx  /*manual*/
 10177: jmp 0x5d8dcd622205  /*manual*/
 10178: jmp 0x5d8dcd57a37d  /*manual*/
 10179: lea rsp ,ptr [rsp+0x10]  /*manual*/
 10180: jnbe 0x5d8dcd509723  /*manual*/
 10181: call 0x5d8dcd54ef97
 10182: qword ptr [rsp] = 0x7a3d4f9d
 10183: lea rsp ,ptr [rsp+0x8]  /*manual*/
 10184: jmp r11  /*manual*/
 10185: ecx = 0xdb3f328f
 10186: movsx r8d ,cx  /*manual*/
 10187: rcx -= r8
 10188: rsi = qword ptr [r10+r8*8-0x19478]
 10189: movzx r9d ,r8w  /*manual*/
 10190: lea r9 ,ptr [rsp+r8*1-0x313f]  /*manual*/
 10191: qword ptr [r9+r8*2-0x651e] = rsi
 10192: movzx edx ,r8w  /*manual*/
 10193: lea rsi ,ptr [rdx+rcx*1+0x319d9b]  /*manual*/
 10194: rcx = qword ptr [rdx+rdi*1-0x328f]
 10195: ebx = r8d
 10196: movzx eax ,bx  /*manual*/
 10197: rcx ^= rbp
 10198: cdqe   /*manual*/
 10199: lea rcx ,ptr [r8+rcx*1-0x6d560b2e]  /*manual*/
 10200: cdq   /*manual*/
 10201: bt esi ,edx  /*manual*/
 10202: bswap rcx  /*manual*/
 10203: movsx r9d ,bl  /*manual*/
 10204: call 0x5d8dcd60fcc5
 10205: pop rbx  /*manual*/
 10206: ror rcx ,0x6  /*manual*/
 10207: ror si ,0xc3  /*manual*/
 10208: rol r8w ,0x1  /*manual*/
 10209: dec rcx  /*manual*/
 10210: not rcx  /*manual*/
 10211: or r9b ,r8b  /*manual*/
 10212: inc si  /*manual*/
 10213: sbb r8 ,rax  /*manual*/
 10214: rbp ^= rcx
 10215: not r8w  /*manual*/
 10216: qword ptr [r10+r8*1-0xcd70] = rcx
 10217: ecx = dword ptr [rdi+r8*2-0x19ad8]
 10218: ecx ^= ebp
 10219: bswap ecx  /*manual*/
 10220: not ecx  /*manual*/
 10221: jmp 0x5d8dcd68e7ac  /*manual*/
 10222: dec ecx  /*manual*/
 10223: ebx = eax
 10224: bswap ecx  /*manual*/
 10225: bswap ebx  /*manual*/
 10226: not ecx  /*manual*/
 10227: ax += 0x1ed5
 10228: push rbp  /*manual*/
 10229: call 0x5d8dcd69c446
 10230: qword ptr [rsp+r8*1-0xcd70] = r8
 10231: dword ptr [rsp+r8*2-0x19ad8] ^= ecx
 10232: ebp = dword ptr [rsp+r8*1-0xcd6e]
 10233: shl dword ptr [rsp+r8*1-0xcd6c] ,0xa  /*manual*/
 10234: rbp = qword ptr [rsp+r8*1-0xcd68]
 10235: movsxd rcx ,ecx  /*manual*/
 10236: neg dx  /*manual*/
 10237: inc r8w  /*manual*/
 10238: adc r11 ,rcx  /*manual*/
 10239: movzx r9d ,byte ptr [rdi+rdx*1+0xc]  /*manual*/
 10240: r8 += rax
 10241: lea rcx ,ptr [r8*8+0x7b994354]  /*manual*/
 10242: lea rdi ,ptr [rdi+r8*8-0x8f69b]  /*manual*/
 10243: setnbe sil  /*manual*/
 10244: cqo   /*manual*/
 10245: push rdx  /*manual*/
 10246: r9b ^= bpl
 10247: pop rax  /*manual*/
 10248: r9b += sil
 10249: rol r9b ,0x1  /*manual*/
 10250: sar esi ,cl  /*manual*/
 10251: qword ptr [rsp+r8*2-0x23da2] = 0xd23af71
 10252: call 0x5d8dcd55be03
 10253: sbb r9b ,dl  /*manual*/
 10254: not cx  /*manual*/
 10255: r8d -= 0x75302350
 10256: ror r9b ,0x1  /*manual*/
 10257: rol dword ptr [rsp+rdx*1+0x12] ,cl  /*manual*/
 10258: inc edx  /*manual*/
 10259: lea rbx ,ptr [rax-0x3078a740]  /*manual*/
 10260: bpl ^= r9b
 10261: lea r9 ,ptr [rsp+r9*1+0x18]  /*manual*/
 10262: r8 = qword ptr [r9+rdx*4-0x4]
 10263: not rsi  /*manual*/
 10264: qword ptr [r10+rax*2-0x8] = r8
 10265: sar rcx ,0x53  /*manual*/
 10266: bx += ax
 10267: lea r10 ,ptr [rdx+r10*1-0x9]  /*manual*/
 10268: rol rax ,cl  /*manual*/
 10269: pop rdx  /*manual*/
 10270: pop rcx  /*manual*/
 10271: pop rcx  /*manual*/
 10272: jnb 0x5d8dcd5144bf  /*manual*/
 10273: lea rbx ,ptr [rsp+0x1e8]  /*manual*/
 10274: push 0xffffffff832c199f  /*manual*/
 10275: call 0x5d8dcd4f8dac
 10276: qword ptr [rsp] = 0x7facf1be
 10277: cmp r10 ,rbx  /*manual*/
 10278: jmp 0x5d8dcd622205  /*manual*/
 10279: jmp 0x5d8dcd57a37d  /*manual*/
 10280: lea rsp ,ptr [rsp+0x10]  /*manual*/
 10281: jnbe 0x5d8dcd509723  /*manual*/
 10282: call 0x5d8dcd54ef97
 10283: qword ptr [rsp] = 0x7a3d4f9d
 10284: lea rsp ,ptr [rsp+0x8]  /*manual*/
 10285: jmp r11  /*manual*/
 10286: eax = 0xa71aa45b
 10287: jmp 0x5d8dcd5a8d6e  /*manual*/
 10288: edx = eax
 10289: rbx = qword ptr [r10]
 10290: r8d = 0x9f2557f1
 10291: lea rcx ,ptr [r8+rax*8-0x24ef1ca6]  /*manual*/
 10292: r9 = qword ptr [r10+0x8]
 10293: lea rdx ,ptr [rcx+rdx*1+0x322b6cdc]  /*manual*/
 10294: bts r8 ,0x4f  /*manual*/
 10295: jnb 0x5d8dcd66e9c3  /*manual*/
 10296: adc rbx ,r9  /*manual*/
 10297: call 0x5d8dcd68a165
 10298: qword ptr [r10+0x8] = rbx
 10299: eax ^= 0x2224d1ba
 10300: ecx = dword ptr [rdi]
 10301: movsx ebx ,ax  /*manual*/
 10302: qword ptr [rsp+rbx*4-0x1d784] = rax
 10303: ecx ^= ebp
 10304: byte ptr [rsp+rbx*1-0x75dc] ^= 0x98
 10305: cwde   /*manual*/
 10306: not ecx  /*manual*/
 10307: sbb ecx ,0xce074963  /*manual*/
 10308: bswap ecx  /*manual*/
 10309: rol ecx ,0x1  /*manual*/
 10310: movsx esi ,byte ptr [rsp+rbx*2-0xebc2]  /*manual*/
 10311: qword ptr [rsp+rax*1-0x75e1] = rbp
 10312: jmp 0x5d8dcd619b87  /*manual*/
 10313: dword ptr [rsp+rax*1-0x75e1] ^= ecx
 10314: bt eax ,eax  /*manual*/
 10315: pop rbp  /*manual*/
 10316: lea rsi ,ptr [rsi+rdx*8-0x2c750b00]  /*manual*/
 10317: call 0x5d8dcd6d7e91
 10318: qword ptr [rsp+rax*1-0x75e1] = 0x62230c8b
 10319: movsxd rcx ,ecx  /*manual*/
 10320: adc r11 ,rcx  /*manual*/
 10321: movzx r8d ,byte ptr [rdi+rax*1-0x75dd]  /*manual*/
 10322: cdqe   /*manual*/
 10323: lea rdi ,ptr [rdi+rax*1-0x75dc]  /*manual*/
 10324: and si ,dx  /*manual*/
 10325: movsx ecx ,bl  /*manual*/
 10326: r8b ^= bpl
 10327: ror dword ptr [rsp+rax*4-0x1d783] ,0xd6  /*manual*/
 10328: and sil ,dl  /*manual*/
 10329: push rcx  /*manual*/
 10330: inc r8b  /*manual*/
 10331: shl rbx ,cl  /*manual*/
 10332: sil -= dl
 10333: r8b ^= 0xf2
 10334: movzx r9d ,bl  /*manual*/
 10335: bt r9d ,eax  /*manual*/
 10336: neg r8b  /*manual*/
 10337: shl bx ,0x6a  /*manual*/
 10338: inc r8b  /*manual*/
 10339: cqo   /*manual*/
 10340: btc rcx ,rax  /*manual*/
 10341: ror r8b ,cl  /*manual*/
 10342: ax -= 0xf2a
 10343: bpl ^= r8b
 10344: pop rcx  /*manual*/
 10345: push rax  /*manual*/
 10346: lea r8 ,ptr [rsp+r8*1+0x10]  /*manual*/
 10347: btr edx ,eax  /*manual*/
 10348: neg dword ptr [rsp+rax*1-0x66b3]  /*manual*/
 10349: rsi = qword ptr [r8+rax*8-0x335b8]
 10350: lea r8 ,ptr [r9*2-0x79c1ec9a]  /*manual*/
 10351: sbb dx ,word ptr [rsp+rax*1-0x66b7]  /*manual*/
 10352: setno r9b  /*manual*/
 10353: qword ptr [r10+rax*2-0xcd6e] = rsi
 10354: qword ptr [rsp+rax*4-0x19adc] = r11
 10355: return
 10356: eax = 0x72212673
 10357: movzx ebx ,ax  /*manual*/
 10358: lea rsi ,ptr [rbx*4-0x2fd7fcda]  /*manual*/
 10359: ebx = dword ptr [rax+rdi*1-0x72212673]
 10360: cdq   /*manual*/
 10361: shl edx ,0xf4  /*manual*/
 10362: setnz dl  /*manual*/
 10363: ebx ^= ebp
 10364: bswap ebx  /*manual*/
 10365: movzx ecx ,dl  /*manual*/
 10366: push rcx  /*manual*/
 10367: movzx r8d ,sil  /*manual*/
 10368: not ebx  /*manual*/
 10369: neg si  /*manual*/
 10370: xadd qword ptr [rsp+rsi*1+0x2fd79cf2] ,rsi  /*manual*/
 10371: dword ptr [rsp+rax*1-0x7221266f] ^= 0x48230785
 10372: neg ebx  /*manual*/
 10373: btc rdx ,rcx  /*manual*/
 10374: and rdx ,r8  /*manual*/
 10375: ecx += esi
 10376: ebx ^= 0x42a97d79
 10377: data16 cwd  /*manual*/
 10378: rol rcx ,0xbe  /*manual*/
 10379: qword ptr [rsp+rsi*4] = rbp
 10380: not ecx  /*manual*/
 10381: jnb 0x5d8dcd5662f6  /*manual*/
 10382: bt rax ,0x5d  /*manual*/
 10383: dword ptr [rsp+rsi*4] ^= ebx
 10384: pop rbp  /*manual*/
 10385: r9d = esi
 10386: neg r8d  /*manual*/
 10387: movsxd rbx ,ebx  /*manual*/
 10388: r11 += rbx
 10389: xchg r9w ,ax  /*manual*/
 10390: shr rdx ,cl  /*manual*/
 10391: r9w = word ptr [rax+rdi*1-0x7220fffc]
 10392: movzx ebx ,cx  /*manual*/
 10393: push rbx  /*manual*/
 10394: r9w ^= bp
 10395: sar word ptr [rsp+rsi*1] ,0x43  /*manual*/
 10396: shl ax ,0xcd  /*manual*/
 10397: and qword ptr [rsp+rax*1-0x72210000] ,0xffffffffafb84d50  /*manual*/
 10398: ror r9w ,0x1  /*manual*/
 10399: shr byte ptr [rsp+rax*1-0x7220fffc] ,0xe5  /*manual*/
 10400: neg r9w  /*manual*/
 10401: jmp 0x5d8dcd5ee899  /*manual*/
 10402: pop rcx  /*manual*/
 10403: jmp 0x5d8dcd5252f6  /*manual*/
 10404: r9w -= 0x831c
 10405: and r8w ,0xb75c  /*manual*/
 10406: rol ebx ,0x21  /*manual*/
 10407: neg r9w  /*manual*/
 10408: push rbx  /*manual*/
 10409: sar qword ptr [rsp+rax*1-0x72210000] ,0xc4  /*manual*/
 10410: rol r9w ,0x1  /*manual*/
 10411: or word ptr [rsp+rax*1-0x7220fffe] ,0x7a4e  /*manual*/
 10412: bp ^= r9w
 10413: ror bl ,0x25  /*manual*/
 10414: lea r9 ,ptr [rsp+r9*1+0x8]  /*manual*/
 10415: or rax ,rax  /*manual*/
 10416: xchg r8w ,dx  /*manual*/
 10417: neg cl  /*manual*/
 10418: rax = qword ptr [rsi+r9*1]
 10419: qword ptr [rsi+r10*1-0x8] = rax
 10420: inc word ptr [rsp+rsi*1+0x5]  /*manual*/
 10421: movzx ebx ,word ptr [rdi+rsi*2+0x6]  /*manual*/
 10422: adc qword ptr [rsp+rsi*1] ,rsi  /*manual*/
 10423: movzx r9d ,word ptr [rsp+rsi*1+0x3]  /*manual*/
 10424: eax = 0x632df1c
 10425: bx ^= bp
 10426: xchg dl ,r9b  /*manual*/
 10427: or sil ,0xff  /*manual*/
 10428: shl word ptr [rsp+rsi*1-0xfe] ,0x6d  /*manual*/
 10429: bx ^= 0x150f
 10430: dec bx  /*manual*/
 10431: inc byte ptr [rsp+rsi*1-0xf8]  /*manual*/
 10432: btr r9 ,rcx  /*manual*/
 10433: bt ax ,si  /*manual*/
 10434: ror bx ,0x1  /*manual*/
 10435: word ptr [rsp+rsi*2-0x1fe] = dx
 10436: not word ptr [rsp+rsi*1-0xf9]  /*manual*/
 10437: bx += 0x10f2
 10438: shr r9b ,0x44  /*manual*/
 10439: neg rax  /*manual*/
 10440: bx ^= 0xfb45
 10441: bp ^= bx
 10442: lea rbx ,ptr [rsp+rbx*1+0x8]  /*manual*/
 10443: rcx = qword ptr [rbx+rsi*2-0x1fe]
 10444: qword ptr [rsi+r10*1-0x10f] = rcx
 10445: neg r9d  /*manual*/
 10446: movzx r8d ,byte ptr [rdi+rsi*4-0x3f4]  /*manual*/
 10447: movsx ecx ,r9w  /*manual*/
 10448: not r9  /*manual*/
 10449: lea rdi ,ptr [rdi+rsi*1-0xf6]  /*manual*/
 10450: ebx = ecx
 10451: btr ecx ,0x4c  /*manual*/
 10452: data16 cwd  /*manual*/
 10453: r8b ^= bpl
 10454: ror r8b ,0x1  /*manual*/
 10455: btc ecx ,ecx  /*manual*/
 10456: adc r8b ,0x37  /*manual*/
 10457: xchg cx ,ax  /*manual*/
 10458: neg r8b  /*manual*/
 10459: call 0x5d8dcd625b6e
 10460: push rcx  /*manual*/
 10461: dec r9b  /*manual*/
 10462: r8b ^= 0xb4
 10463: shl r9d ,0x2c  /*manual*/
 10464: ror r9d ,cl  /*manual*/
 10465: data16 cwd  /*manual*/
 10466: bpl ^= r8b
 10467: ror r9d ,cl  /*manual*/
 10468: lea r8 ,ptr [rsp+r8*1+0x18]  /*manual*/
 10469: rcx = qword ptr [r8+rsi*1-0xff]
 10470: cwde   /*manual*/
 10471: data16 cbw  /*manual*/
 10472: qword ptr [r10+rsi*1-0x117] = rcx
 10473: lea r10 ,ptr [r10+rsi*2-0x216]  /*manual*/
 10474: shl dword ptr [rsp+rsi*1-0xee] ,0x8e  /*manual*/
 10475: rol byte ptr [rsp+rsi*4-0x3fc] ,0x44  /*manual*/
 10476: pop rsi  /*manual*/
 10477: pop r9  /*manual*/
 10478: pop rcx  /*manual*/
 10479: jnz 0x5d8dcd5144bf  /*manual*/
 10480: lea rbx ,ptr [rsp+0x1e8]  /*manual*/
 10481: push 0xffffffff832c199f  /*manual*/
 10482: call 0x5d8dcd4f8dac
 10483: qword ptr [rsp] = 0x7facf1be
 10484: cmp r10 ,rbx  /*manual*/
 10485: jmp 0x5d8dcd622205  /*manual*/
 10486: jmp 0x5d8dcd57a37d  /*manual*/
 10487: lea rsp ,ptr [rsp+0x10]  /*manual*/
 10488: jnbe 0x5d8dcd509723  /*manual*/
 10489: call 0x5d8dcd54ef97
 10490: qword ptr [rsp] = 0x7a3d4f9d
 10491: lea rsp ,ptr [rsp+0x8]  /*manual*/
 10492: jmp r11  /*manual*/
 10493: call 0x5d8dcd56fb8a
 10494: qword ptr [rsp] = 0x3cabc971
 10495: eax = dword ptr [rsp]
 10496: movzx r8d ,byte ptr [rdi+rax*2-0x795792e2]  /*manual*/
 10497: movsx edx ,ax  /*manual*/
 10498: cqo   /*manual*/
 10499: and qword ptr [rsp+rdx*1] ,0x7a18c41e  /*manual*/
 10500: lea rdi ,ptr [rdi+rdx*1+0x1]  /*manual*/
 10501: shl qword ptr [rsp+rax*2-0x795792e2] ,0xba  /*manual*/
 10502: shr word ptr [rsp+rax*1-0x3cabc96e] ,0x48  /*manual*/
 10503: btr dx ,dx  /*manual*/
 10504: r8b ^= bpl
 10505: ror r8b ,0x1  /*manual*/
 10506: shl word ptr [rsp+rax*2-0x795792de] ,0x64  /*manual*/
 10507: adc r8b ,0x37  /*manual*/
 10508: movsx ecx ,al  /*manual*/
 10509: dec dx  /*manual*/
 10510: neg r8b  /*manual*/
 10511: ror edx ,0xd6  /*manual*/
 10512: shr cx ,0x8f  /*manual*/
 10513: xchg rcx ,rdx  /*manual*/
 10514: r8b ^= 0xb4
 10515: dx += ax
 10516: bts rdx ,0x48  /*manual*/
 10517: data16 cwd  /*manual*/
 10518: bpl ^= r8b
 10519: ebx = edx
 10520: cqo   /*manual*/
 10521: lea r8 ,ptr [rsp+r8*1+0x8]  /*manual*/
 10522: lea r9 ,ptr [rdx+rax*8+0x8af3572]  /*manual*/
 10523: rol r9b ,0x41  /*manual*/
 10524: rbx = qword ptr [r8+rax*2-0x795792e2]
 10525: jo 0x5d8dcd53b07d  /*manual*/
 10526: sbb byte ptr [rsp+rax*1-0x3cabc96c] ,0x23  /*manual*/
 10527: lea r10 ,ptr [r10+rax*2-0x795792ea]  /*manual*/
 10528: jbe 0x5d8dcd5ca533  /*manual*/
 10529: movsx r8d ,word ptr [rsp+rax*1-0x3cabc971]  /*manual*/
 10530: rol dword ptr [rsp+rcx*4-0xfffeffd] ,0x6d  /*manual*/
 10531: qword ptr [rax+r10*1-0x3cabc971] = rbx
 10532: edx += dword ptr [rax+rdi*1-0x3cabc971]
 10533: rol r8 ,0xe3  /*manual*/
 10534: lea rdi ,ptr [rdi+rax*1-0x3cabc96d]  /*manual*/
 10535: shl byte ptr [rsp+rcx*2-0x7fff7fa] ,0x83  /*manual*/
 10536: qword ptr [rsp+rax*1-0x3cabc971] += 0xffffffffe6802c88
 10537: movsx ebx ,word ptr [rsp+rax*1-0x3cabc970]  /*manual*/
 10538: edx ^= ebp
 10539: xchg dword ptr [rsp+rcx*4-0xffff000] ,eax  /*manual*/
 10540: not edx  /*manual*/
 10541: cwde   /*manual*/
 10542: edx -= 0xce074963
 10543: bswap edx  /*manual*/
 10544: rol edx ,0x1  /*manual*/
 10545: qword ptr [rsp+rax*1-0x2c88] = rbp
 10546: ror ecx ,0x9e  /*manual*/
 10547: esi = 0xbaab9d89
 10548: dword ptr [rsp+r8*8] ^= edx
 10549: pop rbp  /*manual*/
 10550: call 0x5d8dcd60553c
 10551: movsxd rdx ,edx  /*manual*/
 10552: xadd bl ,r8b  /*manual*/
 10553: call 0x5d8dcd4fb63f
 10554: qword ptr [rsp+rax*1-0x2c88] = rbx
 10555: adc r11 ,rdx  /*manual*/
 10556: call 0x5d8dcd670628
 10557: call 0x5d8dcd5bb41b
 10558: call 0x5d8dcd5afc8f
 10559: pop rdx  /*manual*/
 10560: pop rdx  /*manual*/
 10561: pop rax  /*manual*/
 10562: pop rbx  /*manual*/
 10563: pop rsi  /*manual*/
 10564: jmp 0x5d8dcd5144bf  /*manual*/
 10565: lea rbx ,ptr [rsp+0x1e8]  /*manual*/
 10566: push 0xffffffff832c199f  /*manual*/
 10567: call 0x5d8dcd4f8dac
 10568: qword ptr [rsp] = 0x7facf1be
 10569: cmp r10 ,rbx  /*manual*/
 10570: jmp 0x5d8dcd622205  /*manual*/
 10571: jmp 0x5d8dcd57a37d  /*manual*/
 10572: lea rsp ,ptr [rsp+0x10]  /*manual*/
 10573: jnbe 0x5d8dcd509723  /*manual*/
 10574: call 0x5d8dcd54ef97
 10575: qword ptr [rsp] = 0x7a3d4f9d
 10576: lea rsp ,ptr [rsp+0x8]  /*manual*/
 10577: jmp r11  /*manual*/
 10578: call 0x5d8dcd575756
 10579: eax = 0xad8a7116
 10580: qword ptr [rsp] = 0x1d0ad15a
 10581: r8d = dword ptr [rdi]
 10582: shl qword ptr [rsp] ,0x44  /*manual*/
 10583: ecx = eax
 10584: adc rdi ,0x4  /*manual*/
 10585: xadd dword ptr [rsp] ,ecx  /*manual*/
 10586: lea rcx ,ptr [rcx*2-0x1e6decec]  /*manual*/
 10587: r8d ^= ebp
 10588: xadd word ptr [rsp+0x6] ,cx  /*manual*/
 10589: not r8d  /*manual*/
 10590: movzx esi ,cx  /*manual*/
 10591: and eax ,dword ptr [rsp+rsi*1+0x4]  /*manual*/
 10592: sbb r8d ,0xce074963  /*manual*/
 10593: shr byte ptr [rsp+rax*1-0x2c000000] ,0xc5  /*manual*/
 10594: movsx edx ,cl  /*manual*/
 10595: jns 0x5d8dcd63f4fe  /*manual*/
 10596: bswap r8d  /*manual*/
 10597: ror byte ptr [rsp+rax*1-0x2bffffff] ,0xa1  /*manual*/
 10598: adc qword ptr [rsp+rax*2-0x58000000] ,rsi  /*manual*/
 10599: rol r8d ,0x1  /*manual*/
 10600: qword ptr [rsp+rax*1-0x2c000000] = rbp
 10601: r9d = ecx
 10602: movzx ebx ,ax  /*manual*/
 10603: dec rdx  /*manual*/
 10604: dword ptr [rsp+rax*1-0x2c000000] ^= r8d
 10605: and bl ,0xd  /*manual*/
 10606: pop rbp  /*manual*/
 10607: movsxd r8 ,r8d  /*manual*/
 10608: jz 0x5d8dcd520313  /*manual*/
 10609: shr cx ,0xcb  /*manual*/
 10610: adc r11 ,r8  /*manual*/
 10611: btc rax ,rax  /*manual*/
 10612: sil ^= byte ptr [rdi+rax*1-0x2c000001]
 10613: bts rax ,rcx  /*manual*/
 10614: r9 ^= 0xe081dd2
 10615: movzx r8d ,ax  /*manual*/
 10616: adc rdi ,r8  /*manual*/
 10617: sil ^= bpl
 10618: ror sil ,0x1  /*manual*/
 10619: and eax ,r9d  /*manual*/
 10620: adc sil ,0x37  /*manual*/
 10621: and r9w ,r8w  /*manual*/
 10622: bts rax ,0xf0  /*manual*/
 10623: neg sil  /*manual*/
 10624: sil ^= 0xb4
 10625: bpl ^= sil
 10626: sar r9 ,0x56  /*manual*/
 10627: push rcx  /*manual*/
 10628: lea rsi ,ptr [rsp+rsi*1+0x8]  /*manual*/
 10629: ror qword ptr [rsp+rdx*1+0x1] ,0x62  /*manual*/
 10630: r9 = qword ptr [rsi+rdx*1+0x1]
 10631: inc byte ptr [rsp+rdx*2+0x5]  /*manual*/
 10632: lea r10 ,ptr [rdx+r10*1-0x7]  /*manual*/
 10633: inc cl  /*manual*/
 10634: pop rcx  /*manual*/
 10635: lea rsi ,ptr [rax+0x6bb5112]  /*manual*/
 10636: qword ptr [r10+rdx*4+0x4] = r9
 10637: lea r9 ,ptr [rsi*4+0x30dddef]  /*manual*/
 10638: bts esi ,ebx  /*manual*/
 10639: jnb 0x5d8dcd5144bf  /*manual*/
 10640: lea rbx ,ptr [rsp+0x1e8]  /*manual*/
 10641: push 0xffffffff832c199f  /*manual*/
 10642: call 0x5d8dcd4f8dac
 10643: qword ptr [rsp] = 0x7facf1be
 10644: cmp r10 ,rbx  /*manual*/
 10645: jmp 0x5d8dcd622205  /*manual*/
 10646: jmp 0x5d8dcd57a37d  /*manual*/
 10647: lea rsp ,ptr [rsp+0x10]  /*manual*/
 10648: jnbe 0x5d8dcd509723  /*manual*/
 10649: call 0x5d8dcd54ef97
 10650: qword ptr [rsp] = 0x7a3d4f9d
 10651: lea rsp ,ptr [rsp+0x8]  /*manual*/
 10652: jmp r11  /*manual*/
 10653: push 0x151a8917  /*manual*/
 10654: lea rax ,ptr [rsp+0x80]  /*manual*/
 10655: jmp 0x5d8dcd63e76a  /*manual*/
 10656: call 0x5d8dcd558155
 10657: r9 = qword ptr [rax]
 10658: ecx = 0xee14ef39
 10659: sar qword ptr [rsp+0x8] ,cl  /*manual*/
 10660: qword ptr [r10-0x8] = r9
 10661: movzx ebx ,byte ptr [rsp+0xc]  /*manual*/
 10662: lea r9 ,ptr [rcx*8-0x156fc6a9]  /*manual*/
 10663: rol rcx ,0xde  /*manual*/
 10664: eax = dword ptr [rbx+rdi*1]
 10665: or r9b ,cl  /*manual*/
 10666: qword ptr [rsp+rbx*1] = 0x28839d90
 10667: eax ^= ebp
 10668: movzx r8d ,r9b  /*manual*/
 10669: not eax  /*manual*/
 10670: movzx esi ,r9b  /*manual*/
 10671: pop rcx  /*manual*/
 10672: eax -= 0xce074963
 10673: neg qword ptr [rsp+rcx*2-0x51073b20]  /*manual*/
 10674: call 0x5d8dcd66dfc6
 10675: movsx edx ,r9b  /*manual*/
 10676: bswap eax  /*manual*/
 10677: rol eax ,0x1  /*manual*/
 10678: qword ptr [rsp+rcx*1-0x28839d88] ^= rbp
 10679: qword ptr [rsp+rcx*1-0x28839d90] = 0x6c343baa
 10680: dword ptr [rsp+rcx*1-0x28839d88] ^= eax
 10681: byte ptr [rsp+rcx*1-0x28839d8e] += r8b
 10682: adc dl ,0x3c  /*manual*/
 10683: setb r8b  /*manual*/
 10684: rbp = qword ptr [rsp+rcx*1-0x28839d88]
 10685: ror dl ,0xa1  /*manual*/
 10686: jns 0x5d8dcd5d103c  /*manual*/
 10687: or ecx ,0xa42b1a90  /*manual*/
 10688: movsxd rax ,eax  /*manual*/
 10689: rol cl ,0x64  /*manual*/
 10690: shl byte ptr [rsp+rbx*8+0x2] ,0xa2  /*manual*/
 10691: r11 += rax
 10692: bl ^= byte ptr [rdi+rbx*1+0x4]
 10693: jmp 0x5d8dcd5a232a  /*manual*/
 10694: xadd r9b ,r8b  /*manual*/
 10695: or esi ,esi  /*manual*/
 10696: lea rdi ,ptr [r8+rdi*1-0x1a]  /*manual*/
 10697: movzx eax ,si  /*manual*/
 10698: cx ^= si
 10699: sar dword ptr [rsp+r8*1-0x1e] ,cl  /*manual*/
 10700: bl ^= bpl
 10701: dec byte ptr [rsp+r8*1-0x1d]  /*manual*/
 10702: push r9  /*manual*/
 10703: ror bl ,0x1  /*manual*/
 10704: rol r9d ,0x7f  /*manual*/
 10705: inc cx  /*manual*/
 10706: adc bl ,0x36  /*manual*/
 10707: pop r8  /*manual*/
 10708: neg bl  /*manual*/
 10709: bl ^= 0xb4
 10710: call 0x5d8dcd55a8c7
 10711: cdq   /*manual*/
 10712: rol ecx ,0x8d  /*manual*/
 10713: bpl ^= bl
 10714: r9 += rax
 10715: data16 cwd  /*manual*/
 10716: adc edx ,0x9cbac3b2  /*manual*/
 10717: lea rbx ,ptr [rsp+rbx*1+0x18]  /*manual*/
 10718: pop rdx  /*manual*/
 10719: adc rdx ,0xaf962  /*manual*/
 10720: jmp rdx  /*manual*/
 10721: and r8w ,word ptr [rsp+rcx*1-0x73e2f595]  /*manual*/
 10722: neg r9b  /*manual*/
 10723: r8 = qword ptr [rcx+rbx*1-0x73e2f595]
 10724: cdq   /*manual*/
 10725: data16 cwd  /*manual*/
 10726: qword ptr [r10+rsi*4-0x8c] = r8
 10727: rcx -= rcx
 10728: lea r10 ,ptr [rcx+r10*1-0x10]  /*manual*/
 10729: jnz 0x5d8dcd6c05db  /*manual*/
 10730: pop rbx  /*manual*/
 10731: pop rsi  /*manual*/
 10732: jnb 0x5d8dcd5144bf  /*manual*/
 10733: lea rbx ,ptr [rsp+0x1e8]  /*manual*/
 10734: push 0xffffffff832c199f  /*manual*/
 10735: call 0x5d8dcd4f8dac
 10736: qword ptr [rsp] = 0x7facf1be
 10737: cmp r10 ,rbx  /*manual*/
 10738: jmp 0x5d8dcd622205  /*manual*/
 10739: jmp 0x5d8dcd57a37d  /*manual*/
 10740: lea rsp ,ptr [rsp+0x10]  /*manual*/
 10741: jnbe 0x5d8dcd509723  /*manual*/
 10742: call 0x5d8dcd54ef97
 10743: qword ptr [rsp] = 0x7a3d4f9d
 10744: lea rsp ,ptr [rsp+0x8]  /*manual*/
 10745: jmp r11  /*manual*/
 10746: ecx = 0x5350528
 10747: eax = dword ptr [rdi+rcx*2-0xa6a0a50]
 10748: movsx ebx ,cx  /*manual*/
 10749: movsx r8d ,bl  /*manual*/
 10750: bl ^= cl
 10751: eax ^= ebp
 10752: not eax  /*manual*/
 10753: movzx esi ,cl  /*manual*/
 10754: r8 ^= rsi
 10755: movsx r9d ,r8w  /*manual*/
 10756: sbb eax ,0xce074963  /*manual*/
 10757: r9 ^= r9
 10758: lea rdx ,ptr [rbx*4-0x51f8abd4]  /*manual*/
 10759: push rbx  /*manual*/
 10760: bswap eax  /*manual*/
 10761: shl dword ptr [rsp+rbx*2-0x9ff] ,0xa4  /*manual*/
 10762: xchg dx ,bx  /*manual*/
 10763: rol eax ,0x1  /*manual*/
 10764: qword ptr [rsp+rcx*4-0x14d414a0] = rbp
 10765: dword ptr [rsp+rcx*2-0xa6a0a50] ^= eax
 10766: esi -= ecx
 10767: cx += si
 10768: pop rbp  /*manual*/
 10769: jnbe 0x5d8dcd6878fc  /*manual*/
 10770: sar rcx ,cl  /*manual*/
 10771: movsxd rax ,eax  /*manual*/
 10772: rol r9b ,0x6  /*manual*/
 10773: sbb dl ,0x64  /*manual*/
 10774: rol r9 ,0x4c  /*manual*/
 10775: adc r11 ,rax  /*manual*/
 10776: lea r9 ,ptr [r9+r9*1+0x3d996a3f]  /*manual*/
 10777: inc r8d  /*manual*/
 10778: movzx eax ,byte ptr [rcx+rdi*1+0x4]  /*manual*/
 10779: jnle 0x5d8dcd571967  /*manual*/
 10780: shl r8d ,0x15  /*manual*/
 10781: bswap r9  /*manual*/
 10782: al ^= bpl
 10783: inc si  /*manual*/
 10784: r9w ^= bx
 10785: rdx ^= r9
 10786: ror al ,0x1  /*manual*/
 10787: rol bl ,0x42  /*manual*/
 10788: call 0x5d8dcd55bc0c
 10789: shr bx ,0xa9  /*manual*/
 10790: adc al ,0x37  /*manual*/
 10791: bswap edx  /*manual*/
 10792: neg al  /*manual*/
 10793: not r9b  /*manual*/
 10794: qword ptr [rsp+rcx*2] = r8
 10795: jmp 0x5d8dcd614f07  /*manual*/
 10796: al ^= 0xb4
 10797: lea rdx ,ptr [r9+r8*2+0x7114f907]  /*manual*/
 10798: shl bx ,0xc8  /*manual*/
 10799: bpl ^= al
 10800: not r8w  /*manual*/
 10801: lea rax ,ptr [rsp+rax*1+0x8]  /*manual*/
 10802: r9 = qword ptr [rax+rcx*2]
 10803: pop rbx  /*manual*/
 10804: push rdx  /*manual*/
 10805: shl ecx ,0x76  /*manual*/
 10806: qword ptr [r10+rcx*4-0x8] = r9
 10807: movsx eax ,word ptr [rsp+rbx*1-0x1ffffe]  /*manual*/
 10808: rol dword ptr [rsp+rcx*4+0x2] ,0x3d  /*manual*/
 10809: movzx eax ,byte ptr [rdi+rcx*4+0x5]  /*manual*/
 10810: r9d = 0x34aa2212
 10811: lea rdi ,ptr [rdi+rcx*1+0x6]  /*manual*/
 10812: bx -= 0x10de
 10813: al ^= bpl
 10814: shl r9 ,0x9d  /*manual*/
 10815: rol ecx ,0xa6  /*manual*/
 10816: al ^= r8b
 10817: and cx ,word ptr [rsp+rcx*1+0x6]  /*manual*/
 10818: rol al ,0x1  /*manual*/
 10819: al -= 0x86
 10820: or ecx ,ecx  /*manual*/
 10821: shr ebx ,0xe7  /*manual*/
 10822: rol al ,0x1  /*manual*/
 10823: sar bx ,0xef  /*manual*/
 10824: bpl ^= al
 10825: lea rax ,ptr [rsp+rax*1+0x8]  /*manual*/
 10826: shl cl ,0xc6  /*manual*/
 10827: rcx ^= qword ptr [rax+rcx*2]
 10828: jmp 0x5d8dcd676947  /*manual*/
 10829: ror esi ,0x8d  /*manual*/
 10830: xadd r9 ,r8  /*manual*/
 10831: qword ptr [r10+rbx*1-0x10] = rcx
 10832: cmovb si ,word ptr [rsp+rbx*8+0x2]  /*manual*/
 10833: lea rax ,ptr [rbx+rdx*4+0x6ea73144]  /*manual*/
 10834: and edx ,edx  /*manual*/
 10835: lea r10 ,ptr [r10+rbx*1-0x10]  /*manual*/
 10836: movzx ecx ,bx  /*manual*/
 10837: pop r9  /*manual*/
 10838: jnb 0x5d8dcd5144bf  /*manual*/
 10839: lea rbx ,ptr [rsp+0x1e8]  /*manual*/
 10840: push 0xffffffff832c199f  /*manual*/
 10841: call 0x5d8dcd4f8dac
 10842: qword ptr [rsp] = 0x7facf1be
 10843: cmp r10 ,rbx  /*manual*/
 10844: jmp 0x5d8dcd622205  /*manual*/
 10845: jmp 0x5d8dcd57a37d  /*manual*/
 10846: lea rsp ,ptr [rsp+0x10]  /*manual*/
 10847: jnbe 0x5d8dcd509723  /*manual*/
 10848: call 0x5d8dcd54ef97
 10849: qword ptr [rsp] = 0x7a3d4f9d
 10850: lea rsp ,ptr [rsp+0x8]  /*manual*/
 10851: jmp r11  /*manual*/
 10852: ecx = 0x5350528
 10853: eax = dword ptr [rdi+rcx*2-0xa6a0a50]
 10854: movsx ebx ,cx  /*manual*/
 10855: movsx r8d ,bl  /*manual*/
 10856: bl ^= cl
 10857: eax ^= ebp
 10858: not eax  /*manual*/
 10859: movzx esi ,cl  /*manual*/
 10860: r8 ^= rsi
 10861: movsx r9d ,r8w  /*manual*/
 10862: sbb eax ,0xce074963  /*manual*/
 10863: r9 ^= r9
 10864: lea rdx ,ptr [rbx*4-0x51f8abd4]  /*manual*/
 10865: push rbx  /*manual*/
 10866: bswap eax  /*manual*/
 10867: shl dword ptr [rsp+rbx*2-0x9ff] ,0xa4  /*manual*/
 10868: xchg dx ,bx  /*manual*/
 10869: rol eax ,0x1  /*manual*/
 10870: qword ptr [rsp+rcx*4-0x14d414a0] = rbp
 10871: dword ptr [rsp+rcx*2-0xa6a0a50] ^= eax
 10872: esi -= ecx
 10873: cx += si
 10874: pop rbp  /*manual*/
 10875: jnbe 0x5d8dcd6878fc  /*manual*/
 10876: sar rcx ,cl  /*manual*/
 10877: movsxd rax ,eax  /*manual*/
 10878: rol r9b ,0x6  /*manual*/
 10879: sbb dl ,0x64  /*manual*/
 10880: rol r9 ,0x4c  /*manual*/
 10881: adc r11 ,rax  /*manual*/
 10882: lea r9 ,ptr [r9+r9*1+0x3d996a3f]  /*manual*/
 10883: inc r8d  /*manual*/
 10884: movzx eax ,byte ptr [rcx+rdi*1+0x4]  /*manual*/
 10885: jnle 0x5d8dcd571967  /*manual*/
 10886: shl r8d ,0x15  /*manual*/
 10887: bswap r9  /*manual*/
 10888: al ^= bpl
 10889: inc si  /*manual*/
 10890: r9w ^= bx
 10891: rdx ^= r9
 10892: ror al ,0x1  /*manual*/
 10893: rol bl ,0x42  /*manual*/
 10894: call 0x5d8dcd55bc0c
 10895: shr bx ,0xa9  /*manual*/
 10896: adc al ,0x37  /*manual*/
 10897: bswap edx  /*manual*/
 10898: neg al  /*manual*/
 10899: not r9b  /*manual*/
 10900: qword ptr [rsp+rcx*2] = r8
 10901: jmp 0x5d8dcd614f07  /*manual*/
 10902: al ^= 0xb4
 10903: lea rdx ,ptr [r9+r8*2+0x7114f907]  /*manual*/
 10904: shl bx ,0xc8  /*manual*/
 10905: bpl ^= al
 10906: not r8w  /*manual*/
 10907: lea rax ,ptr [rsp+rax*1+0x8]  /*manual*/
 10908: r9 = qword ptr [rax+rcx*2]
 10909: pop rbx  /*manual*/
 10910: push rdx  /*manual*/
 10911: shl ecx ,0x76  /*manual*/
 10912: qword ptr [r10+rcx*4-0x8] = r9
 10913: movsx eax ,word ptr [rsp+rbx*1-0x1ffffe]  /*manual*/
 10914: rol dword ptr [rsp+rcx*4+0x2] ,0x3d  /*manual*/
 10915: movzx eax ,byte ptr [rdi+rcx*4+0x5]  /*manual*/
 10916: r9d = 0x34aa2212
 10917: lea rdi ,ptr [rdi+rcx*1+0x6]  /*manual*/
 10918: bx -= 0x10de
 10919: al ^= bpl
 10920: shl r9 ,0x9d  /*manual*/
 10921: rol ecx ,0xa6  /*manual*/
 10922: al ^= r8b
 10923: and cx ,word ptr [rsp+rcx*1+0x6]  /*manual*/
 10924: rol al ,0x1  /*manual*/
 10925: al -= 0x86
 10926: or ecx ,ecx  /*manual*/
 10927: shr ebx ,0xe7  /*manual*/
 10928: rol al ,0x1  /*manual*/
 10929: sar bx ,0xef  /*manual*/
 10930: bpl ^= al
 10931: lea rax ,ptr [rsp+rax*1+0x8]  /*manual*/
 10932: shl cl ,0xc6  /*manual*/
 10933: rcx ^= qword ptr [rax+rcx*2]
 10934: jmp 0x5d8dcd676947  /*manual*/
 10935: ror esi ,0x8d  /*manual*/
 10936: xadd r9 ,r8  /*manual*/
 10937: qword ptr [r10+rbx*1-0x10] = rcx
 10938: cmovb si ,word ptr [rsp+rbx*8+0x2]  /*manual*/
 10939: lea rax ,ptr [rbx+rdx*4+0x6ea73144]  /*manual*/
 10940: and edx ,edx  /*manual*/
 10941: lea r10 ,ptr [r10+rbx*1-0x10]  /*manual*/
 10942: movzx ecx ,bx  /*manual*/
 10943: pop r9  /*manual*/
 10944: jnb 0x5d8dcd5144bf  /*manual*/
 10945: lea rbx ,ptr [rsp+0x1e8]  /*manual*/
 10946: push 0xffffffff832c199f  /*manual*/
 10947: call 0x5d8dcd4f8dac
 10948: qword ptr [rsp] = 0x7facf1be
 10949: cmp r10 ,rbx  /*manual*/
 10950: jmp 0x5d8dcd622205  /*manual*/
 10951: jmp 0x5d8dcd57a37d  /*manual*/
 10952: lea rsp ,ptr [rsp+0x10]  /*manual*/
 10953: jnbe 0x5d8dcd509723  /*manual*/
 10954: call 0x5d8dcd54ef97
 10955: qword ptr [rsp] = 0x7a3d4f9d
 10956: lea rsp ,ptr [rsp+0x8]  /*manual*/
 10957: jmp r11  /*manual*/
 10958: movzx edx ,word ptr [rdi]  /*manual*/
 10959: r9d = 0x133576f4
 10960: eax = 0x330666f
 10961: shl r9 ,0xcd  /*manual*/
 10962: lea rdi ,ptr [rax+rdi*1-0x330666d]  /*manual*/
 10963: data16 cbw  /*manual*/
 10964: movsx ecx ,ax  /*manual*/
 10965: dx ^= bp
 10966: shl r9 ,cl  /*manual*/
 10967: push rax  /*manual*/
 10968: btc r9d ,ecx  /*manual*/
 10969: sbb dx ,0x79a6  /*manual*/
 10970: data16 cbw  /*manual*/
 10971: dword ptr [rsp+r9*1-0x7fff] = r9d
 10972: rol dx ,0x1  /*manual*/
 10973: ror r9b ,0x3  /*manual*/
 10974: dec rcx  /*manual*/
 10975: call 0x5d8dcd65c579
 10976: dec dx  /*manual*/
 10977: qword ptr [rsp+r9*1-0x8000] = r9
 10978: lea rsi ,ptr [rax*8+0x3496eb75]  /*manual*/
 10979: dx ^= 0x25
 10980: not qword ptr [rsp+r9*1-0x7ffb]  /*manual*/
 10981: inc word ptr [rsp+r9*8-0x3fffc]  /*manual*/
 10982: bp ^= dx
 10983: movzx r8d ,byte ptr [rsp+r9*1-0x7ff5]  /*manual*/
 10984: cwde   /*manual*/
 10985: movzx ebx ,si  /*manual*/
 10986: lea rdx ,ptr [rsp+rdx*1+0x10]  /*manual*/
 10987: shl si ,0x27  /*manual*/
 10988: rol ebx ,0x1a  /*manual*/
 10989: rcx = qword ptr [rax+rdx*1-0x6f]
 10990: sar rbx ,0xf9  /*manual*/
 10991: lea r10 ,ptr [r10+r9*2-0x10008]  /*manual*/
 10992: sbb qword ptr [rsp+r9*8-0x3ffff] ,0xffffffffc416c674  /*manual*/
 10993: jbe 0x5d8dcd6a515c  /*manual*/
 10994: pop r8  /*manual*/
 10995: qword ptr [r10+r9*4-0x20000] = rcx
 10996: ecx = dword ptr [rax+rdi*1-0x6f]
 10997: and esi ,r9d  /*manual*/
 10998: lea rdi ,ptr [rdi+r9*2-0xfffc]  /*manual*/
 10999: lea rax ,ptr [rsi*8+0x380d1296]  /*manual*/
 11000: inc dword ptr [rsp+r9*2-0xfffd]  /*manual*/
 11001: shl eax ,0x7c  /*manual*/
 11002: ecx ^= ebp
 11003: edx = dword ptr [rsp+r9*4-0x20000]
 11004: bswap ecx  /*manual*/
 11005: or word ptr [rsp+rsi*1+0x1] ,0xe97f  /*manual*/
 11006: xchg word ptr [rsp+r9*2-0x10000] ,dx  /*manual*/
 11007: not ecx  /*manual*/
 11008: dec al  /*manual*/
 11009: data16 cwd  /*manual*/
 11010: neg ecx  /*manual*/
 11011: pop r8  /*manual*/
 11012: jmp 0x5d8dcd679ae1  /*manual*/
 11013: shr r8 ,0x89  /*manual*/
 11014: ecx ^= 0x42a97d79
 11015: xchg si ,r8w  /*manual*/
 11016: push rbp  /*manual*/
 11017: call 0x5d8dcd56adc5
 11018: qword ptr [rsp+r9*2-0x10000] = rax
 11019: dword ptr [rsp+r9*4-0x1fff8] ^= ecx
 11020: xadd sil ,dl  /*manual*/
 11021: pop rbp  /*manual*/
 11022: pop rbp  /*manual*/
 11023: or ax ,si  /*manual*/
 11024: movsxd rcx ,ecx  /*manual*/
 11025: adc r11 ,rcx  /*manual*/
 11026: bt eax ,eax  /*manual*/
 11027: jnb 0x5d8dcd5144bf  /*manual*/
 11028: lea rbx ,ptr [rsp+0x1e8]  /*manual*/
 11029: push 0xffffffff832c199f  /*manual*/
 11030: call 0x5d8dcd4f8dac
 11031: qword ptr [rsp] = 0x7facf1be
 11032: cmp r10 ,rbx  /*manual*/
 11033: jmp 0x5d8dcd622205  /*manual*/
 11034: jmp 0x5d8dcd57a37d  /*manual*/
 11035: lea rsp ,ptr [rsp+0x10]  /*manual*/
 11036: jnbe 0x5d8dcd509723  /*manual*/
 11037: call 0x5d8dcd54ef97
 11038: qword ptr [rsp] = 0x7a3d4f9d
 11039: lea rsp ,ptr [rsp+0x8]  /*manual*/
 11040: jmp r11  /*manual*/
 11041: ecx = 0x5350528
 11042: eax = dword ptr [rdi+rcx*2-0xa6a0a50]
 11043: movsx ebx ,cx  /*manual*/
 11044: movsx r8d ,bl  /*manual*/
 11045: bl ^= cl
 11046: eax ^= ebp
 11047: not eax  /*manual*/
 11048: movzx esi ,cl  /*manual*/
 11049: r8 ^= rsi
 11050: movsx r9d ,r8w  /*manual*/
 11051: sbb eax ,0xce074963  /*manual*/
 11052: r9 ^= r9
 11053: lea rdx ,ptr [rbx*4-0x51f8abd4]  /*manual*/
 11054: push rbx  /*manual*/
 11055: bswap eax  /*manual*/
 11056: shl dword ptr [rsp+rbx*2-0x9ff] ,0xa4  /*manual*/
 11057: xchg dx ,bx  /*manual*/
 11058: rol eax ,0x1  /*manual*/
 11059: qword ptr [rsp+rcx*4-0x14d414a0] = rbp
 11060: dword ptr [rsp+rcx*2-0xa6a0a50] ^= eax
 11061: esi -= ecx
 11062: cx += si
 11063: pop rbp  /*manual*/
 11064: jnbe 0x5d8dcd6878fc  /*manual*/
 11065: sar rcx ,cl  /*manual*/
 11066: movsxd rax ,eax  /*manual*/
 11067: rol r9b ,0x6  /*manual*/
 11068: sbb dl ,0x64  /*manual*/
 11069: rol r9 ,0x4c  /*manual*/
 11070: adc r11 ,rax  /*manual*/
 11071: lea r9 ,ptr [r9+r9*1+0x3d996a3f]  /*manual*/
 11072: inc r8d  /*manual*/
 11073: movzx eax ,byte ptr [rcx+rdi*1+0x4]  /*manual*/
 11074: jnle 0x5d8dcd571967  /*manual*/
 11075: shl r8d ,0x15  /*manual*/
 11076: bswap r9  /*manual*/
 11077: al ^= bpl
 11078: inc si  /*manual*/
 11079: r9w ^= bx
 11080: rdx ^= r9
 11081: ror al ,0x1  /*manual*/
 11082: rol bl ,0x42  /*manual*/
 11083: call 0x5d8dcd55bc0c
 11084: shr bx ,0xa9  /*manual*/
 11085: adc al ,0x37  /*manual*/
 11086: bswap edx  /*manual*/
 11087: neg al  /*manual*/
 11088: not r9b  /*manual*/
 11089: qword ptr [rsp+rcx*2] = r8
 11090: jmp 0x5d8dcd614f07  /*manual*/
 11091: al ^= 0xb4
 11092: lea rdx ,ptr [r9+r8*2+0x7114f907]  /*manual*/
 11093: shl bx ,0xc8  /*manual*/
 11094: bpl ^= al
 11095: not r8w  /*manual*/
 11096: lea rax ,ptr [rsp+rax*1+0x8]  /*manual*/
 11097: r9 = qword ptr [rax+rcx*2]
 11098: pop rbx  /*manual*/
 11099: push rdx  /*manual*/
 11100: shl ecx ,0x76  /*manual*/
 11101: qword ptr [r10+rcx*4-0x8] = r9
 11102: movsx eax ,word ptr [rsp+rbx*1-0x1ffffe]  /*manual*/
 11103: rol dword ptr [rsp+rcx*4+0x2] ,0x3d  /*manual*/
 11104: movzx eax ,byte ptr [rdi+rcx*4+0x5]  /*manual*/
 11105: r9d = 0x34aa2212
 11106: lea rdi ,ptr [rdi+rcx*1+0x6]  /*manual*/
 11107: bx -= 0x10de
 11108: al ^= bpl
 11109: shl r9 ,0x9d  /*manual*/
 11110: rol ecx ,0xa6  /*manual*/
 11111: al ^= r8b
 11112: and cx ,word ptr [rsp+rcx*1+0x6]  /*manual*/
 11113: rol al ,0x1  /*manual*/
 11114: al -= 0x86
 11115: or ecx ,ecx  /*manual*/
 11116: shr ebx ,0xe7  /*manual*/
 11117: rol al ,0x1  /*manual*/
 11118: sar bx ,0xef  /*manual*/
 11119: bpl ^= al
 11120: lea rax ,ptr [rsp+rax*1+0x8]  /*manual*/
 11121: shl cl ,0xc6  /*manual*/
 11122: rcx ^= qword ptr [rax+rcx*2]
 11123: jmp 0x5d8dcd676947  /*manual*/
 11124: ror esi ,0x8d  /*manual*/
 11125: xadd r9 ,r8  /*manual*/
 11126: qword ptr [r10+rbx*1-0x10] = rcx
 11127: cmovb si ,word ptr [rsp+rbx*8+0x2]  /*manual*/
 11128: lea rax ,ptr [rbx+rdx*4+0x6ea73144]  /*manual*/
 11129: and edx ,edx  /*manual*/
 11130: lea r10 ,ptr [r10+rbx*1-0x10]  /*manual*/
 11131: movzx ecx ,bx  /*manual*/
 11132: pop r9  /*manual*/
 11133: jnb 0x5d8dcd5144bf  /*manual*/
 11134: lea rbx ,ptr [rsp+0x1e8]  /*manual*/
 11135: push 0xffffffff832c199f  /*manual*/
 11136: call 0x5d8dcd4f8dac
 11137: qword ptr [rsp] = 0x7facf1be
 11138: cmp r10 ,rbx  /*manual*/
 11139: jmp 0x5d8dcd622205  /*manual*/
 11140: jmp 0x5d8dcd57a37d  /*manual*/
 11141: lea rsp ,ptr [rsp+0x10]  /*manual*/
 11142: jnbe 0x5d8dcd509723  /*manual*/
 11143: call 0x5d8dcd54ef97
 11144: qword ptr [rsp] = 0x7a3d4f9d
 11145: lea rsp ,ptr [rsp+0x8]  /*manual*/
 11146: jmp r11  /*manual*/
 11147: r13d = 0x79a9fc7e
 11148: r8d = r13d
 11149: movzx edx ,byte ptr [rdi+r8*1-0x79a9fc7e]  /*manual*/
 11150: movsx r9d ,r8w  /*manual*/
 11151: r15d = r8d
 11152: dl ^= bpl
 11153: movzx esi ,r8b  /*manual*/
 11154: dl += 0x56
 11155: rol dl ,0x1  /*manual*/
 11156: lea rdi ,ptr [r9+rsi*4+0x22cfca2]  /*manual*/
 11157: dl += 0xbd
 11158: lea r11 ,ptr [r9+r15*2-0x1d4d3896]  /*manual*/
 11159: rol dl ,0x1  /*manual*/
 11160: bt edi ,0x7a  /*manual*/
 11161: xchg dil ,sil  /*manual*/
 11162: bpl ^= dl
 11163: movzx r12d ,r11w  /*manual*/
 11164: dec r8  /*manual*/
 11165: rdx += rsp
 11166: ecx = 0xdd0e3ca4
 11167: rbx = qword ptr [r13+rdx*1-0x79a9fc7e]
 11168: or r9d ,r9d  /*manual*/
 11169: qword ptr [r10+r8*1-0x79a9fc85] = rbx
 11170: sbb r12d ,ecx  /*manual*/
 11171: movsx ebx ,cx  /*manual*/
 11172: lea rsp ,ptr [r13+r10*1-0x79a9fc86]  /*manual*/
 11173: popfq   /*manual*/
 11174: lea rdx ,ptr [rcx*2+0x73aeed5]  /*manual*/
 11175: pop rdi  /*manual*/
 11176: bswap r11d  /*manual*/
 11177: pop r8  /*manual*/
 11178: call 0x5d8dcd520c56
 11179: xchg r11 ,rsi  /*manual*/
 11180: lea rcx ,ptr [r13+r15*8+0x27a141e2]  /*manual*/
 11181: rcx = qword ptr [rsp+r11*2-0x28]
 11182: qword ptr [rsp+r13*1-0x79a9fc76] = 0x7dbb345c
 11183: qword ptr [rsp+r11*1-0x18] = r9
 11184: not r13b  /*manual*/
 11185: rsi = qword ptr [rsp+r13*1-0x79a9fc71]
 11186: not r9  /*manual*/
 11187: r10d = ebx
 11188: push r12  /*manual*/
 11189: r15 = qword ptr [rsp+r11*1+0x8]
 11190: r12 = qword ptr [rsp+r13*1-0x79a9fc59]
 11191: call 0x5d8dcd6d7da6
 11192: r10 = qword ptr [rsp+r11*4-0x28]
 11193: r13 = qword ptr [rsp+r11*1+0x28]
 11194: push rdx  /*manual*/
 11195: r9 = qword ptr [rsp+r11*1+0x38]
 11196: r14 = qword ptr [rsp+r11*1+0x40]
 11197: ebp = edx
 11198: xchg qword ptr [rsp+0x8] ,rdx  /*manual*/
 11199: lea rdx ,ptr [rdx+0x47d83]  /*manual*/
 11200: jmp rdx  /*manual*/
 11201: rdx = qword ptr [rsp+r11*1+0x48]
 11202: rbx = qword ptr [rsp+r11*4+0x8]
 11203: lea rax ,ptr [rbp+rbp*2-0x5f0428]  /*manual*/
 11204: call 0x5d8dcd607e48
 11205: not byte ptr [rsp+r11*2-0x14]  /*manual*/
 11206: r11 = qword ptr [rsp+r11*1+0x60]
 11207: cdqe   /*manual*/
 11208: rbp = qword ptr [rsp+rax*1-0x43a733af]
 11209: push rax  /*manual*/
 11210: rax = qword ptr [rsp+rax*1-0x43a7339f]
 11211: jmp 0x5d8dcd6318b3  /*manual*/
 11212: push 0xffffffffeca8f3bb  /*manual*/
 11213: jmp 0x5d8dcd6d32c7  /*manual*/
 11214: lea rsp ,ptr [rsp+0xa0]  /*manual*/
 11215: return
 11216: pxor xmm3 ,xmm2  /*manual*/
