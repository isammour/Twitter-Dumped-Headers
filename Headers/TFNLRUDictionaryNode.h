//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TFNLRUDictionaryNode : NSObject
{
    id _key;
    id _object;
    unsigned long long _cost;
    TFNLRUDictionaryNode *_next;
    TFNLRUDictionaryNode *_previous;
}

@property(nonatomic) __weak TFNLRUDictionaryNode *previous; // @synthesize previous=_previous;
@property(retain, nonatomic) TFNLRUDictionaryNode *next; // @synthesize next=_next;
@property(nonatomic) unsigned long long cost; // @synthesize cost=_cost;
@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(retain, nonatomic) id key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)description;

@end
