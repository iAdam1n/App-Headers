/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBUserSession, NSArray;

@interface FBFollowOrLikeProfileButtonComponent : CKCompositeComponent {

	FBUserSession* _session;
	FBFollowOrLikeProfileButtonComponentGraphQL* _profile;
	BOOL _isPage;
	NSArray* _trackingCodes;

}
+(id)newWithProfile:(const FBFollowOrLikeProfileButtonComponentGraphQL*)arg1 session:(id)arg2 ;
-(void)didTapButton;
@end
