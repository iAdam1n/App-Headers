/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/CKComponentHostingViewDelegate.h>
#import <Facebook/CKComponentProvider.h>
#import <Facebook/MFMailComposeViewControllerDelegate.h>

@protocol FBQueriedPageActionFieldsProtocol, FBPageTabFooterViewControllerDelegate, FBMemPageCardControllerDelegate, FBPageActionHandling;
@class CKComponentHostingView, NSString, FBUserSession, FBMemPage, FBPageCTALogger, FBPageActionHandlerToolbox, FBConsistentLookasideCacheObservationHandle;

@interface FBPageTabFooterViewController : UIViewController <CKComponentHostingViewDelegate, CKComponentProvider, MFMailComposeViewControllerDelegate> {

	CKComponentHostingView* _hostingView;
	NSString* _pageId;
	NSString* _pageName;
	NSString* _tabActionType;
	FBUserSession* _session;
	NSString* _analyticsUUID;
	id<FBQueriedPageActionFieldsProtocol> _primaryAction;
	FBMemPage* _page;
	id<FBPageTabFooterViewControllerDelegate> _delegate;
	id<FBMemPageCardControllerDelegate> _cardControllerDelegate;
	FBPageCTALogger* _ctaLogger;
	FBPageActionHandlerToolbox* _pageActionHandlerToolbox;
	id<FBPageActionHandling> _currentNonCTAActionHandler;
	FBConsistentLookasideCacheObservationHandle* _clcHandle;
	BOOL _viewControllerNeedsReload;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(void)componentHostingViewDidInvalidateSize:(id)arg1 ;
-(void)_fetchData;
-(void)_setUpTopBorderShadow;
-(void)_cleanupClcObserver;
-(void)_primaryButtonTapAction:(id)arg1 actionType:(id)arg2 ;
-(void)_consistentFieldsDidChange:(id)arg1 ;
-(void)_updateDataAndView:(id)arg1 ;
-(void)_setClcObserver;
-(id)initWithPageId:(id)arg1 tabActionType:(id)arg2 pageName:(id)arg3 session:(id)arg4 analyticsUUID:(id)arg5 delegate:(id)arg6 cardControllerDelegate:(id)arg7 ;
-(void)setNeedsReloadFooterView;
-(void)reloadFooterViewIfNeeded;
-(BOOL)containsStatefulActions;
-(void)dealloc;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3 ;
-(void)_handleError:(id)arg1 ;
-(void)_handleResponse:(id)arg1 ;
@end
