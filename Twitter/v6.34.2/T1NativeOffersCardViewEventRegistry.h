/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:23 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol TFNTwitterCardViewDelegate;
@class UIView;

@interface T1NativeOffersCardViewEventRegistry : NSObject {

	id<TFNTwitterCardViewDelegate> _delegate;
	UIView* _view;
	SEL _didTapContainerSEL;
	SEL _didTapImageSEL;
	SEL _didTapTitleOrBylineTextSEL;
	SEL _didTapCallToActionSEL;
	SEL _didTakeVoidActionSEL;

}

@property (assign,nonatomic,__weak) id<TFNTwitterCardViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIView * view;                                        //@synthesize view=_view - In the implementation block
@property (assign,nonatomic) SEL didTapContainerSEL;                                      //@synthesize didTapContainerSEL=_didTapContainerSEL - In the implementation block
@property (assign,nonatomic) SEL didTapImageSEL;                                          //@synthesize didTapImageSEL=_didTapImageSEL - In the implementation block
@property (assign,nonatomic) SEL didTapTitleOrBylineTextSEL;                              //@synthesize didTapTitleOrBylineTextSEL=_didTapTitleOrBylineTextSEL - In the implementation block
@property (assign,nonatomic) SEL didTapCallToActionSEL;                                   //@synthesize didTapCallToActionSEL=_didTapCallToActionSEL - In the implementation block
@property (assign,nonatomic) SEL didTakeVoidActionSEL;                                    //@synthesize didTakeVoidActionSEL=_didTakeVoidActionSEL - In the implementation block
-(void)registerContainerHighlightControl:(id)arg1 ;
-(void)registerImageHighlightControl:(id)arg1 ;
-(void)registerTitleHighlightControl:(id)arg1 ;
-(void)_registerEventHandlersIfNeeded;
-(void)didTapContainer:(id)arg1 event:(id)arg2 ;
-(void)setDidTapContainerSEL:(SEL)arg1 ;
-(void)didTapImage:(id)arg1 event:(id)arg2 ;
-(void)setDidTapImageSEL:(SEL)arg1 ;
-(void)didTapTitleOrBylineText:(id)arg1 event:(id)arg2 ;
-(void)setDidTapTitleOrBylineTextSEL:(SEL)arg1 ;
-(void)didTapCallToAction:(id)arg1 event:(id)arg2 ;
-(void)setDidTapCallToActionSEL:(SEL)arg1 ;
-(void)didTakeVoidAction;
-(void)setDidTakeVoidActionSEL:(SEL)arg1 ;
-(SEL)didTapContainerSEL;
-(SEL)didTakeVoidActionSEL;
-(SEL)didTapImageSEL;
-(SEL)didTapTitleOrBylineTextSEL;
-(void)_fireClickEvent:(id)arg1 fromView:(id)arg2 forCardViewElementType:(long long)arg3 ;
-(void)registerBylineHighlightControl:(id)arg1 ;
-(void)registerCallToActionButton:(id)arg1 ;
-(SEL)didTapCallToActionSEL;
-(void)setDelegate:(id<TFNTwitterCardViewDelegate>)arg1 ;
-(id)init;
-(id<TFNTwitterCardViewDelegate>)delegate;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(id)initWithView:(id)arg1 ;
@end
