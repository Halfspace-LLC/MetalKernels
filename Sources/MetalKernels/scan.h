//  Copyright © 2021 Halfspace LLC. All rights reserved.

#ifndef scan_h
#define scan_h

enum ScanBufferIndex {
    ScanBufferIndexInput,
    ScanBufferIndexOutput,
    ScanBufferIndexAux,
    ScanBufferIndexLength,
    ScanBufferIndexZeroff,
    ScanBufferIndexIndirectArguments,
    ScanBufferIndexLengths,
};

#define SCAN_BLOCKSIZE        512

#endif /* scan_h */
