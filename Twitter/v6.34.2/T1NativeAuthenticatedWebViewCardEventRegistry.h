/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:30 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol TFNTwitterCardViewDelegate;
@class UIView, T1NativeAuthenticatedWebViewCardModel;

@interface T1NativeAuthenticatedWebViewCardEventRegistry : NSObject {

	UIView* _view;
	id<TFNTwitterCardViewDelegate> _delegate;
	T1NativeAuthenticatedWebViewCardModel* _viewModel;
	SEL _didTapTitleSEL;
	SEL _didTapCallToActionSEL;
	SEL _didTapImageSEL;
	SEL _didTapContainerSEL;

}

@property (nonatomic,__weak,readonly) UIView * view;                                         //@synthesize view=_view - In the implementation block
@property (assign,nonatomic,__weak) id<TFNTwitterCardViewDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) T1NativeAuthenticatedWebViewCardModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,nonatomic) SEL didTapTitleSEL;                                             //@synthesize didTapTitleSEL=_didTapTitleSEL - In the implementation block
@property (assign,nonatomic) SEL didTapCallToActionSEL;                                      //@synthesize didTapCallToActionSEL=_didTapCallToActionSEL - In the implementation block
@property (assign,nonatomic) SEL didTapImageSEL;                                             //@synthesize didTapImageSEL=_didTapImageSEL - In the implementation block
@property (assign,nonatomic) SEL didTapContainerSEL;                                         //@synthesize didTapContainerSEL=_didTapContainerSEL - In the implementation block
-(void)registerContainerHighlightControl:(id)arg1 ;
-(void)registerImageHighlightControl:(id)arg1 ;
-(void)registerTitleHighlightControl:(id)arg1 ;
-(T1NativeAuthenticatedWebViewCardModel *)viewModel;
-(void)setViewModel:(T1NativeAuthenticatedWebViewCardModel *)arg1 ;
-(void)didTapContainer:(id)arg1 event:(id)arg2 ;
-(void)setDidTapContainerSEL:(SEL)arg1 ;
-(void)didTapImage:(id)arg1 event:(id)arg2 ;
-(void)setDidTapImageSEL:(SEL)arg1 ;
-(void)didTapCallToAction:(id)arg1 event:(id)arg2 ;
-(void)setDidTapCallToActionSEL:(SEL)arg1 ;
-(SEL)didTapContainerSEL;
-(SEL)didTapImageSEL;
-(void)registerCallToActionButton:(id)arg1 ;
-(SEL)didTapCallToActionSEL;
-(void)_registerEventHandlers;
-(void)setDidTapTitleSEL:(SEL)arg1 ;
-(SEL)didTapTitleSEL;
-(void)didTapTitle:(id)arg1 event:(id)arg2 ;
-(void)_didTap:(id)arg1 event:(id)arg2 eventType:(id)arg3 elementType:(long long)arg4 ;
-(void)setDelegate:(id<TFNTwitterCardViewDelegate>)arg1 ;
-(id)init;
-(id<TFNTwitterCardViewDelegate>)delegate;
-(UIView *)view;
-(id)initWithView:(id)arg1 ;
@end

