/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SLKAddressBook : NSObject {

	void* _addressBook;

}

@property (readonly) void* addressBook;              //@synthesize addressBook=_addressBook - In the implementation block
+(void)requestAccess:(/*^block*/id)arg1 ;
+(unsigned long long)access;
-(void)loadAddressBookContacts:(/*^block*/id)arg1 ;
-(id)loadAddressBookContacts;
-(id)init;
-(void*)addressBook;
@end

