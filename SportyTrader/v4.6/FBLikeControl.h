/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:23 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <UIKit/UIControl.h>

@class FBLikeActionController, FBLikeBoxView, FBLikeButton, UIView, UILabel, UIColor, NSString;

@interface FBLikeControl : UIControl {

	FBLikeActionController* _likeActionController;
	FBLikeBoxView* _likeBoxView;
	FBLikeButton* _likeButton;
	UIView* _likeButtonContainer;
	UILabel* _socialSentenceLabel;
	BOOL _soundEnabled;
	UIColor* _foregroundColor;
	unsigned long long _likeControlAuxiliaryPosition;
	unsigned long long _likeControlHorizontalAlignment;
	unsigned long long _likeControlStyle;
	NSString* _objectID;
	unsigned long long _objectType;
	double _preferredMaxLayoutWidth;

}

@property (nonatomic,retain) UIColor * foregroundColor;                                      //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (assign,nonatomic) unsigned long long likeControlAuxiliaryPosition;                //@synthesize likeControlAuxiliaryPosition=_likeControlAuxiliaryPosition - In the implementation block
@property (assign,nonatomic) unsigned long long likeControlHorizontalAlignment;              //@synthesize likeControlHorizontalAlignment=_likeControlHorizontalAlignment - In the implementation block
@property (assign,nonatomic) unsigned long long likeControlStyle;                            //@synthesize likeControlStyle=_likeControlStyle - In the implementation block
@property (nonatomic,copy) NSString * objectID;                                              //@synthesize objectID=_objectID - In the implementation block
@property (assign,nonatomic) unsigned long long objectType;                                  //@synthesize objectType=_objectType - In the implementation block
@property (assign,nonatomic) double preferredMaxLayoutWidth;                                 //@synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth - In the implementation block
@property (assign,getter=isSoundEnabled,nonatomic) BOOL soundEnabled;                        //@synthesize soundEnabled=_soundEnabled - In the implementation block
+(void)initialize;
-(void)_handleLikeButtonTap:(id)arg1 ;
-(void)_updateLikeBoxCaretPosition;
-(void)_resetLikeActionController;
-(id)_analyticsParameters;
-(FBLikeControlLayout)_layoutWithBounds:(CGRect)arg1 subviewSizingBlock:(/*^block*/id)arg2 ;
-(void)_ensureLikeActionController;
-(id)_auxiliaryView;
-(unsigned long long)likeControlAuxiliaryPosition;
-(unsigned long long)likeControlHorizontalAlignment;
-(BOOL)isSoundEnabled;
-(unsigned long long)likeControlStyle;
-(void)_handleLikeButtonTouchUp:(id)arg1 ;
-(void)setSoundEnabled:(BOOL)arg1 ;
-(void)_handleLikeButtonTouchDown:(id)arg1 ;
-(void)_likeActionControllerDidResetNotification:(id)arg1 ;
-(void)_handleLikeActionControllerDidDisableNotification:(id)arg1 ;
-(void)_handleLikeActionControllerDidUpdateNotification:(id)arg1 ;
-(double)_auxiliaryViewPadding;
-(void)setLikeControlAuxiliaryPosition:(unsigned long long)arg1 ;
-(void)setLikeControlHorizontalAlignment:(unsigned long long)arg1 ;
-(void)setLikeControlStyle:(unsigned long long)arg1 ;
-(void)_initializeContent;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setOpaque:(BOOL)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)awakeFromNib;
-(CGSize)intrinsicContentSize;
-(void)setPreferredMaxLayoutWidth:(double)arg1 ;
-(double)preferredMaxLayoutWidth;
-(UIColor *)foregroundColor;
-(void)setForegroundColor:(UIColor *)arg1 ;
-(void)setObjectType:(unsigned long long)arg1 ;
-(unsigned long long)objectType;
-(NSString *)objectID;
-(void)setObjectID:(NSString *)arg1 ;
@end

