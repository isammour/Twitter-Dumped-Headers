//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSEAutoCompletionViewModel : NSObject
{
}

- (id)insertAutoCompletionWord:(id)arg1 inWordAtLocation:(unsigned long long)arg2 inText:(id)arg3 insertionEndLocation:(unsigned long long *)arg4;
- (id)wordAroundSelectedLocation:(unsigned long long)arg1 inText:(id)arg2;
- (id)stripUsernameMarkersFromWord:(id)arg1;
- (_Bool)wordIsUsername:(id)arg1;
- (_Bool)wordIsHashtag:(id)arg1;

@end

