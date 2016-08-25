/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/ECGroupLabelTableViewCell.h>

@class ECValidatingView;

@interface ECValidatingTableViewCell : ECGroupLabelTableViewCell {

	BOOL _collapseTitle;
	BOOL _wideCell;
	ECValidatingView* _validatingView;
	double _horizontalPadding;
	double _titleLabelWidth;

}

@property (assign,nonatomic) BOOL collapseTitle;                               //@synthesize collapseTitle=_collapseTitle - In the implementation block
@property (assign,nonatomic) double horizontalPadding;                         //@synthesize horizontalPadding=_horizontalPadding - In the implementation block
@property (assign,nonatomic) double titleLabelWidth;                           //@synthesize titleLabelWidth=_titleLabelWidth - In the implementation block
@property (nonatomic,retain) ECValidatingView * validatingView;                //@synthesize validatingView=_validatingView - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets validatingViewInsets; 
@property (assign,getter=isWideCell,nonatomic) BOOL wideCell;                  //@synthesize wideCell=_wideCell - In the implementation block
+(Class)validatingViewClass;
-(BOOL)isWideCell;
-(void)setTitleLabelWidth:(double)arg1 ;
-(void)setWideCell:(BOOL)arg1 ;
-(double)titleLabelWidth;
-(void)setValidatingView:(ECValidatingView *)arg1 ;
-(ECValidatingView *)validatingView;
-(BOOL)collapseTitle;
-(void)setCollapseTitle:(BOOL)arg1 ;
-(UIEdgeInsets)validatingViewInsets;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(void)setHorizontalPadding:(double)arg1 ;
-(double)horizontalPadding;
@end

