//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MNNModelReader, NSString;

@interface MNNLayer : NSObject
{
    int _stride;
    int _numInputPlanes;
    int _numOutputPlanes;
    int _winogradKernelWidth;
    int _winogradKernelHeight;
    long long _type;
    long long _activationFunction;
    MNNModelReader *_modelFileReader;
    NSString *_layerKey;
}

@property(retain, nonatomic) NSString *layerKey; // @synthesize layerKey=_layerKey;
@property(retain, nonatomic) MNNModelReader *modelFileReader; // @synthesize modelFileReader=_modelFileReader;
@property(readonly, nonatomic) int winogradKernelHeight; // @synthesize winogradKernelHeight=_winogradKernelHeight;
@property(readonly, nonatomic) int winogradKernelWidth; // @synthesize winogradKernelWidth=_winogradKernelWidth;
@property(readonly, nonatomic) int numOutputPlanes; // @synthesize numOutputPlanes=_numOutputPlanes;
@property(readonly, nonatomic) int numInputPlanes; // @synthesize numInputPlanes=_numInputPlanes;
@property(readonly, nonatomic) long long activationFunction; // @synthesize activationFunction=_activationFunction;
@property(readonly, nonatomic) int stride; // @synthesize stride=_stride;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long biasCount;
@property(readonly, nonatomic) unsigned long long weightCount;
@property(readonly, nonatomic) unsigned long long alphaCount;
@property(readonly, nonatomic) short *biases;
@property(readonly, nonatomic) short *weights;
@property(readonly, nonatomic) short *alphas;
- (id)initWithModelFileReader:(id)arg1 layerIndex:(int)arg2;

@end
