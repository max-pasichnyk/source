

int __fastcall SHRightTurn::addChildren(int a1, int a2, int a3, int a4)
{
  int result; // r0@2

  if ( (*(_DWORD *)(a1 + 28) & 0xFFFFFFFE) == 2 )
    result = j_StrongholdPiece::generateSmallDoorChildRight(a1, a2, a3, a4, 1, 1);
  else
    result = j_StrongholdPiece::generateSmallDoorChildLeft(a1, a2, a3, a4, 1, 1);
  return result;
}


int __fastcall SHRightTurn::SHRightTurn(int a1, int a2, Random *this, int a4, int a5)
{
  int v5; // r5@1
  int v6; // r6@1
  int v7; // r4@1
  unsigned int v8; // r0@1

  v5 = a1;
  v6 = 0;
  v7 = a4;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 32) = a2;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)a1 = &off_2724014;
  *(_DWORD *)(a1 + 28) = a5;
  v8 = j_Random::_genRandInt32(this) % 5;
  if ( v8 <= 3 )
    v6 = dword_2610B1C[v8];
  *(_DWORD *)(v5 + 36) = v6;
  *(_DWORD *)(v5 + 4) = *(_DWORD *)v7;
  *(_DWORD *)(v5 + 8) = *(_DWORD *)(v7 + 4);
  *(_DWORD *)(v5 + 12) = *(_DWORD *)(v7 + 8);
  *(_DWORD *)(v5 + 16) = *(_DWORD *)(v7 + 12);
  *(_DWORD *)(v5 + 20) = *(_DWORD *)(v7 + 16);
  *(_DWORD *)(v5 + 24) = *(_DWORD *)(v7 + 20);
  return v5;
}


signed int __fastcall SHRightTurn::getType(SHRightTurn *this)
{
  return 1397248596;
}


signed int __fastcall SHRightTurn::postProcess(SHRightTurn *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  SHRightTurn *v4; // r6@1
  __int16 *v5; // r9@1
  BlockSource *v6; // r5@1
  int v7; // r2@1
  void (__fastcall *v8)(SHRightTurn *, BlockSource *, __int16 *, signed int); // r12@1
  signed int v9; // r3@2
  BlockSource *v10; // r1@2
  SHRightTurn *v11; // r0@2
  __int16 *v12; // r2@2
  char v14; // [sp+24h] [bp-2Ch]@3
  char v15; // [sp+25h] [bp-2Bh]@3
  char v16; // [sp+28h] [bp-28h]@3
  char v17; // [sp+29h] [bp-27h]@3
  char v18; // [sp+2Ch] [bp-24h]@2
  char v19; // [sp+2Dh] [bp-23h]@2
  char v20; // [sp+30h] [bp-20h]@2
  char v21; // [sp+31h] [bp-1Fh]@2

  v4 = this;
  v5 = (__int16 *)a4;
  v6 = a2;
  j_StructurePiece::generateBox(
    this,
    a2,
    a4,
    0,
    4,
    a3,
    (BlockSelector *)&StrongholdPiece::smoothStoneSelector);
  j_StrongholdPiece::generateSmallDoor(v4, (int)v6, v7, v5, *((_DWORD *)v4 + 9), 1);
  v8 = *(void (__fastcall **)(SHRightTurn *, BlockSource *, __int16 *, signed int))(*(_DWORD *)v4 + 40);
  if ( (*((_DWORD *)v4 + 7) & 0xFFFFFFFE) == 2 )
  {
    v20 = BlockID::AIR;
    v18 = BlockID::AIR;
    v21 = 0;
    v19 = 0;
    v9 = 4;
    v10 = v6;
    v11 = v4;
    v12 = v5;
  }
  else
    v16 = BlockID::AIR;
    v14 = BlockID::AIR;
    v17 = 0;
    v15 = 0;
    v9 = 0;
  v8(v11, v10, v12, v9);
  return 1;
}


int __fastcall SHRightTurn::SHRightTurn(int result)
{
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 28) = 255;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 36) = 0;
  *(_DWORD *)result = &off_2724014;
  return result;
}


int __fastcall SHRightTurn::createPiece(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  Random *v8; // r8@1
  __int64 *v9; // r6@1
  _DWORD *v10; // r4@1
  int result; // r0@1
  _DWORD *v12; // r0@4
  _DWORD *v13; // r6@4
  unsigned int v14; // r0@4
  int v15; // r2@5
  int v16; // r0@7
  int v17; // [sp+1Ch] [bp-34h]@1
  int v18; // [sp+20h] [bp-30h]@1
  int v19; // [sp+24h] [bp-2Ch]@7
  int v20; // [sp+28h] [bp-28h]@7
  int v21; // [sp+2Ch] [bp-24h]@7
  int v22; // [sp+30h] [bp-20h]@7

  v8 = (Random *)a3;
  v9 = (__int64 *)a2;
  v10 = (_DWORD *)a1;
  j_BoundingBox::orientBox((BoundingBox *)&v17, a4, a5, a6, -1, -1, 0, 5, 5, 5, a7);
  result = v18;
  if ( v18 < 11 || (result = j_StructurePiece::findCollisionPiece(v9, (int)&v17)) != 0 )
  {
    *v10 = 0;
  }
  else
    v12 = j_operator new(0x28u);
    v13 = v12;
    v12[5] = 0;
    v12[6] = 0;
    v12[3] = 0;
    v12[4] = 0;
    v12[1] = 0;
    v12[2] = 0;
    v12[8] = a8;
    v12[9] = 0;
    *v12 = &off_2724014;
    v12[7] = a7;
    v14 = j_Random::_genRandInt32(v8) % 5;
    if ( v14 > 3 )
      v15 = 0;
    else
      v15 = dword_2610B1C[v14];
    v16 = v17;
    v13[9] = v15;
    v13[1] = v16;
    v13[2] = v18;
    v13[3] = v19;
    v13[4] = v20;
    v13[5] = v21;
    result = v22;
    v13[6] = v22;
    *v10 = v13;
  return result;
}
