//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface SKPIngestionContact : NSObject
{
    int _recordID;
    NSArray *_phoneNumbers;
    NSArray *_emailAddresses;
}

@property(retain, nonatomic) NSArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property(retain, nonatomic) NSArray *phoneNumbers; // @synthesize phoneNumbers=_phoneNumbers;
@property(nonatomic) int recordID; // @synthesize recordID=_recordID;
- (void).cxx_destruct;
- (id)valueAtIndex:(unsigned long long)arg1 forMultiPropertyWithID:(int)arg2 onRecordRef:(void *)arg3;
- (id)valueForPropertyWithID:(int)arg1 onRecordRef:(void *)arg2;
- (id)initWithABRecordRef:(void *)arg1;
- (id)init;

@end
