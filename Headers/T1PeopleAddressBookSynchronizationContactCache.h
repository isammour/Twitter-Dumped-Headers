//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/NSCoding-Protocol.h>
#import <T1Twitter/NSCopying-Protocol.h>

@class NSArray, NSMutableDictionary;

@interface T1PeopleAddressBookSynchronizationContactCache : NSObject <NSCopying, NSCoding>
{
    NSArray *_canonicalContactsRequiringDeletion;
    NSMutableDictionary *_contactsCache;
}

@property(readonly, copy, nonatomic) NSMutableDictionary *contactsCache; // @synthesize contactsCache=_contactsCache;
@property(copy, nonatomic) NSArray *canonicalContactsRequiringDeletion; // @synthesize canonicalContactsRequiringDeletion=_canonicalContactsRequiringDeletion;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)removeSynchronizedContactsMatchingCanonicalContacts:(id)arg1;
- (void)addCanonicalContactsRequiringDeletion:(id)arg1;
- (void)updateWithContactsCache:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *identifiersOfContactsRequiringSynchronization;
- (void)updateWithSynchronizedContact:(id)arg1;
- (void)updateWithAddressBook:(id)arg1 initialSynchronizationState:(long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithContactsCache:(id)arg1 canonicalContactsRequiringDeletion:(id)arg2;

@end

