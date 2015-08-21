/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:31 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBContactImporterAddressBookReaderDelegate.h>

@protocol FBMessagingContactUploaderDelegate;
@class FBContactImporterAddressBookAccessRequester, FBContactImporterAddressBookReader, FBUserSession, NSEnumerator, NSError;

@interface FBMessagingContactUploader : NSObject <FBContactImporterAddressBookReaderDelegate> {

	FBContactImporterAddressBookAccessRequester* _addressBookAccessRequester;
	FBContactImporterAddressBookReader* _addressBookReader;
	FBUserSession* _session;
	NSEnumerator* _contactsIterator;
	NSError* _lastUploadError;
	BOOL _isUploadingContacts;
	BOOL _isUploadingComplete;
	id<FBMessagingContactUploaderDelegate> _delegate;
	long long _numberOfContactsFound;
	long long _numberOfContactsProcessed;
	long long _numberOfContactsMatched;

}

@property (assign,nonatomic,__weak) id<FBMessagingContactUploaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long numberOfContactsFound;                                   //@synthesize numberOfContactsFound=_numberOfContactsFound - In the implementation block
@property (nonatomic,readonly) long long numberOfContactsProcessed;                               //@synthesize numberOfContactsProcessed=_numberOfContactsProcessed - In the implementation block
@property (nonatomic,readonly) long long numberOfContactsMatched;                                 //@synthesize numberOfContactsMatched=_numberOfContactsMatched - In the implementation block
@property (nonatomic,readonly) BOOL isUploadingContacts;                                          //@synthesize isUploadingContacts=_isUploadingContacts - In the implementation block
@property (nonatomic,readonly) BOOL isUploadingComplete;                                          //@synthesize isUploadingComplete=_isUploadingComplete - In the implementation block
-(void)didAddressBookReadSucceedWithContacts:(id)arg1 ;
-(void)didAddressBookReadFailWithError:(id)arg1 ;
-(void)_uploadContacts:(id)arg1 ;
-(void)_handleUploadError:(id)arg1 ;
-(void)_parseSuccessResponse:(id)arg1 forNumberOfContacts:(long long)arg2 ;
-(void)_prepareAndUploadContactsBatch;
-(void)_uploadContactsBatch:(id)arg1 attemptNumber:(long long)arg2 ;
-(void)_didFinishUploadingContacts;
-(void)_handleUploadResponse:(id)arg1 forNumberOfContacts:(long long)arg2 ;
-(void)makeRequest:(id)arg1 ;
-(void)upload;
-(long long)numberOfContactsFound;
-(long long)numberOfContactsProcessed;
-(long long)numberOfContactsMatched;
-(BOOL)isUploadingContacts;
-(BOOL)isUploadingComplete;
-(void)logEvent:(id)arg1 extraData:(id)arg2 ;
-(void)setDelegate:(id<FBMessagingContactUploaderDelegate>)arg1 ;
-(id<FBMessagingContactUploaderDelegate>)delegate;
-(id)initWithSession:(id)arg1 ;
@end

