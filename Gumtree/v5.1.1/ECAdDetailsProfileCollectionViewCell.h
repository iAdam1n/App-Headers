/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECAdDetailsCollectionViewCell.h>
#import <Gumtree/ECAdDetailsViewCell.h>

@class UIImageView, UILabel, NSString;

@interface ECAdDetailsProfileCollectionViewCell : ECAdDetailsCollectionViewCell <ECAdDetailsViewCell> {

	UIImageView* _imageView;
	UIImageView* _chevronView;
	UILabel* _memberSinceLabel;
	UILabel* _usernameLabel;
	UILabel* _adCountLabel;

}

@property (nonatomic,retain) UIImageView * imageView;                 //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIImageView * chevronView;               //@synthesize chevronView=_chevronView - In the implementation block
@property (nonatomic,retain) UILabel * memberSinceLabel;              //@synthesize memberSinceLabel=_memberSinceLabel - In the implementation block
@property (nonatomic,retain) UILabel * usernameLabel;                 //@synthesize usernameLabel=_usernameLabel - In the implementation block
@property (nonatomic,retain) UILabel * adCountLabel;                  //@synthesize adCountLabel=_adCountLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setItem:(id)arg1 isSizingCell:(BOOL)arg2 ;
-(UILabel *)adCountLabel;
-(UILabel *)memberSinceLabel;
-(UILabel *)usernameLabel;
-(void)setMemberSinceLabel:(UILabel *)arg1 ;
-(void)setUsernameLabel:(UILabel *)arg1 ;
-(void)setAdCountLabel:(UILabel *)arg1 ;
-(void)awakeFromNib;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(UIImageView *)chevronView;
-(void)setChevronView:(UIImageView *)arg1 ;
@end
