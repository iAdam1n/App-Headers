/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECAdDetailsCollectionViewCell.h>
#import <Gumtree/ECAdDetailsViewCell.h>

@class UILabel, NSLayoutConstraint, NSString;

@interface ECAdDetailsBulletsCollectionViewCell : ECAdDetailsCollectionViewCell <ECAdDetailsViewCell> {

	UILabel* _bulletLabel1;
	UILabel* _bulletLabel2;
	UILabel* _bulletLabel3;
	NSLayoutConstraint* _bullet1to2VerticalSpacingConstraint;
	NSLayoutConstraint* _bullet2to3VerticalSpacingConstraint;

}

@property (nonatomic,retain) UILabel * bulletLabel1;                                                //@synthesize bulletLabel1=_bulletLabel1 - In the implementation block
@property (nonatomic,retain) UILabel * bulletLabel2;                                                //@synthesize bulletLabel2=_bulletLabel2 - In the implementation block
@property (nonatomic,retain) UILabel * bulletLabel3;                                                //@synthesize bulletLabel3=_bulletLabel3 - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bullet1to2VerticalSpacingConstraint;              //@synthesize bullet1to2VerticalSpacingConstraint=_bullet1to2VerticalSpacingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bullet2to3VerticalSpacingConstraint;              //@synthesize bullet2to3VerticalSpacingConstraint=_bullet2to3VerticalSpacingConstraint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setItem:(id)arg1 isSizingCell:(BOOL)arg2 ;
-(UILabel *)bulletLabel1;
-(UILabel *)bulletLabel2;
-(UILabel *)bulletLabel3;
-(NSLayoutConstraint *)bullet1to2VerticalSpacingConstraint;
-(NSLayoutConstraint *)bullet2to3VerticalSpacingConstraint;
-(void)setBulletLabel1:(UILabel *)arg1 ;
-(void)setBulletLabel2:(UILabel *)arg1 ;
-(void)setBulletLabel3:(UILabel *)arg1 ;
-(void)setBullet1to2VerticalSpacingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setBullet2to3VerticalSpacingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)awakeFromNib;
@end

