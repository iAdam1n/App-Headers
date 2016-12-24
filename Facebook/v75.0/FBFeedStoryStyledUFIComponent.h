/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBMemFeedStory, FBFeedEventBus, FBFeedToolbox;

@interface FBFeedStoryStyledUFIComponent : CKCompositeComponent {

	FBMemFeedStory* _story;
	CKTypedComponentAction<> _likeAction;
	FBFeedEventBus* _eventBus;
	FBFeedToolbox* _toolbox;

}
+(id)newWithStory:(id)arg1 likeAction:(CKTypedComponentAction<>)arg2 commentAction:(CKTypedComponentAction<>)arg3 shareAction:(CKTypedComponentAction<>)arg4 countsAction:(CKTypedComponentAction<>)arg5 inlineVoiceSwitcherAction:(CKTypedComponentAction<>)arg6 options:(const FBFeedStoryStyledUFIComponentOptions*)arg7 toolbox:(id)arg8 ;
-(void)viewerDidLike:(id)arg1 context:(id)arg2 ;
-(void)viewerDidReact:(id)arg1 context:(id)arg2 ;
@end
