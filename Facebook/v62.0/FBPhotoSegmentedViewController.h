/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBSegmentedContainerViewController.h>
#import <Facebook/FBFullScreenTransitionBoundsProvider.h>

@class FBKVOController, NSString;

@interface FBPhotoSegmentedViewController : FBSegmentedContainerViewController <FBFullScreenTransitionBoundsProvider> {

	FBKVOController* _KVOController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)fb_showNavBarSearchField;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 scenePathContext:(id)arg3 ;
-(CGRect)fullScreenTransitionBoundsForView:(id)arg1 ;
-(void)_titleDidChange;
-(void)setViewControllers:(id)arg1 ;
@end
