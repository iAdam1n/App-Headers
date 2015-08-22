/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:26 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNTableViewCell.h>

@class UIView, UILabel;

@interface T1ExpandableCommerceDescriptiveTextCell : TFNTableViewCell {

	BOOL _hasAppliedConstraints;
	UIView* _containerView;
	UILabel* _titleLabel;
	UILabel* _descriptiveTextLabel;
	UILabel* _readMoreLabel;

}

@property (nonatomic,readonly) UIView * containerView;                       //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * descriptiveTextLabel;               //@synthesize descriptiveTextLabel=_descriptiveTextLabel - In the implementation block
@property (nonatomic,readonly) UILabel * readMoreLabel;                      //@synthesize readMoreLabel=_readMoreLabel - In the implementation block
@property (nonatomic,readonly) BOOL descriptiveTextIsTruncated; 
@property (assign,nonatomic) BOOL hasAppliedConstraints;                     //@synthesize hasAppliedConstraints=_hasAppliedConstraints - In the implementation block
-(UILabel *)descriptiveTextLabel;
-(UILabel *)readMoreLabel;
-(BOOL)hasAppliedConstraints;
-(void)setHasAppliedConstraints:(BOOL)arg1 ;
-(void)showReadMoreLabelWithText:(id)arg1 ;
-(void)hideReadMoreLabel;
-(BOOL)descriptiveTextIsTruncated;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIView *)containerView;
-(CGSize)intrinsicContentSize;
-(UILabel *)titleLabel;
-(void)updateConstraints;
@end
