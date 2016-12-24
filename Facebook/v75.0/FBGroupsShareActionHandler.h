/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:02 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBComposerFlowDelegate;
@class FBUserSession, FBMemGroup, UIViewController, NSArray;

@interface FBGroupsShareActionHandler : NSObject {

	FBUserSession* _session;
	FBMemGroup* _group;
	UIViewController* _hostingViewController;
	id<FBComposerFlowDelegate> _composerViewControllerDelegate;
	NSArray* _shareOptions;

}
-(void)_shareInPostTapped;
-(void)_sendAsMessageTapped;
-(void)_copyLinkTapped;
-(void)_presentShareOptionsFromView:(id)arg1 ;
-(void)presentShareOptions;
-(id)initWithSession:(id)arg1 group:(id)arg2 hostingViewController:(id)arg3 composerViewControllerDelegate:(id)arg4 ;
-(void)presentShareOptionsFromView:(id)arg1 ;
@end
