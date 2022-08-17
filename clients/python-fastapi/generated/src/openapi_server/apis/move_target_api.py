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
    "/api/v2/move-target/",
    responses={
        200: {"model": str, "description": "Default response"},
    },
    tags=["move-target"],
    response_model_by_alias=True,
)
async def move_target_list(
    limit: int = Query(None, description=""),
    offset: int = Query(None, description=""),
) -> str:
    ...


@router.get(
    "/api/v2/move-target/{id}/",
    responses={
        200: {"model": str, "description": "Default response"},
    },
    tags=["move-target"],
    response_model_by_alias=True,
)
async def move_target_read(
    id: int = Path(None, description=""),
) -> str:
    ...
