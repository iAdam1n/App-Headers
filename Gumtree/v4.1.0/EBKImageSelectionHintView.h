/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:10 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface EBKImageSelectionHintView : UIView {

	UIImageView* _arrowImageView;
	UILabel* _hintLabel;

}

@property (nonatomic,retain) UIImageView * arrowImageView;              //@synthesize arrowImageView=_arrowImageView - In the implementation block
@property (nonatomic,retain) UILabel * hintLabel;                       //@synthesize hintLabel=_hintLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHintLabel:(UILabel *)arg1 ;
-(UILabel *)hintLabel;
-(void)setUp;
-(UIImageView *)arrowImageView;
-(void)setArrowImageView:(UIImageView *)arg1 ;
@end

