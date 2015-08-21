/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:36 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBAddressBookAccessRequestDelegate.h>
#import <Messenger/FBAddressBookReaderDelegate.h>
#import <Messenger/FBAddressBookAccessRequester.h>
#import <Messenger/FBAddressBookReader.h>
#import <Messenger/FBAddressBookAccessPermissionChecker.h>

@protocol OS_dispatch_queue, FBAddressBookAccessRequestDelegate, FBAddressBookReaderDelegate;
@class FBSystemAddressBookAccessRequester, NSObject, FBSystemAddressBookReader, NSString;

@interface FBSystemAddressBook : NSObject <FBAddressBookAccessRequestDelegate, FBAddressBookReaderDelegate, FBAddressBookAccessRequester, FBAddressBookReader, FBAddressBookAccessPermissionChecker> {

	FBSystemAddressBookAccessRequester* _accessRequester;
	NSObject*<OS_dispatch_queue> _queueToDispatchEventsOnto;
	FBSystemAddressBookReader* _reader;
	id<FBAddressBookAccessRequestDelegate> _accessRequestDelegate;
	id<FBAddressBookReaderDelegate> _readerDelegate;

}

@property (assign,nonatomic,__weak) id<FBAddressBookAccessRequestDelegate> accessRequestDelegate;              //@synthesize accessRequestDelegate=_accessRequestDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBAddressBookReaderDelegate> readerDelegate;                            //@synthesize readerDelegate=_readerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)readAddressBook;
-(void)requestAccessToAddressBook;
-(void)accessToAddressBookDenied;
-(void)accessToAddressBookGranted;
-(void)didReadAddressBookWithContacts:(id)arg1 ;
-(unsigned long long)addressBookAccessPermission;
-(id)initWithQueueOntoWhichEventsAreDispatched:(id)arg1 ;
-(id<FBAddressBookAccessRequestDelegate>)accessRequestDelegate;
-(void)setAccessRequestDelegate:(id<FBAddressBookAccessRequestDelegate>)arg1 ;
-(id<FBAddressBookReaderDelegate>)readerDelegate;
-(void)setReaderDelegate:(id<FBAddressBookReaderDelegate>)arg1 ;
@end

