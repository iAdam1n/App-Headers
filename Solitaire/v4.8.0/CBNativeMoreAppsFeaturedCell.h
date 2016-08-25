/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:42 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <SolitaireFree/CBNativeMoreAppsTableViewCellProtocol.h>

@class CBActionWrapper, UIButton, UIImageView, NSString;

@interface CBNativeMoreAppsFeaturedCell : UITableViewCell <CBNativeMoreAppsTableViewCellProtocol> {

	/*^block*/id _clickCallback;
	CBActionWrapper* _clickWrapper;
	UIButton* _containerButton;
	UIImageView* _cellImageView;

}

@property (nonatomic,retain) CBActionWrapper * clickWrapper;              //@synthesize clickWrapper=_clickWrapper - In the implementation block
@property (nonatomic,retain) UIButton * containerButton;                  //@synthesize containerButton=_containerButton - In the implementation block
@property (nonatomic,retain) UIImageView * cellImageView;                 //@synthesize cellImageView=_cellImageView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) id clickCallback;                                        //@synthesize clickCallback=_clickCallback - In the implementation block
+(double)height;
-(id)clickCallback;
-(void)setClickCallback:(id)arg1 ;
-(void)setContainerButton:(UIButton *)arg1 ;
-(void)setClickWrapper:(CBActionWrapper *)arg1 ;
-(UIButton *)containerButton;
-(CBActionWrapper *)clickWrapper;
-(void)setCellImageView:(UIImageView *)arg1 ;
-(UIImageView *)cellImageView;
-(void)prepareWithCellMeta:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

