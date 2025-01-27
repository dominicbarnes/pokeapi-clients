# do not import all endpoints into this module because that uses a lot of memory and stack frames
# if you need the ability to import all endpoints from this module, import them with
# from pokeapiclient.apis.tag_to_api import tag_to_api

import enum


class TagValues(str, enum.Enum):
    ABILITY = "ability"
    BERRY = "berry"
    BERRYFIRMNESS = "berry-firmness"
    BERRYFLAVOR = "berry-flavor"
    CHARACTERISTIC = "characteristic"
    CONTESTEFFECT = "contest-effect"
    CONTESTTYPE = "contest-type"
    EGGGROUP = "egg-group"
    ENCOUNTERCONDITION = "encounter-condition"
    ENCOUNTERCONDITIONVALUE = "encounter-condition-value"
    ENCOUNTERMETHOD = "encounter-method"
    EVOLUTIONCHAIN = "evolution-chain"
    EVOLUTIONTRIGGER = "evolution-trigger"
    GENDER = "gender"
    GENERATION = "generation"
    GROWTHRATE = "growth-rate"
    ITEM = "item"
    ITEMATTRIBUTE = "item-attribute"
    ITEMCATEGORY = "item-category"
    ITEMFLINGEFFECT = "item-fling-effect"
    ITEMPOCKET = "item-pocket"
    LANGUAGE = "language"
    LOCATION = "location"
    LOCATIONAREA = "location-area"
    MACHINE = "machine"
    MOVE = "move"
    MOVEAILMENT = "move-ailment"
    MOVEBATTLESTYLE = "move-battle-style"
    MOVECATEGORY = "move-category"
    MOVEDAMAGECLASS = "move-damage-class"
    MOVELEARNMETHOD = "move-learn-method"
    MOVETARGET = "move-target"
    NATURE = "nature"
    PALPARKAREA = "pal-park-area"
    POKEATHLONSTAT = "pokeathlon-stat"
    POKEDEX = "pokedex"
    POKEMON = "pokemon"
    POKEMONCOLOR = "pokemon-color"
    POKEMONFORM = "pokemon-form"
    POKEMONHABITAT = "pokemon-habitat"
    POKEMONSHAPE = "pokemon-shape"
    POKEMONSPECIES = "pokemon-species"
    REGION = "region"
    STAT = "stat"
    SUPERCONTESTEFFECT = "super-contest-effect"
    TYPE = "type"
    VERSION = "version"
    VERSIONGROUP = "version-group"
