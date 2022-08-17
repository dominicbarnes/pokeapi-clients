# coding: utf-8

from typing import Dict, List  # noqa: F401

from fastapi import (  # noqa: F401
    APIRouter,
    Body,
    Cookie,
    Depends,
    Form,
    Header,
    Path,
    Query,
    Response,
    Security,
    status,
)

from openapi_server.models.extra_models import TokenModel  # noqa: F401


router = APIRouter()


@router.get(
    "/api/v2/pokemon-color/",
    responses={
        200: {"model": str, "description": "Default response"},
    },
    tags=["pokemon-color"],
    response_model_by_alias=True,
)
async def pokemon_color_list(
    limit: int = Query(None, description=""),
    offset: int = Query(None, description=""),
) -> str:
    ...


@router.get(
    "/api/v2/pokemon-color/{id}/",
    responses={
        200: {"model": str, "description": "Default response"},
    },
    tags=["pokemon-color"],
    response_model_by_alias=True,
)
async def pokemon_color_read(
    id: int = Path(None, description=""),
) -> str:
    ...
