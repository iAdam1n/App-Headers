/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/MNAddressBookContactStoring.h>

@protocol OS_dispatch_queue;
@class NSObject, NSArray;

@interface MNAddressBookContactStore : NSObject <MNAddressBookContactStoring> {

	NSObject*<OS_dispatch_queue> _storageQueue;
	NSArray* _contacts;

}
-(void)clearStoredContacts;
-(void)storeContacts:(id)arg1 ;
-(void)clearStoredContactsWithIdentifiers:(id)arg1 ;
-(id)fetchAddressBookContactsWithFetchLimit:(unsigned long long)arg1 ;
-(id)fetchAddressBookContactsWithIdentifiers:(id)arg1 fetchLimit:(unsigned long long)arg2 ;
-(id)fetchAddressBookContactsWithPartialName:(id)arg1 fetchLimit:(unsigned long long)arg2 ;
-(id)fetchAddressBookContactsWithPartialNumber:(id)arg1 fetchLimit:(unsigned long long)arg2 ;
-(id)initWithStorageQueue:(id)arg1 ;
@end
