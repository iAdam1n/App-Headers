/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNConversationPerson, MNConversationGroup, MNConversationPage, MNConversationSecurePerson, MNConversationAddressBookContact, MNConversationMontage, MNConversationInvitableContact, MNConversationMontageCameraRoll;

@interface MNConversationContact : NSObject <NSCopying> {

	unsigned long long _subtype;
	MNConversationPerson* _conversationPerson;
	MNConversationGroup* _conversationGroup;
	MNConversationPage* _conversationPage;
	MNConversationSecurePerson* _conversationSecurePerson;
	MNConversationAddressBookContact* _conversationAddressBookContact;
	MNConversationMontage* _conversationMontage;
	MNConversationInvitableContact* _conversationInvitableContact;
	MNConversationMontageCameraRoll* _conversationMontageCameraRoll;

}
+(id)conversationAddressBookContact:(id)arg1 ;
+(id)conversationGroup:(id)arg1 ;
+(id)conversationInvitableContact:(id)arg1 ;
+(id)conversationMontage:(id)arg1 ;
+(id)conversationMontageCameraRoll:(id)arg1 ;
+(id)conversationPage:(id)arg1 ;
+(id)conversationPerson:(id)arg1 ;
+(id)conversationSecurePerson:(id)arg1 ;
-(void)matchConversationPerson:(/*^block*/id)arg1 conversationGroup:(/*^block*/id)arg2 conversationPage:(/*^block*/id)arg3 conversationSecurePerson:(/*^block*/id)arg4 conversationAddressBookContact:(/*^block*/id)arg5 conversationMontage:(/*^block*/id)arg6 conversationInvitableContact:(/*^block*/id)arg7 conversationMontageCameraRoll:(/*^block*/id)arg8 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
