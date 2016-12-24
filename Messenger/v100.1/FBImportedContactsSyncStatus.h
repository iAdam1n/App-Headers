/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface FBImportedContactsSyncStatus : FBValueObject <NSCopying> {

	unsigned long long _numberOfContactsAttemptedToMatch;
	NSArray* _importedSyncPersons;

}

@property (nonatomic,readonly) unsigned long long numberOfContactsAttemptedToMatch;              //@synthesize numberOfContactsAttemptedToMatch=_numberOfContactsAttemptedToMatch - In the implementation block
@property (nonatomic,copy,readonly) NSArray * importedSyncPersons;                               //@synthesize importedSyncPersons=_importedSyncPersons - In the implementation block
-(NSArray *)importedSyncPersons;
-(id)initWithNumberOfContactsAttemptedToMatch:(unsigned long long)arg1 importedSyncPersons:(id)arg2 ;
-(unsigned long long)numberOfContactsAttemptedToMatch;
@end
