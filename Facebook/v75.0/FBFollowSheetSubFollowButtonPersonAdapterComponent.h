/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:11 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@protocol FBQueriedActorFieldsProtocol;
@class FBMemModelObject, FBFollowSheetComponentToolbox;

@interface FBFollowSheetSubFollowButtonPersonAdapterComponent : CKCompositeComponent {

	FBMemModelObject*<FBQueriedActorFieldsProtocol> _target;
	FBFollowSheetComponentToolbox* _toolbox;

}
+(id)newWithStatus:(unsigned long long)arg1 target:(id)arg2 text:(id)arg3 toolbox:(id)arg4 ;
-(void)updateSecondarySubscribeStatus:(id)arg1 ;
-(void)regularFollowAction;
-(void)unfollowAction;
-(void)seeFirstAction;
@end
