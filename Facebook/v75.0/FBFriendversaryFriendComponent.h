/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:02 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBMemPerson, FBFeedToolbox;

@interface FBFriendversaryFriendComponent : CKCompositeComponent {

	FBMemPerson* _person;
	FBFeedToolbox* _toolbox;

}
+(id)newWithPerson:(id)arg1 insets:(UIEdgeInsets)arg2 toolbox:(id)arg3 ;
-(void)didTapForProfile;
-(void)didTapSendMessage;
@end
