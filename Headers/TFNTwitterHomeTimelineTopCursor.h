//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/NSCoding-Protocol.h>

@class NSString;

@interface TFNTwitterHomeTimelineTopCursor : NSObject <NSCoding>
{
    NSString *_cursor;
    long long _cursorType;
}

@property(readonly, nonatomic) long long cursorType; // @synthesize cursorType=_cursorType;
@property(readonly, nonatomic) NSString *cursor; // @synthesize cursor=_cursor;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTopCursor:(id)arg1 topCursorType:(long long)arg2;

@end

