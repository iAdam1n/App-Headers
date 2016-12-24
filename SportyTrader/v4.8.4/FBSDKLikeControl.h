/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <UIKit/UIControl.h>
#import <SportyTrader/FBSDKLiking.h>

@class FBSDKLikeBoxView, FBSDKLikeButton, UIView, UILabel, UIColor, NSString;

@interface FBSDKLikeControl : UIControl <FBSDKLiking> {

	BOOL _isExplicitlyDisabled;
	FBSDKLikeBoxView* _likeBoxView;
	FBSDKLikeButton* _likeButton;
	UIView* _likeButtonContainer;
	UILabel* _socialSentenceLabel;
	UIColor* _foregroundColor;
	unsigned long long _likeControlAuxiliaryPosition;
	unsigned long long _likeControlHorizontalAlignment;
	unsigned long long _likeControlStyle;
	double _preferredMaxLayoutWidth;

}

@property (nonatomic,retain) UIColor * foregroundColor;                                      //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (assign,nonatomic) unsigned long long likeControlAuxiliaryPosition;                //@synthesize likeControlAuxiliaryPosition=_likeControlAuxiliaryPosition - In the implementation block
@property (assign,nonatomic) unsigned long long likeControlHorizontalAlignment;              //@synthesize likeControlHorizontalAlignment=_likeControlHorizontalAlignment - In the implementation block
@property (assign,nonatomic) unsigned long long likeControlStyle;                            //@synthesize likeControlStyle=_likeControlStyle - In the implementation block
@property (assign,nonatomic) double preferredMaxLayoutWidth;                                 //@synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth - In the implementation block
@property (assign,getter=isSoundEnabled,nonatomic) BOOL soundEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * objectID; 
@property (assign,nonatomic) unsigned long long objectType; 
+(void)initialize;
-(id)analyticsParameters;
-(void)_initializeContent;
-(void)_updateLikeBoxCaretPosition;
-(BOOL)isSoundEnabled;
-(void)setSoundEnabled:(BOOL)arg1 ;
-(FBSDKLikeControlLayout)_layoutWithBounds:(CGRect)arg1 subviewSizingBlock:(/*^block*/id)arg2 ;
-(void)_ensureLikeActionController;
-(id)_auxiliaryView;
-(unsigned long long)likeControlAuxiliaryPosition;
-(unsigned long long)likeControlHorizontalAlignment;
-(unsigned long long)likeControlStyle;
-(void)_handleLikeButtonTap:(id)arg1 ;
-(void)_likeActionControllerDidDisableNotification:(id)arg1 ;
-(void)_likeActionControllerDidUpdateNotification:(id)arg1 ;
-(void)_likeActionControllerDidUpdateWithAnimated:(BOOL)arg1 ;
-(double)_auxiliaryViewPadding;
-(void)setLikeControlAuxiliaryPosition:(unsigned long long)arg1 ;
-(void)setLikeControlHorizontalAlignment:(unsigned long long)arg1 ;
-(void)setLikeControlStyle:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setOpaque:(BOOL)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setPreferredMaxLayoutWidth:(double)arg1 ;
-(double)preferredMaxLayoutWidth;
-(void)_updateEnabled;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(UIColor *)foregroundColor;
-(void)setForegroundColor:(UIColor *)arg1 ;
-(NSString *)objectID;
-(void)setObjectType:(unsigned long long)arg1 ;
-(unsigned long long)objectType;
-(void)setObjectID:(NSString *)arg1 ;
@end
