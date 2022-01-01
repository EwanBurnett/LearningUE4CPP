// Fill out your copyright notice in the Description page of Project Settings.


#include "NewGameState.h"

ANewGameState::ANewGameState()
{
    m_CurrentScore = 0;
}

void ANewGameState::SetScore(int32 score)
{
    if(score > 0)
    {
        m_CurrentScore = score;
    }
}

int32 ANewGameState::GetScore() const
{
    return(m_CurrentScore);
}

