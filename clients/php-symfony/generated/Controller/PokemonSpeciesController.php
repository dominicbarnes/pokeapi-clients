<?php

/**
 * PokemonSpeciesController
 * PHP version 8.1.1
 *
 * @category Class
 * @package  OpenAPI\Server\Controller
 * @author   OpenAPI Generator team
 * @link     https://github.com/openapitools/openapi-generator
 */

/**
 * 
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 20220523
 * Contact: blah@cliffano.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 *
 */

/**
 * NOTE: This class is auto generated by the openapi generator program.
 * https://github.com/openapitools/openapi-generator
 * Do not edit the class manually.
 */

namespace OpenAPI\Server\Controller;

use \Exception;
use JMS\Serializer\Exception\RuntimeException as SerializerRuntimeException;
use Symfony\Component\HttpFoundation\Request;
use Symfony\Component\HttpFoundation\Response;
use Symfony\Component\HttpKernel\Exception\HttpException;
use Symfony\Component\Validator\Constraints as Assert;
use OpenAPI\Server\Api\PokemonSpeciesApiInterface;

/**
 * PokemonSpeciesController Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Server\Controller
 * @author   OpenAPI Generator team
 * @link     https://github.com/openapitools/openapi-generator
 */
class PokemonSpeciesController extends Controller
{

    /**
     * Operation pokemonSpeciesList
     *
     * @param Request $request The Symfony request to handle.
     * @return Response The Symfony response.
     */
    public function pokemonSpeciesListAction(Request $request)
    {
        // Figure out what data format to return to the client
        $produces = ['text/plain'];
        // Figure out what the client accepts
        $clientAccepts = $request->headers->has('Accept')?$request->headers->get('Accept'):'*/*';
        $responseFormat = $this->getOutputFormat($clientAccepts, $produces);
        if ($responseFormat === null) {
            return new Response('', 406);
        }

        // Handle authentication

        // Read out all input parameter values into variables
        $limit = $request->query->get('limit');
        $offset = $request->query->get('offset');

        // Use the default value if no value was provided

        // Deserialize the input values that needs it
        try {
            $limit = $this->deserialize($limit, 'int', 'string');
            $offset = $this->deserialize($offset, 'int', 'string');
        } catch (SerializerRuntimeException $exception) {
            return $this->createBadRequestResponse($exception->getMessage());
        }

        // Validate the input values
        $asserts = [];
        $asserts[] = new Assert\Type("int");
        $response = $this->validate($limit, $asserts);
        if ($response instanceof Response) {
            return $response;
        }
        $asserts = [];
        $asserts[] = new Assert\Type("int");
        $response = $this->validate($offset, $asserts);
        if ($response instanceof Response) {
            return $response;
        }


        try {
            $handler = $this->getApiHandler();


            // Make the call to the business logic
            $responseCode = 200;
            $responseHeaders = [];

            $result = $handler->pokemonSpeciesList($limit, $offset, $responseCode, $responseHeaders);

            // Find default response message
            $message = 'Default response';

            // Find a more specific message, if available
            switch ($responseCode) {
                case 0:
                    $message = 'Default response';
                    break;
            }

            return new Response(
                $result !== null ?$this->serialize($result, $responseFormat):'',
                $responseCode,
                array_merge(
                    $responseHeaders,
                    [
                        'Content-Type' => $responseFormat,
                        'X-OpenAPI-Message' => $message
                    ]
                )
            );
        } catch (\Throwable $fallthrough) {
            return $this->createErrorResponse(new HttpException(500, 'An unsuspected error occurred.', $fallthrough));
        }
    }

    /**
     * Operation pokemonSpeciesRead
     *
     * @param Request $request The Symfony request to handle.
     * @return Response The Symfony response.
     */
    public function pokemonSpeciesReadAction(Request $request, $id)
    {
        // Figure out what data format to return to the client
        $produces = ['text/plain'];
        // Figure out what the client accepts
        $clientAccepts = $request->headers->has('Accept')?$request->headers->get('Accept'):'*/*';
        $responseFormat = $this->getOutputFormat($clientAccepts, $produces);
        if ($responseFormat === null) {
            return new Response('', 406);
        }

        // Handle authentication

        // Read out all input parameter values into variables

        // Use the default value if no value was provided

        // Deserialize the input values that needs it
        try {
            $id = $this->deserialize($id, 'int', 'string');
        } catch (SerializerRuntimeException $exception) {
            return $this->createBadRequestResponse($exception->getMessage());
        }

        // Validate the input values
        $asserts = [];
        $asserts[] = new Assert\NotNull();
        $asserts[] = new Assert\Type("int");
        $response = $this->validate($id, $asserts);
        if ($response instanceof Response) {
            return $response;
        }


        try {
            $handler = $this->getApiHandler();


            // Make the call to the business logic
            $responseCode = 200;
            $responseHeaders = [];

            $result = $handler->pokemonSpeciesRead($id, $responseCode, $responseHeaders);

            // Find default response message
            $message = 'Default response';

            // Find a more specific message, if available
            switch ($responseCode) {
                case 0:
                    $message = 'Default response';
                    break;
            }

            return new Response(
                $result !== null ?$this->serialize($result, $responseFormat):'',
                $responseCode,
                array_merge(
                    $responseHeaders,
                    [
                        'Content-Type' => $responseFormat,
                        'X-OpenAPI-Message' => $message
                    ]
                )
            );
        } catch (\Throwable $fallthrough) {
            return $this->createErrorResponse(new HttpException(500, 'An unsuspected error occurred.', $fallthrough));
        }
    }

    /**
     * Returns the handler for this API controller.
     * @return PokemonSpeciesApiInterface
     */
    public function getApiHandler()
    {
        return $this->apiServer->getApiHandler('pokemonSpecies');
    }
}
