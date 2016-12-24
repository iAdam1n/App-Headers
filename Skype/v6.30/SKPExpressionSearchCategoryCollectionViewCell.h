/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:38 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/Skype-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UILabel, UIView, SKPExpressionSearchCategoryCollectionViewCellStylesheet;

@interface SKPExpressionSearchCategoryCollectionViewCell : UICollectionViewCell {

	UILabel* _categoryLabel;
	UILabel* _categoryImage;
	UIView* _labelImageContainer;
	SKPExpressionSearchCategoryCollectionViewCellStylesheet* _stylesheet;

}

@property (nonatomic,retain) UILabel * categoryLabel;                                                             //@synthesize categoryLabel=_categoryLabel - In the implementation block
@property (nonatomic,retain) UILabel * categoryImage;                                                             //@synthesize categoryImage=_categoryImage - In the implementation block
@property (nonatomic,retain) UIView * labelImageContainer;                                                        //@synthesize labelImageContainer=_labelImageContainer - In the implementation block
@property (nonatomic,readonly) SKPExpressionSearchCategoryCollectionViewCellStylesheet * stylesheet;              //@synthesize stylesheet=_stylesheet - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(void)setLabelImageContainer:(UIView *)arg1 ;
-(UIView *)labelImageContainer;
-(void)setCategoryLabel:(UILabel *)arg1 ;
-(void)setCategoryImage:(UILabel *)arg1 ;
-(UILabel *)categoryLabel;
-(UILabel *)categoryImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)accessibilityLabel;
-(SKPExpressionSearchCategoryCollectionViewCellStylesheet *)stylesheet;
-(id)contentViewConstraints;
@end
