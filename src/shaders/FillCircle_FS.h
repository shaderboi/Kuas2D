	// 1011.5.0
	 #pragma once
const uint32_t ShaderFillCircle_FS[] = {
	0x07230203,0x00010000,0x0008000a,0x00000037,0x00000000,0x00020011,0x00000001,0x0006000b,
	0x00000001,0x4c534c47,0x6474732e,0x3035342e,0x00000000,0x0003000e,0x00000000,0x00000001,
	0x0009000f,0x00000004,0x00000004,0x6e69616d,0x00000000,0x00000017,0x0000001a,0x00000028,
	0x0000002a,0x00030010,0x00000004,0x00000007,0x00030003,0x00000002,0x000001c2,0x00040005,
	0x00000004,0x6e69616d,0x00000000,0x00070005,0x0000000d,0x43666473,0x6c637269,0x66762865,
	0x31663b32,0x0000003b,0x00030005,0x0000000b,0x00000070,0x00040005,0x0000000c,0x69646172,
	0x00007375,0x00030005,0x00000015,0x00000064,0x00040005,0x00000017,0x705f7367,0x0000736f,
	0x00050005,0x0000001a,0x725f7367,0x75696461,0x00000073,0x00040005,0x0000001e,0x61726170,
	0x0000006d,0x00040005,0x0000001f,0x61726170,0x0000006d,0x00040005,0x00000028,0x6f635f6f,
	0x0000006c,0x00040005,0x0000002a,0x635f7367,0x00006c6f,0x00040047,0x00000017,0x0000001e,
	0x00000000,0x00040047,0x0000001a,0x0000001e,0x00000002,0x00040047,0x00000028,0x0000001e,
	0x00000000,0x00040047,0x0000002a,0x0000001e,0x00000001,0x00020013,0x00000002,0x00030021,
	0x00000003,0x00000002,0x00030016,0x00000006,0x00000020,0x00040017,0x00000007,0x00000006,
	0x00000002,0x00040020,0x00000008,0x00000007,0x00000007,0x00040020,0x00000009,0x00000007,
	0x00000006,0x00050021,0x0000000a,0x00000006,0x00000008,0x00000009,0x00040020,0x00000016,
	0x00000001,0x00000007,0x0004003b,0x00000016,0x00000017,0x00000001,0x00040020,0x00000019,
	0x00000001,0x00000006,0x0004003b,0x00000019,0x0000001a,0x00000001,0x0004002b,0x00000006,
	0x00000023,0x00000000,0x0004002b,0x00000006,0x00000024,0x3f800000,0x00040017,0x00000026,
	0x00000006,0x00000004,0x00040020,0x00000027,0x00000003,0x00000026,0x0004003b,0x00000027,
	0x00000028,0x00000003,0x00040020,0x00000029,0x00000001,0x00000026,0x0004003b,0x00000029,
	0x0000002a,0x00000001,0x0004002b,0x00000006,0x0000002c,0x3f000000,0x00040015,0x00000030,
	0x00000020,0x00000000,0x0004002b,0x00000030,0x00000031,0x00000003,0x00040020,0x00000032,
	0x00000003,0x00000006,0x00050036,0x00000002,0x00000004,0x00000000,0x00000003,0x000200f8,
	0x00000005,0x0004003b,0x00000009,0x00000015,0x00000007,0x0004003b,0x00000008,0x0000001e,
	0x00000007,0x0004003b,0x00000009,0x0000001f,0x00000007,0x0004003d,0x00000007,0x00000018,
	0x00000017,0x0004003d,0x00000006,0x0000001b,0x0000001a,0x00050050,0x00000007,0x0000001c,
	0x0000001b,0x0000001b,0x00050083,0x00000007,0x0000001d,0x00000018,0x0000001c,0x0003003e,
	0x0000001e,0x0000001d,0x0004003d,0x00000006,0x00000020,0x0000001a,0x0003003e,0x0000001f,
	0x00000020,0x00060039,0x00000006,0x00000021,0x0000000d,0x0000001e,0x0000001f,0x0003003e,
	0x00000015,0x00000021,0x0004003d,0x00000006,0x00000022,0x00000015,0x0008000c,0x00000006,
	0x00000025,0x00000001,0x0000002b,0x00000022,0x00000023,0x00000024,0x0003003e,0x00000015,
	0x00000025,0x0004003d,0x00000026,0x0000002b,0x0000002a,0x0003003e,0x00000028,0x0000002b,
	0x0004003d,0x00000006,0x0000002d,0x00000015,0x0007000c,0x00000006,0x0000002e,0x00000001,
	0x00000030,0x0000002c,0x0000002d,0x00050083,0x00000006,0x0000002f,0x00000024,0x0000002e,
	0x00050041,0x00000032,0x00000033,0x00000028,0x00000031,0x0004003d,0x00000006,0x00000034,
	0x00000033,0x00050085,0x00000006,0x00000035,0x00000034,0x0000002f,0x00050041,0x00000032,
	0x00000036,0x00000028,0x00000031,0x0003003e,0x00000036,0x00000035,0x000100fd,0x00010038,
	0x00050036,0x00000006,0x0000000d,0x00000000,0x0000000a,0x00030037,0x00000008,0x0000000b,
	0x00030037,0x00000009,0x0000000c,0x000200f8,0x0000000e,0x0004003d,0x00000007,0x0000000f,
	0x0000000b,0x0006000c,0x00000006,0x00000010,0x00000001,0x00000042,0x0000000f,0x0004003d,
	0x00000006,0x00000011,0x0000000c,0x00050083,0x00000006,0x00000012,0x00000010,0x00000011,
	0x000200fe,0x00000012,0x00010038
};