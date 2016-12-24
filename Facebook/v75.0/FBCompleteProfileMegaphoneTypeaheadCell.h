/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <Facebook/FBCompleteProfileMegaphoneSelectableCell.h>

@class UIImageView, UILabel, FBNetworkImageView, FBMemPage, UIColor, NSString;

@interface FBCompleteProfileMegaphoneTypeaheadCell : UITableViewCell <FBCompleteProfileMegaphoneSelectableCell> {

	UIImageView* _topBorderView;
	UILabel* _placeholderLabel;
	FBNetworkImageView* _icon;
	UILabel* _titleLabel;
	UIImageView* _selector;
	BOOL _chosen;
	FBMemPage* _page;
	UIColor* _titleColor;

}

@property (nonatomic,retain) FBMemPage * page;                         //@synthesize page=_page - In the implementation block
@property (nonatomic,copy) NSString * placeholder; 
@property (nonatomic,retain) UIColor * titleColor;                     //@synthesize titleColor=_titleColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isChosen,nonatomic) BOOL chosen;              //@synthesize chosen=_chosen - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 session:(id)arg3 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 session:(id)arg3 showIcon:(BOOL)arg4 ;
-(BOOL)isChosen;
-(void)setChosen:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setPlaceholder:(NSString *)arg1 ;
-(void)setTitleColor:(UIColor *)arg1 ;
-(UIColor *)titleColor;
-(NSString *)placeholder;
-(FBMemPage *)page;
-(void)setPage:(FBMemPage *)arg1 ;
@end
