/**
 * 
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 *
 */


import ApiClient from './ApiClient';
import AbilityApi from './api/AbilityApi';
import BerryApi from './api/BerryApi';
import BerryFirmnessApi from './api/BerryFirmnessApi';
import BerryFlavorApi from './api/BerryFlavorApi';
import CharacteristicApi from './api/CharacteristicApi';
import ContestEffectApi from './api/ContestEffectApi';
import ContestTypeApi from './api/ContestTypeApi';
import EggGroupApi from './api/EggGroupApi';
import EncounterConditionApi from './api/EncounterConditionApi';
import EncounterConditionValueApi from './api/EncounterConditionValueApi';
import EncounterMethodApi from './api/EncounterMethodApi';
import EvolutionChainApi from './api/EvolutionChainApi';
import EvolutionTriggerApi from './api/EvolutionTriggerApi';
import GenderApi from './api/GenderApi';
import GenerationApi from './api/GenerationApi';
import GrowthRateApi from './api/GrowthRateApi';
import ItemApi from './api/ItemApi';
import ItemAttributeApi from './api/ItemAttributeApi';
import ItemCategoryApi from './api/ItemCategoryApi';
import ItemFlingEffectApi from './api/ItemFlingEffectApi';
import ItemPocketApi from './api/ItemPocketApi';
import LanguageApi from './api/LanguageApi';
import LocationApi from './api/LocationApi';
import LocationAreaApi from './api/LocationAreaApi';
import MachineApi from './api/MachineApi';
import MoveApi from './api/MoveApi';
import MoveAilmentApi from './api/MoveAilmentApi';
import MoveBattleStyleApi from './api/MoveBattleStyleApi';
import MoveCategoryApi from './api/MoveCategoryApi';
import MoveDamageClassApi from './api/MoveDamageClassApi';
import MoveLearnMethodApi from './api/MoveLearnMethodApi';
import MoveTargetApi from './api/MoveTargetApi';
import NatureApi from './api/NatureApi';
import PalParkAreaApi from './api/PalParkAreaApi';
import PokeathlonStatApi from './api/PokeathlonStatApi';
import PokedexApi from './api/PokedexApi';
import PokemonApi from './api/PokemonApi';
import PokemonColorApi from './api/PokemonColorApi';
import PokemonFormApi from './api/PokemonFormApi';
import PokemonHabitatApi from './api/PokemonHabitatApi';
import PokemonShapeApi from './api/PokemonShapeApi';
import PokemonSpeciesApi from './api/PokemonSpeciesApi';
import RegionApi from './api/RegionApi';
import StatApi from './api/StatApi';
import SuperContestEffectApi from './api/SuperContestEffectApi';
import TypeApi from './api/TypeApi';
import VersionApi from './api/VersionApi';
import VersionGroupApi from './api/VersionGroupApi';


/**
* JS API client generated by OpenAPI Generator.<br>
* The <code>index</code> module provides access to constructors for all the classes which comprise the public API.
* <p>
* An AMD (recommended!) or CommonJS application will generally do something equivalent to the following:
* <pre>
* var PokeapiClient = require('index'); // See note below*.
* var xxxSvc = new PokeapiClient.XxxApi(); // Allocate the API class we're going to use.
* var yyyModel = new PokeapiClient.Yyy(); // Construct a model instance.
* yyyModel.someProperty = 'someValue';
* ...
* var zzz = xxxSvc.doSomething(yyyModel); // Invoke the service.
* ...
* </pre>
* <em>*NOTE: For a top-level AMD script, use require(['index'], function(){...})
* and put the application logic within the callback function.</em>
* </p>
* <p>
* A non-AMD browser application (discouraged) might do something like this:
* <pre>
* var xxxSvc = new PokeapiClient.XxxApi(); // Allocate the API class we're going to use.
* var yyy = new PokeapiClient.Yyy(); // Construct a model instance.
* yyyModel.someProperty = 'someValue';
* ...
* var zzz = xxxSvc.doSomething(yyyModel); // Invoke the service.
* ...
* </pre>
* </p>
* @module index
* @version 1.0.0-pre.0
*/
export {
    /**
     * The ApiClient constructor.
     * @property {module:ApiClient}
     */
    ApiClient,

    /**
    * The AbilityApi service constructor.
    * @property {module:api/AbilityApi}
    */
    AbilityApi,

    /**
    * The BerryApi service constructor.
    * @property {module:api/BerryApi}
    */
    BerryApi,

    /**
    * The BerryFirmnessApi service constructor.
    * @property {module:api/BerryFirmnessApi}
    */
    BerryFirmnessApi,

    /**
    * The BerryFlavorApi service constructor.
    * @property {module:api/BerryFlavorApi}
    */
    BerryFlavorApi,

    /**
    * The CharacteristicApi service constructor.
    * @property {module:api/CharacteristicApi}
    */
    CharacteristicApi,

    /**
    * The ContestEffectApi service constructor.
    * @property {module:api/ContestEffectApi}
    */
    ContestEffectApi,

    /**
    * The ContestTypeApi service constructor.
    * @property {module:api/ContestTypeApi}
    */
    ContestTypeApi,

    /**
    * The EggGroupApi service constructor.
    * @property {module:api/EggGroupApi}
    */
    EggGroupApi,

    /**
    * The EncounterConditionApi service constructor.
    * @property {module:api/EncounterConditionApi}
    */
    EncounterConditionApi,

    /**
    * The EncounterConditionValueApi service constructor.
    * @property {module:api/EncounterConditionValueApi}
    */
    EncounterConditionValueApi,

    /**
    * The EncounterMethodApi service constructor.
    * @property {module:api/EncounterMethodApi}
    */
    EncounterMethodApi,

    /**
    * The EvolutionChainApi service constructor.
    * @property {module:api/EvolutionChainApi}
    */
    EvolutionChainApi,

    /**
    * The EvolutionTriggerApi service constructor.
    * @property {module:api/EvolutionTriggerApi}
    */
    EvolutionTriggerApi,

    /**
    * The GenderApi service constructor.
    * @property {module:api/GenderApi}
    */
    GenderApi,

    /**
    * The GenerationApi service constructor.
    * @property {module:api/GenerationApi}
    */
    GenerationApi,

    /**
    * The GrowthRateApi service constructor.
    * @property {module:api/GrowthRateApi}
    */
    GrowthRateApi,

    /**
    * The ItemApi service constructor.
    * @property {module:api/ItemApi}
    */
    ItemApi,

    /**
    * The ItemAttributeApi service constructor.
    * @property {module:api/ItemAttributeApi}
    */
    ItemAttributeApi,

    /**
    * The ItemCategoryApi service constructor.
    * @property {module:api/ItemCategoryApi}
    */
    ItemCategoryApi,

    /**
    * The ItemFlingEffectApi service constructor.
    * @property {module:api/ItemFlingEffectApi}
    */
    ItemFlingEffectApi,

    /**
    * The ItemPocketApi service constructor.
    * @property {module:api/ItemPocketApi}
    */
    ItemPocketApi,

    /**
    * The LanguageApi service constructor.
    * @property {module:api/LanguageApi}
    */
    LanguageApi,

    /**
    * The LocationApi service constructor.
    * @property {module:api/LocationApi}
    */
    LocationApi,

    /**
    * The LocationAreaApi service constructor.
    * @property {module:api/LocationAreaApi}
    */
    LocationAreaApi,

    /**
    * The MachineApi service constructor.
    * @property {module:api/MachineApi}
    */
    MachineApi,

    /**
    * The MoveApi service constructor.
    * @property {module:api/MoveApi}
    */
    MoveApi,

    /**
    * The MoveAilmentApi service constructor.
    * @property {module:api/MoveAilmentApi}
    */
    MoveAilmentApi,

    /**
    * The MoveBattleStyleApi service constructor.
    * @property {module:api/MoveBattleStyleApi}
    */
    MoveBattleStyleApi,

    /**
    * The MoveCategoryApi service constructor.
    * @property {module:api/MoveCategoryApi}
    */
    MoveCategoryApi,

    /**
    * The MoveDamageClassApi service constructor.
    * @property {module:api/MoveDamageClassApi}
    */
    MoveDamageClassApi,

    /**
    * The MoveLearnMethodApi service constructor.
    * @property {module:api/MoveLearnMethodApi}
    */
    MoveLearnMethodApi,

    /**
    * The MoveTargetApi service constructor.
    * @property {module:api/MoveTargetApi}
    */
    MoveTargetApi,

    /**
    * The NatureApi service constructor.
    * @property {module:api/NatureApi}
    */
    NatureApi,

    /**
    * The PalParkAreaApi service constructor.
    * @property {module:api/PalParkAreaApi}
    */
    PalParkAreaApi,

    /**
    * The PokeathlonStatApi service constructor.
    * @property {module:api/PokeathlonStatApi}
    */
    PokeathlonStatApi,

    /**
    * The PokedexApi service constructor.
    * @property {module:api/PokedexApi}
    */
    PokedexApi,

    /**
    * The PokemonApi service constructor.
    * @property {module:api/PokemonApi}
    */
    PokemonApi,

    /**
    * The PokemonColorApi service constructor.
    * @property {module:api/PokemonColorApi}
    */
    PokemonColorApi,

    /**
    * The PokemonFormApi service constructor.
    * @property {module:api/PokemonFormApi}
    */
    PokemonFormApi,

    /**
    * The PokemonHabitatApi service constructor.
    * @property {module:api/PokemonHabitatApi}
    */
    PokemonHabitatApi,

    /**
    * The PokemonShapeApi service constructor.
    * @property {module:api/PokemonShapeApi}
    */
    PokemonShapeApi,

    /**
    * The PokemonSpeciesApi service constructor.
    * @property {module:api/PokemonSpeciesApi}
    */
    PokemonSpeciesApi,

    /**
    * The RegionApi service constructor.
    * @property {module:api/RegionApi}
    */
    RegionApi,

    /**
    * The StatApi service constructor.
    * @property {module:api/StatApi}
    */
    StatApi,

    /**
    * The SuperContestEffectApi service constructor.
    * @property {module:api/SuperContestEffectApi}
    */
    SuperContestEffectApi,

    /**
    * The TypeApi service constructor.
    * @property {module:api/TypeApi}
    */
    TypeApi,

    /**
    * The VersionApi service constructor.
    * @property {module:api/VersionApi}
    */
    VersionApi,

    /**
    * The VersionGroupApi service constructor.
    * @property {module:api/VersionGroupApi}
    */
    VersionGroupApi
};
