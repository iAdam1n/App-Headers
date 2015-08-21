/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:17 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol IGUsertagViewDelegate;
@class UIView, UIImageView, UIPanGestureRecognizer, UILabel, IGUsertag, UIControl, UILongPressGestureRecognizer, IGTapButton, NSString;

@interface IGUsertagView : UIView <UIGestureRecognizerDelegate> {

	UIView* _expandedView;
	UIImageView* _leftBGView;
	UIImageView* _rightBGView;
	double _caretPosition;
	BOOL _shouldRemoveAfterAnimation;
	UIPanGestureRecognizer* _panRecognizer;
	UILabel* _tagLabel;
	CGPoint _panGestureInitialCenter;
	CGPoint _panGestureInitialLocation;
	BOOL _expanded;
	BOOL _isMoving;
	BOOL _flipped;
	BOOL _isEditable;
	BOOL _isActive;
	IGUsertag* _usertag;
	id<IGUsertagViewDelegate> _delegate;
	UIControl* _contentView;
	UILongPressGestureRecognizer* _pressRecognizer;
	IGTapButton* _removeButton;
	double _proposedCaretPosition;
	CGPoint _position;

}

@property (nonatomic,retain) IGUsertag * usertag;                                           //@synthesize usertag=_usertag - In the implementation block
@property (assign,nonatomic) BOOL expanded;                                                 //@synthesize expanded=_expanded - In the implementation block
@property (assign,nonatomic,__weak) id<IGUsertagViewDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIControl * contentView;                                     //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) UILongPressGestureRecognizer * pressRecognizer;              //@synthesize pressRecognizer=_pressRecognizer - In the implementation block
@property (nonatomic,readonly) IGTapButton * removeButton;                                  //@synthesize removeButton=_removeButton - In the implementation block
@property (assign,nonatomic) CGPoint position;                                              //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) BOOL isMoving;                                               //@synthesize isMoving=_isMoving - In the implementation block
@property (assign,nonatomic) BOOL flipped;                                                  //@synthesize flipped=_flipped - In the implementation block
@property (assign,nonatomic) BOOL isEditable;                                               //@synthesize isEditable=_isEditable - In the implementation block
@property (assign,nonatomic) BOOL isActive;                                                 //@synthesize isActive=_isActive - In the implementation block
@property (assign,nonatomic) double caretPosition;                                          //@synthesize caretPosition=_caretPosition - In the implementation block
@property (assign,nonatomic) double proposedCaretPosition;                                  //@synthesize proposedCaretPosition=_proposedCaretPosition - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)onTouchDown;
-(IGUsertag *)usertag;
-(void)show:(BOOL)arg1 withAnimation:(long long)arg2 ;
-(void)setUsertag:(IGUsertag *)arg1 ;
-(void)setExpanded:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)onTap;
-(void)onRemove;
-(void)onDragExit;
-(double)currentWidth;
-(CGRect)proposedFrame;
-(void)reposition;
-(void)handlePanFromRecognizer:(id)arg1 ;
-(UILongPressGestureRecognizer *)pressRecognizer;
-(CGPoint)caretPointWithCenter:(CGPoint)arg1 ;
-(void)hideAndRemove;
-(void)removeAndNotifyDelegate:(BOOL)arg1 ;
-(void)shrink:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)repositionWithCaretAtPosition:(double)arg1 ;
-(BOOL)flipped;
-(double)proposedCaretPosition;
-(void)setProposedCaretPosition:(double)arg1 ;
-(BOOL)isMoving;
-(void)setCaretPosition:(double)arg1 ;
-(double)caretPosition;
-(void)setDelegate:(id<IGUsertagViewDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)init;
-(NSString *)description;
-(id<IGUsertagViewDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)isActive;
-(BOOL)isEditable;
-(void)setPosition:(CGPoint)arg1 ;
-(UIControl *)contentView;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(CGPoint)position;
-(void)didMoveToSuperview;
-(void)setFlipped:(BOOL)arg1 ;
-(void)setIsActive:(BOOL)arg1 ;
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)expanded;
-(void)remove;
-(void)scaleUp;
-(void)updateBackgroundImages;
-(void)setIsEditable:(BOOL)arg1 ;
-(IGTapButton *)removeButton;
@end

