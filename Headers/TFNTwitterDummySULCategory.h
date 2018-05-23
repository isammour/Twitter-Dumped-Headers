//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNTwitterSULCategory.h>

#import <T1Twitter/TFNTwitterDummyObject-Protocol.h>

@class NSString;

@interface TFNTwitterDummySULCategory : TFNTwitterSULCategory <TFNTwitterDummyObject>
{
    _Bool _loading;
    long long _dummyObjectType;
    NSString *_messageText;
    NSString *_messageSubtext;
    CDUnknownBlockType _actionBlock;
}

+ (id)dummySULCategoryOfType:(long long)arg1;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(copy, nonatomic) NSString *messageSubtext; // @synthesize messageSubtext=_messageSubtext;
@property(copy, nonatomic) NSString *messageText; // @synthesize messageText=_messageText;
@property(nonatomic) long long dummyObjectType; // @synthesize dummyObjectType=_dummyObjectType;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
