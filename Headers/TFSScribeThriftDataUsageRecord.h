//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFSScribeThrift/NSCoding-Protocol.h>
#import <TFSScribeThrift/TBase-Protocol.h>

@class NSString, TFSScribeThriftDataCategory, TFSScribeThriftDataLinkLayer;

@interface TFSScribeThriftDataUsageRecord : NSObject <TBase, NSCoding>
{
    _Bool _layerIsSet;
    _Bool _categoryIsSet;
    _Bool _attributionIsSet;
    _Bool _stackIsSet;
    _Bool _stateIsSet;
    _Bool _rxBytesIsSet;
    _Bool _txBytesIsSet;
    TFSScribeThriftDataLinkLayer *_layer;
    TFSScribeThriftDataCategory *_category;
    long long _attribution;
    long long _stack;
    long long _state;
    long long _rxBytes;
    long long _txBytes;
}

@property(readonly, nonatomic) _Bool txBytesIsSet; // @synthesize txBytesIsSet=_txBytesIsSet;
@property(nonatomic) long long txBytes; // @synthesize txBytes=_txBytes;
@property(readonly, nonatomic) _Bool rxBytesIsSet; // @synthesize rxBytesIsSet=_rxBytesIsSet;
@property(nonatomic) long long rxBytes; // @synthesize rxBytes=_rxBytes;
@property(readonly, nonatomic) _Bool stateIsSet; // @synthesize stateIsSet=_stateIsSet;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) _Bool stackIsSet; // @synthesize stackIsSet=_stackIsSet;
@property(nonatomic) long long stack; // @synthesize stack=_stack;
@property(readonly, nonatomic) _Bool attributionIsSet; // @synthesize attributionIsSet=_attributionIsSet;
@property(nonatomic) long long attribution; // @synthesize attribution=_attribution;
@property(readonly, nonatomic) _Bool categoryIsSet; // @synthesize categoryIsSet=_categoryIsSet;
@property(retain, nonatomic) TFSScribeThriftDataCategory *category; // @synthesize category=_category;
@property(readonly, nonatomic) _Bool layerIsSet; // @synthesize layerIsSet=_layerIsSet;
@property(retain, nonatomic) TFSScribeThriftDataLinkLayer *layer; // @synthesize layer=_layer;
- (void).cxx_destruct;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLayer:(id)arg1 category:(id)arg2 attribution:(long long)arg3 stack:(long long)arg4 state:(long long)arg5 rxBytes:(long long)arg6 txBytes:(long long)arg7;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

