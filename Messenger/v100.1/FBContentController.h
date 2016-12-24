/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:20 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBContentController <NSObject>
@property (assign,nonatomic,__weak) id<UIScrollViewDelegate> scrollDelegate; 
@property (assign,nonatomic,__weak) id<FBNavigationChromePresenter> chromePresenter; 
@property (assign,nonatomic,__weak) id<FBLoadingProgressDelegate> loadingProgressDelegate; 
@property (assign,nonatomic) UIEdgeInsets contentInset; 
@required
-(BOOL)canRespondToGestureInDirection:(long long)arg1 withTouches:(id)arg2;
-(void)cancelScrolling;
-(void)viewDidEnterPreloadingViewport;
-(void)viewDidExitPreloadingViewport;
-(void)didGainActiveFocus;
-(void)didLoseActiveFocus;
-(id<FBNavigationChromePresenter>)chromePresenter;
-(void)setChromePresenter:(id)arg1;
-(id<FBLoadingProgressDelegate>)loadingProgressDelegate;
-(void)setLoadingProgressDelegate:(id)arg1;
-(UIEdgeInsets)contentInset;
-(void)setContentInset:(UIEdgeInsets)arg1;
-(id<UIScrollViewDelegate>)scrollDelegate;
-(void)setScrollDelegate:(id)arg1;
-(void)scrollToTopAnimated:(BOOL)arg1;

@end
