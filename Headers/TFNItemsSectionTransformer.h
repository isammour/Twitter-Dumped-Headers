//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFNUI/TFNItemsTransformer-Protocol.h>

@class NSMutableArray, NSString;

@interface TFNItemsSectionTransformer : NSObject <TFNItemsTransformer>
{
    NSMutableArray *_itemTransformerPairs;
}

- (void).cxx_destruct;
- (void)addTransformer:(id)arg1 forItemsMatchingPredicate:(id)arg2;
- (id)sectionsWithItems:(id)arg1;
- (id)transformItem:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

