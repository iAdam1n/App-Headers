/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet, MNModelRequestConfiguration, MNMultipleUserRequestBehavior;

@interface MNMultipleUserRequest : FBValueObject <NSCopying> {

	BOOL _allowEmailUsers;
	NSSet* _requestedUserIds;
	MNModelRequestConfiguration* _configuration;
	MNMultipleUserRequestBehavior* _behavior;

}

@property (nonatomic,copy,readonly) NSSet * requestedUserIds;                                 //@synthesize requestedUserIds=_requestedUserIds - In the implementation block
@property (nonatomic,readonly) BOOL allowEmailUsers;                                          //@synthesize allowEmailUsers=_allowEmailUsers - In the implementation block
@property (nonatomic,copy,readonly) MNModelRequestConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy,readonly) MNMultipleUserRequestBehavior * behavior;                 //@synthesize behavior=_behavior - In the implementation block
-(id)initWithRequestedUserIds:(id)arg1 allowEmailUsers:(BOOL)arg2 configuration:(id)arg3 behavior:(id)arg4 ;
-(NSSet *)requestedUserIds;
-(BOOL)allowEmailUsers;
-(MNMultipleUserRequestBehavior *)behavior;
-(MNModelRequestConfiguration *)configuration;
@end
