/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:33 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNTableViewCell.h>

@class UILabel, TFNHTMLTextView;

@interface T1CommerceLegalPolicyModuleViewCell : TFNTableViewCell {

	UILabel* _moduleHeader;
	TFNHTMLTextView* _legalTextView;

}

@property (nonatomic,readonly) UILabel * moduleHeader;                       //@synthesize moduleHeader=_moduleHeader - In the implementation block
@property (nonatomic,readonly) TFNHTMLTextView * legalTextView;              //@synthesize legalTextView=_legalTextView - In the implementation block
-(TFNHTMLTextView *)legalTextView;
-(void)_setupHeader;
-(UILabel *)moduleHeader;
-(void)setLegalTextView:(TFNHTMLTextView *)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)intrinsicContentSize;
@end

