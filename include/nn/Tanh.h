#pragma once
#include "Layer.h"


namespace cpptorch
{
    namespace nn
    {
        template<typename T, GPUFlag F>
        class Tanh : public Layer<T, F>
        {
        public:
            virtual const std::string name() const override { return "nn.Tanh"; }
            virtual Tensor<T, F> forward(const Tensor<T, F> &input) const override;

        protected:

        };
    }
}
