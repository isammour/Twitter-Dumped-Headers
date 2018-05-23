//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFSUtilities/NSCoding-Protocol.h>
#import <TFSUtilities/NSCopying-Protocol.h>

@class NSString, TFSReferencedFileReference;

@interface TFSReferencedFile : NSObject <NSCopying, NSCoding>
{
    TFSReferencedFileReference *_reference;
}

@property(retain, nonatomic) TFSReferencedFileReference *reference; // @synthesize reference=_reference;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *path;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAbsolutePath:(id)arg1;
- (id)init;

@end

