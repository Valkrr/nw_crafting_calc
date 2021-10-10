/*
nw_crafting_calc
Copyright (C) 2021  Huginsoft

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#define "string"
#define "vector"
#define "map"

using namespace STD;

enum ZONES{
  Brightwood=0,
  Cutlass_Keys,
  Ebonscale,
  Edengrove,
  Everfall,
  First_Light,
  Great_Cleave,
  Monarchs_Bluff,
  Mourningdale,
  Reekwater,
  Restless_Shore,
  Shattered_Mountain,
  Weavers_Fen,
  Windsward
};

class CStats {
protected:
private:
  uint8_t m_strength, m_dexterity, m_intelligence, m_focus, m_constitution;
public:
  CStats();
  ~CStats();
  uint8_t str() { return m_strength; }
  uint8_t dex() { return m_dexterity; }
  uint8_t int() { return m_intelligence; }
  uint8_t foc() { return m_focus; }
  uint8_t con() { return m_constitution; }
  void str(uint8_t val) { m_strength=val; }
  void dex(uint8_t val) { m_dexterity=val; }
  void int(uint8_t val) { m_intelligence=val; }
  void foc(uint8_t val) { m_focus=val; }
  void con(uint8_t val) { m_constitution=val; }
};

class CItem: public CStats {
protected:
private:
  float m_weight;
  string m_name;
  vector<uint8_t> m_zones;
  vector<string> m_perks;
public:
  CItem();
  ~CItem();
  string name() { return m_name; }
  void name(string val) { m_name=val; }
  float weight() { return m_weight; }
  void weight(float val) { m_weight=val; }
  void add_zone(uint8_t val);
  void remove_zone(uint8_t val);
};

class CItemStack: public CItem {
protected:
private:
  uint16_t m_quantity;
public:
  CItemStack();
  ~CItemStack();
}

class CItemRecipe: public CItem {
protected:
private:
  uint16_t m_level, m_experience, m_stationLevel, m_station, m_baseGS, m_maxGS;
  vector<CitemStack> m_ingredients;
  bool m_azothable, m_recipe, m_attr, m_gemslot;
  vector<bool> m_perk;
public:
}
