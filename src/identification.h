// Copyright (c) 1981-86 Robert A. Koeneke
// Copyright (c) 1987-94 James E. Wilson
//
// This work is free software released under the GNU General Public License
// version 2.0, and comes with ABSOLUTELY NO WARRANTY.
//
// See LICENSE and AUTHORS for more information.

#pragma once

void identifyGameObject();

void magicInitializeItemNames();
int16_t objectPositionOffset(int category_id, int sub_category_id);
void itemSetAsIdentified(int category_id, int sub_category_id);
bool itemSetColorlessAsIdentified(int category_id, int sub_category_id, int identification);
void spellItemIdentifyAndRemoveRandomInscription(Inventory_t &item);
bool spellItemIdentified(const Inventory_t &item);
void spellItemRemoveIdentification(Inventory_t &item);
void itemIdentificationClearEmpty(Inventory_t &item);
void itemIdentifyAsStoreBought(Inventory_t &item);
void itemSetAsTried(const Inventory_t &item);
void itemIdentify(Inventory_t &item, int &item_id);
void itemRemoveMagicNaming(Inventory_t &item);
void itemDescription(obj_desc_t description, const Inventory_t &item, bool add_prefix);
void itemChargesRemainingDescription(int item_id);
void itemTypeRemainingCountDescription(int item_id);
void itemInscribe();
void itemAppendToInscription(Inventory_t &item, uint8_t item_ident_type);
void itemReplaceInscription(Inventory_t &item, const char *inscription);

void objectBlockedByMonster(int monster_id);