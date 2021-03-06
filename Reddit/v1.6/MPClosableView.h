/*
* This header is generated by classdump-dyld 1.0
* on Friday, September 2, 2016 at 11:33:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/B5820A38-022A-49BE-9A80-72DC946299E2/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/Reddit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol MPClosableViewDelegate;
@class UIButton, UIImage, MPUserInteractionGestureRecognizer, NSString;

@interface MPClosableView : UIView <UIGestureRecognizerDelegate> {

	BOOL _wasTapped;
	id<MPClosableViewDelegate> _delegate;
	long long _closeButtonType;
	long long _closeButtonLocation;
	UIButton* _closeButton;
	UIImage* _closeButtonImage;
	MPUserInteractionGestureRecognizer* _userInteractionRecognizer;

}

@property (nonatomic,retain) UIButton * closeButton;                                                      //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,retain) UIImage * closeButtonImage;                                                  //@synthesize closeButtonImage=_closeButtonImage - In the implementation block
@property (nonatomic,retain) MPUserInteractionGestureRecognizer * userInteractionRecognizer;              //@synthesize userInteractionRecognizer=_userInteractionRecognizer - In the implementation block
@property (assign,nonatomic) BOOL wasTapped;                                                              //@synthesize wasTapped=_wasTapped - In the implementation block
@property (assign,nonatomic,__weak) id<MPClosableViewDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long closeButtonType;                                                   //@synthesize closeButtonType=_closeButtonType - In the implementation block
@property (assign,nonatomic) long long closeButtonLocation;                                               //@synthesize closeButtonLocation=_closeButtonLocation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 closeButtonType:(long long)arg2 ;
-(void)handleInteraction:(id)arg1 ;
-(void)closeButtonPressed;
-(void)setCloseButtonType:(long long)arg1 ;
-(MPUserInteractionGestureRecognizer *)userInteractionRecognizer;
-(long long)closeButtonLocation;
-(UIImage *)closeButtonImage;
-(void)setWasTapped:(BOOL)arg1 ;
-(void)setCloseButtonLocation:(long long)arg1 ;
-(long long)closeButtonType;
-(BOOL)wasTapped;
-(void)setCloseButtonImage:(UIImage *)arg1 ;
-(void)setUserInteractionRecognizer:(MPUserInteractionGestureRecognizer *)arg1 ;
-(void)setDelegate:(id<MPClosableViewDelegate>)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(id<MPClosableViewDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(UIButton *)closeButton;
-(void)setCloseButton:(UIButton *)arg1 ;
@end

