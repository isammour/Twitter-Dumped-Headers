//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSIndexPath, T1TypeaheadTopicTableRowAdapter, TFNTwitterTypeaheadTopic;

@protocol T1TypeaheadTopicTableRowHost <NSObject>
- (void)typeaheadTopicAdapter:(T1TypeaheadTopicTableRowAdapter *)arg1 didSelectTopic:(TFNTwitterTypeaheadTopic *)arg2 atIndexPath:(NSIndexPath *)arg3;
@end
