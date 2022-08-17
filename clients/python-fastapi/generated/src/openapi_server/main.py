# coding: utf-8

"""
    

    No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

    The version of the OpenAPI document: 20220523
    Contact: blah@cliffano.com
    Generated by: https://openapi-generator.tech
"""


from fastapi import FastAPI

from openapi_server.apis.ability_api import router as AbilityApiRouter
from openapi_server.apis.berry_api import router as BerryApiRouter
from openapi_server.apis.berry_firmness_api import router as BerryFirmnessApiRouter
from openapi_server.apis.berry_flavor_api import router as BerryFlavorApiRouter
from openapi_server.apis.characteristic_api import router as CharacteristicApiRouter
from openapi_server.apis.contest_effect_api import router as ContestEffectApiRouter
from openapi_server.apis.contest_type_api import router as ContestTypeApiRouter
from openapi_server.apis.egg_group_api import router as EggGroupApiRouter
from openapi_server.apis.encounter_condition_api import router as EncounterConditionApiRouter
from openapi_server.apis.encounter_condition_value_api import router as EncounterConditionValueApiRouter
from openapi_server.apis.encounter_method_api import router as EncounterMethodApiRouter
from openapi_server.apis.evolution_chain_api import router as EvolutionChainApiRouter
from openapi_server.apis.evolution_trigger_api import router as EvolutionTriggerApiRouter
from openapi_server.apis.gender_api import router as GenderApiRouter
from openapi_server.apis.generation_api import router as GenerationApiRouter
from openapi_server.apis.growth_rate_api import router as GrowthRateApiRouter
from openapi_server.apis.item_api import router as ItemApiRouter
from openapi_server.apis.item_attribute_api import router as ItemAttributeApiRouter
from openapi_server.apis.item_category_api import router as ItemCategoryApiRouter
from openapi_server.apis.item_fling_effect_api import router as ItemFlingEffectApiRouter
from openapi_server.apis.item_pocket_api import router as ItemPocketApiRouter
from openapi_server.apis.language_api import router as LanguageApiRouter
from openapi_server.apis.location_api import router as LocationApiRouter
from openapi_server.apis.location_area_api import router as LocationAreaApiRouter
from openapi_server.apis.machine_api import router as MachineApiRouter
from openapi_server.apis.move_api import router as MoveApiRouter
from openapi_server.apis.move_ailment_api import router as MoveAilmentApiRouter
from openapi_server.apis.move_battle_style_api import router as MoveBattleStyleApiRouter
from openapi_server.apis.move_category_api import router as MoveCategoryApiRouter
from openapi_server.apis.move_damage_class_api import router as MoveDamageClassApiRouter
from openapi_server.apis.move_learn_method_api import router as MoveLearnMethodApiRouter
from openapi_server.apis.move_target_api import router as MoveTargetApiRouter
from openapi_server.apis.nature_api import router as NatureApiRouter
from openapi_server.apis.pal_park_area_api import router as PalParkAreaApiRouter
from openapi_server.apis.pokeathlon_stat_api import router as PokeathlonStatApiRouter
from openapi_server.apis.pokedex_api import router as PokedexApiRouter
from openapi_server.apis.pokemon_api import router as PokemonApiRouter
from openapi_server.apis.pokemon_color_api import router as PokemonColorApiRouter
from openapi_server.apis.pokemon_form_api import router as PokemonFormApiRouter
from openapi_server.apis.pokemon_habitat_api import router as PokemonHabitatApiRouter
from openapi_server.apis.pokemon_shape_api import router as PokemonShapeApiRouter
from openapi_server.apis.pokemon_species_api import router as PokemonSpeciesApiRouter
from openapi_server.apis.region_api import router as RegionApiRouter
from openapi_server.apis.stat_api import router as StatApiRouter
from openapi_server.apis.super_contest_effect_api import router as SuperContestEffectApiRouter
from openapi_server.apis.type_api import router as TypeApiRouter
from openapi_server.apis.version_api import router as VersionApiRouter
from openapi_server.apis.version_group_api import router as VersionGroupApiRouter

app = FastAPI(
    title="",
    description="No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)",
    version="20220523",
)

app.include_router(AbilityApiRouter)
app.include_router(BerryApiRouter)
app.include_router(BerryFirmnessApiRouter)
app.include_router(BerryFlavorApiRouter)
app.include_router(CharacteristicApiRouter)
app.include_router(ContestEffectApiRouter)
app.include_router(ContestTypeApiRouter)
app.include_router(EggGroupApiRouter)
app.include_router(EncounterConditionApiRouter)
app.include_router(EncounterConditionValueApiRouter)
app.include_router(EncounterMethodApiRouter)
app.include_router(EvolutionChainApiRouter)
app.include_router(EvolutionTriggerApiRouter)
app.include_router(GenderApiRouter)
app.include_router(GenerationApiRouter)
app.include_router(GrowthRateApiRouter)
app.include_router(ItemApiRouter)
app.include_router(ItemAttributeApiRouter)
app.include_router(ItemCategoryApiRouter)
app.include_router(ItemFlingEffectApiRouter)
app.include_router(ItemPocketApiRouter)
app.include_router(LanguageApiRouter)
app.include_router(LocationApiRouter)
app.include_router(LocationAreaApiRouter)
app.include_router(MachineApiRouter)
app.include_router(MoveApiRouter)
app.include_router(MoveAilmentApiRouter)
app.include_router(MoveBattleStyleApiRouter)
app.include_router(MoveCategoryApiRouter)
app.include_router(MoveDamageClassApiRouter)
app.include_router(MoveLearnMethodApiRouter)
app.include_router(MoveTargetApiRouter)
app.include_router(NatureApiRouter)
app.include_router(PalParkAreaApiRouter)
app.include_router(PokeathlonStatApiRouter)
app.include_router(PokedexApiRouter)
app.include_router(PokemonApiRouter)
app.include_router(PokemonColorApiRouter)
app.include_router(PokemonFormApiRouter)
app.include_router(PokemonHabitatApiRouter)
app.include_router(PokemonShapeApiRouter)
app.include_router(PokemonSpeciesApiRouter)
app.include_router(RegionApiRouter)
app.include_router(StatApiRouter)
app.include_router(SuperContestEffectApiRouter)
app.include_router(TypeApiRouter)
app.include_router(VersionApiRouter)
app.include_router(VersionGroupApiRouter)
