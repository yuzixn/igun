#include "stdafx.h"
#include "Game.h"



bool Game::Start()
{

	g_camera3D->SetPosition(0.0f, 0.0f, 0.0f);
	m_modelRender.Init("Assets/modelData/unityChan.tkm");
	
	return true;
}

void Game::Update()
{
	// g_renderingEngine->DisableRaytracing();
	m_modelRender.Update();
}

void Game::Render(RenderContext& rc)
{
	m_modelRender.Draw(rc);
}