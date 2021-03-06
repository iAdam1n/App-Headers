/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:28 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/CKComponentProvider.h>
#import <Facebook/CKComponentHostingViewDelegate.h>

@class CKComponentHostingView, FBMemorializedPerson, UIScrollView, NSString;

@interface FBMemorialContactIntroViewController : UIViewController <CKComponentProvider, CKComponentHostingViewDelegate> {

	CKComponentHostingView* _componentView;
	FBMemorializedPerson* _person;
	UIScrollView* _scrollView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(BOOL)fb_showNavBarSearchField;
-(void)componentHostingViewDidInvalidateSize:(id)arg1 ;
-(id)initWithMemorializedFBID:(id)arg1 memorializedPersonShortName:(id)arg2 memorialContactName:(id)arg3 gender:(id)arg4 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
@end

