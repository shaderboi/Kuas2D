#version 450 core

layout(points) in;
layout(triangle_strip, max_vertices = 4) out;

layout(location = 0) in vec4 vs_col[];

layout(location = 0) out vec2 fs_pos;
layout(location = 1) out vec4 fs_col;
layout(location = 2) out float fs_radius;
#ifndef KUAS_FILL_SHAPE
layout(location = 3) out float fs_thickness;
#endif

layout(push_constant, row_major) uniform PushConstants {
    mat3 transform;
    vec2 scale;
};

void main()
{
    float rad = gl_in[0].gl_Position.z;
    vec2 a = gl_in[0].gl_Position.xy - rad;
    vec2 b = gl_in[0].gl_Position.xy + rad;
    vec2 d = vec2(rad * 2.);
#ifdef KUAS_ANTIALIAS
    // preserve pixel for AA parts
    a -= vec2(1.0);
    b += vec2(1.0);
#endif
#ifndef KUAS_FILL_SHAPE
    // preserve pixel for thickness part
    float thickness = gl_in[0].gl_Position.w;
    a -= thickness;
    b += thickness;
#endif

    rad -= 0.5;

    // transform edges
    vec3 e0 = transform * vec3(a, 1.0);
    vec3 e1 = transform * vec3(b.x, a.y, 1.0);
    vec3 e2 = transform * vec3(a.x, b.y, 1.0);
    vec3 e3 = transform * vec3(b, 1.0);

    fs_pos = vec2(-1.0);
#ifndef KUAS_FILL_SHAPE
    fs_pos = fs_pos - thickness;
    fs_thickness = thickness;
#endif
    fs_col = vs_col[0];
    fs_radius = rad;
    gl_Position = vec4(e0.xy * scale - 1.0, 0.0, 1.0);
    EmitVertex();

    fs_pos = vec2(d.x + 1.0, -1.0);
#ifndef KUAS_FILL_SHAPE
    fs_pos = fs_pos + vec2(thickness, -thickness);
    fs_thickness = thickness;
#endif
    fs_col = vs_col[0];
    fs_radius = rad;
    gl_Position = vec4(e1.xy * scale - 1.0, 0.0, 1.0);
    EmitVertex();

    fs_pos = vec2(-1.0, d.y + 1.0);
#ifndef KUAS_FILL_SHAPE
    fs_pos = fs_pos + vec2(-thickness, thickness);
    fs_thickness = thickness;
#endif
    fs_col = vs_col[0];
    fs_radius = rad;
    gl_Position = vec4(e2.xy * scale - 1.0, 0.0, 1.0);
    EmitVertex();

    fs_pos = d + 1.0;
#ifndef KUAS_FILL_SHAPE
    fs_pos = fs_pos + thickness;
    fs_thickness = thickness;
#endif
    fs_col = vs_col[0];
    fs_radius = rad;
    gl_Position = vec4(e3.xy * scale - 1.0, 0.0, 1.0);
    EmitVertex();

    EndPrimitive();
}
