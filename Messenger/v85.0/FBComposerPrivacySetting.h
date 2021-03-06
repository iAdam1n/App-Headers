/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:23 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class FBPrivacyEntity, NSString;

@interface FBComposerPrivacySetting : FBValueObject <NSCopying, NSCoding> {

	FBPrivacyEntity* _privacyEntity;
	NSString* _name;
	NSString* _explanation;
	unsigned long long _iconType;
	long long _restrictiveness;

}

@property (nonatomic,copy,readonly) FBPrivacyEntity * privacyEntity;              //@synthesize privacyEntity=_privacyEntity - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * explanation;                       //@synthesize explanation=_explanation - In the implementation block
@property (nonatomic,readonly) unsigned long long iconType;                       //@synthesize iconType=_iconType - In the implementation block
@property (nonatomic,readonly) long long restrictiveness;                         //@synthesize restrictiveness=_restrictiveness - In the implementation block
-(FBPrivacyEntity *)privacyEntity;
-(long long)restrictiveness;
-(id)initWithPrivacyEntity:(id)arg1 name:(id)arg2 explanation:(id)arg3 iconType:(unsigned long long)arg4 restrictiveness:(long long)arg5 ;
-(NSString *)name;
-(unsigned long long)iconType;
-(NSString *)explanation;
@end

