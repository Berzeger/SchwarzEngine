#pragma once

#include "Running/Core.h"
#include "Running/Layer.h"

namespace Running
{
	class RUNNING_API LayerStack
	{
	public:
		LayerStack();
		~LayerStack();

		void PushLayer(Layer* layer);
		void PopLayer(Layer* layer);
		void PushOverlay(Layer* overlay);
		void PopOverlay(Layer* overlay);

		std::vector<Layer*>::iterator begin() { return _layers.begin(); }
		std::vector<Layer*>::iterator end() { return _layers.end(); }
	private:
		std::vector<Layer*> _layers;
		std::vector<Layer*>::iterator _layerInsert;
	};
}