/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <UIKit/UIButton.h>
#import <UIKit/UIAppearance.h>

@class NSMutableDictionary, UIActivityIndicatorView, UIColor, NSString;

@interface ECThemedButton : UIButton <UIAppearance> {

	NSMutableDictionary* _textStylesByControlState;
	/*^block*/id _action;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,retain) NSMutableDictionary * textStylesByControlState;              //@synthesize textStylesByControlState=_textStylesByControlState - In the implementation block
@property (copy) id action;                                                               //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;                           //@synthesize spinner=_spinner - In the implementation block
@property (assign,nonatomic) double cornerRadius; 
@property (nonatomic,retain) UIColor * borderColor; 
@property (assign,nonatomic) double borderWidth; 
@property (assign,getter=isLoading,nonatomic) BOOL loading; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_UIAppearance_setCornerRadius:(double)arg1 ;
-(void)_UIAppearance_setTitleLabelTextStyle:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_UIAppearance_setTintColor:(id)arg1 ;
-(void)setTitleLabelTextStyle:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setTextStylesByControlState:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)textStylesByControlState;
-(id)titleLabelTextStyleForState:(unsigned long long)arg1 ;
-(void)setTitleLabelTextStyleAttribute:(id)arg1 forAttributeName:(id)arg2 forState:(unsigned long long)arg3 ;
-(void)callActionBlock;
-(void)setTitleLabelTextStyleAttributeInAllStates:(id)arg1 forAttributeName:(id)arg2 ;
-(void)setAction:(/*^block*/id)arg1 forControlEvents:(unsigned long long)arg2 ;
-(void)setTitle:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)action;
-(void)setCornerRadius:(double)arg1 ;
-(void)awakeFromNib;
-(void)setTintColor:(id)arg1 ;
-(double)cornerRadius;
-(void)setAction:(id)arg1 ;
-(void)setBorderWidth:(double)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(UIColor *)borderColor;
-(BOOL)isLoading;
-(double)borderWidth;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)setLoading:(BOOL)arg1 ;
@end
