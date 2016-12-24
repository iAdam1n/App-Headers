/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, LPPhoneNumber;

@interface MNConversationInvitableContact : FBValueObject <NSCopying> {

	NSString* _displayName;
	LPPhoneNumber* _phoneNumber;

}

@property (nonatomic,copy,readonly) NSString * displayName;                   //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy,readonly) LPPhoneNumber * phoneNumber;              //@synthesize phoneNumber=_phoneNumber - In the implementation block
-(id)initWithDisplayName:(id)arg1 phoneNumber:(id)arg2 ;
-(LPPhoneNumber *)phoneNumber;
-(NSString *)displayName;
@end
