/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:37 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>

@class NSString;

@interface FBSyncPersonName : FBValueObject <NSCopying> {

	NSString* _firstName;
	NSString* _lastName;
	NSString* _displayName;

}

@property (nonatomic,copy,readonly) NSString * firstName;                //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy,readonly) NSString * lastName;                 //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
-(id)initWithFirstName:(id)arg1 lastName:(id)arg2 displayName:(id)arg3 ;
-(NSString *)displayName;
-(NSString *)firstName;
-(NSString *)lastName;
@end

