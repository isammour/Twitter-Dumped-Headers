//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterMotionGraphics/TMGLayerController.h>

@class NSMutableArray;

@interface TMGShapeLayerController : TMGLayerController
{
    vector_5e77763f _vectorGroups;
    NSMutableArray *_vectorShapeLayerControllers;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)playAnimationFromTime:(double)arg1 toTime:(double)arg2 withDuration:(double)arg3;
- (void)updateLayer;
- (void)setTime:(double)arg1;
- (void)addVectorShapeLayersForGroup:(shared_ptr_3d3259f2)arg1;
- (vector_5e77763f)subGroupsOfGroup:(shared_ptr_3d3259f2)arg1;
- (void)addControllersForGroup:(shared_ptr_7a2d6558)arg1 withParentGroup:(shared_ptr_3d3259f2)arg2;
- (void)setDebugRendering:(_Bool)arg1;
- (void)addControllersForGroup:(shared_ptr_7a2d6558)arg1;
- (id)initWithMotionGraphicsLayer:(shared_ptr_e9b2ea4b)arg1;

@end
