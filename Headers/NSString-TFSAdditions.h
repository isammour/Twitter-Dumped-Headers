//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (TFSAdditions)
+ (CDUnknownBlockType)tfs_rejectEmptyStrippedStringsBlock;
- (id)tfs_stringByStrippingNonAlphanumericCharacters;
- (id)tfs_stringByRemovingNullCharacters;
- (id)tfs_stringByTrimmingLeadingOctothorpe;
- (id)tfs_stringByTrimmingWhitespace;
- (id)tfs_stringByTrimmingTrailingWhitespace;
- (id)tfs_stringByTrimmingLeadingWhitespace;
- (id)tfs_stringByTrimmingTrailingSlash;
- (id)tfs_stringByConvertingWhitespaceToNonbreaking;
- (id)tfs_SHA1HashAsHexStringValue;
- (struct _NSRange)tfs_rangeOfCharactersFromSet:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;
- (struct _NSRange)tfs_rangeOfCharactersFromSet:(id)arg1 options:(unsigned long long)arg2;
- (struct _NSRange)tfs_rangeOfCharactersFromSet:(id)arg1;
- (_Bool)tfs_matchesPartialsSearchString:(id)arg1;
- (_Bool)tfs_localizedCaseInsensitiveContainsString:(id)arg1;
- (unsigned long long)tfs_lengthInCodePoints;
- (_Bool)tfs_hasPrefixIgnoringCase:(id)arg1;
- (long long)tfs_hexIntegerValue;
- (_Bool)tfs_containsString:(id)arg1;
- (id)tfs_number;
- (_Bool)tfs_containsOnlyHexNumbers;
- (_Bool)tfs_containsOnlyNumbers;
- (_Bool)tfs_containsPrintableCharacters;
- (_Bool)tfs_isCaseInsensitiveSameAsString:(id)arg1;
@property(readonly, nonatomic, getter=isNotEmptyAfterTrimmingWhitespace) _Bool notEmptyAfterTrimmingWhitespace;
@property(readonly, nonatomic) NSString *stringValue;
@end
