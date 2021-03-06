#pragma once

namespace kuas
{
    struct ShaderModuleID
    {
        enum
        {
            BasicPolyFillNoAA_VS,
            BasicPolyFillNoAA_PS,

            Rect_VS,
            Rect_GS,
            Rect_PS,
            RectAA_GS,
            RectAA_PS,

            RoundedRect_VS,
            RoundedRect_GS,
            RoundedRect_PS,
            RoundedRectAA_GS,
            RoundedRectAA_PS,

            FillRect_VS,
            FillRect_GS,
            FillRect_PS,
            FillRectAA_GS,
            FillRectAA_PS,

            FillRoundedRect_VS,
            FillRoundedRect_GS,
            FillRoundedRect_PS,
            FillRoundedRectAA_GS,
            FillRoundedRectAA_PS,
            
            Circle_VS,
            Circle_GS,
            Circle_PS,
            CircleAA_GS,
            CircleAA_PS,

            FillCircle_VS,
            FillCircle_GS,
            FillCircle_PS,
            FillCircleAA_GS,
            FillCircleAA_PS,

            FillEllipse_VS,
            FillEllipse_GS,
            FillEllipse_PS,
            FillEllipseAA_GS,
            FillEllipseAA_PS,

            LineSegment_VS,
            LineSegment_GS,
            LineSegment_FS,
            LineSegmentAA_GS,
            LineSegmentAA_FS,
            LineSegmentCappedAA_GS,
            LineSegmentRoundedAA_FS,

            Count
        };
    };
    
    static constexpr size_t g_numShaderModules = static_cast<size_t>(ShaderModuleID::Count);
}
