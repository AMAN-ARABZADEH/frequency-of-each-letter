import string

alphabet = string.ascii_uppercase
ciphertext = "PCFHN RJSDJ IXKXP YDCHI DLJDY HYNTJ IGFBD XIFVS HRSDH DLXRH ITMJB JLXJZ FMIJO HHSDJ VXJTT DLXIX GJIVJ ATXYX HYTXP SLPBD HIFIJ DDTXD LXGHC CDHJY HYNTJ IDNSX DLXYT NKVHC THIMS XTBHS HSAHJ IMHCD LXZPK DHIFO XSPNB HCAPB GJIKV MXZPB PSOJY TJSDL XLNGH NIHCC PXTMP SORLP KLBHN SMBKH SDIJM PKDHI FKHHT SXBBH CYJOX DJAHN DDHDI XYJSD LXBKP XSKXH CQNTT PXSDL XXGPS XSDGN BPKHR PDHCG JKJNT JFRLH RIHDX HCWNX XSJSS XDLXY JDLHB HCYJM MFJBI XSMXI XMAFA HNKPK JNTDB DFTXH CDLXA PBLHY HCBHM HIJSM GJSDL XMJBL HCJMH IBJFM PZXBD XMHCW NJKVX IFSJI IJDPZ XYHRX IBHCM PKVXS BJSMD LJKVX IJFZP KDHIX GGJSN XTYXJ VLJNS DPSOY XZXIP TDLHG JBJWN PSJBJ SMMHK DHIBJ KLXZX IXTTD NYYXI JSMDX SSFBH SMJSP XTMXC HXJSD LHSFD IHTTH YXJSM GPBDX IONPU HDJLD JVXHC DLXBX XTXGX SDBJT TDLJD PBCNB PATXG XTDDL XGJTT MHRSP SJYPY VPSHI KINKP ATXBX DDLXG DHBPG GXIJS MDJVX HCCDL XBKNG JSMJL XJZFM IJOHH SPBDL XIXBP MNNG"

counter = [0] * 26
for char in ciphertext:
    if char in alphabet:
        num = alphabet.index(char)
        counter[num] += 1

print(counter)
