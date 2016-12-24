/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:02 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@protocol FBIntentHandler;
@class FBUserSession, FBMemGroup;

@interface FBGroupItemComponent : CKCompositeComponent {

	id<FBIntentHandler> _intentHandler;
	FBUserSession* _session;
	FBMemGroup* _group;

}

@property (nonatomic,readonly) FBUserSession * session;              //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) FBMemGroup * group;                   //@synthesize group=_group - In the implementation block
+(id)newWithGroup:(id)arg1 session:(id)arg2 intentHandler:(id)arg3 options:(const FBGroupItemOptions*)arg4 ;
-(void)didTapGroup;
-(void)leaveGroup;
-(FBMemGroup *)group;
-(FBUserSession *)session;
-(void)joinGroup;
@end
