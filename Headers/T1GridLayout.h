//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface T1GridLayout : NSObject
{
    struct CGSize _frameSize;
    double _gutterWidth;
    CDStruct_5e758c1a _gridSize;
}

- (struct CGRect)frameForSubgridAtPoint:(CDStruct_5e758c1a)arg1 withGridSize:(CDStruct_5e758c1a)arg2;
- (id)initWithFrameSize:(struct CGSize)arg1 gridSize:(CDStruct_5e758c1a)arg2 gutterWidth:(double)arg3;
- (id)init;

@end

