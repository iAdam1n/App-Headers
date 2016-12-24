/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, FBMUserName, MNConversationAddressBookContactPhoneNumber;

@interface MNConversationAddressBookContact : FBValueObject <NSCopying> {

	NSNumber* _systemAddressBookIdentifier;
	FBMUserName* _name;
	MNConversationAddressBookContactPhoneNumber* _phoneNumber;

}

@property (nonatomic,copy,readonly) NSNumber * systemAddressBookIdentifier;                                 //@synthesize systemAddressBookIdentifier=_systemAddressBookIdentifier - In the implementation block
@property (nonatomic,copy,readonly) FBMUserName * name;                                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) MNConversationAddressBookContactPhoneNumber * phoneNumber;              //@synthesize phoneNumber=_phoneNumber - In the implementation block
-(id)initWithSystemAddressBookIdentifier:(id)arg1 name:(id)arg2 phoneNumber:(id)arg3 ;
-(NSNumber *)systemAddressBookIdentifier;
-(FBMUserName *)name;
-(MNConversationAddressBookContactPhoneNumber *)phoneNumber;
@end
