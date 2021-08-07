//  Copyright © 2020 Audulus LLC. All rights reserved.

#ifndef GetMetalLibrary_h
#define GetMetalLibrary_h

#import <Metal/Metal.h>

#ifdef __cplusplus
extern "C" {
#endif

id<MTLLibrary> GetMetalLibrary(id<MTLDevice> device);

#ifdef __cplusplus
}
#endif

#endif /* GetMetalLibrary_h */