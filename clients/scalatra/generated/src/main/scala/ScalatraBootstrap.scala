/**
 * OpenAPI Sample
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: team@openapitools.org
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 */


import org.openapitools.server.api._
import org.openapitools.app.{ ResourcesApp, OpenAPIApp }
import javax.servlet.ServletContext
import org.scalatra.LifeCycle

class ScalatraBootstrap extends LifeCycle {
  implicit val openapi = new OpenAPIApp

  override def init(context: ServletContext) {
    try {
      context mount (new AbilityApi, "/Ability/*")
      context mount (new BerryApi, "/Berry/*")
      context mount (new BerryFirmnessApi, "/BerryFirmness/*")
      context mount (new BerryFlavorApi, "/BerryFlavor/*")
      context mount (new CharacteristicApi, "/Characteristic/*")
      context mount (new ContestEffectApi, "/ContestEffect/*")
      context mount (new ContestTypeApi, "/ContestType/*")
      context mount (new EggGroupApi, "/EggGroup/*")
      context mount (new EncounterConditionApi, "/EncounterCondition/*")
      context mount (new EncounterConditionValueApi, "/EncounterConditionValue/*")
      context mount (new EncounterMethodApi, "/EncounterMethod/*")
      context mount (new EvolutionChainApi, "/EvolutionChain/*")
      context mount (new EvolutionTriggerApi, "/EvolutionTrigger/*")
      context mount (new GenderApi, "/Gender/*")
      context mount (new GenerationApi, "/Generation/*")
      context mount (new GrowthRateApi, "/GrowthRate/*")
      context mount (new ItemApi, "/Item/*")
      context mount (new ItemAttributeApi, "/ItemAttribute/*")
      context mount (new ItemCategoryApi, "/ItemCategory/*")
      context mount (new ItemFlingEffectApi, "/ItemFlingEffect/*")
      context mount (new ItemPocketApi, "/ItemPocket/*")
      context mount (new LanguageApi, "/Language/*")
      context mount (new LocationApi, "/Location/*")
      context mount (new LocationAreaApi, "/LocationArea/*")
      context mount (new MachineApi, "/Machine/*")
      context mount (new MoveApi, "/Move/*")
      context mount (new MoveAilmentApi, "/MoveAilment/*")
      context mount (new MoveBattleStyleApi, "/MoveBattleStyle/*")
      context mount (new MoveCategoryApi, "/MoveCategory/*")
      context mount (new MoveDamageClassApi, "/MoveDamageClass/*")
      context mount (new MoveLearnMethodApi, "/MoveLearnMethod/*")
      context mount (new MoveTargetApi, "/MoveTarget/*")
      context mount (new NatureApi, "/Nature/*")
      context mount (new PalParkAreaApi, "/PalParkArea/*")
      context mount (new PokeathlonStatApi, "/PokeathlonStat/*")
      context mount (new PokedexApi, "/Pokedex/*")
      context mount (new PokemonApi, "/Pokemon/*")
      context mount (new PokemonColorApi, "/PokemonColor/*")
      context mount (new PokemonFormApi, "/PokemonForm/*")
      context mount (new PokemonHabitatApi, "/PokemonHabitat/*")
      context mount (new PokemonShapeApi, "/PokemonShape/*")
      context mount (new PokemonSpeciesApi, "/PokemonSpecies/*")
      context mount (new RegionApi, "/Region/*")
      context mount (new StatApi, "/Stat/*")
      context mount (new SuperContestEffectApi, "/SuperContestEffect/*")
      context mount (new TypeApi, "/Type/*")
      context mount (new VersionApi, "/Version/*")
      context mount (new VersionGroupApi, "/VersionGroup/*")
      context mount (new ResourcesApp, "/api-docs/*")
    } catch {
      case e: Throwable => e.printStackTrace()
    }
  }
}
