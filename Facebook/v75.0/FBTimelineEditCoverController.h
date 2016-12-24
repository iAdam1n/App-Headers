/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:03 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Facebook/FBPresentableViewController.h>

@protocol FBAbstractTimelineHeaderDataSourceFBTimelineCoverPhotoEditableHeaderDataSource, FBTimelineEditCoverControllerDelegate;
@class FBTimelineTemporaryCoverPhoto, UIView, FBUserSession, NSString;

@interface FBTimelineEditCoverController : UITableViewController <FBPresentableViewController> {

	id<FBAbstractTimelineHeaderDataSource><FBTimelineCoverPhotoEditableHeaderDataSource> _headerDataSource;
	FBTimelineTemporaryCoverPhoto* _temporaryCoverPhoto;
	UIView* _headerOverlayView;
	BOOL _swipeEnabled;
	BOOL _isDirectEdit;
	BOOL _hasHeaderOverlay;
	id<FBTimelineEditCoverControllerDelegate> _delegate;
	FBUserSession* _session;

}

@property (assign,nonatomic,__weak) id<FBTimelineEditCoverControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                                              //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) BOOL isDirectEdit;                                                    //@synthesize isDirectEdit=_isDirectEdit - In the implementation block
@property (assign,nonatomic) BOOL hasHeaderOverlay;                                                  //@synthesize hasHeaderOverlay=_hasHeaderOverlay - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long preferredPresentationMethod; 
@property (nonatomic,readonly) unsigned long long preferredPresentationOptions; 
-(BOOL)fb_showNavBarSearchField;
-(id)headerDataSource;
-(unsigned long long)preferredPresentationMethod;
-(unsigned long long)preferredPresentationOptions;
-(void)updateTemporaryPhotoWithHighRes:(id)arg1 ;
-(BOOL)isDirectEdit;
-(void)cancelDirectCoverPhotoEdit;
-(id)initWithSession:(id)arg1 coverPhoto:(id)arg2 isDirectEdit:(BOOL)arg3 ;
-(double)headerOverlayYOffset;
-(id)initWithSession:(id)arg1 coverPhoto:(id)arg2 ;
-(void)setHasHeaderOverlay:(BOOL)arg1 ;
-(BOOL)hasHeaderOverlay;
-(void)setDelegate:(id<FBTimelineEditCoverControllerDelegate>)arg1 ;
-(id<FBTimelineEditCoverControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(BOOL)accessibilityPerformEscape;
-(FBUserSession *)session;
-(void)_cancelButtonTapped:(id)arg1 ;
-(void)_saveButtonTapped:(id)arg1 ;
@end
