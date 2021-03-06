/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAddressBookAccessRequester.h>

@protocol FBAddressBookAccessRequestDelegate;
@class NSString;

@interface FBSystemAddressBookAccessRequester : NSObject <FBAddressBookAccessRequester> {

	void* _addressBook;
	id<FBAddressBookAccessRequestDelegate> _delegate;
	void* _addressbook;

}

@property (assign,nonatomic,__weak) id<FBAddressBookAccessRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) void* addressbook;                                                   //@synthesize addressbook=_addressbook - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)requestAccessToAddressBook;
-(void)displaySystemAlert;
-(void)setAddressbook:(void*)arg1 ;
-(void*)addressbook;
-(void)setDelegate:(id<FBAddressBookAccessRequestDelegate>)arg1 ;
-(void)dealloc;
-(id<FBAddressBookAccessRequestDelegate>)delegate;
@end

