/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBVideoViewManager, FBMediaUFIBarController;


@protocol FBFullScreenVideoViewControlling <FBDisplayableMediaTransitionManagerDelegate,FBVideoViewControllerAnimatedTransitioningDataSource>
@property (nonatomic,readonly) FBVideoViewManager * viewManager; 
@property (assign,nonatomic) BOOL autoDismissWhenVideoFinishes; 
@property (nonatomic,readonly) BOOL canAutoAdvance; 
@property (nonatomic,readonly) FBMediaUFIBarController * ufiBarController; 
@property (assign,nonatomic,__weak) id<FBVideoPresentingDelegate> fullscreenVideoDelegate; 
@property (nonatomic,__weak,readonly) id<FBScrollPositionModifyingController> containingScrollController; 
@property (assign,nonatomic) BOOL preventAutoPlayIfManuallyPaused; 
@optional
-(id)dismissalGestureRecognizingView;

@required
-(FBVideoViewManager *)viewManager;
-(void)setAutoDismissWhenVideoFinishes:(BOOL)arg1;
-(void)setPreventAutoPlayIfManuallyPaused:(BOOL)arg1;
-(void)resetViewManager;
-(void)didFinishAnimatingViewAfterCancelingDismissal:(BOOL)arg1;
-(void)configureViewManager;
-(FBMediaUFIBarController *)ufiBarController;
-(BOOL)canAutoAdvance;
-(BOOL)autoDismissWhenVideoFinishes;
-(id<FBVideoPresentingDelegate>)fullscreenVideoDelegate;
-(void)setFullscreenVideoDelegate:(id)arg1;
-(id<FBScrollPositionModifyingController>)containingScrollController;
-(BOOL)preventAutoPlayIfManuallyPaused;
-(void)dismissWithCompletion:(/*^block*/id)arg1;

@end
